# How it works: the AI swarm, the tools and the pipeline

The long read behind the [README](../README.md). For the game itself (compiler, compression, file layout) see
[TECHNICAL.md](TECHNICAL.md); for every batch's numbers see [RESULTS.md](../RESULTS.md).

## The workers

Each worker is a headless agent session given **one function**: its assembly, an m2c draft, `context.h`
(declarations already used in that function's source file) and a `./check` command. `./check` compiles the C with IDO
and compares the result with the original, **every instruction and every resolved address**: functions are linked so
that symbol addresses must match too. Workers get a fixed number of checks.

Models used so far:

| Lane | Model | Used for |
|---|---|---|
| Claude | Haiku 5.5 | the first pass over easy functions |
| Claude | Sonnet 5.5 | medium functions, and narrow repair jobs (fit a working function into its file) |
| Claude | Opus 5.5 | hard leftovers, starting from the best earlier attempt |
| ChatGPT | GPT-6.1 Sol | broad passes; costs no Claude usage |
| OpenCode | DeepSeek V4.1 Flash and other free-tier models | broad passes at no cost |

A worker's claim is never trusted. Every result is re-verified independently, then `tools/hh/srcbuild.py` places it in
its real source file, rebuilds the file, checks every function in context, and the full ROM must stay byte-identical.

## The loop

`tools/swarm/loop.py` runs unattended: pick functions, run a batch, integrate verified matches from every lane,
propagate them to identical code elsewhere, repair declarations, rebuild and check the ROM, commit. When a new match
breaks the whole-ROM build (an undefined symbol, a file that overflows its ROM slot after compression, a byte that
differs), it removes only the culprit and keeps the rest of the cycle. Usage is paced against the subscription's
meters: a weekly ramp, and a lower 5-hour cap during working hours.

What to work on next is chosen by `tools/hh/pick.py` (expected matched bytes per unit cost, from the measured success
rate for the function's difficulty, times its size plus the copies a match would unlock), and, late in the project,
by "which strong model hasn't tried this yet".

## Model-free tools

These run without any model calls. Every result passes the same exact check as an AI match.

| Tool | What it does |
|---|---|
| `tools/hh/propagate.py` | Overlays repeat a lot of code. When one copy of a function is matched, its C is copied onto every other copy of the same shape (names, callees, globals and constants mapped instruction by instruction). A large share of the functions in C came from this tool. |
| `tools/hh/reconcile_frozen.py` | Fits a function that matches alone into its real file without disturbing the functions already there (declaration dedup, private aliases for clashing names). 170 functions in one afternoon. |
| `tools/hh/unify.py`, `protofix.py` | Repair declarations that clash between neighbours, and guessed prototypes that contradict the assembly. |
| `tools/hh/addrfix.py` | Rewrites a wrong symbol or offset when every instruction already matches. |
| `tools/swarm/permute.py` | Drives [decomp-permuter](https://github.com/simonlindholm/decomp-permuter) (random C mutations against the real compiler, CPU only) on near misses. |
| `tools/hh/features.py` | Per-function facts read from the asm: loops, jump tables, instructions C can't produce, argument count. |

## Repository layout

| Path | What |
|---|---|
| `src/` | C sources. Unmatched functions are `#pragma GLOBAL_ASM(...)` of locally generated asm |
| `matched/` | registry of every matched function's C, one file per function: the source of truth for `src/` |
| `include/` | `common.h`, and `functions.h` for prototypes confirmed by matching |
| `tools/hh/` | ROM expand/pack, LZ codec, splat config generator, `srcbuild.py`, `try_func.py`, progress report, the model-free tools |
| `tools/swarm/` | the worker harness: prompts, prep, batch runner, loop, permuter driver, experiments |
| `contrib/` | the contributor kit (setup, assigned tasks, worker, submit) |
| `queue/` | function list with difficulty scores, and per-batch results (`results.jsonl`) |
| `progress/report.json` | objdiff progress report |
| `dashboard/` | a small live dashboard (treemap, function map, workers) |

## Per-file rodata (in progress)

Jump tables and float constants are placed per source file in the main segment. The overlays are being moved to the
same layout on a branch; until then workers are asked not to write `switch` statements in overlays.
