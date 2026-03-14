image := "cmu15213-csapp-labs:latest"

default:
    @just --list

container-build:
    podman build --platform linux/amd64 --tag {{image}} --file Containerfile .

container-shell: container-build
    podman run --rm -it --platform linux/amd64 -v "$PWD":/workspace -w /workspace {{image}} bash
