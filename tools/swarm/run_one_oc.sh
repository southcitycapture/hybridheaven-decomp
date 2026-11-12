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
strata/*)   # the workstation's local model (Strata, OpenAI-compatible, 256K context; 10-28): free, one GPU, its own cooldown
  CD=$HOME/.oc/COOLDOWN.strata; STRATA_API_KEY=$(tr -d '\n\r ' < "$HOME/.oc/strata.key"); export STRATA_API_KEY
  # the context window the server is actually running (11-07: raised to 256K), so the two can't drift; fallback 256K
  SCTX=$(curl -s -m 10 -H "Authorization: Bearer $STRATA_API_KEY" "${STRATA_URL:-$(cat "$HOME/.oc/strata.url")}/models" 2>/dev/null \
         | python3 -c 'import json,sys; print(json.load(sys.stdin)["data"][0]["meta"]["n_ctx"])' 2>/dev/null); SCTX=${SCTX:-262144}
  OPENCODE_CONFIG_CONTENT=$(printf '{"provider":{"strata":{"npm":"@ai-sdk/openai-compatible","name":"Strata (workstation)","options":{"baseURL":"%s","apiKey":"{env:STRATA_API_KEY}"},"models":{"%s":{"name":"%s","limit":{"context":%s,"output":16384}}}}},"small_model":"%s"}' "${STRATA_URL:-$(cat "$HOME/.oc/strata.url")}" "${MODEL#strata/}" "${MODEL#strata/}" "$SCTX" "$MODEL"); export OPENCODE_CONFIG_CONTENT;;
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
rm -rf "$W" "$OW" "$OW.log"; "$HH/tools/swarm/prep2.sh" "$FUNC" "$SEG" "$OW"
# the event log and stderr live beside the worker's directory, not in it (11-07: 61 of 80 Qwen runs read their own
# result.jsonl, ~13K tokens each); they are moved into the work dir before it is copied back to $W
LOGD="$OW.log"; mkdir -p "$LOGD"
cd "$OW"
start=$(date +%s)
if [ "${MODEL%%/*}" = codex ]; then
  CODEX_HOME=$HOME/.cx timeout ${OC_TIMEOUT:-1200} "$HOME/.local/bin/codex" exec --json --skip-git-repo-check \
    --sandbox workspace-write -m "${MODEL#codex/}" ${CX_EFFORT:+-c model_reasoning_effort=$CX_EFFORT} -C "$OW" \
    "$(cat prompt.md)" > $LOGD/result.jsonl 2> $LOGD/stderr.txt < /dev/null &
  IDLE=${OC_IDLE:-600}; DONE_EV='"type":"turn.completed"'      # long reasoning steps emit nothing until done
else
  timeout ${OC_TIMEOUT:-1200} "$HOME/.local/bin/opencode" run --pure -m "$MODEL" ${OC_VARIANT:+--variant "$OC_VARIANT"} --format json --dir "$OW" \
    "$(cat prompt.md)" > $LOGD/result.jsonl 2> $LOGD/stderr.txt < /dev/null &
  IDLE=${OC_IDLE:-240}; DONE_EV='"step_finish"'
fi
pid=$!
# idle watchdog: free endpoints often queue a request and never answer. No new output for OC_IDLE seconds = kill it;
# a run that never got a first reply is recorded as ERROR (retried later), not as a failed match
while kill -0 $pid 2>/dev/null; do
  sleep 15
  idle=$(( $(date +%s) - $(stat -c %Y $LOGD/result.jsonl 2>/dev/null || echo $start) ))
  if [ $idle -gt $IDLE ]; then pkill -TERM -P $pid 2>/dev/null; kill $pid 2>/dev/null; echo idle > .idle_killed; break; fi
done
wait $pid
echo $? > exit.txt
# Auto-nudge (11-05, local model only by default: OC_NUDGES): Qwen often ends its turn asking "continue?" with time
# left (42 of 137 failed localU1 runs stopped early without a RESULT line). Re-prompt the same session, up to OC_NUDGES
# times, inside the same OC_TIMEOUT budget; never after an idle kill, a timeout, a RESULT line or a standalone match.
NUDGES=${OC_NUDGES:-$([ "${MODEL%%/*}" = strata ] && echo 2 || echo 0)}
last_text() { RJ="$LOGD/result.jsonl" "$HH/.venv/bin/python" -c '
import json, sys
last = ""
for l in open(__import__("os").environ["RJ"], errors="replace"):
    try: p = (json.loads(l).get("part") or {})
    except Exception: continue
    if p.get("type") == "text" and p.get("text"): last = p["text"]
print(last)'; }
while [ "$NUDGES" -gt 0 ] && [ "$(cat exit.txt)" = 0 ] && [ ! -f .idle_killed ] && [ "${MODEL%%/*}" != codex ]; do
  last_text | grep -q '^RESULT' && break
  [ -f attempt.c ] && "$HH/.venv/bin/python" "$HH/tools/hh/try_func.py" "$FUNC" attempt.c --seg "$SEG" 2>/dev/null | grep -q '^MATCH' && break
  left=$(( ${OC_TIMEOUT:-1200} - ($(date +%s) - start) )); [ $left -lt 300 ] && break
  sid=$(grep -o '"sessionID":"[^"]*"' $LOGD/result.jsonl | head -1 | cut -d'"' -f4); [ -z "$sid" ] && break
  echo "$(date -Is) nudge ($left s left)" >> .nudges
  timeout $left "$HOME/.local/bin/opencode" run --pure -m "$MODEL" ${OC_VARIANT:+--variant "$OC_VARIANT"} --format json --dir "$OW" \
    --session "$sid" "Continue working on the task without asking: use ./check, keep improving attempt.c, and finish with the RESULT line when you are done or truly stuck." >> $LOGD/result.jsonl 2>> $LOGD/stderr.txt < /dev/null &
  pid=$!
  while kill -0 $pid 2>/dev/null; do
    sleep 15
    idle=$(( $(date +%s) - $(stat -c %Y $LOGD/result.jsonl 2>/dev/null || echo $start) ))
    if [ $idle -gt $IDLE ]; then kill $pid 2>/dev/null; echo idle > .idle_killed; break; fi
  done
  wait $pid; echo $? > exit.txt
  NUDGES=$((NUDGES - 1))
done
# provider trouble (rate limit, overload, quota) is not a failed match: record ERROR so the runner retries it
checks_used=$(cat .check_calls 2>/dev/null || cat .checks 2>/dev/null || echo 0)
api_err=0
grep -q "$DONE_EV" $LOGD/result.jsonl 2>/dev/null || grep -q '"item.completed"' $LOGD/result.jsonl 2>/dev/null || api_err=1
if [ "$checks_used" -eq 0 ] && grep -qiE 'rate.?limit|usage limit|overloaded|429|quota|too many requests|"type":"error"|APIError|ProviderError' $LOGD/result.jsonl $LOGD/stderr.txt 2>/dev/null; then api_err=1; fi
# a plan's usage window running out mid-run is not a failed match either, however far the worker got
grep -qiE 'usage.?limit|usage_limit_reached|hit your limit' $LOGD/stderr.txt 2>/dev/null || \
  grep -E '"type":"error"|"error"' $LOGD/result.jsonl 2>/dev/null | grep -qiE 'usage.?limit|usage_limit_reached|hit your limit' && api_err=1
if [ "$api_err" = 1 ]; then v=ERROR
elif [ -f attempt.c ] && "$HH/.venv/bin/python" "$HH/tools/hh/try_func.py" "$FUNC" attempt.c --seg "$SEG" > verify.txt 2>&1 && grep -q '^MATCH' verify.txt; then
  v=MATCH
# in-file match (11-12): the standalone link can misplace shared rodata; srcbuild's in-file gate is the real test
elif [ -n "$INFILE" ] && [ -f attempt.c ] && "$HH/.venv/bin/python" "$HH/tools/hh/srcbuild.py" infile "$SEG" "$FUNC" "$PWD/attempt.c" 2>/dev/null | grep -q '^IN-FILE MATCH'; then
  v=MATCH; echo "in-file match" > recovered.txt
else v=FAIL; fi
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
mv "$LOGD"/* "$OW"/ 2>/dev/null; rmdir "$LOGD" 2>/dev/null
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
