#!/bin/bash
# run_one.sh FUNC SEGMENT [MODEL]: run one worker, record the outcome and token usage
FUNC=$1; SEG=$2; MODEL=${3:-claude-haiku-5-5}; HH="$(cd "$(dirname "$0")/../.." && pwd)"
BATCH=${BATCH:-pilot}; W=$HH/queue/$BATCH/work/$FUNC
rm -rf "$W"; "$HH/tools/swarm/prep.sh" "$FUNC" "$SEG" "$W"
cd "$W"
start=$(date +%s)
claude -p "$(cat prompt.md)" --model "$MODEL" --permission-mode acceptEdits \
  --allowedTools "Read" "Write" "Edit" "Bash(./check)" "Bash(./check:*)" \
  --output-format json > result.json 2> stderr.txt < /dev/null
echo $? > exit.txt
# verify independently: never trust the worker's own claim
if [ -f attempt.c ] && "$HH/.venv/bin/python" "$HH/tools/hh/try_func.py" "$FUNC" attempt.c --seg "$SEG" > verify.txt 2>&1 && grep -q '^MATCH' verify.txt; then
  v=MATCH; else v=FAIL; fi
"$HH/.venv/bin/python" - "$FUNC" "$SEG" "$MODEL" "$v" "$start" <<'PY'
import json, sys, time, os
f, seg, model, verdict, start = sys.argv[1:6]
try: r = json.load(open("result.json"))
except Exception as e: r = {"error": str(e)}
u = r.get("usage", {})
rec = dict(func=f, segment=seg, model=model, verified=verdict,
           claimed=(r.get("result") or "").strip().splitlines()[-1:] or [""],
           checks=int(open(".checks").read()) if os.path.exists(".checks") else 0,
           turns=r.get("num_turns"), seconds=int(time.time()) - int(start),
           input_tokens=u.get("input_tokens"), output_tokens=u.get("output_tokens"),
           cache_read=u.get("cache_read_input_tokens"), cache_write=u.get("cache_creation_input_tokens"),
           cost_usd_equiv=r.get("total_cost_usd"))
rec["claimed"] = rec["claimed"][0]
open(os.path.expanduser("$HH/queue/%s/results.jsonl" % os.environ.get("BATCH", "pilot")), "a").write(json.dumps(rec) + "\n")
print(json.dumps(rec))
PY
