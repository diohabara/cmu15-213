FROM docker.io/library/ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

RUN dpkg --add-architecture i386 \
    && apt-get update \
    && apt-get install -y --no-install-recommends \
        bash \
        binutils \
        build-essential \
        ca-certificates \
        clang \
        clang-format \
        curl \
        file \
        g++-multilib \
        gcc-multilib \
        gdb \
        git \
        just \
        libclang-rt-18-dev \
        libc6-dev-i386 \
        make \
        perl \
        python3 \
        python3-pip \
        python3-venv \
        valgrind \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /workspace

CMD ["/bin/bash"]
