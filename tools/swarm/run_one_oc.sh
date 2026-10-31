#!/bin/bash
# run_one_oc.sh FUNC SEGMENT [MODEL]: run one non-Claude worker (same prep, check and verification as run_one3.sh).
# MODEL opencode/*, openrouter/*, openai/*: OpenCode; the worker may only edit files in its directory and run ./check
# (~/.oc/config/opencode/opencode.json). MODEL codex/<slug>: OpenAI's Codex CLI on the ChatGPT sign-in in ~/.cx,
# sandbox workspace-write (writes only in its directory and /tmp, no network).
{ # whole script in one block: bash parses it before running, so editing this file cannot break live runs
FUNC=$1; SEG=$2; MODEL=${3:-${OC_MODEL:-opencode/deepseek-v4.1-flash-free}}; HH="$(cd "$(dirname "$0")/../.." && pwd)"
export XDG_CONFIG_HOME=$HOME/.oc/config
# opencode (a Bun binary) unpacks a 5.4 MB library into $TMPDIR on every run and never deletes it: give each run its own
# temp dir and remove it at exit (917 of them filled the disk by 2026-10-18)
export TMPDIR=$HOME/.oc/tmp/run.$$; mkdir -p "$TMPDIR"; trap 'rm -rf "$TMPDIR"' EXIT
# each provider has its own free quota, so its own cooldown file. OpenRouter: key from ~/.oc/openrouter.key and
# only :free models (the key has no credits, but never risk a paid model)
CD=$HOME/.oc/COOLDOWN
case $MODEL in openrouter/*)
  case $MODEL in *:free) ;; *) echo "refusing non-free OpenRouter model $MODEL" >&2; exit 2;; esac
  OPENROUTER_API_KEY=$(tr -d '\n\r ' < "$HOME/.oc/openrouter.key"); export OPENROUTER_API_KEY; CD=$HOME/.oc/COOLDOWN.or-$(echo "${MODEL#openrouter/}" | tr '/:' '__')  # free models are rate-limited upstream per model
  # opencode's title helper ("small model") would otherwise pick a paid OpenRouter model: pin it to this free one
  OPENCODE_CONFIG_CONTENT=$(printf '{"small_model":"%s"}' "$MODEL"); export OPENCODE_CONFIG_CONTENT;;
strata/*)   # the workstation's local model (Strata, OpenAI-compatible, 128K context; 10-28): free, one GPU, its own cooldown
  CD=$HOME/.oc/COOLDOWN.strata; STRATA_API_KEY=$(tr -d '\n\r ' < "$HOME/.oc/strata.key"); export STRATA_API_KEY
  OPENCODE_CONFIG_CONTENT=$(printf '{"provider":{"strata":{"npm":"@ai-sdk/openai-compatible","name":"Strata (workstation)","options":{"baseURL":"%s","apiKey":"{env:STRATA_API_KEY}"},"models":{"%s":{"name":"%s","limit":{"context":131072,"output":16384}}}}},"small_model":"%s"}' "${STRATA_URL:-$(cat "$HOME/.oc/strata.url")}" "${MODEL#strata/}" "${MODEL#strata/}" "$MODEL"); export OPENCODE_CONFIG_CONTENT;;
codex/*)    # Codex CLI on the ChatGPT Plus sign-in: shares the plan's usage windows with openai/*
  CD=$HOME/.oc/COOLDOWN.cx-${MODEL#codex/};;
openai/*)   # ChatGPT Plus sign-in (opencode auth login, headless): its own usage windows, so its own cooldown
  CD=$HOME/.oc/COOLDOWN.oa-$(echo "${MODEL#openai/}" | tr '/:' '__')
  OPENCODE_CONFIG_CONTENT=$(printf '{"small_model":"%s"}' "$MODEL"); export OPENCODE_CONFIG_CONTENT;;
esac
# free-tier rate limit: while the cooldown file exists (tools/swarm/oc_gate.sh clears it) don't start
while [ -f "$CD" ]; do sleep 60; done
BATCH=${BATCH:-ocpilot}; W=$HH/$(python3 "$HH/tools/hh/workdir.py" dir "$BATCH" "$FUNC" "$SEG")
# the worker runs in a directory outside the git repo: OpenCode treats the whole repo as its project, and only
# outside it does external_directory=deny keep the worker inside its own directory. Results are copied back to $W.
. "$HH/env.sh" > /dev/null 2>&1
OW=$HOME/.oc/w/$BATCH/${FUNC}_$SEG   # no "@": weak models split the path at it and read the wrong directory
rm -rf "$W" "$OW"; "$HH/tools/swarm/prep2.sh" "$FUNC" "$SEG" "$OW"
cd "$OW"
start=$(date +%s)
if [ "${MODEL%%/*}" = codex ]; then
  CODEX_HOME=$HOME/.cx timeout ${OC_TIMEOUT:-1200} "$HOME/.local/bin/codex" exec --json --skip-git-repo-check \
    --sandbox workspace-write -m "${MODEL#codex/}" ${CX_EFFORT:+-c model_reasoning_effort=$CX_EFFORT} -C "$OW" \
    "$(cat prompt.md)" > result.jsonl 2> stderr.txt < /dev/null &
  IDLE=${OC_IDLE:-600}; DONE_EV='"type":"turn.completed"'      # long reasoning steps emit nothing until done
else
  timeout ${OC_TIMEOUT:-1200} "$HOME/.local/bin/opencode" run --pure -m "$MODEL" ${OC_VARIANT:+--variant "$OC_VARIANT"} --format json --dir "$OW" \
    "$(cat prompt.md)" > result.jsonl 2> stderr.txt < /dev/null &
  IDLE=${OC_IDLE:-240}; DONE_EV='"step_finish"'
fi
pid=$!
# idle watchdog: free endpoints often queue a request and never answer. No new output for OC_IDLE seconds = kill it;
# a run that never got a first reply is recorded as ERROR (retried later), not as a failed match
while kill -0 $pid 2>/dev/null; do
  sleep 15
  idle=$(( $(date +%s) - $(stat -c %Y result.jsonl 2>/dev/null || echo $start) ))
  if [ $idle -gt $IDLE ]; then pkill -TERM -P $pid 2>/dev/null; kill $pid 2>/dev/null; echo idle > .idle_killed; break; fi
done
wait $pid
echo $? > exit.txt
# provider trouble (rate limit, overload, quota) is not a failed match: record ERROR so the runner retries it
checks_used=$(cat .check_calls 2>/dev/null || cat .checks 2>/dev/null || echo 0)
api_err=0
grep -q "$DONE_EV" result.jsonl 2>/dev/null || grep -q '"item.completed"' result.jsonl 2>/dev/null || api_err=1
if [ "$checks_used" -eq 0 ] && grep -qiE 'rate.?limit|usage limit|overloaded|429|quota|too many requests|"type":"error"|APIError|ProviderError' result.jsonl stderr.txt 2>/dev/null; then api_err=1; fi
# a plan's usage window running out mid-run is not a failed match either, however far the worker got
grep -qiE 'usage.?limit|usage_limit_reached|hit your limit' stderr.txt 2>/dev/null || \
  grep -E '"type":"error"|"error"' result.jsonl 2>/dev/null | grep -qiE 'usage.?limit|usage_limit_reached|hit your limit' && api_err=1
if [ "$api_err" = 1 ]; then v=ERROR
elif [ -f attempt.c ] && "$HH/.venv/bin/python" "$HH/tools/hh/try_func.py" "$FUNC" attempt.c --seg "$SEG" > verify.txt 2>&1 && grep -q '^MATCH' verify.txt; then
  v=MATCH; else v=FAIL; fi
# keep-best: a snapshot that matched counts even if the worker edited attempt.c afterwards
if [ "$v" = FAIL ] && [ -d .attempts ]; then
  for r in $(grep -l '^MATCH' .attempts/*.res 2>/dev/null | sort -t/ -k2 -n -r); do
    c=${r%.res}.c
    if "$HH/.venv/bin/python" "$HH/tools/hh/try_func.py" "$FUNC" "$c" --seg "$SEG" 2>/dev/null | grep -q '^MATCH'; then
      if [ -z "$INFILE" ] || "$HH/.venv/bin/python" "$HH/tools/hh/srcbuild.py" infile "$SEG" "$FUNC" "$PWD/$c" > /dev/null 2>&1; then
        cp attempt.c attempt.final.c 2>/dev/null; cp "$c" attempt.c; v=MATCH; echo "matched in snapshot $c" > recovered.txt; break; fi
    fi
  done
fi
mkdir -p "$(dirname "$W")"; cp -a "$OW" "$W"; cd "$W"; rm -rf "$OW"
[ "$v" = ERROR ] && { echo "$(date -Is) $MODEL" > "$CD"; sleep ${OC_BACKOFF:-60}; }
"$HH/.venv/bin/python" - "$FUNC" "$SEG" "$MODEL" "$v" "$start" <<'PY'
import json, sys, time, os
f, seg, model, verdict, start = sys.argv[1:6]
inp = out = steps = 0; last = ""
for l in open("result.jsonl", errors="replace"):
    try: e = json.loads(l)
    except Exception: continue
    if e.get("type") == "turn.completed":                       # Codex CLI events
        u = e.get("usage") or {}; inp += u.get("input_tokens", 0) or 0; out += u.get("output_tokens", 0) or 0
    it = e.get("item") or {}
    if e.get("type") == "item.completed" and it.get("type") in ("command_execution", "file_change"): steps += 1
    if e.get("type") == "item.completed" and it.get("type") == "agent_message" and it.get("text"): last = it["text"]
    p = e.get("part") or {}
    t = p.get("tokens") or {}
    if t: inp += t.get("input", 0) or 0; out += t.get("output", 0) or 0
    if p.get("type") == "step-finish": steps += 1
    if p.get("type") == "text" and p.get("text"): last = p["text"]
claimed = [x for x in last.strip().splitlines() if x.startswith("RESULT")][-1:] or [last.strip().splitlines()[-1] if last.strip() else ""]
rec = dict(func=f, segment=seg, model=model, verified=verdict, claimed=claimed[0][:200],
           checks=int(open(".checks").read()) if os.path.exists(".checks") else 0,
           turns=steps, seconds=int(time.time()) - int(start), input_tokens=inp, output_tokens=out,
           exit=open("exit.txt").read().strip(), cost_usd_equiv=0.0)
open(os.path.expanduser("$HH/queue/%s/results.jsonl" % os.environ.get("BATCH", "ocpilot")), "a").write(json.dumps(rec) + "\n")
print(json.dumps(rec))
PY
exit; }
