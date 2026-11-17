#!/bin/bash
# cx_meter.sh: print Zach's ChatGPT (Codex plan) weekly usage as "USED_PERCENT RESETS_AT_EPOCH", read from the
# rate_limits a tiny Codex CLI request reports (2026-11-07; the CLI signs in with --device-auth under CODEX_HOME=~/.cx).
# Costs one minimal request. Exit 1 when the meter could not be read (signed out, network).
# a single reading of 0% can be a glitch (11-17 07:08Z read 0 between 24% and 25%): if the last good reading was
# above 5%, take a second reading before believing it
if [ -z "$CX_RETRY" ]; then
  out=$(CX_RETRY=1 "$0") || exit 1; used=${out%% *}; reset=${out##* }
  read -r last lreset < "$HOME/.cache/cx_meter.last" 2>/dev/null || { last=0; lreset=0; }
  # a new week (reset time moved on) legitimately starts at 0%
  sus() { [ "$reset" = "$lreset" ] && awk "BEGIN{exit !($used == 0 && $last > 5)}"; }
  if sus; then out=$(CX_RETRY=1 "$0") || exit 1; used=${out%% *}; reset=${out##* }; fi
  sus && exit 1   # still 0 in the same week: report unreadable, the pacer pauses
  echo "$used $reset" > "$HOME/.cache/cx_meter.last"; echo "$out"; exit 0
fi
D=$(mktemp -d); trap 'rm -rf "$D"' EXIT
( cd "$D" && CODEX_HOME=$HOME/.cx timeout 120 "$HOME/.local/bin/codex" exec --json --skip-git-repo-check --sandbox read-only \
    -m gpt-6.1-terra "Reply with just PONG" < /dev/null > "$D/out.json" 2>&1 )
f=$(ls -t "$HOME"/.cx/sessions/*/*/*/*.jsonl 2>/dev/null | head -1)
[ -n "$f" ] || exit 1
python3 - "$f" <<'PY'
import json, sys
rl = None
for l in open(sys.argv[1]):
    try: e = json.loads(l)
    except ValueError: continue
    p = e.get("payload") or e
    rl = p.get("rate_limits") or (p.get("info") or {}).get("rate_limits") or rl
if not rl or not rl.get("primary"): sys.exit(1)
print("%s %s" % (rl["primary"]["used_percent"], rl["primary"]["resets_at"]))
PY
