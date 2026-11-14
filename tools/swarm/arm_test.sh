#!/bin/bash
# arm_test.sh: the 11-13 weekend comparison on the same 8 big functions (queue/armtest/functions.txt), every arm from
# the same pinned starting attempt (BEST_BEFORE), 90 minutes per function, AB_NOSKIP (every arm runs every function):
#   A  Terra alone (OpenCode)              batch armT_A   ChatGPT
#   C  Opus lead + Sonnet subagents        batch armT_C   Claude
#   D  Opus lead + Terra helpers (Pi)      batch armT_D   Claude + ChatGPT
#   E  Sol lead + Terra helpers (Pi)       batch armT_E   ChatGPT
# ChatGPT arms run now; the Claude arms (C, D) wait until the weekly ramp allows Claude work (meter < ceiling).
# A guard stops every ChatGPT-using arm at CHAT_MAX% of Zach's ChatGPT week (default 35). Log: queue/armtest/test.log.
cd "$(dirname "$0")/../.." || exit 1; . ./env.sh
export BEST_BEFORE=${BEST_BEFORE:?pin it} AB_NOSKIP=1 BIGFUNC=1 REGIONS=1 WALLNOTE=1 REGTRACE=1
CHAT_MAX=${CHAT_MAX:-35}; L=queue/armtest/test.log; log() { echo "$(date -u +%FT%H:%MZ) $*" >> "$L"; }
for b in armT_A armT_C armT_D armT_E; do mkdir -p queue/$b; cp queue/armtest/functions.txt queue/$b/functions.txt; done
run() {   # $1 batch, rest: lane_run args
  local b=$1; shift; log "start $b"
  PAR=2 nohup setsid tools/swarm/lane_run.sh "$b" "$@" > "queue/$b/runner.out" 2>&1 < /dev/null &
}
OC="OC_TIMEOUT=5400 OC_IDLE=3000 CHECK_LIMIT=200"
run armT_A INNER=run_one_oc.sh OC_MODEL=openai/gpt-6.1-terra OC_VARIANT=max $OC
run armT_E INNER=run_one_oc.sh OC_MODEL=openai/gpt-6.1-sol LEAD=terra $OC
# guard for ChatGPT use (A, E now; D's helpers later)
( while :; do
    read -r used _ < <(tools/swarm/cx_meter.sh) || used=""
    log "chatgpt meter ${used:-?}%"
    if [ -n "$used" ] && awk "BEGIN{exit !($used >= $CHAT_MAX)}"; then
      for b in armT_A armT_D armT_E; do touch queue/$b/STOP; done; log "STOP ChatGPT arms at $used%"; break; fi
    [ -f queue/armtest/DONE ] && break; sleep 900
  done ) &
# Claude arms: wait for the weekly ramp to open (meter below the ceiling), then start C and D
until w=$(python3 -c "import json;print(json.load(open('$HOME/.cache/usage-gate.json'))['data']['seven_day']['utilization'])" 2>/dev/null) \
      && $(command -v ~/bin/usage-gate || echo true) --brief 100 100 > /dev/null 2>&1 \
      && awk "BEGIN{exit !($w + 2 < $(.venv/bin/python tools/swarm/weekly_cap.py weekly 90))}"; do sleep 1800; done
log "Claude ramp open (meter $w%): starting C and D"
CL="DEADLINE_MIN=90 CHECK_LIMIT=200 MODEL=claude-opus-5-5"
run armT_C INNER=run_one3.sh LEAD=1 $CL
run armT_D INNER=run_one3.sh LEAD=terra $CL
wait
