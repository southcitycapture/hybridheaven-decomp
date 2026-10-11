"""Copy matched C onto identical functions in other places (no model calls).

  propagate.py OUT [--apply] [--seg SEG] [--limit N] [--resume]    log in queue/OUT/{propagate.jsonl,summary.txt}

Overlays repeat a lot of code: queue/functions.csv groups functions whose instructions are identical apart
from relocated fields (`fp`; `dup_of`). When one member of a group is matched, every other member can
reuse its C with the names changed:
  - the function's own name (and type names built from it, e.g. func_X_Struct -> func_Y_Struct)
  - every relocated symbol, mapped instruction by instruction from the matched function's asm onto the
    copy's asm (jal func_801C1974 in one overlay is jal func_801C1A04 in another)
Candidates are compiled alone against the copy's file context (try_func, relocations ignored), then all
survivors are built in their real files with `srcbuild.run`, which needs every function in the file
to match exactly after linking and the file to keep its size; anything else is dropped.
With --apply the kept functions are written to matched/; then run `srcbuild.py all` and `make`.
"""
import collections, csv, json, os, re, subprocess, sys, tempfile
from multiprocessing import Pool
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
_argv = sys.argv; sys.argv = ["srcbuild.py", "none"]
sys.path.insert(0, "tools/hh"); import srcbuild as S, reconcile as R
from unify import top_items, WORD
sys.argv = _argv
PY = ".venv/bin/python"
SYM = re.compile(r"\b((?:func|D|jtbl|jlabel)_[0-9A-Fa-f]{8}\w*)\b")
INSN = re.compile(r"^\s*/\* [0-9A-F]+ [0-9A-F]+ [0-9A-F]{8} \*/\s+\S+\s*(.*)$")

def asm_path(seg, func):
    cf = S.file_of(seg, func)
    return cf and "asm/nonmatchings/%s/%s/%s.s" % (seg, cf, func)

def asm_syms(path):
    """Symbol operands in instruction order (labels inside the function are local and not mapped)."""
    out = []
    for l in open(path):
        m = INSN.match(l)
        if m: out.append(tuple(s for s in SYM.findall(m.group(1)) if not s.startswith(".L")))
    return out

def symbol_map(src_seg, src, dst_seg, dst):
    n = int(ROW[(dst_seg, dst)]["size"]) // 4           # an .s file can run on past the function
    a, b = asm_syms(asm_path(src_seg, src))[:n], asm_syms(asm_path(dst_seg, dst))[:n]
    if len(a) != len(b): return None
    m = {src: dst}
    for x, y in zip(a, b):
        if len(x) != len(y): return None
        for s, t in zip(x, y):
            if m.setdefault(s, t) != t: return None          # one symbol mapped two ways: not a clean copy
    return m

def translate(text, m):
    """Rename whole identifiers, and identifiers that start with a mapped function name (type names)."""
    keys = sorted(m, key=len, reverse=True)
    pat = re.compile(r"\b(%s)(?=\b|_)" % "|".join(map(re.escape, keys)))
    return pat.sub(lambda g: m[g.group(1)], text)

ROW = {}                                    # (seg, func) -> functions.csv row, filled in main

