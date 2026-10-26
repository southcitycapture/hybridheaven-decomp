"""Run decomp-permuter on near-miss worker attempts (CPU only, no model usage).

  permute.py [--min 0.8] [--min-aligned 0.95] [--minutes 15] [--jobs 2] [--parallel 3] [--list]

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
sys.path.insert(0, os.path.join(HH, "tools/hh")); import workdir
PERM = os.path.join(HH, "tools/decomp-permuter")
OUT = os.path.join(HH, "queue/permute")
BATCH = "permute"          # --out queue/NAME changes both (a sweep writes its own batch: tools/swarm/loop.py integrates it)
PY = os.path.join(HH, ".venv/bin/python")
CC = os.path.join(HH, "tools/ido/7.1/cc")

def score(func, seg, src):
    r = subprocess.run([PY, "tools/hh/try_func.py", func, src, "--seg", seg], capture_output=True, text=True)
    line = (r.stdout.strip().splitlines() or [""])[0]
    if line == "MATCH": return 1.0
    m = re.match(r"score (\d+)/(\d+)", line)
    return int(m.group(1)) / int(m.group(2)) if m else 0.0

def aligned_score(func, seg, src):
    """Similarity of the compiled attempt to the target as instruction sequences (difflib over opcodes), so one
    inserted or missing instruction costs one instruction, not everything after it (the positional score can
    read 12% for an attempt that is 94% right)."""
    import difflib, tempfile
    sys.path.insert(0, os.path.join(HH, "tools/hh")); import try_func as T
    try:
        off, size, vram, asm = T.find_func(func, None, seg)
        with tempfile.TemporaryDirectory() as td:
            T.compile_c(src, "7.1", "-O2", os.path.join(td, "f.o")); mine, _ = T.func_bytes(os.path.join(td, "f.o"), func)
    except (SystemExit, Exception): return 0.0
    orig = open(os.path.join(HH, "build/expanded.bin"), "rb").read()[off:off + size]
    def ops(b):
        w = [int.from_bytes(b[i:i + 4], "big") for i in range(0, len(b) - 3, 4)]
        return [(x >> 26, x & 0x3F if x >> 26 == 0 else (x >> 16) & 0x1F if x >> 26 == 1 else 0) for x in w]
    a, b = ops(mine), ops(orig)
    while a and a[-1] == (0, 0) and len(a) > len(b): a.pop()
    return difflib.SequenceMatcher(None, a, b, autojunk=False).ratio()

def candidates(min_score, batches=None, min_aligned=0.95):
    done = {tuple(p[:-2].split("/")[1:]) for p in glob.glob("matched/*/*.c")}       # (segment, func)
    tried = set()
    if os.path.exists(OUT + "/results.jsonl"):
        tried = {(json.loads(l)["segment"], json.loads(l)["func"]) for l in open(OUT + "/results.jsonl")}
    seen, out = set(), []
    for res in sorted(glob.glob("queue/*/results.jsonl"), key=os.path.getmtime, reverse=True):
        batch = res.split("/")[1]
        if batch in ("permute", "permsweep", BATCH) or (batches and batch not in batches): continue
        for l in open(res):
            r = json.loads(l)
            f, seg = r["func"], r["segment"]
            if r["verified"] != "FAIL" or (seg, f) in done or (seg, f) in tried or (seg, f) in seen: continue
            src = workdir.attempt(batch, f, seg)
            if not src: continue
            seen.add((seg, f)); out.append((f, seg, src))
    # near-misses by either measure: positional (the checker's score) or aligned (insertions cost one)
    with Pool(max(1, os.cpu_count() - 4)) as p:
        pos = p.starmap(score, out); ali = p.starmap(aligned_score, out)
    # the score passed on is the positional one: run_one treats 1.0 as "matches already" and skips permuting
    scored = [(sp, f, seg, src, sa) for (f, seg, src), sp, sa in zip(out, pos, ali) if sp >= min_score or sa >= min_aligned]
    return [c[:4] for c in sorted(scored, key=lambda c: (-max(c[0], c[4]), c[1]))]

def sweep_candidates():
    """Every unmatched function with a worker attempt, from its best attempt across queue/*/work by the aligned
    score the checker saved (.attempts/N.ali, 0-1000; as tools/swarm/run_one_from.sh picks it). Order: functions
    never permuted first, then by that score; functions in queue/rejected.jsonl last (the loop doesn't re-offer them).
    Returns (None, func, seg, src, aligned/1000) tuples: the positional start score is measured in the worker."""
    import csv
    segs = {}
    for r in csv.DictReader(open("queue/functions.csv")): segs.setdefault(r["func"], set()).add(r["segment"])
    done = {tuple(p[:-2].split("/")[1:]) for p in glob.glob("matched/*/*.c")}
    def keys(path):
        out = set()
        if os.path.exists(path):
            for l in open(path):
                try: r = json.loads(l); out.add((r["segment"], r["func"]))
                except (ValueError, KeyError): pass
        return out
    permuted, rejected, mine = keys("queue/permute/results.jsonl"), keys("queue/rejected.jsonl"), keys(OUT + "/results.jsonl")
    ran = {}
    best = {}
    for d in glob.glob("queue/*/work/*"):
        b, name = d.split("/")[1], d.split("/")[3]
        if b in ("permute", BATCH): continue
        if "@" in name: f, seg = name.split("@", 1)
        else:
            f = name; ss = segs.get(f, set())
            if len(ss) == 1: seg = next(iter(ss))
            else:                     # an old FUNC-only dir of a name several overlays share: its batch says which
                if b not in ran: ran[b] = keys("queue/%s/results.jsonl" % b)
                hit = [x for x in ss if (x, f) in ran[b]]
                if len(hit) != 1: continue
                seg = hit[0]
        if (seg, f) in done or (seg, f) in mine or seg not in segs.get(f, ()): continue
        for ali in glob.glob(d + "/.attempts/*.ali"):
            try: v = int(open(ali).read().split()[0])
            except (ValueError, IndexError, OSError): continue
            c = ali[:-4] + ".c"
            if v < 1000 and os.path.exists(c) and v > best.get((seg, f), (-1,))[0]: best[(seg, f)] = (v, c)
    order = sorted(best, key=lambda k: ((k in rejected), (k in permuted), -best[k][0], k))
    return [(None, f, seg, best[(seg, f)][1], best[(seg, f)][0] / 1000) for seg, f in order]

