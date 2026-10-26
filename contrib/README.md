# Contributing matches with your own Claude account

You can help decompile Hybrid Heaven from your own machine: HQ (the project maintainers) gives you a set of
functions, your Claude Code workers write C for them, and you send back the C that matches. HQ checks every function
again against its own build before it goes in, so nothing you send can break the ROM.

You need:

- **Your own Hybrid Heaven (USA) cartridge, dumped yourself** with an N64 cartridge dumper. The repository never
  contains the ROM or anything taken from it, and you must not share yours. `.z64`, `.v64` and `.n64` dumps all work.
- Linux or WSL with `python3` (3.10+), `git`, `make`, `curl` and MIPS binutils (`sudo apt install binutils-mips-linux-gnu`).
- [Claude Code](https://docs.claude.com/en/docs/claude-code) (`claude`) logged in with **your own** account. A Pro
  plan works; workers use your plan's normal usage limits.

## 1. Set up

```sh
git clone <public repo URL> hybridheaven-decomp && cd hybridheaven-decomp
mkdir -p baserom && cp /path/to/your/dump.z64 baserom/baserom.us.z64    # .v64/.n64 are converted for you
contrib/setup.sh
```

`setup.sh` installs the decomp tools (IDO compilers, asm-processor, m2c, a Python venv), checks the ROM's SHA-1
(`16dbc21620b52deab5c5abf8a309ac60adfbee85`), generates the assembly locally from your ROM (`make setup`) and builds
the whole game once. It must finish with `build/hybridheaven.z64: OK`. If it prints a `FIX` line, do what it says and
run it again.

## 2. Get an assignment

Tell HQ the name you want to use (letters, digits, `-`, `_`) and which model you'll run. HQ assigns you a block of
functions in [`tasks.json`](tasks.json), sized for that model (smaller, narrower ones for Sonnet or Haiku). Then:

```sh
git pull
```

Your tasks are the entries with `"assigned": "<your name>"`. Nobody else works on them while they're yours.

## 3. Run workers

```sh
contrib/work.sh <your name>                     # one worker at a time, Claude Sonnet 5.5
contrib/work.sh <your name> -j 2                # two at a time
contrib/work.sh <your name> -m claude-haiku-5-5 # cheaper model; claude-opus-5-5 for hard ones
contrib/work.sh <your name> -n 5                # only 5 tasks this time
```

Each worker is a headless Claude Code session in its own folder (`contrib/local/<name>/work/<function>/`) with the
function's assembly, a draft from m2c and a `./check` command that compiles its C with the original compiler and
compares it with your ROM, instruction for instruction. It may only edit files in that folder and run `./check`.
A worker that says it matched is checked again by `work.sh` itself.

Stop any time with Ctrl-C. Running it again skips finished tasks. If you hit your plan's usage limit, `work.sh` stops
after three errors in a row; run it again later and those tasks are retried.

## 4. Send your matches

```sh
contrib/submit.sh <your name>
```

This writes `contrib/out/hh-<name>-<date>.tar.gz`: one C file per matched function plus a small `manifest.json`
(function, model, checks used, tokens, cost). It contains only C your workers wrote, never assembly or ROM data.
Attach it to a pull request or issue, or send the file to HQ. HQ re-verifies every function against its own build,
then integrates it into its real source file and checks that the full ROM still matches. Functions that don't make it
are simply skipped; after HQ's next publish you'll see the outcome in `queue/contrib_<name>_<date>/results.jsonl`.

## Good to know

- Everything under `contrib/local/` and `contrib/out/` stays on your machine (git ignores it).
- `make setup` regenerates a few tracked files (for example `undefined_funcs_auto.txt`); don't commit those.
- The cost printed is the API-equivalent figure Claude Code reports. On a subscription you pay nothing extra; the runs
  count toward your plan's usage.
# Per-file rodata layout

After updating to the rodata switch-over revision, rerun `contrib/setup.sh` before
starting more work. This regenerates local assembly, file boundaries and kept-block
recipes, then verifies the complete ROM. Do not reuse an older `asm/` tree or an old
worker's `context.h` with the new layout. Function identities are `(segment, name)`;
use a fresh worker directory so address reuse in overlays is unambiguous.

`contrib/work.sh` uses the checkout's shared in-file integration check. Jump tables
and `switch` are allowed only where the generated prompt's file-layout policy says
so. A standalone MATCH still needs an IN-FILE MATCH before submission/integration.