def words(k):
    r = ROW[k]; off = int(r["rom_exp"], 16)
    return [int.from_bytes(S.IMG[off + 4*i:off + 4*i + 4], "big") for i in range(int(r["size"]) // 4)]

def const_map(src, dst):
    """{old: new} for addiu/addi immediates that differ between two same-shape functions (not relocated:
    %hi/%lo operands are handled by the symbol map). None if they differ in anything else."""
    a, b = words(src), words(dst)
    if len(a) != len(b): return None
    sa = asm_syms(asm_path(*src))[:len(a)]
    out = {}
    for i, (x, y) in enumerate(zip(a, b)):
        if x == y: continue
        op = x >> 26
        if op in (2, 3) or (i < len(sa) and sa[i]): continue          # jal/j or a symbol operand
        if op not in (8, 9) or (x & 0xFFFF0000) != (y & 0xFFFF0000): return None
        sx = lambda v: (v & 0xFFFF) - 0x10000 if v & 0x8000 else v & 0xFFFF
        if out.setdefault(sx(x), sx(y)) != sx(y): return None
    return out

LIT = re.compile(r"(-?)\b(0[xX][0-9A-Fa-f]+|\d+)\b(?![.\w])")

def with_consts(text, cm):
    """Rewrite integer literals per cm, keeping hex/decimal style. Literals of other values are untouched."""
    if not cm: return text
    def sub(g):
        neg, tok = g.group(1), g.group(2)
        v = int(tok, 0) * (-1 if neg else 1)
        if v not in cm: return g.group(0)
        n = cm[v]
        if neg and n >= 0: return g.group(0)                        # sign flip: leave it, verification decides
        mag = abs(n); body = ("0x%X" % mag) if tok.lower().startswith("0x") else str(mag)
        return ("-" if n < 0 else "") + body
    return LIT.sub(sub, text)

_ctx = {}
def context(seg, cf, func):
    if (seg, cf) not in _ctx: _ctx[(seg, cf)] = S.context_for(seg, func)
    return _ctx[(seg, cf)]

_sctx = {}
def self_contained(sseg, sfunc, dctx):
    """The source snippet plus what it used from its own file's declarations (it compiled with those in
    force), leaving out names the target file already declares."""
    text = open("matched/%s/%s.c" % (sseg, sfunc)).read()
    if (sseg, sfunc) not in _sctx: _sctx[(sseg, sfunc)] = top_items(S.context_for(sseg, sfunc))
    have = set()
    for names, _ in top_items(dctx) + top_items(text): have |= names
    need, keep, used, changed = set(WORD.findall(text)), [], set(), True
    items = _sctx[(sseg, sfunc)]
    while changed:
        changed = False
        for i, (names, t) in enumerate(items):
            if i in used or not (names & need) or names & (have | {sfunc}): continue
            if "{" in t: continue          # struct bodies would be repeated by every copy in one file
            used.add(i); keep.append((i, t)); need |= set(WORD.findall(t)); changed = True
    if not keep: return text
    lines = text.splitlines()
    k = max([j + 1 for j, l in enumerate(lines) if l.startswith("#include")] or [0])
    return "\n".join(lines[:k] + [t for _, t in sorted(keep)] + lines[k:]) + "\n"

def alone(args):
    """args: (dst_seg, dst, [(src_seg, src)]) -> (dst_seg, dst, text, src) for the first source that matches."""
    seg, func, sources = args
    cf = S.file_of(seg, func)
    if not cf or (seg, cf) in S.LIBFILES: return seg, func, None, "no C file"
    why = "no clean symbol map"
    for sseg, sfunc in sources:
        m = symbol_map(sseg, sfunc, seg, func)
        if not m: continue
        cm = const_map((sseg, sfunc), (seg, func))
        if cm is None: why = "differs beyond symbols and constants"; continue
        ctx = context(seg, cf, func)
        plain = with_consts(translate(open("matched/%s/%s.c" % (sseg, sfunc)).read(), m), cm)
        full = with_consts(translate(self_contained(sseg, sfunc, ctx), m), cm)
        tries = [full, R.with_context_decls(full, ctx, func)]
        if plain != full: tries += [plain, R.with_context_decls(plain, ctx, func)]
        for t in tries:   # as copied, then with the file's declarations
            if not t: continue
            with tempfile.TemporaryDirectory() as td:
                p = os.path.join(td, "attempt.c"); open(p, "w").write(t)
                open(os.path.join(td, "context.h"), "w").write(ctx)
                open(os.path.join(td, "known.h"), "w").write("")
                r = subprocess.run([PY, "tools/hh/try_func.py", func, p, "--seg", seg], capture_output=True, text=True)
            if r.stdout.startswith("MATCH"): return seg, func, t, "%s/%s" % (sseg, sfunc)
            why = "alone: " + (r.stdout.strip().splitlines() or ["compile error"])[0][:80]
    return seg, func, None, why

if __name__ == "__main__":
    OUT = "queue/" + sys.argv[1]; apply = "--apply" in sys.argv
    only = sys.argv[sys.argv.index("--seg") + 1] if "--seg" in sys.argv else None
    limit = int(sys.argv[sys.argv.index("--limit") + 1]) if "--limit" in sys.argv else None
    os.makedirs(OUT, exist_ok=True)
    rows = list(csv.DictReader(open("queue/functions.csv")))
    reg = S.registry()
    groups = collections.defaultdict(list)
    for r in rows: groups[r["fp"]].append((r["segment"], r["func"])); ROW[(r["segment"], r["func"])] = r
    jobs = []
    for g in groups.values():
        done = [k for k in g if k in reg]
        if not done: continue
        for k in g:
            if k in reg or (only and k[0] != only): continue
            # prefer a source in the same segment, then any (several, in case one doesn't map cleanly)
            src = sorted(done, key=lambda d: (d[0] != k[0], d))[:3]
            jobs.append((k[0], k[1], src))
    jobs.sort(); jobs = jobs[:limit] if limit else jobs
    print(len(jobs), "unmatched copies of matched functions", flush=True)
    cands, log = {}, open(OUT + "/propagate.jsonl", "a" if "--resume" in sys.argv else "w")
    if "--resume" in sys.argv:          # reuse the alone-stage results of an interrupted run
        cands = {tuple(k.split("/")): t for k, t in json.load(open(OUT + "/alone.json")).items()}
        cands = {k: t for k, t in cands.items() if k not in reg}; jobs = []
    with Pool(max(1, os.cpu_count() - 4)) as p:
        for i, (seg, func, text, how) in enumerate(p.imap_unordered(alone, jobs, chunksize=8)):
            if text: cands[(seg, func)] = text
            log.write(json.dumps(dict(segment=seg, func=func, alone=bool(text), how=how)) + "\n")
            if i % 500 == 0: print(i, "checked,", len(cands), "match alone", flush=True)
    json.dump({"%s/%s" % k: t for k, t in cands.items()}, open(OUT + "/alone.json", "w"))   # for --resume
    print(len(cands), "of", len(jobs), "match alone; building their files", flush=True)
    fileof = lambda k: (k[0], S.file_of(*k))
    allc = dict(reg); allc.update(cands)
    kept, rejected = S.run(allc, set(cands))
    for _ in range(3):
        # a file where a registered function dropped out keeps none of its new copies: rebuild it without them
        lost = [k for k in reg if k not in kept and fileof(k)[1] and fileof(k) not in S.LIBFILES]
        if not lost: break
        bad = {fileof(k) for k in lost}
        print("rebuilding", len(bad), "files without their new copies:", sorted(bad)[:6], flush=True)
        for k in [k for k in cands if fileof(k) in bad]:
            cands.pop(k); rejected[k] = "dropped: its file lost a registered function"
        redo = {k: t for k, t in reg.items() if fileof(k) in bad}
        k2, r2 = S.run(redo, set())
        kept = {k for k in kept if fileof(k) not in bad} | k2
    lost = [k for k in reg if k not in kept and fileof(k)[1] and fileof(k) not in S.LIBFILES]
    new = [k for k in cands if k in kept]
    for k, why in rejected.items():
        if k not in reg: log.write(json.dumps(dict(segment=k[0], func=k[1], alone=True, infile=False, why=why)) + "\n")
    summary = "%d copies, %d match alone, %d match in their files; %d registered functions lost (must be 0)" % (
        len(jobs), len(cands), len(new), len(lost))
    print(summary); open(OUT + "/summary.txt", "w").write(summary + "\n")
    if lost: print("NOT applying: registered functions would drop out:", lost[:10]); sys.exit(1)
    if apply:
        for seg, func in new:
            os.makedirs("matched/" + seg, exist_ok=True)
            open("matched/%s/%s.c" % (seg, func), "w").write(cands[(seg, func)])
        print("wrote", len(new), "functions to matched/")
