#!/bin/bash
# run_one_from.sh FUNC SEGMENT: run_one3.sh starting from an earlier attempt of this function (PREVIOUS).
#   FROM=best   the attempt with the best aligned score across all batches (a longer-leash retry of a near miss)
#   FROM=match  an attempt that matched on its own but was rejected in its file (repair it to fit the file)
# Earlier attempts are found in queue/*/work/FUNC@SEG (and old FUNC-only dirs); archived batches aren't searched.
{ # whole script in one block: bash parses it before running, so editing this file cannot break live runs
FUNC=$1; SEG=$2; HH=${HH_ROOT:-$(cd "$(dirname "$0")/../.." && pwd)}; cd "$HH"
PREVIOUS=$("$HH/.venv/bin/python" - "$FUNC" "$SEG" "${FROM:-best}" "${BATCH:-}" <<'PY'
import glob, json, os, sys
func, seg, mode, me = sys.argv[1:5]
def seg_ok(d):
    """An old FUNC-only work dir counts only if its batch ran FUNC in this segment (overlays share names)."""
    if "@" in d: return True
    r = "queue/%s/results.jsonl" % d.split("/")[1]
    return os.path.exists(r) and any('"%s"' % func in l and '"segment": "%s"' % seg in l for l in open(r))
dirs = [d for d in glob.glob("queue/*/work/%s@%s" % (func, seg)) + glob.glob("queue/*/work/%s" % func)
        if d.split("/")[1] != me and seg_ok(d)]
best = (-1, None)
for d in dirs:
    if mode == "match":
        b = d.split("/")[1]; r = "queue/%s/results.jsonl" % b
        ok = os.path.exists(r) and any('"MATCH"' in l and '"%s"' % func in l and '"%s"' % seg in l for l in open(r))
        if ok and os.path.exists(d + "/attempt.c"):
            best = max(best, (os.path.getmtime(d + "/attempt.c"), d + "/attempt.c"))
    else:
        for ali in glob.glob(d + "/.attempts/*.ali"):
            try: v = int(open(ali).read().split()[0])
            except (ValueError, IndexError, OSError): continue
            c = ali[:-4] + ".c"
            if os.path.exists(c): best = max(best, (v, c))
print(os.path.abspath(best[1]) if best[1] else "")
PY
)
export PREVIOUS
if [ -z "$NOTE_FILE" ]; then [ "${FROM:-best}" = match ] && NOTE_FILE=fix_note.md || NOTE_FILE=retry_note.md; fi; export NOTE_FILE
exec "$HH/tools/swarm/${INNER:-run_one3.sh}" "$FUNC" "$SEG"   # INNER=run_one_oc.sh: the same start for an OpenCode model
exit; }
