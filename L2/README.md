# L2 Bomb Lab

- 問題文: [L2-bomblab.pdf](../labs/L2-bomblab.pdf)
- 問題ファイル: `handout/`

## 何をする lab か

`bomb` を逆アセンブルや `gdb` で解析して、各 phase を通過する正しい入力文字列を見つける。コードを書くより、解析して答えを特定する lab。

## 触るもの

- `handout/bomb`
- `handout/bomb.c`
- 必要なら自分で `psol.txt` などの解答メモを作る

## 何をすればよいか

1. `handout/` で `make` を実行して使える補助ターゲットを確認する
2. `make gdb` で `bomb` を `gdb` から起動する
3. 必要に応じて `make disasm` で逆アセンブルを `bomb.asm` に出す
4. phase ごとの正しい入力を調べて、まとめて試す
5. 手で打つのが面倒なら `./bomb psol.txt` の形で入力ファイルを使う

## 見るべきポイント

- 総当たりはしない
- 関数呼び出し、分岐、比較対象の文字列や整数列を追う
- この handout は self-study 版で、成績送信や減点連携はない
