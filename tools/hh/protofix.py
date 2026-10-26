"""Repair guessed declarations of still-unmatched functions, so workers aren't handed impossible prototypes.

  protofix.py [--apply] [--seg SEG]          log in queue/protofix/{protofix.jsonl,summary.txt}

A matched function that calls an unmatched one declares it with a guess, often `extern void f(void);`. That
declaration then sits in the file's context.h and workers are told to use it as is, but the target asm reads
$a0/$a1, so no C can match. (Before this tool: 400+ unmatched functions with too-few-argument prototypes in their
own context.h; 171 of them had burned 473 attempts with no match.)

For every C file, each declaration in a matched snippet of a function that is NOT matched anywhere is checked
against the asm (tools/hh/features.py):
  - fewer parameters than the asm reads ($a0-$a3)           -> `RET f();`  (old-style: any arguments)
  - declared void but some caller in the file reads $v0 after calling it -> `s32 f();`
Old-style declarations compile calls the same way for int and pointer arguments. Each file is rebuilt with every
C function still matching and its .text the same size (srcbuild.settle); if the whole set breaks something,
the edits are tried one name at a time. --apply writes the rewritten snippets to matched/.
"""
import collections, json, os, re, sys, tempfile
from multiprocessing import Pool
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
_argv = sys.argv; sys.argv = ["srcbuild.py", "none"]
sys.path.insert(0, "tools/hh"); import srcbuild as S
sys.argv = _argv
import features as F
FEATS = F.features()
SEGS = collections.defaultdict(list)
for (seg, n) in FEATS: SEGS[n].append(seg)

def asm_feat(name, seg):
    """Features of the function a call from `seg` to `name` reaches: same segment, else main, else the only one."""
    for s in (seg, "main"):
        if (s, name) in FEATS: return FEATS[(s, name)]
    return FEATS[(SEGS[name][0], name)] if len(SEGS[name]) == 1 else None

def arity(decl):
    m = re.search(r"\(([^()]*)\)\s*;", decl)
    if not m: return None
    a = m.group(1).strip()
    if a == "": return None                                # already old-style
    if a == "void": return 0
    if "..." in a or re.search(r"\b(f32|f64|float|double)\b", a): return None
    return a.count(",") + 1

def ret_type(decl):
    m = re.match(r"\s*(?:extern\s+)?(.*?)\b(func_[0-9A-F]{8})\s*\(", decl)
    return m.group(1).strip() if m else None

def plan(seg, cf, snips, reg_names):
    """name -> new declaration line, for guessed declarations that contradict the asm."""
    callers_v0 = set()
    for n in snips:
        callers_v0 |= set(FEATS.get((seg, n), {}).get("v0", []))
    for e in S.entries(seg, cf):                           # unmatched callers in this file count too
        callers_v0 |= set(FEATS.get((seg, e[0]), {}).get("v0", []))
    fixes = {}
    for n, t in snips.items():
        depth = 0
        for l in t.splitlines():
            name = S.decl_name(l, depth); depth += l.count("{") - l.count("}")
            if not name or not name.startswith("func_") or name in reg_names or name in fixes: continue
            f = asm_feat(name, seg)
            if not f: continue
            rt, ar = ret_type(l), arity(l)
            if rt is None: continue
            new_rt = "s32" if rt == "void" and name in callers_v0 else rt
            if (ar is not None and f["args"] > ar) or new_rt != rt:
                fixes[name] = "extern %s %s();" % (new_rt, name)
    return fixes

def rewrite(text, fixes):
    lines, depth = text.splitlines(), 0
    for i, l in enumerate(lines):
        n = S.decl_name(l, depth); depth += l.count("{") - l.count("}")
        if n in fixes: lines[i] = fixes[n]
    return "\n".join(lines) + "\n"

def ok(seg, cf, snips):
    with tempfile.TemporaryDirectory() as td:
        kept, rej, text, problem = S.trial_snippets(seg, cf, snips, td)
    return not rej and problem is None and set(kept) == set(snips)

def one_file(args):
    (seg, cf), snips, reg_names = args
    present = S.defined_functions(open('src/%s/%s.c' % (seg, cf)).read())
    snips = {n: t for n, t in snips.items() if n in present}
    fixes = plan(seg, cf, snips, reg_names)
    if not fixes: return seg, cf, {}, {}, []
    new = {n: rewrite(t, fixes) for n, t in snips.items()}
    if ok(seg, cf, new): return seg, cf, fixes, {n: t for n, t in new.items() if t != snips[n]}, []
    good, bad, cur = {}, [], dict(snips)
    for name, line in sorted(fixes.items()):
        trial = {n: rewrite(t, {name: line}) for n, t in cur.items()}
        if ok(seg, cf, trial): good[name] = line; cur = trial
        else: bad.append(name)
    return seg, cf, good, {n: t for n, t in cur.items() if t != snips[n]}, bad

if __name__ == "__main__":
    apply = "--apply" in sys.argv; only = sys.argv[sys.argv.index("--seg") + 1] if "--seg" in sys.argv else None
    OUT = "queue/protofix"; os.makedirs(OUT, exist_ok=True)
    reg = S.registry(); reg_names = {n for (_, n) in reg}
    byfile = collections.defaultdict(dict)
    for (seg, n), t in reg.items():
        if only and seg != only: continue
        cf = S.file_of(seg, n)
        if cf and (seg, cf) not in S.LIBFILES: byfile[(seg, cf)][n] = t
    jobs = [(k, v, reg_names) for k, v in sorted(byfile.items())]
    log = open(OUT + "/protofix.jsonl", "w"); nfix = nfile = nbad = 0; edits_all = {}
    with Pool(max(1, os.cpu_count() - 2)) as p:
        for seg, cf, fixes, edits, bad in p.imap_unordered(one_file, jobs):
            if not fixes and not bad: continue
            nfile += bool(fixes); nfix += len(fixes); nbad += len(bad)
            for n, t in edits.items(): edits_all[(seg, n)] = t
            log.write(json.dumps(dict(segment=seg, file=cf, fixed=fixes, refused=bad, rewrote=sorted(edits))) + "\n")
    summary = "%d declarations repaired in %d files (%d snippets rewritten); %d refused (would break a match)" % (
        nfix, nfile, len(edits_all), nbad)
    print(summary); open(OUT + "/summary.txt", "w").write(summary + "\n")
    if apply:
        for (seg, n), t in edits_all.items(): open("matched/%s/%s.c" % (seg, n), "w").write(t)
        print("wrote", len(edits_all), "snippets to matched/")
