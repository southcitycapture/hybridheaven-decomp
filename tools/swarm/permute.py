"""Run decomp-permuter on near-miss worker attempts (CPU only, no model usage).

  permute.py [--min 0.8] [--minutes 15] [--jobs 2] [--parallel 3]

Finds failed worker attempts whose current attempt.c scores at least --min (fraction of matching
instructions), sets up a permuter directory for each under queue/permute/work/<func>/, runs the
permuter at the lowest CPU priority until it finds an exact match or the time limit runs out, splices
the winning function back into the worker's C, and verifies it with the exact check. Verified wins are
written to queue/permute/results.jsonl in the same format as worker batches, so srcbuild/integrate.py
can add them.
"""
import argparse, glob, json, os, re, shutil, signal, subprocess, sys, time
from multiprocessing import Pool
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
PERM = os.path.join(HH, "tools/decomp-permuter")
OUT = os.path.join(HH, "queue/permute")
PY = os.path.join(HH, ".venv/bin/python")
CC = os.path.join(HH, "tools/ido/7.1/cc")

def score(func, seg, src):
    r = subprocess.run([PY, "tools/hh/try_func.py", func, src, "--seg", seg], capture_output=True, text=True)
    line = (r.stdout.strip().splitlines() or [""])[0]
    if line == "MATCH": return 1.0
    m = re.match(r"score (\d+)/(\d+)", line)
    return int(m.group(1)) / int(m.group(2)) if m else 0.0

def candidates(min_score, batches=None):
    done = {os.path.basename(p)[:-2] for p in glob.glob("matched/*/*.c")}
    tried = set()
    if os.path.exists(OUT + "/results.jsonl"):
        tried = {json.loads(l)["func"] for l in open(OUT + "/results.jsonl")}
    seen, out = set(), []
    for res in sorted(glob.glob("queue/*/results.jsonl"), key=os.path.getmtime, reverse=True):
        batch = res.split("/")[1]
        if batch == "permute" or (batches and batch not in batches): continue
        for l in open(res):
            r = json.loads(l)
            f, seg = r["func"], r["segment"]
            if r["verified"] != "FAIL" or f in done or f in tried or f in seen: continue
            src = "queue/%s/work/%s/attempt.c" % (batch, f)
            if not os.path.exists(src): continue
            seen.add(f); out.append((f, seg, src))
    scored = [(score(f, seg, src), f, seg, src) for f, seg, src in out]
    return sorted([c for c in scored if c[0] >= min_score], reverse=True)

def func_span(text, name):
    """(start, end) of the definition of `name` in C text (head through closing brace)."""
    m = re.search(r"^[^\n;{}]*\b%s\s*\([^;{]*\)\s*\{" % re.escape(name), text, re.M)
    if not m: return None
    i, depth = m.end(), 1
    while depth and i < len(text):
        depth += {"{": 1, "}": -1}.get(text[i], 0); i += 1
    return m.start(), i

def setup(func, seg, src, d):
    os.makedirs(d, exist_ok=True)
    work = os.path.dirname(os.path.abspath(src))
    pre = subprocess.run([CC, "-E", "-I", work, "-I", HH + "/include", src], capture_output=True, text=True).stdout
    base = "\n".join(l for l in pre.splitlines() if not l.startswith("#")) + "\n"
    open(d + "/base.c", "w").write(base)
    subprocess.run([PY, PERM + "/strip_other_fns.py", d + "/base.c", func], capture_output=True)
    asm = open(glob.glob("asm/nonmatchings/%s/*/%s.s" % (seg, func))[0]).read()
    open(d + "/target.s", "w").write('.include "macro.inc"\n.set noat\n.set noreorder\n.set gp=64\n.section .text\n' + asm)
    subprocess.run(["mips-linux-gnu-as", "-EB", "-march=vr4300", "-mabi=32", "-G", "0", "-I", HH + "/include",
                    "-o", d + "/target.o", d + "/target.s"], check=True)
    open(d + "/compile.sh", "w").write('#!/bin/bash\n"%s" -c -G 0 -non_shared -Xcpluscomm -mips2 -O2 "$1" -o "$3"\n' % CC)
    os.chmod(d + "/compile.sh", 0o755)
    open(d + "/settings.toml", "w").write('func_name = "%s"\ncompiler_type = "ido"\n' % func)

