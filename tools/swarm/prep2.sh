#!/bin/bash
# prep.sh FUNC SEGMENT WORKDIR: set up a worker directory for one function
set -e
FUNC=$1; SEG=$2; W=$3; HH=${HH_ROOT:-$(cd "$(dirname "$0")/../.." && pwd)}
mkdir -p "$W"
cp "$(find "$HH/asm/nonmatchings/$SEG" -name "$FUNC.s" | head -1)" "$W/target.s"
{ echo '#include "common.h"'; echo; "$HH/.venv/bin/python" "$HH/tools/m2c/m2c.py" "$W/target.s" 2>&1; } > "$W/draft.c" || true
cp "$HH/include/functions.h" "$W/known.h"
# apply confirmed facts to the draft (see include/functions.h)
sed -i -E 's/func_801C0B8C\((0|NULL), /func_801C0B8C(/g; /^[^(]*func_801C0B8C\([^)]*\);/d' "$W/draft.c"
cat > "$W/check" <<EOC
#!/bin/bash
# compile attempt.c and compare $FUNC with the original ROM
n=\$(cat .checks 2>/dev/null || echo 0); n=\$((n+1)); echo \$n > .checks
if [ \$n -gt ${CHECK_LIMIT:-10} ]; then echo "check limit reached (${CHECK_LIMIT:-10}). Stop and report your best result."; exit 2; fi
[ -f attempt.c ] || { echo "write attempt.c first"; exit 2; }
EOC
# DEADLINE_MIN=N: a time budget instead of a small check budget; ./check shows the time left and stops at the deadline
if [ -n "$DEADLINE_MIN" ]; then
  echo $(( $(date +%s) + 60 * DEADLINE_MIN )) > "$W/.deadline"
  cat >> "$W/check" <<'EOC'
left=$(( $(cat .deadline) - $(date +%s) ))
if [ $left -le 0 ]; then echo "Time is up. Stop now and report your best result."; exit 2; fi
echo "(time left: $((left / 60)) min $((left % 60)) s)"
EOC
fi
# HARNESS2=1 (exp10): don't spend checks on repeats or compile errors, and stop runs that have stalled
[ -n "$HARNESS2" ] && cat >> "$W/check" <<'EOC'
echo $(( $(cat .check_calls 2>/dev/null || echo 0) + 1 )) > .check_calls     # every call, counted or not
rm -f .aligned
[ -f .stalled ] && { echo "Stopped: no improvement in 3 checks. Report your best result ($(cat .stalled))."; exit 2; }
for f in .attempts/*.c; do
  [ -f "$f" ] && cmp -s attempt.c "$f" && { echo $((n-1)) > .checks; echo "attempt.c is identical to $f ($(head -1 ${f%.c}.res)). Change something before checking again (this check was not counted)."; exit 2; }
done
EOC
ALIGNED_ARG=""; [ -n "$HARNESS2" ] && ALIGNED_ARG=" --aligned-out .aligned"     # HARNESS2's stall rule uses the aligned score
[ -n "$DIAG" ] && ALIGNED_ARG="$ALIGNED_ARG --diagnose"     # DIAG=1: aligned verdict + frame map after a non-match (tools/hh/diagnose.py)
cat >> "$W/check" <<EOC
"$HH/.venv/bin/python" "$HH/tools/hh/try_func.py" $FUNC attempt.c --seg $SEG -v$ALIGNED_ARG 2>&1 | head -30 | tee .lastcheck
EOC
# REGIONS=1: independent regional feedback on every check, retained with snapshots.
if [ "${REGIONS:-0}" = 1 ]; then
  cat >> "$W/check" <<EOC
rm -f .regions.json
"$HH/.venv/bin/python" "$HH/tools/hh/regions.py" $FUNC $SEG --source attempt.c --json .regions.json 2>&1 | tee -a .lastcheck
EOC
fi
[ -n "$HARNESS2" ] && cat >> "$W/check" <<'EOC'
if head -1 .lastcheck | grep -q '^compile failed'; then
  c=$(( $(cat .compile_errors 2>/dev/null || echo 0) + 1 )); echo $c > .compile_errors
  if [ $c -le 5 ]; then echo $((n-1)) > .checks; echo "(compile errors don't use up a check: $c of 5 free)"; exit 1; fi
fi
EOC
# INFILE=1: a match also has to hold inside the function's real C file, next to its already-matched neighbours
[ -n "$INFILE" ] && cat >> "$W/check" <<EOC
if head -1 .lastcheck | grep -q '^MATCH'; then
  "$HH/.venv/bin/python" "$HH/tools/hh/srcbuild.py" infile $SEG $FUNC \$PWD/attempt.c 2>&1 | head -30 | tee -a .lastcheck
fi
EOC
# every check keeps a snapshot (.attempts/N.c + its first result line), and says which one was best so far
cat >> "$W/check" <<'EOC'
mkdir -p .attempts; cp attempt.c .attempts/$n.c; head -1 .lastcheck > .attempts/$n.res; grep -q '^IN-FILE' .lastcheck && grep '^IN-FILE' .lastcheck | head -1 >> .attempts/$n.res
best=$(for f in .attempts/*.res; do k=${f%.res}; k=${k##*/}; l=$(head -1 $f); case "$l" in MATCH*) s=1000000;; score*) s=$(echo "$l" | sed -n 's/^score \([0-9]*\)\/\([0-9]*\).*/\1 \2/p' | awk '{printf "%d", ($2 ? 1000*$1/$2 : 0)}');; *) s=0;; esac; echo "$s $k"; done | sort -n | tail -1)
[ -n "$best" ] && echo "(attempt $n saved as .attempts/$n.c; best so far: .attempts/${best##* }.c)"
EOC
if [ "${REGIONS:-0}" = 1 ]; then
  cat >> "$W/check" <<'EOC'
