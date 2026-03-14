# L0 C Programming Lab

- 問題文: [L0-cprogramminglab.pdf](../labs/L0-cprogramminglab.pdf)
- 問題ファイル: `handout/`

## 何をする lab か

単方向 linked list ベースの queue を実装する。FIFO と LIFO の両方を正しく扱えて、`NULL` や不正入力でも壊れない実装にする。

## 触るファイル

- `handout/queue.c`
- `handout/queue.h`

## 何をすればよいか

1. `handout/` で `make` を実行してビルドする
2. queue の各操作を `queue.c` / `queue.h` に実装する
3. `make check` で driver を回して確認する
4. 必要なら `./qtest` で個別に挙動を見る

## 見るべきポイント

- メモリ確保と解放が漏れないこと
- 空 queue や `NULL` でも落ちないこと
- 末尾ポインタや要素数など、性能改善用の補助情報を正しく保つこと
