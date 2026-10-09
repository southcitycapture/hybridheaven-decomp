# Hybrid Heaven (N64) decompilation

A work-in-progress **matching decompilation** of *Hybrid Heaven* (Konami, 1999, USA release) for the Nintendo 64:
C source that compiles back to a byte-identical copy of the original ROM.

It is also a **research project**: almost all of the C so far was written by a swarm of small AI models
(Claude Haiku 5.5, with Claude Sonnet 5.5 for harder functions), driven by an automated harness that verifies every
function exactly. The point is to measure how far cheap models get on real decompilation work and what it costs.
See [Research results](#research-results).

> **No game data is in this repository.** You need your own legally obtained ROM. The repo contains only original
> C code, tools, configuration and research logs; disassembly is regenerated locally from your ROM.

## Status

[![decomp.dev progress](https://decomp.dev/southcitycapture/hybridheaven-decomp.svg?mode=shield&measure=code&label=Code)](https://decomp.dev/southcitycapture/hybridheaven-decomp)

Live per-segment progress, the function map and worker stats come from the same objdiff report decomp.dev uses
(`progress/report.json`). `make` currently rebuilds a ROM that matches the original SHA-1:

| ROM | SHA-1 |
|---|---|
| Hybrid Heaven (USA) (NHVE, rev 0) | `16dbc21620b52deab5c5abf8a309ac60adfbee85` |

## Building

Requirements: Linux (or WSL), Python 3.10+, git, curl, `make`, and MIPS binutils (`binutils-mips-linux-gnu` on Debian/Ubuntu).

```sh
tools/setup.sh                                # venv, splat, m2c, asm-processor, IDO 5.3/7.1 (static recomp), objdiff
cp /path/to/your/Hybrid\ Heaven\ \(USA\).z64 baserom/baserom.us.z64
. ./env.sh
make setup                                    # decompress the ROM, run splat (regenerates asm/ locally)
make                                          # build, then check the SHA-1
```

`make setup` turns the ROM into `build/expanded.bin` (every compressed file decompressed) and splits it with
[splat](https://github.com/ethteck/splat). `make` compiles the C with IDO 7.1 through
[asm-processor](https://github.com/simonlindholm/asm-processor), links, recompresses every file and checks the hash.

## How the game is put together

The details are in [docs/TECHNICAL.md](docs/TECHNICAL.md). In short:

- **Compiler:** IDO 7.1, `-O2` (`-G 0 -non_shared -Xcpluscomm -mips2`). The game is built on NuSystem; Konami's
  internal project name was `rz011`.
- **Layout:** a ~220 KB uncompressed main segment (game engine + libultra) and a master file table of 624 files.
  91 of them are code overlays (core game, areas, enemies, cutscenes), almost all compressed.
- **Compression:** a Konami LZ variant (LZKN-style). `tools/hh/lzkn.py` decodes it, and `tools/hh/lzkn_enc.py`
  re-encodes **all 482 compressed files byte-for-byte**, including the original encoder's quirks (31-byte literal cap,
  0x3DF window, and a 0x400-byte input-buffer refill rule).
- **Source files:** functions are grouped into the **398 original `.c` files**, recovered from the end-of-file alignment
  padding, under `src/<segment>/<start address>.c`.

## Repository layout

| Path | What |
|---|---|
| `src/` | C sources. Unmatched functions are `#pragma GLOBAL_ASM(...)` of locally generated asm |
| `matched/` | registry of every matched function's C, one file per function: the source of truth for `src/` |
| `include/` | `common.h`, and `functions.h` for prototypes confirmed by matching (e.g. `func_801C0B8C(u64)`) |
| `tools/hh/` | ROM expand/pack, LZ codec, splat config generator, `srcbuild.py`, `try_func.py`, progress report |
| `tools/swarm/` | the AI worker harness: prompts, prep, batch runner, escalation ladder, permuter driver |
| `queue/` | function list with difficulty scores, and per-batch results (`results.jsonl`) and reports |
| `progress/report.json` | objdiff progress report, generated locally (`tools/hh/progress.py`) |
| `dashboard/` | a small live dashboard (treemap, function map, workers), served from the build machine |

## How the AI swarm works

Each worker is a headless Claude Code session given **one function**: its assembly, an m2c draft, `context.h`
(declarations already used in that function's source file) and a `./check` command. `./check` compiles the C with IDO
and compares the result with the original, **every instruction and every resolved address**: functions are linked so
that symbol addresses must match too. Workers get a fixed number of checks (10 for Haiku, 15 for Sonnet).

A worker's claim is never trusted. Every result is re-verified independently, then `tools/hh/srcbuild.py` places it in
its real source file, rebuilds the file, verifies every function in context, and keeps the full ROM byte-identical.

The pipeline for harder functions is an **escalation ladder**:

1. **Haiku** tries first.
2. Near-misses (≥ 80 % of instructions matching) go to **[decomp-permuter](https://github.com/simonlindholm/decomp-permuter)**
   (random C mutations against the real compiler; no model, CPU only).
3. What's left goes to **Sonnet**, starting from Haiku's best attempt.

Confirmed facts flow back to every later worker: shared prototypes in `include/functions.h`, and the declarations of
each source file through `context.h`.

## Research results

The numbers below are generated from the run logs in `queue/*/results.jsonl` (see [RESULTS.md](RESULTS.md) for every
batch). Costs are API-equivalent figures as reported by Claude Code; the runs themselves used a Claude Max subscription,
and the "weekly usage" column is the subscription's own usage meter.

Progress as of 2026-10-09: **11.30% of the code** (2846 of 15890 functions, including duplicates).

**7389 model runs, 4323 verified matches (59%), $105.25 API-equivalent in total (≈ $0.024 per match)**; plus 146 matches from decomp-permuter at no model cost.

Per-batch table: [RESULTS.md](RESULTS.md).

## Credits

Built on the work of the N64 decomp community: [splat](https://github.com/ethteck/splat),
[spimdisasm](https://github.com/Decompollaborate/spimdisasm), [m2c](https://github.com/matt-kempster/m2c),
[asm-processor](https://github.com/simonlindholm/asm-processor), [asm-differ](https://github.com/simonlindholm/asm-differ),
[decomp-permuter](https://github.com/simonlindholm/decomp-permuter), [objdiff](https://github.com/encounter/objdiff),
[decomp.dev](https://decomp.dev), and [ido-static-recomp](https://github.com/decompals/ido-static-recomp).

Hybrid Heaven is © Konami. This project is not affiliated with Konami or Nintendo. Original code in this repository is
released under [CC0 1.0](LICENSE).
