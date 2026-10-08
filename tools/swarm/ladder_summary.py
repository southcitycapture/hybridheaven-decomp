"""Summarize an escalation-ladder experiment: matches and cost per stage, plus usage readings."""
import json, sys, os
e = sys.argv[1]
def load(b):
    p = "queue/%s/results.jsonl" % b
    return [json.loads(l) for l in open(p)] if os.path.exists(p) else []
funcs = [l.split()[0] for l in open("queue/%s/functions.txt" % e)]
H = {r["func"]: r for r in load(e + "_h") if r["verified"] != "ERROR"}
S = {r["func"]: r for r in load(e + "_s") if r["verified"] != "ERROR"}
P = {r["func"]: r for r in load("permute") if r["func"] in funcs}
h = [f for f in funcs if H.get(f, {}).get("verified") == "MATCH"]
p = [f for f in funcs if f not in h and P.get(f, {}).get("verified") == "MATCH"]
s = [f for f in funcs if f not in h and f not in p and S.get(f, {}).get("verified") == "MATCH"]
ch = sum(r.get("cost_usd_equiv") or 0 for r in H.values()); cs = sum(r.get("cost_usd_equiv") or 0 for r in S.values())
print("%d functions: Haiku %d, +permuter %d, +Sonnet %d -> %d matched (%.0f%%)" % (len(funcs), len(h), len(p), len(s),
      len(h) + len(p) + len(s), 100 * (len(h) + len(p) + len(s)) / len(funcs)))
print("cost: Haiku $%.2f (%d runs), Sonnet $%.2f (%d runs), permuter $0" % (ch, len(H), cs, len(S)))
if s: print("Sonnet: $%.3f per Sonnet match, %d/%d of its runs matched" % (cs / len(s), len(s), len(S)))
print(open("queue/%s/ladder.log" % e).read().strip() if os.path.exists("queue/%s/ladder.log" % e) else "")
