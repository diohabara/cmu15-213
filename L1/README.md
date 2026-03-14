# L1 Data Lab

- 問題文: [L1-datalab.pdf](../labs/L1-datalab.pdf)
- 問題ファイル: `handout/`

## 何をする lab か

`bits.c` にある関数を、厳しい演算子制約の中で実装する。ビット演算、two's complement、浮動小数点表現をコードで理解する lab。

## 触るファイル

- `handout/bits.c`

## 何をすればよいか

1. `handout/` で `make` を実行する
2. `bits.c` の各関数を、コメントに書かれた使用可能演算子と最大 op 数を守って実装する
3. `./dlc bits.c` でルール違反がないか確認する
4. `./btest` で正しさを確認する
5. 最後に `perl ./driver.pl` で全体をまとめて確認する

## 見るべきポイント

- 使える演算子は関数ごとに制限される
- 定数や制御構文にも制約がある
- `ishow` と `fshow` は値の表現確認用として便利