def wall_candidates(path):
    """Fresh classifier's register/schedule walls, closest first, exact saved source.

    Resume only this output batch. A prior permuter failure in a different batch
    is not a reason to silently omit one of the requested closest cases.
    """
    rows = [json.loads(line) for line in open(path)]
    tried = {(r['segment'], r['func']) for r in map(json.loads, open(OUT + '/results.jsonl'))} if os.path.exists(OUT + '/results.jsonl') else set()
    rows = [r for r in rows if r['class'] == 'registers_schedule' and r.get('attempt_source')
            and (r['seg'], r['func']) not in tried
            and not os.path.exists('matched/%s/%s.c' % (r['seg'], r['func']))]
    rows.sort(key=lambda r: (-r['diff_score'], -r.get('positional_score', 0), r['seg'], r['func']))
    return [(None, r['func'], r['seg'], r['attempt_source'], r['diff_score']) for r in rows]

def func_span(text, name):
    """(start, end) of the definition of `name` in C text (head through closing brace)."""
    # K&R definitions (`s32 f(arg0)\n s32 arg0;\n{`) have parameter declarations between `)` and `{`
    m = re.search(r"^[^\n;{}]*\b%s\s*\([^;{]*\)\s*(?:[A-Za-z_][\w \t\*\[\],]*;\s*)*\{" % re.escape(name), text, re.M)
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
    open(d + "/compile.sh", "w").write('#!/bin/bash\n"%s" -c -G 0 -non_shared -Xcpluscomm -mips2 -O2 "$1" -o "$3" && "%s" "%s/tools/hh/mulfix.py" "$3" > /dev/null\n' % (CC, PY, HH))
    os.chmod(d + "/compile.sh", 0o755)
    open(d + "/settings.toml", "w").write('func_name = "%s"\ncompiler_type = "ido"\n' % func)

_PROC = None

def _worker_init():
    """A pool worker killed by Pool.terminate (the driver crashing or exiting) takes its permuter group with it.
    Before this, every driver crash left the running permuters orphaned forever (186 were found running)."""
    def stop(*_):
        if _PROC is not None:
            try: os.killpg(_PROC.pid, signal.SIGKILL)
            except ProcessLookupError: pass
        os._exit(1)
    signal.signal(signal.SIGTERM, stop)

