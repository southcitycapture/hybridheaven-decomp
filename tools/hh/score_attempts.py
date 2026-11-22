"""score_attempts.py: score every saved attempt of every unmatched function with the standalone checker, directly.

Worker claims can understate a saved attempt (11-17: two giants claimed 80% and unknown were 99.6% and 99.8% in their
saved files), and .attempts/N.c snapshots never got a score of their own. Each distinct attempt (by content) is copied
with its work dir's headers into a temp dir and checked with try_func.py. Results: build/attempt_scores.jsonl (one line
per attempt: seg, func, path, sha1, score, total, shape, aligned, line) and a per-function best summary on stdout.

Tiers use the aligned (shape) similarity, not the positional score: try_func's positional figure compares instruction N
with instruction N, so one early inserted instruction makes a nearly-done attempt look far. `shape` is
diagnose.shape_similarity: difflib over the instructions with register allocation, addresses and branch offsets
blinded. near >= 90%, partial 50-90%, far < 50% (none = no saved attempt).

build/attempt_best.json: {"SEG FUNC": [positional, path, line, shape, shape_path, tier]} (the first three as before).

    score_attempts.py [--jobs 8] [--min-size 0] [--queue-root DIR] [--rescore]
    score_attempts.py --report         tiers from the saved attempt_scores.jsonl, old (positional) vs new (aligned)
"""
import argparse, collections, glob, hashlib, json, os, re, shutil, subprocess, sys, tempfile
from concurrent.futures import ProcessPoolExecutor, as_completed
HH = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "../.."))
OUT = os.path.join(HH, "build", "attempt_scores.jsonl")
SCORE = re.compile(r"^score (\d+)/(\d+)")
TIERS = (("near", 0.90), ("partial", 0.50), ("far", 0.0))


def tier(frac):
    """near >= 0.90, partial 0.50-0.90, far < 0.50; None (no attempt) is "none"."""
    if frac is None: return "none"
    return next(n for n, lo in TIERS if frac >= lo)


def unmatched(min_size):
    rep = json.load(open(os.path.join(HH, "build/progress/report.json")))
    blk = {tuple(l.split()[:2]) for l in open(os.path.join(HH, "queue/link_blocklist.txt")) if len(l.split()) >= 2 and l[0] != "#"}
    sys.path.insert(0, os.path.join(HH, "tools/hh")); import not_c
    blk |= not_c.keys()                       # original assembly (queue/not_c.tsv): nothing to score
    out = {}
    for u in rep["units"]:
        seg = u["name"].split("/")[0]
        for f in u.get("functions", []):
            k = (seg, f["name"])
            if f.get("fuzzy_match_percent", 0) < 100 and k not in blk and int(f.get("size", 0)) >= min_size:
                out[k] = int(f.get("size", 0))
    return out


def attempts(seg, func, root=HH):
    """Distinct saved attempts (by content) of one function under ROOT/queue/*/work: [(path, work dir, sha1)]."""
    seen = {}
    for d in glob.glob(os.path.join(root, "queue", "*", "work", func + "*")):
        base = os.path.basename(d)
        if base != func and not base.startswith(func + "@"):
            continue
        if "@" in base and base.split("@", 1)[1] != seg:
            continue
        for c in [os.path.join(d, n) for n in ("attempt.c", "attempt.final.c", "best_final.c")] + glob.glob(os.path.join(d, ".attempts", "*.c")):
            if not os.path.isfile(c):
                continue
            h = hashlib.sha1(open(c, "rb").read()).hexdigest()
            seen.setdefault(h, (c, d, h))
    return list(seen.values())


def score_one(job):
    seg, func, path, wd, sha, root = job
    metrics = {}
    with tempfile.TemporaryDirectory() as td:
        for h in glob.glob(os.path.join(wd, "*.h")):
            shutil.copy(h, td)
        shutil.copy(path, os.path.join(td, "attempt.c"))
        try:
            r = subprocess.run([os.path.join(HH, ".venv/bin/python"), os.path.join(HH, "tools/hh/try_func.py"), func, "attempt.c", "--seg", seg,
                                "--metrics-out", "metrics.json"], cwd=td, capture_output=True, text=True, timeout=240)
            line = (r.stdout or r.stderr).splitlines()[0] if (r.stdout or r.stderr) else ""
            if os.path.exists(os.path.join(td, "metrics.json")): metrics = json.load(open(os.path.join(td, "metrics.json")))
        except subprocess.TimeoutExpired:
            line = "timeout"
    m = SCORE.match(line)
    s, t = (int(m.group(1)), int(m.group(2))) if m else ((1, 1) if line.startswith("MATCH") else (0, 0))
    full = s == t and t > 0 and line.startswith("MATCH")
    return dict(seg=seg, func=func, path=os.path.relpath(path, root), sha1=sha, score=s, total=t,
                shape=1.0 if full else round(metrics.get("shape", 0.0), 4),
                aligned=1.0 if full else round(metrics.get("aligned", 0.0), 4), line=line[:200])


