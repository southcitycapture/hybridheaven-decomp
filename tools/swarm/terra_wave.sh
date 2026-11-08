#!/bin/bash
# terra_wave.sh BATCH PAR: a Terra (GPT-6.1 Terra max) wave for draining a ChatGPT usage window (11-04 plan: light
# Tue-Wed, drain Thu morning before the weekly reset, go hard after it, then Zach redeems a banked reset credit).
# Queue = leftovers Terra never tried, small first; within each size class the ones a strong Claude model already failed
# first (Terra cracks different functions: 10-26 head-to-head union 15/40 vs Opus 11). Opus/local lanes skip whatever
# Terra matches first (11-04: nearly every leftover was in an Opus or local list). Skips main's libultra
# range (>= 0x80026300, Sol Task 32). Runs PAR workers through lane_run.sh; stop with queue/BATCH/STOP.
cd "$(dirname "$0")/../.." || exit 1; . ./env.sh
B=${1:?usage: terra_wave.sh BATCH PAR}; P=${2:-4}; mkdir -p "queue/$B"
.venv/bin/python - "$B" <<'PY'
import csv, glob, json, os, sys
B = sys.argv[1]
reg = {(p.split("/")[1], os.path.basename(p)[:-2]) for p in glob.glob("matched/*/*.c")}
def results(pattern):
    out = {}
    for p in glob.glob(pattern):
        for l in open(p):
            try: r = json.loads(l); out.setdefault((r["segment"], r["func"]), []).append(r)
            except (ValueError, KeyError): pass
    return out
allr = results("queue/*/results.jsonl")
terra_n = {k: sum("terra" in (r.get("model") or "") for r in rs) for k, rs in allr.items()}
terra = {k for k, n in terra_n.items() if n}
if os.environ.get("RETRY"):   # second pass (11-08): functions Terra tried exactly once and failed, from their best attempt
    terra = {k for k, n in terra_n.items() if n != 1}
strong = {k for k, rs in allr.items() if any(r.get("verified") == "FAIL" and ("opus" in (r.get("model") or "") or "sonnet" in (r.get("model") or "")) for r in rs)}
held = set()   # only other Terra waves' unattempted entries; Opus/local lists skip whatever Terra matches first
for d in glob.glob("queue/terra*/functions.txt"):
    b = d.split("/")[1]
    if b == B or os.path.exists("queue/%s/DONE" % b) or os.path.exists("queue/%s/STOP" % b): continue
    for l in open(d):
        f = l.split()
        if len(f) >= 2 and (f[1], f[0]) not in terra: held.add((f[1], f[0]))
blk = {tuple(l.split()[:2]) for l in open("queue/link_blocklist.txt") if len(l.split()) >= 2 and l[0] != "#"}
rows = [r for r in csv.DictReader(open("queue/functions.csv"))]
pick = [r for r in rows if (r["segment"], r["func"]) not in reg | terra | held | blk
        and not (r["segment"] == "main" and int(r["func"][5:], 16) >= 0x80026300)]
pick.sort(key=lambda r: (int(r["size"]) >= 2048, (r["segment"], r["func"]) not in strong, int(r["difficulty"] or 0), int(r["size"])))
open("queue/%s/functions.txt" % B, "w").write("".join("%s %s\n" % (r["func"], r["segment"]) for r in pick))
print("%s: %d functions (%d >= 2 KB)" % (B, len(pick), sum(int(r["size"]) >= 2048 for r in pick)))
PY
[ -n "$DRY" ] && exit 0   # DRY=1: write the queue only
PAR=$P exec tools/swarm/lane_run.sh "$B" INNER=run_one_oc.sh OC_MODEL=openai/gpt-6.1-terra OC_VARIANT=max LEVERS=1 WALLNOTE=1 REGTRACE=1