def run_one(args):
    """_run_one, but an exception becomes a FAIL record instead of crashing the whole pass."""
    try: return _run_one(args)
    except Exception as e:
        return dict(func=args[1], segment=args[2], model="decomp-permuter", verified="FAIL", start_score=round(args[0] or 0, 3),
                    seconds=0, checks=0, cost_usd_equiv=0.0, output_tokens=0, note="error: %r" % e)

def _run_one(args):
    global _PROC
    sc, func, seg, src, minutes, jobs = args[:6]
    d = os.path.join(HH, workdir.path(BATCH, func, seg))     # FUNC@SEG for names several segments share
    shutil.rmtree(d, ignore_errors=True)
    extra = {}
    if sc is None:
        # a sweep job: start from a copy of the attempt (often .attempts/N.c) beside the headers it includes
        os.makedirs(d, exist_ok=True); sd = os.path.dirname(os.path.abspath(src))
        if os.path.basename(sd) == ".attempts": sd = os.path.dirname(sd)
        for h in ("context.h", "known.h"):
            if os.path.exists(os.path.join(sd, h)): shutil.copy(os.path.join(sd, h), d)
        shutil.copy(src, d + "/start.c")
        extra = dict(start_from=os.path.relpath(src, HH), start_aligned=args[6])
        src = d + "/start.c"; sc = score(func, seg, src)
    if extra:
        r = _run_one2(sc, func, seg, src, minutes, jobs, d); r.update(extra); return r
    return _run_one2(sc, func, seg, src, minutes, jobs, d)

def _run_one2(sc, func, seg, src, minutes, jobs, d):
    global _PROC
    if sc == 1.0:          # an earlier "failure" that matches now (e.g. after a shared-header fix)
        os.makedirs(d, exist_ok=True); shutil.copy(src, d + "/attempt.c")
        for h in ("context.h", "known.h"):
            hp = os.path.join(os.path.dirname(os.path.abspath(src)), h)
            if os.path.exists(hp) and not os.path.exists(os.path.join(d, h)): shutil.copy(hp, d)
        return dict(func=func, segment=seg, model="decomp-permuter", verified="MATCH", start_score=1.0, seconds=0,
                    checks=0, cost_usd_equiv=0.0, output_tokens=0, note="already matched; no permuting needed")
    try: setup(func, seg, src, d)
    except Exception as e: return dict(func=func, segment=seg, verified="FAIL", note="setup failed: %s" % e, start_score=sc)
    t0 = time.time()
    # --stack-diffs: stack offsets count in the score. Without it a different frame size scored 0, the permuter
    # stopped on a "win" that the exact check then rejected (87 of 265 "did not survive" runs, 2026-10-21).
    dbg = subprocess.run([PY, PERM + "/permuter.py", d, "--debug", "--stack-diffs"], capture_output=True, text=True, cwd=d)
    m = re.search(r"base score = (\d+)", dbg.stdout + dbg.stderr)
    if m and m.group(1) == "0":
        # instructions already match; only an address (symbol/offset) is wrong, which permuting can't fix
        return dict(func=func, segment=seg, model="decomp-permuter", verified="FAIL", start_score=round(sc, 3),
                    seconds=0, checks=0, cost_usd_equiv=0.0, output_tokens=0, note="address-only mismatch: needs a model")
    # own process group, so a timeout also kills the permuter's -j helper processes (they used to be orphaned)
    proc = subprocess.Popen(["nice", "-n", "19", PY, PERM + "/permuter.py", d, "-j", str(jobs), "--stop-on-zero", "--best-only", "--stack-diffs"],
                            stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, start_new_session=True, cwd=d)
    _PROC = proc
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
    for h in ("context.h", "known.h"):   # the worker's C includes these; without them the exact check can't compile
        hp = os.path.join(os.path.dirname(os.path.abspath(src)), h)
        if os.path.exists(hp) and not os.path.exists(os.path.join(d, h)): shutil.copy(hp, d)
    return check_wins(rec, func, seg, src, d, wins)

