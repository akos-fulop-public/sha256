FROM ubuntu:22.04 as builder

RUN apt update && \
DEBIAN_FRONTEND=noninteractive apt upgrade -y && \
DEBIAN_FRONTEND=noninteractive apt install -y cmake build-essential libgtest-dev

WORKDIR /src

ENTRYPOINT [ "/bin/bash" ]