def best_of(rows, fns):
    """Per function: positional best (frac, path, line) and shape best (frac, path), from attempt_scores rows."""
    best = {}
    for r in rows:
        k = (r["seg"], r["func"])
        if k not in fns: continue
        frac = r["score"] / r["total"] if r["total"] else 0.0
        b = best.setdefault(k, dict(pos=(-1.0, None, ""), shape=(-1.0, None)))
        if frac > b["pos"][0]: b["pos"] = (frac, r["path"], r["line"])
        if r.get("shape") is not None and r["shape"] > b["shape"][0]: b["shape"] = (r["shape"], r["path"])
    return best


def tier_table(best, fns):
    """{tier: (functions, bytes)} for the old (positional) and new (aligned) measure, plus the movement counts."""
    old, new, move = collections.Counter(), collections.Counter(), collections.Counter()
    oldb, newb = collections.Counter(), collections.Counter()
    for k, size in fns.items():
        b = best.get(k)
        to = tier(b["pos"][0] if b and b["pos"][1] else None)
        tn = tier(b["shape"][0] if b and b["shape"][1] else None)
        old[to] += 1; oldb[to] += size; new[tn] += 1; newb[tn] += size; move[(to, tn)] += 1
    return old, oldb, new, newb, move


def report(best, fns, out=print):
    old, oldb, new, newb, move = tier_table(best, fns)
    out("tier      positional (old)        aligned (new)")
    for t in ("near", "partial", "far", "none"):
        out("%-8s %4d fn %5.1f KB   ->   %4d fn %5.1f KB" % (t, old[t], oldb[t] / 1024, new[t], newb[t] / 1024))
    mv = ", ".join("%s->%s %d" % (a, b, n) for (a, b), n in sorted(move.items()) if a != b)
    out("moves: " + (mv or "none"))


def write_best(best, fns, path):
    out = {}
    for k, b in sorted(best.items()):
        pos, shape = b["pos"], b["shape"]
        out["%s %s" % k] = [max(pos[0], 0.0), pos[1], pos[2], max(shape[0], 0.0), shape[1],
                            tier(shape[0] if shape[1] else None)]
    json.dump(out, open(path, "w"), indent=0)


def load_rows(path=OUT):
    if not os.path.exists(path): return []
    return [json.loads(l) for l in open(path) if l.strip()]


def main():
    ap = argparse.ArgumentParser(); ap.add_argument("--jobs", type=int, default=8); ap.add_argument("--min-size", type=int, default=0)
    ap.add_argument("--queue-root", default=HH, help="repository whose queue/*/work holds the attempts (read only)")
    ap.add_argument("--rescore", action="store_true", help="score every attempt again (default: reuse rows with the same "
                    "seg, func and sha1 that already carry a shape figure)")
    ap.add_argument("--report", action="store_true", help="only print the tiers from the saved attempt_scores.jsonl")
    a = ap.parse_args()
    fns = unmatched(a.min_size)
    if a.report:
        report(best_of(load_rows(), fns), fns); return
    cache = {} if a.rescore else {(r["seg"], r["func"], r["sha1"]): r for r in load_rows() if r.get("sha1") and "shape" in r}
    jobs, rows = [], []
    for (seg, func) in fns:
        for p, wd, h in attempts(seg, func, a.queue_root):
            r = cache.get((seg, func, h))
            if r: rows.append(dict(r, path=os.path.relpath(p, a.queue_root)))
            else: jobs.append((seg, func, p, wd, h, a.queue_root))
    print("%d functions, %d distinct attempts (%d cached)" % (len(fns), len(jobs) + len(rows), len(rows)), flush=True)
    tmp = OUT + ".tmp"
    with open(tmp, "w") as fh, ProcessPoolExecutor(a.jobs) as ex:
        for r in rows: fh.write(json.dumps(r) + "\n")
        for i, fut in enumerate(as_completed([ex.submit(score_one, j) for j in jobs])):
            r = fut.result(); fh.write(json.dumps(r) + "\n"); fh.flush(); rows.append(r)
            if i % 500 == 0: print("%d/%d scored" % (i, len(jobs)), flush=True)
    os.replace(tmp, OUT)
    best = best_of(rows, fns)
    for lo in (1.0, 0.995, 0.98, 0.95, 0.90):
        ks = [k for k, v in best.items() if v["pos"][0] >= lo]
        print("positional best >= %5.1f%%: %3d functions, %4d KB" % (100 * lo, len(ks), sum(fns[k] for k in ks) // 1024))
    report(best, fns)
    write_best(best, fns, os.path.join(HH, "build", "attempt_best.json"))


if __name__ == "__main__":
    main()