def _diff_groups(diff):
    """(first new-file line index, old lines, new lines) for each run of -/+ lines in the permuter's diff.txt
    (a unified diff from its pretty-printed base to the winner)."""
    out, ln, cur = [], 0, None
    for l in diff.splitlines():
        m = re.match(r"@@ -\d+(?:,\d+)? \+(\d+)", l)
        if m: ln, cur = int(m.group(1)) - 1, None; continue
        if l.startswith(("---", "+++")) and cur is None and not ln: continue
        if l.startswith("-") or l.startswith("+"):
            if cur is None: cur = [ln, [], []]; out.append(cur)
            (cur[1] if l[0] == "-" else cur[2]).append(l[1:])
            if l[0] == "+": ln += 1
        else: cur = None; ln += 1
    return out

def splices(orig, diff, win, func):
    """Ways to put the permuter's winning function back into the worker's own C (which keeps its includes and
    declarations): the function alone, then the function plus the permuter's edits outside it (from its diff.txt).
    The permuter also rewrites file-scope declarations (e.g. a prototype's return type); splicing only the function
    lost those, and the exact check failed on a real win (2026-10-21)."""
    ws, os_ = func_span(win, func), func_span(orig, func)
    if not ws or not os_: return []
    new = orig[:os_[0]] + win[ws[0]:ws[1]] + orig[os_[1]:]
    out = [new]
    if not diff: return out
    f0, f1 = win[:ws[0]].count("\n"), win[:ws[1]].count("\n")         # the function's lines in the winner
    groups = [g for g in _diff_groups(diff) if not (f0 <= g[0] <= f1)]
    if not groups: return out
    fs = func_span(new, func); head, fn, tail = new[:fs[0]], new[fs[0]:fs[1]], new[fs[1]:]
    hl, tl, before = head.split("\n"), tail.split("\n"), []
    key = lambda x: re.sub(r"\s+", "", x)
    for _, old, rep_ in groups:
        for k, line in enumerate(old):          # each changed or deleted line must be the worker's own (not a header's)
            for lines in (hl, tl):
                hit = [n for n, x in enumerate(lines) if key(x) == key(line) and key(x)]
                if hit:
                    lines[hit[0]] = rep_[k] if len(old) == len(rep_) else "\0"; break
            else:
                return out
        if len(rep_) != len(old): before += rep_   # insertions (or uneven replacements) go just above the function
    head = "\n".join(x for x in hl if x != "\0"); tail = "\n".join(x for x in tl if x != "\0")
    out.append(head + ("\n".join(before) + "\n" if before else "") + fn + tail)
    return out

def check_wins(rec, func, seg, src, d, wins):
    """Exact-check each permuter win spliced into the worker's C; the first that matches becomes attempt.c."""
    orig = open(src).read()
    dst = os.path.join(d, "attempt.c")     # d is FUNC@SEG for shared names (was work/FUNC: crashed)
    tried = 0
    for w in wins:
        dt = os.path.join(os.path.dirname(w), "diff.txt")
        for new in splices(orig, open(dt).read() if os.path.exists(dt) else "", open(w).read(), func):
            tried += 1; open(dst, "w").write(new)
            if score(func, seg, dst) == 1.0:
                rec["verified"] = "MATCH"; rec.pop("note", None); return rec
    rec["verified"] = "FAIL"
    rec["note"] = "permuter win did not survive the exact check" if tried else "could not splice winner"
    return rec

WB = os.path.expanduser("~/work/tools-ext/wb-venv/bin/decomp-workbench")
FRIENDLY = {"allocation-mismatch", "schedule-mismatch", "commutative-order", "instruction-words-identical"}

def triage(args):
    """N64 Decomp Workbench verdict for a candidate attempt (tools/hh/wb_diag.sh), e.g. allocation-mismatch."""
    f, seg, src = args
    r = subprocess.run(["tools/hh/wb_diag.sh", f, seg, src], capture_output=True, text=True, timeout=300)
    m = re.search(r"^verdict=(\S+)", r.stdout, re.M)
    return m.group(1) if m else "unknown"

