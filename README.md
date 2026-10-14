# Hybrid Heaven (N64) decompilation

A work-in-progress **matching decompilation** of *Hybrid Heaven* (Konami, 1999, USA release) for the Nintendo 64:
C source that compiles back to a byte-identical copy of the original ROM.

It is also a **research project** on making AI-driven decompilation efficient. A swarm of small AI models
(Claude Haiku 5.5, with Claude Sonnet 5.5 for harder functions) writes the C for new functions, driven by an automated
harness that verifies every function exactly. Around it sits a set of **model-free tools** that multiply each match:
**most of the functions in C were placed automatically**, by copying an AI worker's match onto identical-shape code
elsewhere in the game (current numbers in [Research results](#research-results), generated from the run logs). The point is to measure how far
cheap models plus good tooling get on real decompilation work, and what it costs. See [Research results](#research-results).

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

- **Compiler:** IDO 7.1, `-O2` (`-G 0 -non_shared -Xcpluscomm -mips2`) for the game; libultra 2.0J was built with IDO 5.3. Konami's internal project name was `rz011`.
  The engine sits directly on libultra 2.0J (no NuSystem).
- **Layout:** a ~220 KB uncompressed main segment (game engine + libultra 2.0J) and a master file table of 624 files.
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
| `tools/hh/` | ROM expand/pack, LZ codec, splat config generator, `srcbuild.py`, `try_func.py`, progress report, and the model-free tools below |
| `tools/swarm/` | the AI worker harness: prompts, prep, batch runner, escalation ladder, permuter driver, experiments |
| `queue/` | function list with difficulty scores, and per-batch results (`results.jsonl`) and reports |
| `progress/report.json` | objdiff progress report, generated locally (`tools/hh/progress.py`) |
| `dashboard/` | a small live dashboard (treemap, function map, workers), served from the build machine |

## How the AI swarm works

Each worker is a headless Claude Code session given **one function**: its assembly, an m2c draft, `context.h`
(declarations already used in that function's source file) and a `./check` command. `./check` compiles the C with IDO
and compares the result with the original, **every instruction and every resolved address**: functions are linked so
that symbol addresses must match too. Workers get a fixed number of checks (10 for Haiku, 15 for Sonnet).
An experimental `HARNESS2` mode refuses repeated submissions, doesn't count compile errors, and stops a worker after
three checks without improvement in an alignment-based score (being A/B tested).

A worker's claim is never trusted. Every result is re-verified independently, then `tools/hh/srcbuild.py` places it in
its real source file, rebuilds the file, verifies every function in context, and keeps the full ROM byte-identical.

The pipeline for harder functions is an **escalation ladder**:

1. **Haiku** tries first.
2. Near-misses go to **[decomp-permuter](https://github.com/simonlindholm/decomp-permuter)** (random C mutations
   against the real compiler; no model, CPU only). Candidates are chosen by positional score (≥ 80 %) or by an
   *aligned* score (≥ 95 % after diffing the instruction sequences), because one inserted instruction makes the
   positional score of a nearly right attempt look terrible.
3. What's left goes to **Sonnet**, starting from Haiku's best attempt.

Confirmed facts flow back to every later worker: shared prototypes in `include/functions.h`, and the declarations of
each source file through `context.h`.

What to work on next is chosen by `tools/hh/pick.py`, which ranks unmatched functions by **expected matched bytes
per dollar**: the measured success rate and cost for the function's difficulty (and whether it contains a loop, the
strongest predictor of failure), times its size plus the copies a match would unlock through propagation.

## Model-free tools

These run without any model calls. Every result passes the same exact check as an AI match: the whole source file is
rebuilt, every function in it must still match, and the ROM must stay byte-identical.

| Tool | What it does |
|---|---|
| `tools/hh/propagate.py` | Overlays repeat a lot of code. When one copy of a function is matched, its C is copied onto every other copy of the same shape: the function name, called functions and globals are mapped instruction by instruction, and differing constants are rewritten (per occurrence when one literal means two things). Most of the functions in C came from this tool. |
| `tools/hh/unify.py` | Repairs matches that compile alone but clash in their real file: a neighbour declared a function with a guessed prototype, or a declaration is only made later in the file. Rewrites the declaration file-wide and keeps the change only if every function still matches. |
| `tools/hh/protofix.py` | Finds guessed declarations of still-unmatched functions that contradict the asm (too few arguments, or `void` when callers use the return value) and repairs them, so workers are not handed impossible prototypes. 475 repaired in the first run. |
| `tools/hh/pick.py` | Chooses what to send to AI workers next (expected matched bytes per dollar, measured from all past runs). |
| `tools/hh/features.py` | Per-function facts read from the asm: loops, jump tables, instructions C can't produce, argument count. |
| `tools/swarm/permute.py` | Drives decomp-permuter on near-misses (see above). |

Rodata: jump tables and float constants are placed per source file in the main segment. The overlays are in progress,
so workers are currently asked not to write `switch` statements.

## Research results

The numbers below are generated from the run logs in `queue/*/results.jsonl` (see [RESULTS.md](RESULTS.md) for every
batch). Costs are API-equivalent figures as reported by Claude Code; the runs themselves used a Claude Max subscription,
and the "weekly usage" column is the subscription's own usage meter.

Progress as of 2026-10-14: **34.73% of the code** (12176 of 15833 functions, including duplicates).

**12095 model runs, $964.84 API-equivalent in total** (local and cloud). Of the **12173 functions now in C**, **4433 were matched by AI workers** (≈ $0.218 per function, failures included), **7514 were placed by propagation** (a match copied onto identical-shape code), 141 came from decomp-permuter and 85 from other sources (libultra built from source, early hand work). In the table below, *Matched* counts verified results per batch, so a function matched in several experiments is counted in each.

Per-batch table: [RESULTS.md](RESULTS.md).

## Credits

Built on the work of the N64 decomp community: [splat](https://github.com/ethteck/splat),
[spimdisasm](https://github.com/Decompollaborate/spimdisasm), [m2c](https://github.com/matt-kempster/m2c),
[asm-processor](https://github.com/simonlindholm/asm-processor), [asm-differ](https://github.com/simonlindholm/asm-differ),
[decomp-permuter](https://github.com/simonlindholm/decomp-permuter), [objdiff](https://github.com/encounter/objdiff),
[decomp.dev](https://decomp.dev), and [ido-static-recomp](https://github.com/decompals/ido-static-recomp).

Hybrid Heaven is © Konami. This project is not affiliated with Konami or Nintendo. Original code in this repository is
released under [CC0 1.0](LICENSE).
