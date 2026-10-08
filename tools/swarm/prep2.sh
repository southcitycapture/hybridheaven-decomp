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
chmod +x "$W/check"
"$HH/.venv/bin/python" "$HH/tools/hh/srcbuild.py" context "$SEG" "$FUNC" > "$W/context.h"
sed -i 's/^#include "common.h"/#include "context.h"/' "$W/draft.c"
sed "s/{FUNC}/$FUNC/g; s/at most 10 runs/at most ${CHECK_LIMIT:-10} runs/" "$HH/tools/swarm/worker_prompt2.md" > "$W/prompt.md"
# repair mode: PREVIOUS=path to an earlier attempt
if [ -n "$PREVIOUS" ] && [ -f "$PREVIOUS" ]; then
  sed 's/^#include "common.h"/#include "context.h"/' "$PREVIOUS" > "$W/previous.c"
  cat "$HH/tools/swarm/${NOTE_FILE:-fix_note.md}" >> "$W/prompt.md"
fi