[ ! -f .regions.json ] || cp .regions.json .attempts/$n.regions.json
EOC
fi
[ -n "$HARNESS2" ] && cat >> "$W/check" <<'EOC'
# progress = the aligned score (an inserted instruction doesn't zero everything after it); the first attempt that
# reached the best aligned score counts (equal scores are not progress)
[ -f .aligned ] && cp .aligned .attempts/$n.ali || echo 0 > .attempts/$n.ali
bk=$(for f in .attempts/*.ali; do k=${f%.ali}; k=${k##*/}; echo "$(cat $f) $k"; done | sort -k1,1nr -k2,2n | head -1 | cut -d" " -f2)
if [ -n "$bk" ] && [ $((n - bk)) -ge 3 ] && ! head -1 .lastcheck | grep -q '^MATCH'; then
  echo ".attempts/$bk.c" > .stalled
  echo "No improvement in the last 3 checks. Stop now and report your best result (.attempts/$bk.c)."
fi
EOC
chmod +x "$W/check"
"$HH/.venv/bin/python" "$HH/tools/hh/srcbuild.py" context "$SEG" "$FUNC" > "$W/context.h"
sed -i 's/^#include "common.h"/#include "context.h"/' "$W/draft.c"
sed "s/{FUNC}/$FUNC/g; s/at most 10 runs/at most ${CHECK_LIMIT:-10} runs/" "$HH/tools/swarm/worker_prompt2.md" > "$W/prompt.md"
# Query the actual file, including main; a segment-wide allowlist can be stale after a re-split.
"$HH/.venv/bin/python" "$HH/tools/hh/srcbuild.py" switches "$SEG" "$FUNC" >> "$W/prompt.md"
# repair mode: PREVIOUS=path to an earlier attempt
if [ -n "$PREVIOUS" ] && [ -f "$PREVIOUS" ]; then
  sed 's/^#include "common.h"/#include "context.h"/' "$PREVIOUS" > "$W/previous.c"
  cat "$HH/tools/swarm/${NOTE_FILE:-fix_note.md}" >> "$W/prompt.md"