if __name__ == "__main__":
    ap = argparse.ArgumentParser()
    ap.add_argument("--min", type=float, default=0.8); ap.add_argument("--min-aligned", type=float, default=0.95)
    ap.add_argument("--list", action="store_true", help="only print the candidates"); ap.add_argument("--minutes", type=int, default=15)
    ap.add_argument("--jobs", type=int, default=2); ap.add_argument("--parallel", type=int, default=3)
    ap.add_argument("--limit", type=int, default=0); ap.add_argument("--batches", default="")
    ap.add_argument("--no-triage", action="store_true", help="don't classify with N64 Decomp Workbench")
    ap.add_argument("--out", default="queue/permute", help="batch directory for results.jsonl and work/ (queue/NAME)")
    ap.add_argument("--sweep", action="store_true", help="every unmatched function from its best attempt by .ali "
                    "(not just failed results), never-permuted first; resumes, skipping what --out already recorded")
    ap.add_argument("--walls", help="wall.py JSONL: permute only register/schedule walls, closest first, using the classified source")
    a = ap.parse_args()
    if a.walls:
        cpus = len(os.sched_getaffinity(0)) if hasattr(os, 'sched_getaffinity') else (os.cpu_count() or 2)
        if a.jobs < 1 or a.parallel < 1 or a.jobs * a.parallel > max(1, cpus // 2):
            ap.error('--walls requires positive --jobs/--parallel with their product at most half the available CPUs')
        if a.minutes < 1: ap.error('--minutes must be positive')
    OUT = os.path.join(HH, a.out.rstrip("/")); BATCH = os.path.basename(OUT)
    os.makedirs(OUT, exist_ok=True)
    if a.sweep or a.walls:
        cands = wall_candidates(a.walls) if a.walls else sweep_candidates(); a.no_triage = True
        if a.limit: cands = cands[:a.limit]
        print("%d unmatched functions with a scored attempt" % len(cands), flush=True)
        if a.list:
            for _, f, seg, src, al in cands: print("%.3f %s %s %s" % (al, f, seg, src))
            sys.exit()
        jobs = [(None, f, seg, src, a.minutes, a.jobs, al) for _, f, seg, src, al in cands]
        with Pool(a.parallel, initializer=_worker_init, maxtasksperchild=20) as p:
            for rec in p.imap_unordered(run_one, jobs):
                rec["batch"] = BATCH
                open(OUT + "/results.jsonl", "a").write(json.dumps(rec) + "\n")
                print("%s %s %s (aligned %.3f, positional %.3f, %ss) %s" % (rec["verified"], rec["func"], rec["segment"],
                      rec.get("start_aligned", 0), rec.get("start_score", 0), rec.get("seconds", "?"), rec.get("note", "")), flush=True)
        open(OUT + "/DONE", "w").write("sweep finished %s\n" % time.strftime("%Y-%m-%d %H:%M"))
        sys.exit()
    cands = candidates(a.min, set(a.batches.split(",")) if a.batches else None, a.min_aligned)
    if a.limit: cands = cands[:a.limit]
    print("%d near-misses (positional >= %.0f%% or aligned >= %.0f%%)" % (len(cands), 100 * a.min, 100 * a.min_aligned), flush=True)
    if a.list:
        for sc, f, seg, src in cands: print("%.3f %s %s %s" % (sc, f, seg, src))
        sys.exit()
    jobs = [(sc, f, seg, src, a.minutes, a.jobs) for sc, f, seg, src in cands]
    if not a.no_triage and os.path.exists(WB):
        # Triage by the workbench's verdict (queue/permute/TRIAGE.md: over 403 past runs the permuter won 68 % of
        # register-allocation / scheduling mismatches but 22 % of structure and 26 % of wrong-symbol ones). The
        # permuter-friendly kinds go first with twice the time; the rest get a short try (a model is the better bet).
        with Pool(a.parallel * 2) as p:
            verdicts = p.map(triage, [(f, seg, src) for sc, f, seg, src in cands])
        jobs = sorted(((sc, f, seg, src, (2 * a.minutes if v in FRIENDLY else max(3, a.minutes // 3)), a.jobs, v)
                       for (sc, f, seg, src), v in zip(cands, verdicts)), key=lambda j: (j[6] not in FRIENDLY, -j[0]))
        print("triage:", {v: verdicts.count(v) for v in set(verdicts)}, flush=True)
        jobs = [j[:6] for j in jobs]
    with Pool(a.parallel, initializer=_worker_init) as p:
        for rec in p.imap_unordered(run_one, jobs):
            open(OUT + "/results.jsonl", "a").write(json.dumps(rec) + "\n")
            print("%s %s (start %.0f%%, %ss) %s" % (rec["verified"], rec["func"], 100 * rec.get("start_score", 0),
                                                   rec.get("seconds", "?"), rec.get("note", "")), flush=True)
