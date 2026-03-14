# L5 Malloc Lab

- 問題文: [L5-malloclab.pdf](../labs/L5-malloclab.pdf)
- 問題ファイル: `handout/`

## 何をする lab か

`mm.c` に自前の allocator を実装して、`mm_init`, `mm_malloc`, `mm_free`, `mm_realloc` を正しく高速に動かす。`mdriver` が正しさ、利用率、スループットを評価する。

## 触るファイル

- `handout/mm.c`

## 何をすればよいか

1. `handout/` で `make` を実行する
2. `mm.c` の allocator を段階的に実装する
3. まず `./mdriver -V -f short1-bal.rep` で小さい trace を通す
4. 通るようになったら `./mdriver -V` で全体を確認する
5. 必要なら `mm_check` を作って heap の整合性を自分で検査する

## 見るべきポイント

- 正しさだけでなく space utilization と throughput も重要
- free list や coalescing の整合性確認が重要
- この公開版 handout は古く、`Makefile` が `-m32` 前提
