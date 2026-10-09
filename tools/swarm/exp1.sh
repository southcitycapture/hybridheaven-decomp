#!/bin/bash
# exp1.sh [PARALLEL] [WEEKLY_CAP]: four-arm experiment over queue/exp1/functions.txt
#   A  Haiku only (10 checks)                         -> queue/exp1_a
#   C  Sonnet only (15 checks, fresh)                 -> queue/exp1_c
#   P  decomp-permuter on A's near-misses (>= 80%)    -> queue/permute (batches exp1_a)
#   B  Sonnet (15 checks) on A's failures, from A's attempt -> queue/exp1_b
#   D  = A + P wins + B's Sonnet results on what P didn't win (same inputs, so B's runs are reused)
# Nothing integrates until every arm is done, so no arm sees another's matches through context.h.
P=${1:-12}; CAP=${2:-88}; HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh
E=queue/exp1; L=$E/usage.log; mkdir -p queue/exp1_a queue/exp1_b queue/exp1_c
u() { echo "$(date -Is) $1: $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L; }
export NO_INTEGRATE=1
u "start"
cp $E/functions.txt queue/exp1_a/functions.txt
RUN_ONE=run_one3.sh MODEL=claude-haiku-5-5 tools/swarm/run_batch2.sh exp1_a "$P" "$CAP" > queue/exp1_a/runner.out 2>&1
u "after A (haiku)"
cp $E/functions.txt queue/exp1_c/functions.txt
[ -f queue/exp1_a/STOP ] || CHECK_LIMIT=15 RUN_ONE=run_one3.sh MODEL=claude-sonnet-5-5 tools/swarm/run_batch2.sh exp1_c "$P" "$CAP" > queue/exp1_c/runner.out 2>&1
u "after C (sonnet only)"
.venv/bin/python tools/swarm/permute.py --batches exp1_a --min 0.8 --minutes 10 --parallel 10 --jobs 2 > $E/permute.out 2>&1
u "after P (permuter)"
python3 -c "
import json
won={json.loads(l)['func'] for l in open('queue/exp1_a/results.jsonl') if json.loads(l)['verified']=='MATCH'}
open('queue/exp1_b/functions.txt','w').write(''.join(l for l in open('$E/functions.txt') if l.split()[0] not in won))"
[ -f queue/exp1_c/STOP ] || CHECK_LIMIT=15 NOTE_FILE=escalate_note.md FROM_BATCH=exp1_a RUN_ONE=run_one_from.sh MODEL=claude-sonnet-5-5 \
  tools/swarm/run_batch2.sh exp1_b "$P" "$CAP" > queue/exp1_b/runner.out 2>&1
u "after B (haiku->sonnet)"
unset NO_INTEGRATE
for b in exp1_a exp1_c exp1_b permute; do .venv/bin/python tools/swarm/integrate.py $b >> $E/integrate.log 2>&1; done
u "integrated"
python3 tools/swarm/exp1_report.py > $E/REPORT.md 2>> $E/report.err
tools/hh/refresh_dashboard.sh > /dev/null 2>&1
git add -A > /dev/null 2>&1; git commit -qm "Experiment exp1: four arms on 60 hard functions

Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>" > /dev/null 2>&1
touch $E/DONE
