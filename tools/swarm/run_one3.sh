#!/bin/bash
# run_one.sh FUNC SEGMENT [MODEL]: run one worker, record the outcome and token usage
FUNC=$1; SEG=$2; MODEL=${3:-${MODEL:-claude-haiku-5-5}}; HH=${HH_ROOT:-$(cd "$(dirname "$0")/../.." && pwd)}     # HH_ROOT: another checkout (contrib/work.sh)
BATCH=${BATCH:-pilot}; W=$HH/$(python3 "$HH/tools/hh/workdir.py" dir "$BATCH" "$FUNC" "$SEG")
# repair batches: start from the newest earlier attempt of this function
if [ -n "$FIXMODE" ] && [ -z "$PREVIOUS" ]; then
  PREVIOUS=$(ls -t "$HH"/queue/*/work/"$FUNC"@"$SEG"/attempt.c "$HH"/queue/*/work/"$FUNC"/attempt.c 2>/dev/null | grep -v "/queue/$BATCH/" | head -1)
fi
export PREVIOUS
rm -rf "$W"; "$HH/tools/swarm/prep2.sh" "$FUNC" "$SEG" "$W"
cd "$W"
start=$(date +%s)
claude -p "$(cat prompt.md)" --model "$MODEL" --permission-mode acceptEdits $WORKER_FLAGS \
  --allowedTools "Read" "Write" "Edit" "Bash(./check)" "Bash(./check:*)" ${LEAD:+"Agent" "Bash"} \
  --output-format json > result.json 2> stderr.txt < /dev/null
echo $? > exit.txt
# API trouble (rate limit, overload, auth) is not a failed match: record ERROR so the runner retries it
api_err=0
if [ ! -s result.json ] || grep -qiE '"is_error": *true|rate.?limit|overloaded|429|5[0-9][0-9] |API Error' result.json stderr.txt 2>/dev/null; then
  checks_used=$(cat .check_calls 2>/dev/null || cat .checks 2>/dev/null || echo 0)   # HARNESS2 doesn't count every call
  [ "$checks_used" -eq 0 ] && api_err=1
fi
# verify independently: never trust the worker's own claim
if [ "$api_err" = 1 ]; then v=ERROR
elif [ -f attempt.c ] && "$HH/.venv/bin/python" "$HH/tools/hh/try_func.py" "$FUNC" attempt.c --seg "$SEG" > verify.txt 2>&1 && grep -q '^MATCH' verify.txt; then
  v=MATCH
# in-file match (11-17: Opus matched the 10 KB giant func_801BF1C0 in file while the standalone link misplaced its
# readonly; this runner lacked the fallback run_one_oc/run_one_pi got on 11-12)
elif [ -n "$INFILE" ] && [ -f attempt.c ] && "$HH/.venv/bin/python" "$HH/tools/hh/srcbuild.py" infile "$SEG" "$FUNC" "$PWD/attempt.c" 2>/dev/null | grep -q '^IN-FILE MATCH'; then
  v=MATCH; echo "in-file match" > recovered.txt
else v=FAIL; fi
# keep-best: a snapshot that matched counts even if the worker edited attempt.c afterwards (exact re-check here)
if [ "$v" = FAIL ] && [ -d .attempts ]; then
  for r in $(grep -l '^MATCH' .attempts/*.res 2>/dev/null | sort -t/ -k2 -n -r); do
    c=${r%.res}.c
    if "$HH/.venv/bin/python" "$HH/tools/hh/try_func.py" "$FUNC" "$c" --seg "$SEG" 2>/dev/null | grep -q '^MATCH'; then
      if [ -z "$INFILE" ] || "$HH/.venv/bin/python" "$HH/tools/hh/srcbuild.py" infile "$SEG" "$FUNC" "$PWD/$c" > /dev/null 2>&1; then
        cp attempt.c attempt.final.c 2>/dev/null; cp "$c" attempt.c; v=MATCH; echo "matched in snapshot $c" > recovered.txt; break; fi
    fi
  done
fi
# HONEST=1 (honest-C repair, 11-19): a match counts only if the source passes the hard rules (tools/hh/rule_check.py);
# otherwise the newest matching snapshot that does, else FAIL (the starting copy itself matches, tricks and all)
honest_ok() { "$HH/.venv/bin/python" - "$1" "$FUNC" <<'PYEOF'
import re, sys, os
sys.path.insert(0, os.environ["HH"] + "/tools/hh"); import rule_check as RC
t = open(sys.argv[1]).read(); fn = sys.argv[2]
m = re.search(r'(?m)^[^\n;#]*\b%s\s*\([^;{]*\)\s*\{' % re.escape(fn), t)
if not m: sys.exit(1)
i, d = m.end(), 1
while i < len(t) and d: d += (t[i] == '{') - (t[i] == '}'); i += 1
sys.exit(1 if [h for h in RC.hits("", whole_body=t[m.end():i - 1]) if h[1] == "hard"] else 0)
PYEOF
}
if [ -n "$HONEST" ] && [ "$v" = MATCH ] && ! HH=$HH honest_ok attempt.c; then
  v=FAIL; echo "match keeps a flagged trick" > honest.txt
  for r in $(grep -l '^MATCH' .attempts/*.res 2>/dev/null | sort -t/ -k2 -n -r); do
    c=${r%.res}.c
    HH=$HH honest_ok "$c" || continue
    "$HH/.venv/bin/python" "$HH/tools/hh/try_func.py" "$FUNC" "$c" --seg "$SEG" 2>/dev/null | grep -q '^MATCH' || continue
    "$HH/.venv/bin/python" "$HH/tools/hh/srcbuild.py" infile "$SEG" "$FUNC" "$PWD/$c" > /dev/null 2>&1 || continue
    cp attempt.c attempt.final.c 2>/dev/null; cp "$c" attempt.c; v=MATCH; echo "honest match in snapshot $c" > honest.txt; break
  done
fi
[ "$v" = ERROR ] && sleep 30   # back off before the next launch
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
rec["start_ts"] = time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime(int(start))); rec["ts"] = time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime())   # 11-25: exact times for the research report
open(os.path.join(os.environ.get("HH_ROOT") or os.path.expanduser("$HH"), "queue/%s/results.jsonl" % os.environ.get("BATCH", "pilot")), "a").write(json.dumps(rec) + "\n")
print(json.dumps(rec))
PY
# GROW=1: the worker's general IDO findings join the shared learnings (newest last; prep2 shows the last 60 lines)
if [ -n "$GROW" ] && [ -s "$W/learnings.txt" ]; then
  mkdir -p "$HH/queue/learnings"
  ( flock 9; grep -v '^\s*$' "$W/learnings.txt" | head -3 | cut -c1-300 | sed "s/^[-* ]*/- ($FUNC, $v) /" >> "$HH/queue/learnings/live.md" ) 9>"$HH/queue/learnings/.lock"
fi
