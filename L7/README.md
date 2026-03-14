# L7 Proxy Lab

- 問題文: [L7-proxylab.pdf](../labs/L7-proxylab.pdf)
- 問題ファイル: `handout/`

## 何をする lab か

HTTP/1.0 GET を扱う Web proxy を作る。最初に sequential proxy を動かし、その後 concurrency と caching を足す。

## 触るファイル

- `handout/proxy.c`
- 必要なら `handout/csapp.c`

## 何をすればよいか

1. `handout/` で `make` を実行する
2. `proxy.c` にリクエスト受信、サーバ転送、レスポンス返却を実装する
3. `make -C tiny` でローカルの検証用サーバをビルドする
4. `./driver.sh` で基本動作を確認する
5. その後、並行処理と cache を追加して取りこぼしを埋める

## 見るべきポイント

- browser からは HTTP/1.1 が来ても、proxy からは HTTP/1.0 で転送する
- `Host`, `User-Agent`, `Connection`, `Proxy-Connection` を正しく扱う
- `tiny/` はローカル検証用の小さい Web server