fi
# SIMILAR=1: already-matched look-alike functions as worked examples (tools/hh/similar.py)
if [ -n "$SIMILAR" ]; then "$HH/.venv/bin/python" "$HH/tools/hh/similar.py" "$SEG" "$FUNC" "$W" >> "$W/prompt.md" 2>/dev/null || true; fi
# LEARNINGS=1: condensed IDO habits (tools/swarm/learnings_note.md, docs/IDO_LEARNINGS.md)
if [ -n "$LEARNINGS" ]; then cat "$HH/tools/swarm/learnings_note.md" >> "$W/prompt.md"; fi
# SYMFIX=1 (with WALLNOTE=1): instructions already match, only references differ: a narrow-fix note (tools/swarm/symfix_note.md)
if [ -n "$SYMFIX" ]; then cat "$HH/tools/swarm/symfix_note.md" >> "$W/prompt.md"; fi
# LEAD=1: this session leads Sonnet region workers (tools/swarm/lead_note.md, agents/region-worker.md; 10-30, Arm C)
if [ -n "$LEAD" ]; then mkdir -p "$W/.claude/agents"; cp "$HH/tools/swarm/agents/region-worker.md" "$W/.claude/agents/"; cat "$HH/tools/swarm/lead_note.md" >> "$W/prompt.md"; fi
# PERSIST=1: ask the worker to keep searching systematically instead of stopping early (tools/swarm/persist_note.md, 10-28)
if [ -n "$PERSIST" ]; then cat "$HH/tools/swarm/persist_note.md" >> "$W/prompt.md"; fi
# LEVERS=1: the IDO 7.1 source-shape levers built from this repo's evidence (tools/swarm/ido_levers.md, Sol Task 15)
if [ -n "$LEVERS" ]; then printf '\n## IDO 7.1 levers (what changed codegen in earlier matches here)\n\n' >> "$W/prompt.md"; cat "$HH/tools/swarm/ido_levers.md" >> "$W/prompt.md"; fi
# WALLNOTE=1 (with PREVIOUS): the wall classifier's diagnosis of the previous attempt (tools/hh/wall.py)
if [ -n "$WALLNOTE" ] && [ -n "$PREVIOUS" ] && [ -f "$PREVIOUS" ]; then
  wn=$(cd "$HH" && timeout 180 "$HH/.venv/bin/python" tools/hh/wall.py "$FUNC" --seg "$SEG" --source "$PREVIOUS" 2>/dev/null | head -40)
  [ -n "$wn" ] && printf '\n## Why previous.c does not match yet (automatic diagnosis; fix this wall first)\n\n```\n%s\n```\n' "$wn" >> "$W/prompt.md"
fi
# BIGFUNC=1: skeleton-then-fill method for large functions (with DEADLINE_MIN)
if [ -n "$BIGFUNC" ]; then cat "$HH/tools/swarm/bigfunc_note.md" >> "$W/prompt.md"; fi
if [ "${REGIONS:-0}" = 1 ]; then
  [ -n "$BIGFUNC" ] || cat "$HH/tools/swarm/bigfunc_note.md" >> "$W/prompt.md"
  printf '\n## Fixed target regions (REGIONS=1)\n\n' >> "$W/prompt.md"
  region_args=()
  [ ! -f "$W/previous.c" ] || region_args=(--source "$W/previous.c")
  "$HH/.venv/bin/python" "$HH/tools/hh/regions.py" "$FUNC" "$SEG" "${region_args[@]}" --json "$W/regions.before.json" >> "$W/prompt.md" 2>&1 || true
fi
# GROW=1: show the newest shared learnings (queue/learnings/live.md) and ask for new ones in learnings.txt
if [ -n "$GROW" ]; then
  "$HH/.venv/bin/python" - "$HH" >> "$W/prompt.md" <<'PY'
import sys, os
hh = sys.argv[1]; live = os.path.join(hh, "queue/learnings/live.md")
lines = open(live).read().splitlines()[-60:] if os.path.exists(live) else []
print(open(os.path.join(hh, "tools/swarm/grow_note.md")).read().replace("LEARNINGS_HERE", "\n".join(lines) or "(none yet)"))
PY
fi
# THEORY=1: one hypothesis, one change, per check (tools/swarm/theory_note.md)
THEORY=${THEORY-1}; TWIN=${TWIN-1}     # defaults since exp7/exp8 (set THEORY= / TWIN= to turn off)
if [ -n "$THEORY" ]; then cat "$HH/tools/swarm/theory_note.md" >> "$W/prompt.md"; fi
# TWIN=1: start from an already-matched function whose asm is >= 90 % the same (its C, renamed), if there is one
if [ -n "$TWIN" ] && [ ! -f "$W/previous.c" ]; then
  if "$HH/.venv/bin/python" "$HH/tools/hh/similar.py" "$SEG" "$FUNC" --twin "$W/previous.c" --min 0.9 > /dev/null 2>&1 && [ -s "$W/previous.c" ]; then
    cat "$HH/tools/swarm/twin_note.md" >> "$W/prompt.md"; fi
fi
