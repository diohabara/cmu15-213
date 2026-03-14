# L3 Attack Lab

- 問題文: [L3-attacklab.pdf](../labs/L3-attacklab.pdf)
- 問題ファイル: `handout/`

## 何をする lab か

`ctarget` では code injection、`rtarget` では ROP を使って、指定された `touch` 関数を呼ばせる攻撃入力を作る。stack layout、calling convention、命令列の理解が必要。

## 触るもの

- `handout/ctarget`
- `handout/rtarget`
- `handout/cookie.txt`
- `handout/farm.c`
- `handout/hex2raw`

## 何をすればよいか

1. `handout/` で `make` を実行して使える補助ターゲットを確認する
2. `make gdb-ctarget` または `make gdb-rtarget` で対象を解析する
3. `cookie.txt` と stack layout を見ながら攻撃文字列を作る
4. テキストで作ったバイト列を `hex2raw` に通して target に食わせる
5. `ctarget` 用と `rtarget` 用で別々に成功ケースを作る

## 見るべきポイント

- `ctarget` は注入コード中心、`rtarget` は gadget 連結中心
- 攻撃文字列に使ってよいアドレスには制約がある
- この handout は self-study 版なので、実行時は `-q` 前提
