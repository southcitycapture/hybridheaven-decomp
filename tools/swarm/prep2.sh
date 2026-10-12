#!/bin/bash
# prep.sh FUNC SEGMENT WORKDIR: set up a worker directory for one function
set -e
FUNC=$1; SEG=$2; W=$3; HH="$(cd "$(dirname "$0")/../.." && pwd)"
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
# repair mode: PREVIOUS=path to an earlier attempt
if [ -n "$PREVIOUS" ] && [ -f "$PREVIOUS" ]; then
  sed 's/^#include "common.h"/#include "context.h"/' "$PREVIOUS" > "$W/previous.c"
  cat "$HH/tools/swarm/${NOTE_FILE:-fix_note.md}" >> "$W/prompt.md"
fi
# SIMILAR=1: already-matched look-alike functions as worked examples (tools/hh/similar.py)
if [ -n "$SIMILAR" ]; then "$HH/.venv/bin/python" "$HH/tools/hh/similar.py" "$SEG" "$FUNC" "$W" >> "$W/prompt.md" 2>/dev/null || true; fi
# LEARNINGS=1: condensed IDO habits (tools/swarm/learnings_note.md, docs/IDO_LEARNINGS.md)
if [ -n "$LEARNINGS" ]; then cat "$HH/tools/swarm/learnings_note.md" >> "$W/prompt.md"; fi
# THEORY=1: one hypothesis, one change, per check (tools/swarm/theory_note.md)
THEORY=${THEORY-1}; TWIN=${TWIN-1}     # defaults since exp7/exp8 (set THEORY= / TWIN= to turn off)
if [ -n "$THEORY" ]; then cat "$HH/tools/swarm/theory_note.md" >> "$W/prompt.md"; fi
# TWIN=1: start from an already-matched function whose asm is >= 90 % the same (its C, renamed), if there is one
if [ -n "$TWIN" ] && [ ! -f "$W/previous.c" ]; then
  if "$HH/.venv/bin/python" "$HH/tools/hh/similar.py" "$SEG" "$FUNC" --twin "$W/previous.c" --min 0.9 > /dev/null 2>&1 && [ -s "$W/previous.c" ]; then
    cat "$HH/tools/swarm/twin_note.md" >> "$W/prompt.md"; fi
fi
