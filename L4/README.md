# L4 Cache Lab

- 問題文: [L4-cachelab.pdf](../labs/L4-cachelab.pdf)
- 問題ファイル: `handout/`

## 何をする lab か

2 部構成の lab。

- Part A: `csim.c` に cache simulator を実装する
- Part B: `trans.c` に cache miss の少ない行列転置を実装する

## 触るファイル

- `handout/csim.c`
- `handout/trans.c`

## 何をすればよいか

1. `handout/` で `make` を実行する
2. Part A で `csim-ref` と同じ引数・同じ出力になる `csim.c` を実装する
3. `./test-csim` で simulator の正しさを確認する
4. Part B で `transpose_submit` を最適化する
5. `./test-trans -M 32 -N 32`、`-M 64 -N 64`、`-M 61 -N 67` で確認する
6. 最後に `./driver.py` でまとめて確認する

## 見るべきポイント

- Part A は `I` 行を無視し、`L` / `S` / `M` を正しく扱う
- Part B は局所変数数や配列利用に制約がある
- `traces/` は simulator の入力、`csim-ref` は答え合わせ用
