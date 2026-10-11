#!/bin/bash
# exp6: does the condensed IDO-learnings note help Haiku? 100 tried-but-unmatched easy/medium functions (not exp5s).
HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh; CAP=${1:-88}; L=queue/exp6/usage.log
u() { echo "$(date -Is) $1: $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L; }
mkdir -p queue/exp6_learn queue/exp6_plain; cp queue/exp6/functions.txt queue/exp6_learn/; cp queue/exp6/functions.txt queue/exp6_plain/
export NO_INTEGRATE=1 INFILE=1 MODEL=claude-haiku-5-5 NOTE_FILE=retry_note.md FROM_BATCH=exp6_prev RUN_ONE=run_one_from.sh
u start
LEARNINGS=1 tools/swarm/run_batch2.sh exp6_learn 10 "$CAP" > queue/exp6_learn/runner.out 2>&1 &
tools/swarm/run_batch2.sh exp6_plain 10 "$CAP" > queue/exp6_plain/runner.out 2>&1 &
wait; u "both arms done"
unset NO_INTEGRATE
for b in exp6_learn exp6_plain; do .venv/bin/python tools/swarm/integrate.py $b >> queue/exp6/integrate.log 2>&1; done
u integrated; touch queue/exp6/DONE