def run_one(args):
    sc, func, seg, src, minutes, jobs = args
    d = os.path.join(OUT, "work", func)
    shutil.rmtree(d, ignore_errors=True)
    if sc == 1.0:          # an earlier "failure" that matches now (e.g. after a shared-header fix)
        os.makedirs(d, exist_ok=True); shutil.copy(src, d + "/attempt.c")
        return dict(func=func, segment=seg, model="decomp-permuter", verified="MATCH", start_score=1.0, seconds=0,
                    checks=0, cost_usd_equiv=0.0, output_tokens=0, note="already matched; no permuting needed")
    try: setup(func, seg, src, d)
    except Exception as e: return dict(func=func, segment=seg, verified="FAIL", note="setup failed: %s" % e, start_score=sc)
    t0 = time.time()
    dbg = subprocess.run([PY, PERM + "/permuter.py", d, "--debug"], capture_output=True, text=True)
    m = re.search(r"base score = (\d+)", dbg.stdout + dbg.stderr)
    if m and m.group(1) == "0":
        # instructions already match; only an address (symbol/offset) is wrong, which permuting can't fix
        return dict(func=func, segment=seg, model="decomp-permuter", verified="FAIL", start_score=round(sc, 3),
                    seconds=0, checks=0, cost_usd_equiv=0.0, output_tokens=0, note="address-only mismatch: needs a model")
    # own process group, so a timeout also kills the permuter's -j helper processes (they used to be orphaned)
    proc = subprocess.Popen(["nice", "-n", "19", PY, PERM + "/permuter.py", d, "-j", str(jobs), "--stop-on-zero", "--best-only"],
                            stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, start_new_session=True)
    try: proc.wait(timeout=minutes * 60)
    except subprocess.TimeoutExpired: pass
    finally:
        try: os.killpg(proc.pid, signal.SIGKILL)
        except ProcessLookupError: pass
    wins = sorted(glob.glob(d + "/output-0-*/source.c"))
    rec = dict(func=func, segment=seg, model="decomp-permuter", start_score=round(sc, 3), seconds=int(time.time() - t0),
               checks=0, cost_usd_equiv=0.0, output_tokens=0)
    if not wins:
        best = sorted(glob.glob(d + "/output-*/source.c"), key=lambda p: int(p.split("output-")[1].split("-")[0]))
        rec.update(verified="FAIL", note="no exact match in %d min" % minutes, best=best[0] if best else None)
        return rec
    # splice the winning function into the worker's own C (keeps its includes and declarations)
    win = open(wins[0]).read(); orig = open(src).read()
    ws, os_ = func_span(win, func), func_span(orig, func)
    if not ws or not os_:
        rec.update(verified="FAIL", note="could not splice winner"); return rec
    new = orig[:os_[0]] + win[ws[0]:ws[1]] + orig[os_[1]:]
    dst = os.path.join(OUT, "work", func, "attempt.c"); open(dst, "w").write(new)
    for h in ("context.h", "known.h"):   # the worker's C includes these; without them the exact check can't compile
        if os.path.exists(os.path.join(os.path.dirname(src), h)): shutil.copy(os.path.join(os.path.dirname(src), h), d)
    rec["verified"] = "MATCH" if score(func, seg, dst) == 1.0 else "FAIL"
    if rec["verified"] == "FAIL": rec["note"] = "permuter win did not survive the exact check"
    return rec

if __name__ == "__main__":
    ap = argparse.ArgumentParser()
    ap.add_argument("--min", type=float, default=0.8); ap.add_argument("--minutes", type=int, default=15)
    ap.add_argument("--jobs", type=int, default=2); ap.add_argument("--parallel", type=int, default=3)
    ap.add_argument("--limit", type=int, default=0); ap.add_argument("--batches", default="")
    a = ap.parse_args()
    os.makedirs(OUT, exist_ok=True)
    cands = candidates(a.min, set(a.batches.split(",")) if a.batches else None)
    if a.limit: cands = cands[:a.limit]
    print("%d near-misses at >= %.0f%%" % (len(cands), 100 * a.min), flush=True)
    with Pool(a.parallel) as p:
        for rec in p.imap_unordered(run_one, [(sc, f, seg, src, a.minutes, a.jobs) for sc, f, seg, src in cands]):
            open(OUT + "/results.jsonl", "a").write(json.dumps(rec) + "\n")
            print("%s %s (start %.0f%%, %ss) %s" % (rec["verified"], rec["func"], 100 * rec.get("start_score", 0),
                                                   rec.get("seconds", "?"), rec.get("note", "")), flush=True)
