#!/bin/bash
# run_batch3.sh BATCH [PARALLEL] [WEEKLY_CAP]: run_batch2.sh plus a 5-hour window guard (FIVE_CAP, default 90)
#   Runs Haiku workers over queue/BATCH/functions.txt ("func segment ..." per line), stops launching new
#   workers once weekly usage reaches WEEKLY_CAP %, then integrates verified matches and refreshes the dashboard.
{ # whole script in one block: bash parses it before running, so editing this file cannot break live runs
BATCH=$1; P=${2:-4}; CAP=${3:-72}; HH="$(cd "$(dirname "$0")/../.." && pwd)"; cd "$HH"; . ./env.sh
export BATCH; Q=queue/$BATCH; L=$Q/usage.log; rm -f $Q/STOP $Q/RESUME
# a batch the 5-hour window stops is relaunched by tools/swarm/resume.sh once the window has room again (the loop's own
# batches excluded: the loop waits for the window itself). launch.sh is this exact launch, settings included.
if [[ ! "$BATCH" =~ ^loop[0-9] ]]; then
  { echo "#!/bin/bash"; echo "cd $HH"
    for v in NO_INTEGRATE INFILE DIAG HARNESS2 MODEL RUN_ONE FROM NOTE_FILE CHECK_LIMIT DEADLINE_MIN FIVE_CAP WORKER_FLAGS \
             BIGFUNC SIMILAR LEARNINGS GROW WORKER_TIMEOUT; do [ -n "${!v+x}" ] && printf 'export %s=%q\n' "$v" "${!v}"; done
    printf 'exec tools/swarm/run_batch3.sh %q %q %q\n' "$BATCH" "$P" "$CAP"; } > $Q/launch.sh; chmod +x $Q/launch.sh
fi
weekly() { $(command -v ~/bin/usage-gate || echo true) --brief 2>&1 | sed -n 's/.*weekly \([0-9]*\)%.*/\1/p'; }
five() { $(command -v ~/bin/usage-gate || echo true) --brief 2>&1 | sed -n 's/.*5-hour \([0-9]*\)%.*/\1/p'; }
echo "$(date -Is) start  $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L
# usage guard: every 2 minutes, log usage and set STOP once weekly >= CAP or the 5-hour window >= FIVE_CAP. Both caps
# are lowered by the work-week schedule (weekly_cap.py) once it is active; a schedule stop sets RESUME, so resume.sh
# relaunches the batch when the ramp or the window has room again.
( unread=0; while [ ! -f $Q/DONE ]; do w=$(weekly); echo "$(date -Is) usage  $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L
    cw=$(python3 tools/swarm/weekly_cap.py weekly "$CAP"); cf=$(python3 tools/swarm/weekly_cap.py five "${FIVE_CAP:-90}")
    if [ -z "$w" ]; then unread=$((unread+1)); [ $unread -ge 3 ] && { touch $Q/STOP; echo "$(date -Is) STOP meter unreadable 3x" >> $L; }; else unread=0; fi
    [ -n "$w" ] && [ "$w" -ge "$cw" ] && { touch $Q/STOP; [ "$cw" -lt "$CAP" ] && [ -f $Q/launch.sh ] && touch $Q/RESUME; echo "$(date -Is) STOP weekly ${w}% >= cap ${cw}%" >> $L; }
    f=$(five); [ -n "$f" ] && [ "$f" -ge "$cf" ] && { touch $Q/STOP; [ -f $Q/launch.sh ] && touch $Q/RESUME; echo "$(date -Is) STOP 5-hour ${f}% >= cap ${cf}%" >> $L; }
    sleep 120; done ) &
# retry anything that ended in an API error; skip real outcomes
# keyed func@seg: overlays share addresses, so the same name can sit in several segments
done_list=$(python3 -c "import json;print(' '.join(r['func']+'@'+str(r.get('segment')) for r in map(json.loads, open('$Q/results.jsonl')) if r['verified'] != 'ERROR'))" 2>/dev/null)
while read -r f seg rest; do [[ " $done_list " == *" $f@$seg "* ]] || echo "$f $seg"; done < $Q/functions.txt |
  xargs -P "$P" -L 1 bash -c '[ -f "queue/$BATCH/STOP" ] && exit 0; tools/swarm/${RUN_ONE:-run_one2.sh} "$0" "$1" > /dev/null 2>&1'
echo "$(date -Is) workers finished  $($(command -v ~/bin/usage-gate || echo true) --brief 2>&1)" >> $L
[ -n "$NO_INTEGRATE" ] || .venv/bin/python tools/swarm/integrate.py "$BATCH" >> $Q/integrate.log 2>&1
echo "$(date -Is) integrated: $(tail -1 $Q/integrate.log)" >> $L
touch $Q/DONE
tools/hh/refresh_dashboard.sh > /dev/null 2>&1
# only a batch that integrated itself commits, and only its own paths: a NO_INTEGRATE batch (the loop's, or one run
# beside it) committing `git add -A` swept the loop's unverified mid-cycle changes into HEAD (audit 2026-10-20 #1)
[ -n "$NO_INTEGRATE" ] || { git add -A matched src $Q > /dev/null 2>&1; git commit -q -m "Batch $BATCH: $(tail -1 $Q/integrate.log)
Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>" > /dev/null 2>&1; }
$(command -v ~/bin/ping-me || echo true) "Hybrid Heaven batch $BATCH finished" "$(BATCH=$BATCH python3 tools/swarm/summary.py | head -2 | tr '\n' ' ') $(grep -E 'start|finished' $L | sed -n 's/.*weekly \([0-9]*%\).*/\1/p' | tr '\n' ' ' | sed 's/ $//; s/ / -> /')" success > /dev/null 2>&1
exit; }
