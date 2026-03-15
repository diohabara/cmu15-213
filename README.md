# CMU 15-213 Labs Repo

This repository is a self-contained workspace for the CMU 15-213 labs.
Each lab includes:

- the writeup PDF
- the handout files
- a README with a short summary and working notes

## Getting Started

1. Open the README for the lab you want to work on.
2. Read the corresponding writeup PDF.
3. Work inside that lab's `handout/` directory.
4. Use the container if you want a Linux environment close to the intended setup.

## Labs

| Lab | README | Writeup |
| --- | --- | --- |
| L0 | [L0 C Programming Lab](L0/README.md) | [L0-cprogramminglab.pdf](labs/L0-cprogramminglab.pdf) |
| L1 | [L1 Data Lab](L1/README.md) | [L1-datalab.pdf](labs/L1-datalab.pdf) |
| L2 | [L2 Bomb Lab](L2/README.md) | [L2-bomblab.pdf](labs/L2-bomblab.pdf) |
| L3 | [L3 Attack Lab](L3/README.md) | [L3-attacklab.pdf](labs/L3-attacklab.pdf) |
| L4 | [L4 Cache Lab](L4/README.md) | [L4-cachelab.pdf](labs/L4-cachelab.pdf) |
| L5 | [L5 Malloc Lab](L5/README.md) | [L5-malloclab.pdf](labs/L5-malloclab.pdf) |
| L6 | [L6 Shell Lab](L6/README.md) | [L6-shlab.pdf](labs/L6-shlab.pdf) |
| L7 | [L7 Proxy Lab](L7/README.md) | [L7-proxylab.pdf](labs/L7-proxylab.pdf) |

## Repository Layout

- `L0-L7/README.md`: lab summaries, notes, and suggested workflow
- `L0-L7/handout/`: source files and build/test entry points
- `labs/`: local copies of the lab writeup PDFs

## Container

You can use the container for a Linux-based workflow:

```bash
just container-build
just container-shell
```

After entering the container, for example:

```bash
cd /workspace/L0/handout
make
make check
```

## Notes

- This repository contains only files that are directly useful for solving the labs.
- The per-lab READMEs are the main entry points for day-to-day work.
