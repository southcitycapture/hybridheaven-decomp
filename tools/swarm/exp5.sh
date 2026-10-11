#!/bin/bash
# exp5: do already-matched look-alike functions (similar/) help Haiku? 100 tried-but-unmatched easy/medium functions
# that have a >= 45% look-alike. Both arms: Haiku, 10 checks, in-file check, from the same previous attempt
# (queue/exp5_prev); only exp5_ref gets similar/. Integrated at the end.
HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh; CAP=${1:-88}; L=queue/exp5/usage.log
u() { echo "$(date -Is) $1: $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L; }
mkdir -p queue/exp5_ref queue/exp5_noref; cp queue/exp5/functions.txt queue/exp5_ref/; cp queue/exp5/functions.txt queue/exp5_noref/
export NO_INTEGRATE=1 INFILE=1 MODEL=claude-haiku-5-5 NOTE_FILE=retry_note.md FROM_BATCH=exp5_prev RUN_ONE=run_one_from.sh
u start
SIMILAR=1 tools/swarm/run_batch2.sh exp5_ref 10 "$CAP" > queue/exp5_ref/runner.out 2>&1 &
tools/swarm/run_batch2.sh exp5_noref 10 "$CAP" > queue/exp5_noref/runner.out 2>&1 &
wait; u "both arms done"
unset NO_INTEGRATE
for b in exp5_ref exp5_noref; do .venv/bin/python tools/swarm/integrate.py $b >> queue/exp5/integrate.log 2>&1; done
u integrated; touch queue/exp5/DONE
