#!/bin/bash
# contrib/work.sh NAME [-j N] [-m MODEL] [-n MAX]: run one Claude Code worker per task assigned to NAME in
# contrib/tasks.json that has no result here yet. Uses your own Claude login (the `claude` command).
#   -j N      workers at once (default 1; each uses your plan's usage, so start low)
#   -m MODEL  default claude-sonnet-5-5 (claude-haiku-5-5 is cheaper, claude-opus-5-5 stronger)
#   -n MAX    run at most MAX tasks this time
# Each worker gets one function in its own directory (contrib/local/NAME/work/FUNC): the assembly from YOUR ROM, an
# m2c draft, context.h and a ./check command that compiles its C with IDO and compares it with the original, also
# inside the function's real C file. Every claimed match is re-checked here; results go to
# contrib/local/NAME/results.jsonl. Stop any time with Ctrl-C (or `touch contrib/local/NAME/STOP`); running it again
# picks up where it stopped. A task that hit a usage limit or API error is retried on the next run.
set -e
. "$(dirname "$0")/lib.sh"
NAME=$1; shift || true
[ -n "$NAME" ] || die "usage: contrib/work.sh NAME [-j N] [-m MODEL] [-n MAX]"
check_name "$NAME"
J=1; MODEL=${MODEL:-claude-sonnet-5-5}; MAX=0
while [ $# -gt 0 ]; do
  case "$1" in -j) J=$2; shift 2;; -m) MODEL=$2; shift 2;; -n) MAX=$2; shift 2;; *) die "unknown option $1";; esac
done
cd "$ROOT"
[ -f build/expanded.bin ] && [ -d asm/nonmatchings ] || die "run contrib/setup.sh first (no build/expanded.bin or asm/)"
command -v claude > /dev/null || die "the 'claude' command (Claude Code) is not installed"
[ -f contrib/tasks.json ] || die "contrib/tasks.json missing: git pull"

export BATCH=$(local_batch "$NAME"); Q=queue/$BATCH; mkdir -p "$Q"; rm -f "$Q/STOP"
# the worker harness, as HQ's loop runs it (tools/swarm/run_one3.sh + prep2.sh): in-file check, harness2 (repeats and
# compile errors don't use up checks, stalled runs stop), diagnosis after a non-match, a lean CLI with no MCP servers
export MODEL INFILE=1 HARNESS2=1 DIAG=1
case "$MODEL" in *haiku*) export CHECK_LIMIT=${CHECK_LIMIT:-10};; *) export CHECK_LIMIT=${CHECK_LIMIT:-15};; esac
export WORKER_FLAGS=${WORKER_FLAGS:---tools Read,Write,Edit,Bash --strict-mcp-config --disable-slash-commands}

# tasks: assigned to NAME, not done at HQ, not already in the registry here, no result here except API errors
todo=$("$PY" - "$NAME" "$Q/results.jsonl" "$MAX" <<'PY'
import json, os, sys
name, res, mx = sys.argv[1], sys.argv[2], int(sys.argv[3])
done = set()
if os.path.exists(res):
    for l in open(res):
        try: r = json.loads(l)
        except ValueError: continue
        if r.get("verified") != "ERROR": done.add((r["func"], r["segment"]))
out = [r for r in json.load(open("contrib/tasks.json"))["tasks"]
       if r.get("assigned") == name and r.get("status") != "done" and (r["func"], r["segment"]) not in done
       and not os.path.exists("matched/%s/%s.c" % (r["segment"], r["func"]))]
for r in out[:mx or None]: print(r["func"], r["segment"])
PY
)
n=$(printf '%s' "$todo" | grep -c . || true)
if [ "$n" = 0 ]; then
  say "Nothing to do for $NAME: every assigned task has a result here (contrib/local/$NAME/results.jsonl). Next: contrib/submit.sh $NAME"
  exit 0
fi
say "$n task(s) for $NAME with $MODEL, $J at a time (up to $CHECK_LIMIT checks each). Ctrl-C or touch contrib/local/$NAME/STOP to stop."

# one task: skip once STOP exists; after 3 API errors in a row (usage limit, outage) set STOP
one() {
  [ -f "$Q/STOP" ] && exit 0
  local f=$1 seg=$2 line v
  line=$(tools/swarm/run_one3.sh "$f" "$seg" "$MODEL" 2> /dev/null | tail -1)
  v=$(printf '%s' "$line" | "$PY" -c 'import json,sys
try: r = json.loads(sys.stdin.read()); print(r["verified"], r.get("checks"), round(r.get("cost_usd_equiv") or 0, 3))
except Exception: print("ERROR ? ?")')
  printf '  %-14s %-8s %s\n' "$f" "$seg" "$v"
  if [ "${v%% *}" = ERROR ]; then
    ( flock 9; e=$(( $(cat "$Q/.errors" 2> /dev/null || echo 0) + 1 )); echo $e > "$Q/.errors"
      [ $e -ge 3 ] && { touch "$Q/STOP"; echo "  3 API errors in a row (usage limit?): stopping. Run again later." >&2; } ) 9> "$Q/.lock"
  else ( flock 9; echo 0 > "$Q/.errors" ) 9> "$Q/.lock"; fi
}
export -f one; export Q PY
echo 0 > "$Q/.errors"
printf '%s\n' "$todo" | xargs -P "$J" -L 1 bash -c 'one "$0" "$1"' || true
"$PY" - "$Q/results.jsonl" <<'PY'
import json, sys, collections
last = {}
for l in open(sys.argv[1]):
    try: r = json.loads(l); last[(r["func"], r["segment"])] = r
    except (ValueError, KeyError): pass
c = collections.Counter(r["verified"] for r in last.values())
cost = sum(float(r.get("cost_usd_equiv") or 0) for r in last.values())
print("so far: %d matched, %d not matched, %d to retry (API errors); API-equivalent cost $%.2f"
      % (c["MATCH"], c["FAIL"], c["ERROR"], cost))
PY
say "Send your matches: contrib/submit.sh $NAME"
