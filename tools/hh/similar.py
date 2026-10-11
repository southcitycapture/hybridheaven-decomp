"""Find already-matched functions that look like a target function, as worked examples for a worker.

  similar.py SEG FUNC [WORKDIR] [--n 3] [--min 0.45] [--exclude LISTFILE]

Each function's asm becomes a token stream: mnemonic, plus the small immediates/offsets (struct offsets and constants
are what make two near-copies recognisable), plus callee names; registers and labels are dropped. Candidates come from
the matched registry (matched/<seg>/<func>.c): a 3-gram Jaccard prefilter, then difflib's ratio on the token streams.
With WORKDIR, writes similar/N_<func>.s and similar/N_<func>.c for the best matches and prints a note for the prompt;
without, prints the scores.
"""
import argparse, difflib, glob, os, pickle, re, sys
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
INS = re.compile(r"^\s*/\* [0-9A-F]+ [0-9A-F]+ [0-9A-F]+ \*/\s+(\S+)\s*(.*)$")
IMM = re.compile(r"(-?0x[0-9A-Fa-f]+|-?\b\d+\b)")

def tokens(path):
    out = []
    for l in open(path):
        m = INS.match(l)
        if not m: continue
        op, args = m.group(1), m.group(2)
        if op in ("jal", "j") and "func_" in args: out.append(op + ":" + args.split()[-1]); continue
        if op.startswith("b") and ".L" in args: out.append(op); continue
        imms = [x for x in IMM.findall(re.sub(r"%(hi|lo)\([^)]*\)", "", args)) if abs(int(x, 0)) < 0x1000]
        out.append(op + (":" + ",".join(imms) if imms else ""))
    return out

def grams(t): return {tuple(t[i:i + 3]) for i in range(max(1, len(t) - 2))}

def asm_path(seg, func):
    hits = glob.glob("asm/nonmatchings/%s/*/%s.s" % (seg, func))
    return hits[0] if len(hits) == 1 else None

def index():
    """[(seg, func, tokens, grams)] for every registered function, cached against the registry's state."""
    reg = sorted(glob.glob("matched/*/*.c")); key = (len(reg), max(os.path.getmtime(p) for p in reg))
    cache = "build/similar_index.pkl"
    if os.path.exists(cache):
        k, idx = pickle.load(open(cache, "rb"))
        if k == key: return idx
    idx = []
    for p in reg:
        seg, func = p.split("/")[1], os.path.basename(p)[:-2]
        a = asm_path(seg, func)
        if a:
            t = tokens(a)
            if len(t) >= 6: idx.append((seg, func, t, grams(t)))
    os.makedirs("build", exist_ok=True); pickle.dump((key, idx), open(cache, "wb"))
    return idx

def find(seg, func, n=3, min_ratio=0.45, exclude=()):
    a = asm_path(seg, func)
    if not a: return []
    t = tokens(a); g = grams(t)
    pre = sorted(((len(g & cg) / len(g | cg), s, f, ct) for s, f, ct, cg in index()
                  if (s, f) != (seg, func) and f not in exclude and 0.4 < len(ct) / max(1, len(t)) < 2.5),
                 reverse=True)[:40]
    scored = sorted(((difflib.SequenceMatcher(None, t, ct, autojunk=False).ratio(), s, f) for j, s, f, ct in pre if j > 0.1),
                    reverse=True)
    return [x for x in scored if x[0] >= min_ratio][:n]

NOTE = """
## Similar functions that are already matched
`similar/` holds {k} already-matched function(s) whose assembly looks like this one ({scores}). Each comes as
`N_<name>.s` (its original assembly) and `N_<name>.c` (C that compiles to exactly that assembly). Compare their
assembly with `target.s`: where the instructions line up, the C usually lines up too (same struct offsets, same
loop shape, same calls). Reuse their structure and types; adapt names, offsets and constants to this function.
They're examples, not context: don't #include them, and use this function's own context.h declarations.
"""

if __name__ == "__main__":
    ap = argparse.ArgumentParser(); ap.add_argument("seg"); ap.add_argument("func"); ap.add_argument("workdir", nargs="?")
    ap.add_argument("--n", type=int, default=3); ap.add_argument("--min", type=float, default=0.45)
    ap.add_argument("--exclude", help="file of function names never to use as examples (e.g. a test set)")
    ap.add_argument("--twin", help="write the best look-alike's C, renamed to FUNC, to this file (exit 1 if none)")
    a = ap.parse_args()
    ex = set(open(a.exclude).read().split()) if a.exclude else set()
    best = find(a.seg, a.func, a.n, a.min, ex)
    if a.twin:
        if not best: sys.exit(1)
        r, s, f = best[0]
        c = open("matched/%s/%s.c" % (s, f)).read().replace(f, a.func)
        c = c.replace('#include "common.h"', '#include "context.h"')
        open(a.twin, "w").write("/* starting point: %s (%s), whose assembly is %.0f%% the same as this function's */\n" % (f, s, 100 * r) + c)
        sys.exit(0)
    if not a.workdir:
        for r, s, f in best: print("%.2f %s %s" % (r, s, f))
        sys.exit(0)
    if not best: sys.exit(0)
    d = os.path.join(a.workdir, "similar"); os.makedirs(d, exist_ok=True)
    for k, (r, s, f) in enumerate(best, 1):
        open(os.path.join(d, "%d_%s.s" % (k, f)), "w").write(open(asm_path(s, f)).read())
        open(os.path.join(d, "%d_%s.c" % (k, f)), "w").write(open("matched/%s/%s.c" % (s, f)).read())
    print(NOTE.format(k=len(best), scores=", ".join("%s %.0f%% alike" % (f, 100 * r) for r, s, f in best)))
