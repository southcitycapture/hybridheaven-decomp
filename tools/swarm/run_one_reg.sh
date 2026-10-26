#!/bin/bash
# run_one_reg.sh FUNC SEGMENT: repair a function that is registered (matched/ or matched_rejected/) but does not fit
# its C file in this layout: run_one3.sh with the registered text as previous.c and the fix note.
{ # whole script in one block: bash parses it before running, so editing this file cannot break live runs
FUNC=$1; SEG=$2; HH=${HH_ROOT:-$(cd "$(dirname "$0")/../.." && pwd)}
for p in "$HH/matched/$SEG/$FUNC.c" "$HH/matched_rejected/$SEG/$FUNC.c"; do [ -f "$p" ] && { export PREVIOUS=$p; break; }; done
export NOTE_FILE=${NOTE_FILE:-fix_note.md}
exec "$HH/tools/swarm/run_one3.sh" "$FUNC" "$SEG"
exit; }
