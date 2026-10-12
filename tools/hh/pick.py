"""Choose what to send agents next: rank unmatched functions by expected matched bytes per dollar.

  pick.py OUT_BATCH [-n N] [--kind fresh|twin|all] [--max-diff D] [--min-diff D] [--max-tries K] [--model haiku|sonnet]
                     [--allow-switch]
      writes queue/OUT_BATCH/functions.txt ("func segment" lines, best first) and queue/OUT_BATCH/PICK.md
  pick.py --stats            print the measured success and cost model only

Value of one agent attempt on a function:
  payoff  = its own bytes + its unmatched same-shape copies' bytes x the propagation rate
            (propagate.py copies a new match onto them for free)
  P       = measured match rate of the chosen model (default Haiku) for its difficulty band and loop / no loop
            (cloud_results.jsonl included), x 0.6 per earlier failed attempt on this code by any model
  cost    = that model's measured mean $ per attempt for the band
Skipped: jump-table functions (workers may not write `switch`; --allow-switch allows them in main) and functions
using instructions C can't produce (tools/hh/features.py).
  score   = P x payoff / cost       (expected matched bytes per dollar)
Kinds:
  fresh   no member of its `fp` group is matched yet: one representative per group, from the segment with the
          most matched code nearby (a richer context.h)
  twin    a same-shape function is matched but propagation couldn't map it (struct offsets, clashes): a worker
          started from the twin's C (prep2.sh TWIN, on by default) does much better than from scratch (exp8: 77%)
Skips functions in library files and ones with no C file. Re-measures everything on each run.
"""
import collections, csv, glob, json, os, sys
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
_argv = sys.argv; sys.argv = ["srcbuild.py", "none"]
sys.path.insert(0, "tools/hh"); import srcbuild as S
sys.argv = _argv
BAND = 25
TWIN_P = 0.77          # exp8: start from a >=90% twin's C
FAIL_DECAY = 0.6

def opt(name, default, cast=str):
    return cast(sys.argv[sys.argv.index(name) + 1]) if name in sys.argv else default

def load():
    rows = list(csv.DictReader(open("queue/functions.csv")))
    by = {(r["segment"], r["func"]): r for r in rows}
    reg = set(S.registry())
    return rows, by, reg

def attempts():
    """Every model attempt: (seg, func, model, ok, cost). Wins-only logs (cloud batches, whose failures are in
    cloud_results.jsonl) are skipped; cloud_results.jsonl rows are read with stage s = Sonnet, h* = Haiku."""
    out = []
    for res in glob.glob("queue/*/results.jsonl"):
        rs = []
        for l in open(res):
            try: rs.append(json.loads(l))
            except ValueError: pass
        if len(rs) >= 10 and not any(r.get("verified") == "FAIL" for r in rs): continue
        for r in rs:
            m = r.get("model", "")
            if "no model" in m or "permuter" in m or r.get("verified") == "ERROR": continue
            out.append((r.get("segment"), r.get("func"), m, r.get("verified") in ("MATCH", "ALONE"),
                        float(r.get("cost_usd_equiv") or 0) or None))
    for res in glob.glob("queue/*/cloud_results.jsonl"):
        for l in open(res):
            try: r = json.loads(l)
            except ValueError: continue
            m = "claude-sonnet (cloud)" if str(r.get("stage", "")).startswith("s") else "claude-haiku (cloud)"
            out.append((r.get("segment"), r.get("func"), m, r.get("verified") in ("MATCH", "ALONE"),
                        float(r.get("cost_usd") or 0) or None))
    return out

