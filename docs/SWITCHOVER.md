# Per-file rodata switch-over

This is an operator runbook. **The switch has not been performed.** The prepared
branch in this checkout is `sol-rodata` (the rodata2 line). **Claude runs the live
commands on `~/work/hybrid-heaven-decomp`.** The loop is launched by cron under
`flock` on `queue/loop/run.lock`; restart means releasing that lock for cron.

Task 11 merges master cycle 63 (`22233be2a0`) and exactly `2826fbba28` from
`sol-datareport` (Tasks 5/7). Later data-report commits are outside this candidate.
Zach approved exactly two missing master C identities: `file028/func_801F8008`
and `file028/func_801FC490`. Their blockers remain in `queue/merge_gap.jsonl`.
Use the final `sol-rodata` tip recorded by Task 11 in `SOL_REPORT.md`, and rerun
the check against the paused live master. It must exit zero and print `PASS`.

## What the check does

```sh
. ./env.sh
tools/hh/switch_check.sh --rodata sol-rodata --master master \
  --allow-missing file028:func_801F8008,file028:func_801FC490 --keep
```

Run in the rodata checkout with the usual ROM and installed tools available. It
checks **committed revisions**, not local edits. It creates an independent Git
repository and a `switch-check` branch under `build/switch-check-*/checkout`.
Git alternates read the calling repository's objects; there is no network access,
worktree command, or ref update in the calling repository. ROM/tool symlinks are
inputs only; assembly, assets, objects, merge state and build outputs are private.

The temporary branch merges the snapshotted master, restores the rodata baseline's
frozen source, regenerates the split assembly and kept-block recipes, creates the
library stubs, and calls `merge_rodata.py --apply`. Conflicts in generated source
are regenerated; registry/tool conflicts fail with their paths for review.
Concurrent generated dashboard-history appends retain both branches' points.
It runs `tools/hh/test_*.py`, rebuilds the ROM, and independently checks its SHA-1.
It prints before/master/merged C counts, lost identities and every remaining gap.
`PASS` requires all of:

- ROM build succeeds and prints `build/hybridheaven.z64: OK`;
- ROM SHA-1 is `16dbc21620b52deab5c5abf8a309ac60adfbee85`;
- merged C count is at least master's, using `merge_rodata.py`'s original
  `(segment, function)` identities, including C library units and empty C stubs;
- zero identities lost from rodata; missing master identities must be a subset
  of the explicitly supplied allow-list (no wildcards). Without the option,
  zero missing master identities are required. An allowed function repaired
  later need not remain missing;
- all tests pass, and master has not advanced during the check.

The JSON records `allow_missing` and `unexpected_missing` separately from the
unfiltered audit. The option never waives lost rodata identities, ROM, tests,
aggregate count, or the moving-master gate.

The result is `build/switch_check.json`; the log and failed checkout are retained.
`--keep` also retains a passing checkout. This is a rehearsal, not a branch to
promote: master-only additions found here must also be reconciled and committed
on the real candidate before the fast-forward.

## 1. Pause and stop the live loop

Run these commands as Claude in the **live loop checkout**, in one maintenance
shell. Keep the lock file descriptors open until the restart step. All paths in
the following steps are relative to this checkout unless stated otherwise.

```sh
cd "$HOME/work/hybrid-heaven-decomp"
ROOT=$(git rev-parse --show-toplevel)
test "$ROOT" = "$HOME/work/hybrid-heaven-decomp"
test "$(git branch --show-current)" = master
. ./env.sh
RODATA=$(git rev-parse sol-rodata)
ALLOW_MISSING=file028:func_801F8008,file028:func_801FC490
touch queue/loop/PAUSE
exec 9>queue/loop/cycle.lock
flock 9
pgrep -af 'python.*tools/swarm/loop.py' || true
```

Acquiring descriptor 9 proves the current cycle has finished. Terminate only
loop processes whose verified working directory is this live checkout:

```sh
for pid in $(pgrep -f 'python.*tools/swarm/loop.py'); do
  if [ "$(readlink "/proc/$pid/cwd")" = "$ROOT" ]; then
    kill -TERM "$pid"
  fi
done
exec 8>queue/loop/run.lock
flock 8
```

The working directory must equal `$ROOT`. Descriptor 8 prevents cron from
restarting the loop during maintenance. Check `pgrep -af
'tools/swarm/(permute.py|run_batch|integrate.py)'` as well: let any independent
lane finish, or stop its verified processes before regenerating assembly. Stop
other scheduled integration/publish jobs for this checkout for the same interval.
Do not reuse a sleeping Python loop: restart it to reload the new tools/modules.

```sh
git status --short
mkdir -p build
git rev-parse master > build/switchover-old-master
git rev-parse "$RODATA" > build/switchover-new-master
git log -5 --oneline master
```

Verify there are no pending source/registry edits; preserve any unfinished work
before continuing. Keep `queue/loop/PAUSE` present throughout maintenance.

