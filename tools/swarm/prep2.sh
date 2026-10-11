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
"$HH/.venv/bin/python" "$HH/tools/hh/try_func.py" $FUNC attempt.c --seg $SEG -v 2>&1 | head -30 | tee .lastcheck
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
