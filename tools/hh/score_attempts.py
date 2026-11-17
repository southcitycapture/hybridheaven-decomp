"""score_attempts.py: score every saved attempt of every unmatched function with the standalone checker, directly.

Worker claims can understate a saved attempt (11-17: two giants claimed 80% and unknown were 99.6% and 99.8% in their
saved files), and .attempts/N.c snapshots never got a score of their own. Each distinct attempt (by content) is copied
with its work dir's headers into a temp dir and checked with try_func.py. Results: build/attempt_scores.jsonl (one line
per attempt: seg, func, path, score, total, line) and a per-function best summary on stdout.

    score_attempts.py [--jobs 8] [--min-size 0]
"""
import argparse, glob, hashlib, json, os, re, shutil, subprocess, sys, tempfile
from concurrent.futures import ProcessPoolExecutor, as_completed
HH = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "../.."))
OUT = os.path.join(HH, "build", "attempt_scores.jsonl")
SCORE = re.compile(r"^score (\d+)/(\d+)")


def unmatched(min_size):
    rep = json.load(open(os.path.join(HH, "build/progress/report.json")))
    blk = {tuple(l.split()[:2]) for l in open(os.path.join(HH, "queue/link_blocklist.txt")) if len(l.split()) >= 2 and l[0] != "#"}
    out = {}
    for u in rep["units"]:
        seg = u["name"].split("/")[0]
        for f in u.get("functions", []):
            k = (seg, f["name"])
            if f.get("fuzzy_match_percent", 0) < 100 and k not in blk and int(f.get("size", 0)) >= min_size:
                out[k] = int(f.get("size", 0))
    return out


def attempts(seg, func):
    seen = {}
    for d in glob.glob(os.path.join(HH, "queue", "*", "work", func + "*")):
        base = os.path.basename(d)
        if base != func and not base.startswith(func + "@"):
            continue
        if "@" in base and base.split("@", 1)[1] != seg:
            continue
        for c in [os.path.join(d, n) for n in ("attempt.c", "attempt.final.c", "best_final.c")] + glob.glob(os.path.join(d, ".attempts", "*.c")):
            if not os.path.isfile(c):
                continue
            h = hashlib.sha1(open(c, "rb").read()).hexdigest()
            seen.setdefault(h, (c, d))
    return list(seen.values())


def score_one(job):
    seg, func, path, wd = job
    with tempfile.TemporaryDirectory() as td:
        for h in glob.glob(os.path.join(wd, "*.h")):
            shutil.copy(h, td)
        shutil.copy(path, os.path.join(td, "attempt.c"))
        try:
            r = subprocess.run([os.path.join(HH, ".venv/bin/python"), os.path.join(HH, "tools/hh/try_func.py"), func, "attempt.c", "--seg", seg],
                               cwd=td, capture_output=True, text=True, timeout=240)
            line = (r.stdout or r.stderr).splitlines()[0] if (r.stdout or r.stderr) else ""
        except subprocess.TimeoutExpired:
            line = "timeout"
    m = SCORE.match(line)
    s, t = (int(m.group(1)), int(m.group(2))) if m else ((1, 1) if line.startswith("MATCH") else (0, 0))
    return dict(seg=seg, func=func, path=os.path.relpath(path, HH), score=s, total=t, line=line[:200])


def main():
    ap = argparse.ArgumentParser(); ap.add_argument("--jobs", type=int, default=8); ap.add_argument("--min-size", type=int, default=0)
    a = ap.parse_args()
    fns = unmatched(a.min_size)
    jobs = [(seg, func, p, wd) for (seg, func) in fns for p, wd in attempts(seg, func)]
    print("%d functions, %d distinct attempts" % (len(fns), len(jobs)), flush=True)
    best = {}
    with open(OUT, "w") as fh, ProcessPoolExecutor(a.jobs) as ex:
        for i, fut in enumerate(as_completed([ex.submit(score_one, j) for j in jobs])):
            r = fut.result(); fh.write(json.dumps(r) + "\n")
            k = (r["seg"], r["func"]); frac = r["score"] / r["total"] if r["total"] else 0
            if frac > best.get(k, (0,))[0]: best[k] = (frac, r["path"], r["line"])
            if i % 2000 == 0: print("%d/%d scored" % (i, len(jobs)), flush=True)
    for lo in (1.0, 0.995, 0.98, 0.95, 0.90):
        ks = [k for k, v in best.items() if v[0] >= lo]
        print("best >= %5.1f%%: %3d functions, %4d KB" % (100 * lo, len(ks), sum(fns[k] for k in ks) // 1024))
    json.dump({"%s %s" % k: v for k, v in best.items()}, open(os.path.join(HH, "build", "attempt_best.json"), "w"), indent=0)


if __name__ == "__main__":
    main()
