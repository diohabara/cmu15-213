# L6 Shell Lab

- 問題文: [L6-shlab.pdf](../labs/L6-shlab.pdf)
- 問題ファイル: `handout/`

## 何をする lab か

job control を持つ小さな shell `tsh` を実装する。foreground / background の切り替え、`SIGINT` / `SIGTSTP` / `SIGCHLD` の扱いが中心。

## 触るファイル

- `handout/tsh.c`

## 何をすればよいか

1. `handout/` で `make` を実行する
2. `tsh.c` の未実装部分を埋める
3. `make test01` から順に trace を流して動作を確認する
4. 必要に応じて `make test02` から `make test16` まで進める
5. `tshref` と挙動を見比べて差分を潰す

## 見るべきポイント

- builtin は `quit`, `jobs`, `bg`, `fg`
- signal handler と job list 更新の race を避ける
- `trace*.txt` が回帰テスト、`tshref` が参照実装