def model_stats(by, feats, model_filter="haiku"):
    """P(match) per (difficulty band, has loop), shrunk toward the band's rate; mean $ per try per band, for the
    model the batch will use; and failed attempts per fp (any model)."""
    att, win = collections.Counter(), collections.Counter()
    cost, ncost = collections.Counter(), collections.Counter()
    fails = collections.Counter()
    for seg, func, m, ok, c in attempts():
        k = (seg, func)
        if k not in by: continue
        if not ok: fails[by[k]["fp"]] += 1
        if model_filter and model_filter not in m: continue
        b = min(int(by[k]["difficulty"]) // BAND, 12); lp = bool(feats.get(k, {}).get("loop"))
        att[(b, lp)] += 1; win[(b, lp)] += ok; att[b] += 1; win[b] += ok
        if c: cost[b] += c; ncost[b] += 1
    allc = sum(cost.values()) / max(1, sum(ncost.values()))
    stats = {}
    for b in range(13):
        pb = (win[b] + 1) / (att[b] + 2)
        c = cost[b] / ncost[b] if ncost[b] >= 5 else allc * (1 + b * 0.5)
        for lp in (False, True):
            a, w = att[(b, lp)], win[(b, lp)]
            stats[(b, lp)] = (a, w, (w + 5 * pb) / (a + 5), c)       # 5 pseudo-tries at the band rate
    return stats, fails

def prop_rate():
    """Share of propagation candidates that integrated in the latest full propagate run."""
    import re
    best = None
    for p in sorted(glob.glob("queue/prop*/summary.txt"), key=os.path.getmtime):
        m = re.match(r"(\d+) copies, \d+ match alone, (\d+) match in their files", open(p).read())
        if m and int(m.group(1)) >= 1000: best = int(m.group(2)) / int(m.group(1))
    return best or 0.8

if __name__ == "__main__":
    rows, by, reg = load()
    import features as F
    feats = F.features()
    stats, fails = model_stats(by, feats, opt("--model", "haiku"))
    pr = prop_rate()
    if "--stats" in sys.argv:
        print("model %s; P per difficulty band, without / with loops" % opt("--model", "haiku"))
        print("band        tries  wins     P   | tries  wins     P  | $/try")
        for b in range(13):
            a0, w0, p0, c = stats[(b, False)]; a1, w1, p1, _ = stats[(b, True)]
            print("%3d-%3d   %6d %5d  %4.0f%% | %5d %5d  %4.0f%% | %.4f" % (b * BAND, b * BAND + BAND - 1, a0, w0, 100 * p0, a1, w1, 100 * p1, c))
        print("propagation rate %.0f%%" % (100 * pr)); sys.exit()
    OUT = "queue/" + sys.argv[1]; n = opt("-n", 200, int); kind = opt("--kind", "all")
    lo, hi, maxtries = opt("--min-diff", 0, int), opt("--max-diff", 10**9, int), opt("--max-tries", 3, int)
    groups = collections.defaultdict(list)
    for r in rows: groups[r["fp"]].append(r)
    # matched bytes per (segment, C file): a representative there gets a fuller context.h
    near = collections.Counter()
    for (seg, f) in reg:
        r = by.get((seg, f))
        if r: near[(seg, r["file"])] += int(r["size"])
    allow_jt = "--allow-switch" in sys.argv          # workers are told not to write `switch` (no overlay jtbls yet)
    def buildable(r):
        f = feats.get((r["segment"], r["func"]), {})
        if f.get("nonc") or (f.get("jtbl") and not (allow_jt and r["segment"] == "main")): return False
        return (r["segment"], r["file"]) not in S.LIBFILES and S.file_of(r["segment"], r["func"])
    picks = []
    for fp, g in groups.items():
        todo = [r for r in g if (r["segment"], r["func"]) not in reg]
        if not todo: continue
        d = int(todo[0]["difficulty"])
        if not lo <= d <= hi or fails[fp] > maxtries: continue
        b = min(d // BAND, 12)
        _, _, p, c = stats[(b, bool(feats.get((todo[0]["segment"], todo[0]["func"]), {}).get("loop")))]
        if len(todo) < len(g):                                  # a twin is matched: one pick per unmatched copy
            if kind not in ("twin", "all"): continue
            for r in todo:
                if not buildable(r): continue
                pay = int(r["size"])
                picks.append((TWIN_P * pay / c, "twin", r, pay, TWIN_P, c, 1))
        else:
            if kind not in ("fresh", "all"): continue
            cands = [r for r in todo if buildable(r)]
            if not cands: continue
            rep = max(cands, key=lambda r: (near[(r["segment"], r["file"])], r["segment"] == "main"))
            pay = int(rep["size"]) + pr * sum(int(r["size"]) for r in todo if r is not rep)
            pp = p * FAIL_DECAY ** fails[fp]
            picks.append((pp * pay / c, "fresh", rep, pay, pp, c, len(todo)))
    picks.sort(key=lambda x: -x[0])
    chosen = picks[:n]
    os.makedirs(OUT, exist_ok=True)
    with open(OUT + "/functions.txt", "w") as fh:
        for _, _, r, *_ in chosen: fh.write("%s %s\n" % (r["func"], r["segment"]))
    exp = sum(x[4] * x[3] for x in chosen); spend = sum(x[5] for x in chosen)
    lines = ["# %s: %d picks (%s)" % (sys.argv[1], len(chosen), " ".join(sys.argv[2:]) or "defaults"), "",
             "Expected: about **%.0f bytes** matched (incl. propagated copies) for about **$%.2f** of API-equivalent "
             "spend (%.0f bytes/$). Propagation rate used: %.0f%%." % (exp, spend, exp / max(spend, 1e-9), 100 * pr), "",
             "| # | func | segment | kind | difficulty | copies | payoff bytes | P | $/try | bytes/$ |",
             "|---|---|---|---|---|---|---|---|---|---|"]
    for i, (sc, k, r, pay, pp, c, cp) in enumerate(chosen[:60], 1):
        lines.append("| %d | %s | %s | %s | %s | %d | %.0f | %.0f%% | %.4f | %.0f |" % (
            i, r["func"], r["segment"], k, r["difficulty"], cp, pay, 100 * pp, c, sc))
    if len(chosen) > 60: lines.append("\n(%d more in functions.txt)" % (len(chosen) - 60))
    open(OUT + "/PICK.md", "w").write("\n".join(lines) + "\n")
    print("\n".join(lines[:3])); print("wrote %s/functions.txt and PICK.md" % OUT)
    tot = collections.Counter(k for _, k, *_ in picks)
    print("candidates: %d fresh groups, %d twin copies" % (tot["fresh"], tot["twin"]))
