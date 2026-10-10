#!/bin/bash
# exp3.sh: tag teams on very-hard functions. Fresh Haiku first; on its misses, Haiku relay + swarm (tagteam.sh) and one
# Sonnet run from the Haiku attempt, side by side. Then integrate exp2 + exp3, reconcile clashes, write reports, commit.
HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh; CAP=${1:-84}
L=queue/exp3/usage.log; u() { echo "$(date -Is) $1: $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L; }
export NO_INTEGRATE=1
u "start"; mkdir -p queue/exp3_a queue/exp3t queue/exp3_s
cp queue/exp3/functions.txt queue/exp3_a/
RUN_ONE=run_one3.sh MODEL=claude-haiku-5-5 tools/swarm/run_batch2.sh exp3_a 15 "$CAP" > queue/exp3_a/runner.out 2>&1
u "after first haiku"
python3 -c "
import json
won={json.loads(l)['func'] for l in open('queue/exp3_a/results.jsonl') if json.loads(l)['verified']=='MATCH'}
t=''.join(l for l in open('queue/exp3/functions.txt') if l.split()[0] not in won)
open('queue/exp3t/functions.txt','w').write(t); open('queue/exp3_s/functions.txt','w').write(t)"
tools/swarm/tagteam.sh exp3t exp3_a 8 "$CAP" &
CHECK_LIMIT=15 NOTE_FILE=escalate_note.md FROM_BATCH=exp3_a RUN_ONE=run_one_from.sh MODEL=claude-sonnet-5-5 \
  tools/swarm/run_batch2.sh exp3_s 6 "$CAP" > queue/exp3_s/runner.out 2>&1
wait
u "after teams + sonnet"
unset NO_INTEGRATE
for b in exp2_r1 exp2_r2 exp2_r3 exp2_n1 exp2_n2 exp2_n3 exp3_a exp3t_r1 exp3t_r2 exp3t_r3 exp3t_n1 exp3t_n2 exp3t_n3 exp3_s; do
  [ -f queue/$b/results.jsonl ] && .venv/bin/python tools/swarm/integrate.py $b >> queue/exp3/integrate.log 2>&1
done
.venv/bin/python tools/hh/reconcile.py reconcile3 > queue/reconcile3.out 2>&1 && .venv/bin/python tools/swarm/integrate.py reconcile3 >> queue/exp3/integrate.log 2>&1
u "integrated"
python3 tools/swarm/exp2_report.py exp2 exp1_b > queue/exp2/REPORT.md
python3 tools/swarm/exp2_report.py exp3t exp3_s > queue/exp3/REPORT.md
tools/hh/refresh_dashboard.sh > /dev/null 2>&1
git add -A > /dev/null 2>&1; git commit -qm "Experiments exp2 (Haiku tag teams, hard) and exp3 (very hard); integrate + reconcile

Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>" > /dev/null 2>&1
touch queue/exp3/DONE
