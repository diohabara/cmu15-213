# repo

この `repo/` は、15-213 の **lab 作業専用ディレクトリ**。

## Labs

- [[L0/README.md|L0 C Programming Lab]]
- [[L1/README.md|L1 Data Lab]]
- [[L2/README.md|L2 Bomb Lab]]
- [[L3/README.md|L3 Attack Lab]]
- [[L4/README.md|L4 Cache Lab]]
- [[L5/README.md|L5 Malloc Lab]]
- [[L6/README.md|L6 Shell Lab]]
- [[L7/README.md|L7 Proxy Lab]]

## Materials

- `labs/`: prefix 付きの lab writeup PDF (`L0-cprogramminglab.pdf` から `L7-proxylab.pdf`)
- `L0-L7/handout/`: 問題ファイルと作業ディレクトリ
- `L0-L7/README.md`: 問題文を日本語で要約したメモ

## Container

- `just container-build`
- `just container-shell`

Linux 前提の handout を触るための Ubuntu ベース container。`linux/amd64` で build / run する。

## Scope

- この `repo/` には lab を解くのに関係あるものだけ置く
- 個人メモと quiz は `study/`
- lecture02 の可視化や補助コードは `experiments/lecture02/`
