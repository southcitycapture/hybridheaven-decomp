#!/bin/bash
# terra_helper.sh: region helpers for a lead session (Arm E: Sol lead in OpenCode + Terra helpers in Pi; 11-12).
# prep2.sh (LEAD=terra) installs it in the lead's work dir as ./helper:
#   ./helper run N "brief"     copy the lead's attempt.c/check/context/target into wN/, run one Terra helper there
#                              (Pi, sandboxed), print its result: score, best attempt, its last message
#   ./helper batch JOBS.txt    JOBS.txt lines "N<TAB>brief": up to 3 helpers in parallel, then print every result
# Helpers run Terra (gpt-6.1-terra) in Pi under bubblewrap with a SHORT-LIVED access token only: the long-lived
# ChatGPT sign-in (~/.oc/pi-codex) is refreshed outside the sandbox and the copy given to Pi has no refresh token.
# Each helper is capped at HELPER_MIN minutes (default 40, under the ~1 h token lifetime). Progress is printed every
# minute so the lead's harness does not see an idle tool.
HH="$(cd "$(dirname "$0")/../.." && pwd)"; LEAD_DIR=$(pwd); PI=$HOME/.local/pi/node_modules/.bin/pi; AUTH=$HOME/.oc/pi-codex
HELPER_MIN=${HELPER_MIN:-40}
. "$HH/env.sh" > /dev/null 2>&1
fresh_auth() {   # $1 = agent dir for this helper: auth.json with a fresh access token and no refresh token
  ( flock 9
    PI_CODING_AGENT_DIR=$AUTH PI_TELEMETRY=0 timeout 60 "$PI" auth print-bearer-token --provider openai > /dev/null 2>&1
  ) 9> "$AUTH/.refresh.lock"
  python3 - "$AUTH/auth.json" "$1/auth.json" <<'PY'
import json, sys
d = json.load(open(sys.argv[1])); o = dict(d["openai"]); o["refresh"] = ""
json.dump({"openai": o}, open(sys.argv[2], "w"))
PY
  chmod 600 "$1/auth.json"; echo '{"enableInstallTelemetry": false}' > "$1/settings.json"
}
run_one() {   # $1 = N, $2 = brief
  local N=$1 BRIEF=$2 D="$LEAD_DIR/w$1" A
  # 11-12: helpers outlived killed leads (orphans kept using quota) and left their token copies behind
  local TP=""
  trap 'rm -rf "$A"' EXIT; trap '[ -n "$TP" ] && kill -TERM $TP 2>/dev/null; rm -rf "$A"; exit 1' TERM INT
  mkdir -p "$D"; for f in attempt.c check context.h known.h target.s; do [ -f "$LEAD_DIR/$f" ] && cp "$LEAD_DIR/$f" "$D/"; done
  rm -rf "$D/.attempts"; echo 0 > "$D/.checks"; A=$(mktemp -d "$HOME/.oc/w/helper.XXXXXX"); fresh_auth "$A"
  # the lead's check enforces a time budget through .deadline (11-12: helpers' checks refused without it)
  echo $(( $(date +%s) + HELPER_MIN * 60 )) > "$D/.deadline"; [ -f "$LEAD_DIR/.regions.json" ] && cp "$LEAD_DIR/.regions.json" "$D/"
  cat > "$D/brief.md" <<EOF
You are a REGION HELPER for a lead who is matching one big N64 function (IDO 7.1, MIPS). Work only in this folder.
attempt.c is the lead's current version; target.s is the original; ./check compiles attempt.c and compares it with
the original (score, first differences). Your job is ONLY this region; keep everything else exactly as it is:

$BRIEF

Make one targeted change at a time to attempt.c and run ./check after each. Plausible original C only (no
\`if (x) {}\` tricks, dummy volatile or padding variables). Do not stop to ask questions: nobody will answer. When the
region matches, or after a few failed ideas, stop and finish with one line: \`RESULT: <score> <what you changed>\`.
EOF
  local BW=(bwrap --ro-bind /usr /usr --ro-bind /bin /bin --ro-bind /lib /lib)
  [ -d /lib64 ] && BW+=(--ro-bind /lib64 /lib64)
  BW+=(--ro-bind /etc /etc --proc /proc --dev /dev --tmpfs /tmp --tmpfs "$HOME"
       --ro-bind "$HH" "$HH" --ro-bind "$HOME/.local/pi" "$HOME/.local/pi" --ro-bind "$HOME/.local/opt/decomp" "$HOME/.local/opt/decomp"
       --bind "$D" "$D" --bind "$A" "$A" --chdir "$D" --unshare-pid --unshare-ipc --die-with-parent
       --setenv HOME "$HOME" --setenv TMPDIR /tmp --setenv PI_CODING_AGENT_DIR "$A" --setenv PI_OFFLINE 1 --setenv PI_TELEMETRY 0
       --setenv PATH "$PATH" --setenv LD_LIBRARY_PATH "$LD_LIBRARY_PATH")
  timeout $((HELPER_MIN * 60)) "${BW[@]}" "$PI" -p --mode json --no-context-files --no-extensions --no-skills --no-prompt-templates \
      --no-themes --no-mcp --tools read,bash,edit,write,grep,ls --model openai/gpt-6.1-terra --session-dir "$A/sessions" \
      "$(cat "$D/brief.md")" > "$A/events.jsonl" 2> "$A/stderr.txt" < /dev/null &
  TP=$!; wait $TP
  local ex=$?
  "$HH/.venv/bin/python" - "$A/events.jsonl" "$D" "$N" "$ex" <<'PY'
import json, os, sys
ev, d, n, ex = sys.argv[1:5]; last = ""
for l in open(ev, errors="replace"):
    try: e = json.loads(l)
    except Exception: continue
    if e.get("type") == "message_end" and (e.get("message") or {}).get("role") == "assistant":
        c = e["message"].get("content"); t = c if isinstance(c, str) else "".join(x.get("text", "") for x in (c or []) if isinstance(x, dict) and x.get("type") == "text")
        if t.strip(): last = t.strip()
lc = open(os.path.join(d, ".lastcheck")).read().split("\n")[0] if os.path.exists(os.path.join(d, ".lastcheck")) else "(no check)"
print("=== helper w%s (exit %s): last check: %s" % (n, ex, lc))
print("    w%s/attempt.c is its final version; w%s/.attempts/ has every checked attempt" % (n, n))
print("    its last message: " + (last.splitlines()[-1] if last else "(none)")[:400])
PY
  rm -rf "$A"
}
# a helper must not outlive its lead: if the lead's harness kills us, take every helper down with us
trap 'for j in $(jobs -p); do kill -TERM $j 2>/dev/null; done; exit 1' TERM INT HUP
case "$1" in
  run) shift; N=$1; shift; run_one "$N" "$*" & p=$!; while kill -0 $p 2>/dev/null; do sleep 60; kill -0 $p 2>/dev/null && echo "... helper w$N still working"; done; wait $p ;;
  batch) pids=(); while IFS=$'\t' read -r N BRIEF; do [ -z "$N" ] && continue
           while [ $(jobs -rp | wc -l) -ge 3 ]; do sleep 20; done
           run_one "$N" "$BRIEF" > "$LEAD_DIR/w$N.result" 2>&1 & done < "$2"
         while [ -n "$(jobs -rp)" ]; do sleep 60; echo "... $(jobs -rp | wc -l) helper(s) still working"; done
         cat "$LEAD_DIR"/w*.result 2>/dev/null ;;
  *) echo "usage: ./helper run N \"brief\"  |  ./helper batch JOBS.txt (lines: N<TAB>brief)"; exit 2 ;;
esac