## 2. Bring the candidate up to the paused master

First check ancestry in the stopped live checkout:

```sh
git merge-base --is-ancestor master "$RODATA"
```

For Task 11's snapshotted master this succeeds: both requested merges are real
non-fast-forward merge commits. If live master has advanced, keep the live shell
and locks open. In the existing **candidate checkout `~/work/hh-sol2` on
`sol-rodata`**, reconcile that newer master before proceeding (do not attempt to
check out a branch already held by another checkout):

```sh
cd "$HOME/work/hh-sol2"
test "$(git branch --show-current)" = sol-rodata
. ./env.sh
BEFORE=$(git rev-parse HEAD)
git merge --no-ff --no-commit master
```

If master is already an ancestor, Git reports that it is up to date. Otherwise
review all conflicts. Keep the per-file layout (`file_splits.json`, rodata split
metadata and YAML generator), merge registry/tool fixes, and retain the frozen
rodata source as the starting point. Preserve any new library entries/stubs.
Use the Task 2 reconciliation path rather than replacing frozen files wholesale:

```sh
make setup
.venv/bin/python tools/hh/gen_libultra.py --stubs
.venv/bin/python tools/hh/merge_rodata.py --apply --before "$BEFORE" --master master
.venv/bin/python tools/hh/gen_blocks.py --annotate
.venv/bin/python tools/hh/gen_blocks.py
.venv/bin/python -m unittest discover -s tools/hh -p 'test_*.py'
make -j8
git diff --check
git status --short
git diff
git log --oneline -10
```

Verify `lost_before` is empty and `missing_master` contains no identity beyond
the two approved file028 gaps in `build/merge_rodata_audit.json`, and the ROM says
OK. Stage only reviewed files and
commit the reconciliation (including the merge, if one was needed). No rejection
may be repaired by moving an existing C identity back to ASM.

## 3. Rehearse, then fast-forward master

```sh
cd "$HOME/work/hybrid-heaven-decomp"
RODATA=$(git rev-parse sol-rodata)
git rev-parse "$RODATA" > build/switchover-new-master
# Use the candidate's checker even while the live checkout still has old tools.
mkdir -p build/switchover-tools
git show "$RODATA:tools/hh/switch_check.py" > build/switchover-tools/switch_check.py
.venv/bin/python build/switchover-tools/switch_check.py --rodata "$RODATA" --master master \
  --allow-missing "$ALLOW_MISSING" --keep
.venv/bin/python -c 'import json, subprocess; r=json.load(open("build/switch_check.json")); rev=lambda x: subprocess.check_output(["git","rev-parse",x],text=True).strip(); assert r["passed"] and not r["unexpected_missing"]; assert r["rodata_ref"] == rev("sol-rodata") and r["master_ref"] == rev("master"); print(r["rodata_ref"], r["master_ref"], r["audit"]["after"])'
git merge-base --is-ancestor master "$RODATA"
```

Verify the successful check's revisions still equal `git rev-parse "$RODATA"`
and `git rev-parse master`. The ancestry check must succeed: if the temporary
merge was needed, finish step 2 on the candidate and check again first.

```sh
git switch master
git merge --ff-only "$RODATA"
test "$(git rev-parse HEAD)" = "$RODATA"
. ./env.sh
make clean
make setup
.venv/bin/python tools/hh/gen_libultra.py --stubs
.venv/bin/python tools/hh/gen_blocks.py
make -j8
sha1sum build/hybridheaven.z64
.venv/bin/python tools/hh/progress.py
.venv/bin/python tools/hh/dashboard_data.py
```

`make clean` removes the previous layout's compiled ASM/C/assets and ROM/link
outputs. `make setup` expands the original ROM, regenerates YAML/linker inputs,
removes/re-splits `asm/`, and recreates padding and kept-block recipes (including
`build/lr/`). The stubs/rules step enables all 63 libultra units; the build
regenerates external/library symbol maps. No copied ASM or old `build/` products
are required. The fresh-clone path, with ROM and installed tools already present,
is `. ./env.sh; make setup; .venv/bin/python tools/hh/gen_libultra.py --stubs;
make -j8; .venv/bin/python tools/hh/progress.py` (run each command in order).

Require `build/hybridheaven.z64: OK` and SHA-1
`16dbc21620b52deab5c5abf8a309ac60adfbee85`. Task 11's candidate report is
68.723% code, 14,882/15,891 matched functions, 100,404 fully-linked code bytes,
118/536 complete units, and 117,436/1,065,936 C-produced data bytes. See the
Task 11 report for the exact clean-check revision and master comparison.

Verify HEAD equals the checked candidate, the full ROM is OK, and
`git diff -- src matched tools/hh/file_splits.json tools/hh/rodata_splits.json`
has no unexpected changes. Regenerated `undefined_*_auto.txt` changes must be
reviewed, not confused with loss of C functions.

## 4. First-cycle checks and restart

