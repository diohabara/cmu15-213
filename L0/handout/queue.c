/**
 * @file queue.c
 * @brief Implementation of a queue that supports FIFO and LIFO operations.
 *
 * This queue implementation uses a singly-linked list to represent the
 * queue elements. Each queue element stores a string value.
 *
 * Assignment for basic C skills diagnostic.
 * Developed for courses 15-213/18-213/15-513 by R. E. Bryant, 2017
 * Extended to store strings, 2018
 *
 * TODO: fill in your name and Andrew ID
 * @author diohabara
 */

#include "queue.h"
#include "harness.h"

#include <stdlib.h>
#include <string.h>

/**
 * @brief Allocates a new queue
 * @return The new queue, or NULL if memory allocation failed
 */
queue_t *queue_new(void) {
    queue_t *q = malloc(sizeof(queue_t));
    /* What if malloc returned NULL? */
    if (q == NULL) {
        return NULL;
    }
    q->head = NULL;
    q->tail = NULL;
    q->size = 0;
    return q;
}

/**
 * @brief Frees all memory used by a queue
 * @param[in] q The queue to free
 */
void queue_free(queue_t *q) {
    if (q == NULL) {
        return;
    }

    list_ele_t* cur = q->head;
    while (cur != NULL) {
        list_ele_t* tmp = cur->next;
        free(cur->value);
        free(cur);
        cur = tmp;
    }
    free(q);
}

/**
 * @brief Attempts to insert an element at head of a queue
 *
 * This function explicitly allocates space to create a copy of `s`.
 * The inserted element points to a copy of `s`, instead of `s` itself.
 *
 * @param[in] q The queue to insert into
 * @param[in] s String to be copied and inserted into the queue
 *
 * @return true if insertion was successful
 * @return false if q is NULL, or memory allocation failed
 */
bool queue_insert_head(queue_t *q, const char *s) {
    if (q == NULL || s == NULL) {
        return false;
    }

    list_ele_t *newh = malloc(sizeof(*newh));
    if (newh == NULL) {
        return false;
    }

    newh->value = malloc(strlen(s) + 1);
    if (newh->value == NULL) {
        free(newh);
        return false;
    }

    strcpy(newh->value, s);
    newh->next = q->head;
    q->head = newh;
    if (q->tail == NULL) {
        q->tail = newh;
    }
    q->size++;
    return true;
}

/**
 * @brief Attempts to insert an element at tail of a queue
 *
 * This function explicitly allocates space to create a copy of `s`.
 * The inserted element points to a copy of `s`, instead of `s` itself.
 *
 * @param[in] q The queue to insert into
 * @param[in] s String to be copied and inserted into the queue
 *
 * @return true if insertion was successful
 * @return false if q is NULL, or memory allocation failed
 */
bool queue_insert_tail(queue_t *q, const char *s) {
    if (q == NULL || s == NULL) {
        return false;
    }

    list_ele_t *new_tail = malloc(sizeof(*new_tail));
    if (new_tail == NULL) {
        return false;
    }

    new_tail->value = malloc(strlen(s) + 1);
    if (new_tail->value == NULL) {
        free(new_tail);
        return false;
    }

    strcpy(new_tail->value, s);
    new_tail->next = NULL;

    if (q->tail == NULL) {
        q->head = new_tail;
    } else {
        q->tail->next = new_tail;
    }
    q->tail = new_tail;
    q->size++;
    return true;
}

/**
 * @brief Attempts to remove an element from head of a queue
 *
 * If removal succeeds, this function frees all memory used by the
 * removed list element and its string value before returning.
 *
 * If removal succeeds and `buf` is non-NULL, this function copies up to
 * `bufsize - 1` characters from the removed string into `buf`, and writes
 * a null terminator '\0' after the copied string.
 *
 * @param[in]  q       The queue to remove from
 * @param[out] buf     Output buffer to write a string value into
 * @param[in]  bufsize Size of the buffer `buf` points to
 *
 * @return true if removal succeeded
 * @return false if q is NULL or empty
 */
bool queue_remove_head(queue_t *q, char *buf, size_t bufsize) {
    if (q == NULL || q->head == NULL) {
        return false;
    }

    list_ele_t *head = q->head;
    if (buf != NULL && bufsize > 0) {
        size_t copy_len = strlen(head->value);
        if (copy_len >= bufsize) {
            copy_len = bufsize - 1;
        }
        memcpy(buf, head->value, copy_len);
        buf[copy_len] = '\0';
    }

    q->head = head->next;
    if (q->head == NULL) {
        q->tail = NULL;
    }
    q->size--;
    free(head->value);
    free(head);
    return true;
}

/**
 * @brief Returns the number of elements in a queue
 *
 * This function runs in O(1) time.
 *
 * @param[in] q The queue to examine
 *
 * @return the number of elements in the queue, or
 *         0 if q is NULL or empty
 */
size_t queue_size(queue_t *q) {
    /* You need to write the code for this function */
    /* Remember: It should operate in O(1) time */
    if (q) {
        return q->size;
    }
    return 0;
}

/**
 * @brief Reverse the elements in a queue
 *
 * This function does not allocate or free any list elements, i.e. it does
 * not call malloc or free, including inside helper functions. Instead, it
 * rearranges the existing elements of the queue.
 *
 * @param[in] q The queue to reverse
 */
void queue_reverse(queue_t *q) {
    if (q == NULL || q->head == NULL) {
        return;
    }

    list_ele_t* prev = NULL;
    list_ele_t* cur = q->head;
    q->tail = cur;
    while (cur != NULL) {
        list_ele_t* next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    q->head = prev;
}
