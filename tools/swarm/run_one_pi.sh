#!/bin/bash
# run_one_pi.sh FUNC SEGMENT: one worker run with the Pi coding agent (@earendil-works/pi-coding-agent, installed in
# ~/.local/pi) on the workstation's Strata model, for the 11-07 harness A/B against OpenCode (run_one_oc.sh).
# Same prep (prep2.sh), same PREVIOUS/FROM=best start (via run_one_from.sh), same ./check, keep-best and results line.
# Pi has no permission system ("run it in a container"), so it runs under bubblewrap: $HOME is an empty tmpfs; only
# the repo (read-only), Pi itself (read-only), the worker's directory and its log directory (read-write) are visible.
# Env: PI_MODEL_ID (default: the id the server reports), OC_TIMEOUT (5400), OC_IDLE (1200), OC_NUDGES (2), BATCH.
{ # whole script in one block: bash parses it before running, so editing this file cannot break live runs
FUNC=$1; SEG=$2; HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH" || exit 1
BATCH=${BATCH:-piAB}; W=$HH/$(python3 "$HH/tools/hh/workdir.py" dir "$BATCH" "$FUNC" "$SEG")
. "$HH/env.sh" > /dev/null 2>&1
PI=$HOME/.local/pi/node_modules/.bin/pi
URL=$(cat "$HOME/.oc/strata.url"); KEY=$(tr -d '\n\r ' < "$HOME/.oc/strata.key")
MJ=$(curl -s -m 10 -H "Authorization: Bearer $KEY" "$URL/models")
MODEL_ID=${PI_MODEL_ID:-$(echo "$MJ" | python3 -c 'import json,sys; print(json.load(sys.stdin)["data"][0]["id"])' 2>/dev/null)}
SCTX=$(echo "$MJ" | python3 -c 'import json,sys; print(json.load(sys.stdin)["data"][0]["meta"]["n_ctx"])' 2>/dev/null); SCTX=${SCTX:-262144}
OW=$HOME/.oc/w/$BATCH/${FUNC}_$SEG; LOGD="$OW.log"
mkdir -p "$HH/queue/$BATCH"; rm -rf "$W" "$OW" "$LOGD"; "$HH/tools/swarm/prep2.sh" "$FUNC" "$SEG" "$OW"; mkdir -p "$LOGD/agent" "$LOGD/sessions"
# Pi's config for this run only: the Strata provider, telemetry and update checks off
python3 - "$LOGD/agent" "$URL" "$MODEL_ID" "$SCTX" <<'PY'
import json, os, sys
d, url, mid, ctx = sys.argv[1], sys.argv[2], sys.argv[3], int(sys.argv[4])
json.dump({"providers": {"strata": {"baseUrl": url, "api": "openai-completions", "apiKey": "$STRATA_API_KEY",
           "models": [{"id": mid, "name": mid, "contextWindow": ctx, "maxTokens": 16384, "reasoning": True}]}}},
          open(os.path.join(d, "models.json"), "w"), indent=1)
json.dump({"enableInstallTelemetry": False}, open(os.path.join(d, "settings.json"), "w"))
PY
BW=(bwrap --ro-bind /usr /usr --ro-bind /bin /bin --ro-bind /lib /lib)
[ -d /lib64 ] && BW+=(--ro-bind /lib64 /lib64)
BW+=(--ro-bind /etc /etc --proc /proc --dev /dev --tmpfs /tmp --tmpfs "$HOME"
     --ro-bind "$HH" "$HH" --ro-bind "$HOME/.local/pi" "$HOME/.local/pi" --ro-bind "$HOME/.local/opt/decomp" "$HOME/.local/opt/decomp" --bind "$OW" "$OW" --bind "$LOGD" "$LOGD"
     --chdir "$OW" --unshare-pid --unshare-ipc --die-with-parent
     --setenv HOME "$HOME" --setenv TMPDIR /tmp --setenv PI_CODING_AGENT_DIR "$LOGD/agent" --setenv PI_OFFLINE 1
     --setenv PI_TELEMETRY 0 --setenv STRATA_API_KEY "$KEY" --setenv PATH "$PATH" --setenv LD_LIBRARY_PATH "$LD_LIBRARY_PATH")
PIARGS=(-p --mode json --no-context-files --no-extensions --no-skills --no-prompt-templates --no-themes --no-mcp
        --tools read,bash,edit,write,grep,ls --model "strata/$MODEL_ID" --session-dir "$LOGD/sessions")
watch_run() {   # $1 = pid: idle watchdog (no new output for OC_IDLE seconds = kill)
  while kill -0 "$1" 2>/dev/null; do
    sleep 15
    idle=$(( $(date +%s) - $(stat -c %Y "$LOGD/result.jsonl" 2>/dev/null || echo $start) ))
    if [ $idle -gt ${OC_IDLE:-1200} ]; then kill "$1" 2>/dev/null; echo idle > "$OW/.idle_killed"; break; fi
  done
  wait "$1"; echo $? > "$OW/exit.txt"
}
cd "$OW"; start=$(date +%s)
timeout ${OC_TIMEOUT:-5400} "${BW[@]}" "$PI" "${PIARGS[@]}" "$(cat prompt.md)" \
  > "$LOGD/result.jsonl" 2> "$LOGD/stderr.txt" < /dev/null &
watch_run $!
last_text() { RJ="$LOGD/result.jsonl" "$HH/.venv/bin/python" -c '
import json, os
last = ""
for l in open(os.environ["RJ"], errors="replace"):
    try: e = json.loads(l)
    except Exception: continue
    if e.get("type") == "message_end":
        m = e.get("message") or {}
        if m.get("role") == "assistant":
            c = m.get("content"); t = c if isinstance(c, str) else "".join(x.get("text", "") for x in (c or []) if isinstance(x, dict) and x.get("type") == "text")
            if t.strip(): last = t
print(last)'; }
# same auto-nudge as run_one_oc.sh: a clean stop without RESULT, with time left, continues the session (--continue)
NUDGES=${OC_NUDGES:-2}
while [ "$NUDGES" -gt 0 ] && [ "$(cat exit.txt)" = 0 ] && [ ! -f .idle_killed ]; do
  last_text | grep -q '^RESULT' && break
  [ -f attempt.c ] && "$HH/.venv/bin/python" "$HH/tools/hh/try_func.py" "$FUNC" attempt.c --seg "$SEG" 2>/dev/null | grep -q '^MATCH' && break
  left=$(( ${OC_TIMEOUT:-5400} - ($(date +%s) - start) )); [ $left -lt 300 ] && break
  echo "$(date -Is) nudge ($left s left)" >> .nudges
  timeout $left "${BW[@]}" "$PI" "${PIARGS[@]}" --continue \
    "Continue working on the task without asking: use ./check, keep improving attempt.c, and finish with the RESULT line when you are done or truly stuck." \
    >> "$LOGD/result.jsonl" 2>> "$LOGD/stderr.txt" < /dev/null &
  watch_run $!
  NUDGES=$((NUDGES - 1))
done
checks_used=$(cat .checks 2>/dev/null || echo 0)
if ! grep -q '"agent_settled"\|"agent_end"' "$LOGD/result.jsonl" 2>/dev/null && [ "$checks_used" -eq 0 ]; then v=ERROR
elif [ -f attempt.c ] && "$HH/.venv/bin/python" "$HH/tools/hh/try_func.py" "$FUNC" attempt.c --seg "$SEG" > verify.txt 2>&1 && grep -q '^MATCH' verify.txt; then
  v=MATCH; else v=FAIL; fi
# keep-best: a snapshot that matched counts even if the worker edited attempt.c afterwards (as run_one_oc.sh)
if [ "$v" = FAIL ] && [ -d .attempts ]; then
  for r in $(grep -l '^MATCH' .attempts/*.res 2>/dev/null | sort -t/ -k2 -n -r); do
    c=${r%.res}.c
    if "$HH/.venv/bin/python" "$HH/tools/hh/try_func.py" "$FUNC" "$c" --seg "$SEG" 2>/dev/null | grep -q '^MATCH'; then
      if [ -z "$INFILE" ] || "$HH/.venv/bin/python" "$HH/tools/hh/srcbuild.py" infile "$SEG" "$FUNC" "$PWD/$c" > /dev/null 2>&1; then
        cp attempt.c attempt.final.c 2>/dev/null; cp "$c" attempt.c; v=MATCH; echo "matched in snapshot $c" > recovered.txt; break; fi
    fi
  done
fi
claimed=$(last_text | grep '^RESULT' | tail -1); [ -z "$claimed" ] && claimed=$(last_text | tail -1)
secs=$(( $(date +%s) - start ))
mv "$LOGD/result.jsonl" "$LOGD/stderr.txt" "$OW"/ 2>/dev/null; rm -rf "$LOGD"
mkdir -p "$(dirname "$W")"; cp -a "$OW" "$W"; cd "$W"; rm -rf "$OW"
"$HH/.venv/bin/python" - "$FUNC" "$SEG" "pi/strata/$MODEL_ID" "$v" "$claimed" "$checks_used" "$secs" "$(cat exit.txt)" <<'PY' >> "$HH/queue/$BATCH/results.jsonl"
import json, sys
f, seg, model, v, claimed, checks, secs, ex = sys.argv[1:9]
inp = out = turns = 0
for l in open("result.jsonl", errors="replace"):
    try: e = json.loads(l)
    except Exception: continue
    if e.get("type") == "turn_end": turns += 1
    if e.get("type") == "message_end":
        u = (e.get("message") or {}).get("usage") or {}
        inp += (u.get("input") or 0) + (u.get("cacheRead") or 0); out += u.get("output") or 0
print(json.dumps(dict(func=f, segment=seg, model=model, verified=v, claimed=claimed[:200], checks=int(checks or 0), turns=turns,
                      seconds=int(secs), input_tokens=inp, output_tokens=out, exit=ex, cost_usd_equiv=0.0)))
PY
exit; }