Before restarting, exercise the model-free paths on the frozen source:

```sh
.venv/bin/python tools/hh/merge_rodata.py --before "$RODATA" --master master
.venv/bin/python tools/hh/srcbuild.py all
make -j8
.venv/bin/python tools/hh/merge_rodata.py --before "$RODATA" --master master
.venv/bin/python tools/hh/progress.py
.venv/bin/python tools/hh/dashboard_data.py
```

Verify zero lost identities before/after `srcbuild all`, no moved registry
entries, ROM OK, and fresh `build/progress/{report,code-audit,data-audit}.json`.
The data report must exclude ASM placeholders and include linked standalone data;
dashboard data and fully-linked tiles must use those same totals. Readonly-prefix
C arrays are compiler-produced data; retained ASM data is not credited as C.

Inspect a fresh prompt without launching a model:

```sh
HH_ROOT="$ROOT" INFILE=1 tools/swarm/prep2.sh func_8038BEF8 file100 "$ROOT/build/switchover-worker"
cat build/switchover-worker/prompt.md
bash -n build/switchover-worker/check
```

Verify the prompt permits `switch` for this linked file, uses the current context,
and the check runs the shared in-file gate after standalone MATCH. Also check a
file without per-file rodata: its generated policy must prohibit jump tables.

Keep the existing weekly-cap policy: integration-only until **2026-10-26 23:00Z**,
then normal batches subject to the configured usage caps. Do not change the live
budget/config just to force a test cycle. To restart:

```sh
rm queue/loop/PAUSE
flock -u 9
flock -u 8
```

The existing cron launcher acquires `run.lock` and starts a fresh process. Verify
its PID/CWD and `queue/loop/status.md`. Watch the first completed cycle's ROM
result, `state.json`'s `functions_in_c` pair (nondecreasing), registry preservation,
and commit. On any loss or ROM failure, pause and use rollback below. Before the
first public publish, confirm `config.json`'s `public_dir` and the external public
template are correct, regenerate the progress report, then run
`tools/publish.sh "$PUBLIC_DIR"` and inspect its scan/result. Publishing is a
separate operator action, not part of `switch_check`.

## 5. Rollback

Pause, wait for `cycle.lock`, stop the verified loop PID and hold `run.lock` as in
step 1. Preserve any new worker results and inspect local changes first. Then:

```sh
OLD_MASTER=$(< build/switchover-old-master)
git switch master
git log --oneline "$OLD_MASTER"..HEAD
git status --short
git reset --hard "$OLD_MASTER"
. ./env.sh
make clean
make setup
.venv/bin/python tools/hh/gen_libultra.py --stubs
make -j8
.venv/bin/python tools/hh/progress.py
.venv/bin/python tools/hh/dashboard_data.py
```

Verify HEAD is exactly the saved revision and the old layout reproduces the ROM.
The candidate branch remains available for repair. Restart the old loop using
step 4's unlock/unpause commands only after the rollback build and report pass.
If public output was published, regenerate it from the restored revision using
the operator's existing publication workflow. Do not force-push as part of this
runbook.

## Layout audit and deployment follow-ups

| Path / component | Prepared behavior |
|---|---|
| `srcbuild.py`, `try_func.py`, `reconcile_frozen.py` | Current file lookup and exact linked text/rodata verification; frozen C preserved. Repair tools now use the same integration gate. |
| `propagate.py`, `unify.py`, `protofix.py`, `reconcile.py` | Preserve actual C neighbours rather than treating every registry entry as C; reconcile already uses `infile_check`. Layout/gate changes invalidate source-builder and propagation failure memos. |
| `tools/swarm/{prep,prep2}.sh`, worker prompts | Checkout-relative paths and per-file jump-table policy, including main. Existing saved prompts must be regenerated. |
| `tools/swarm/loop.py` | Current reporting output plus an actual-C identity guard, in addition to registry preservation; pause rechecked after acquiring the cycle lock. |
| `progress.py`, `progress_code.py`, `progress_data.py` | Master's Task 3 work merged: YAML units, rebuilt comparison inputs, C-only data provenance and fully-linked measures. |
| Dashboard | Reads current units from the report; exposes C-produced data and fully-linked units/code, retaining those measures in history. Old history keeps its original denominators. |
| `contrib/` | Setup regenerates local ASM and verifies the ROM; work/check paths inherit the active layout. Upgrade instructions require fresh snapshots/contexts. |
| `publish.sh` | Publishes the layout-aware HH/swarm tools and split metadata, the link blocklist, merge-gap inventory, current report and this runbook; retained data lives in C/source recipes, not shipped ASM. |

Deployment-only follow-ups: restart the actual live processes; refresh saved
worker directories, contributor clones and submissions; inspect the external
public template (applied after the publish whitelist and potentially overwriting
tools), public checkout and scheduled jobs; review the first live cycle and
publish. Those installations are outside this task's checkout and were not
modified or contacted here.
