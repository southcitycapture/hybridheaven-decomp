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
import collections, csv, itertools, json, os, re, subprocess, sys, tempfile, time
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
    """Rename mapped identifiers. Type names built from a mapped function name (func_X_Struct) are renamed only when
    the snippet itself defines them; a type it merely uses comes from the target file's context under its own name."""
    own = set()
    for names, t in top_items(text):
        if "{" in t or "typedef" in t: own |= names
    keys = sorted(m, key=len, reverse=True)
    pat = re.compile(r"\b(%s)(\w*)\b" % "|".join(map(re.escape, keys)))
    def sub(g):
        base, rest = g.group(1), g.group(2)
        if not rest: return m[base]                                   # the identifier itself
        if rest.startswith("_") and base + rest in own: return m[base] + rest   # a type this snippet defines
        return g.group(0)
    return pat.sub(sub, text)

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
def self_contained(sseg, sfunc, dctx, m=None):
    """The source snippet plus what it used from its own file's declarations (it compiled with those in
    force), leaving out names the target file already declares."""
    text = open("matched/%s/%s.c" % (sseg, sfunc)).read()
    if (sseg, sfunc) not in _sctx: _sctx[(sseg, sfunc)] = top_items(S.context_for(sseg, sfunc))
    m = m or {}
    have = set()                                   # names the copy will have: the target file's, and the snippet's
    for names, _ in top_items(dctx): have |= names
    for names, _ in top_items(text): have |= {m.get(x, x) for x in names}
    need, keep, used, changed = set(WORD.findall(text)), [], set(), True
    items = _sctx[(sseg, sfunc)]
    while changed:
        changed = False
        for i, (names, t) in enumerate(items):
            # compare after renaming: D_801BBAD4 in the source may be D_801BC0D4 in the copy
            if i in used or not (names & need) or {m.get(x, x) for x in names} & (have | {m.get(sfunc, sfunc)}): continue
            if "{" in t: continue          # struct bodies would be repeated by every copy in one file
            used.add(i); keep.append((i, t)); need |= set(WORD.findall(t)); changed = True
    if not keep: return text
    lines = text.splitlines()
    k = max([j + 1 for j, l in enumerate(lines) if l.startswith("#include")] or [0])
    return "\n".join(lines[:k] + [t for _, t in sorted(keep)] + lines[k:]) + "\n"

MAX_SUBSETS = 32

def const_subsets(text, func, cm):
    """Versions of text where only some occurrences (inside func's body) of each changed constant are rewritten:
    a literal can mean two things, e.g. f(3, buf) and buf[3], and only one of them differs in the copy."""
    start = text.find(func + "(")
    occ = [g for g in LIT.finditer(text)
           if g.start() > start and int(g.group(2), 0) * (-1 if g.group(1) else 1) in cm]
    if not occ or len(occ) > 12: return
    n = 0
    for k in range(1, len(occ)):
        for combo in itertools.combinations(range(len(occ)), k):
            t = text
            for i in sorted(combo, reverse=True):
                g = occ[i]; new = cm[int(g.group(2), 0) * (-1 if g.group(1) else 1)]
                body = ("0x%X" % abs(new)) if g.group(2).lower().startswith("0x") else str(abs(new))
                t = t[:g.start()] + ("-" if new < 0 else "") + body + t[g.end():]
            yield t; n += 1
            if n >= MAX_SUBSETS: return

def try_alone(func, seg, t, ctx):
    with tempfile.TemporaryDirectory() as td:
        p = os.path.join(td, "attempt.c"); open(p, "w").write(t)
        open(os.path.join(td, "context.h"), "w").write(ctx)
        open(os.path.join(td, "known.h"), "w").write("")
        r = subprocess.run([PY, "tools/hh/try_func.py", func, p, "--seg", seg], capture_output=True, text=True)
    return r.stdout

def drop_known_types(text, ctx):
    """Remove the snippet's struct/typedef definitions that the target file's context already defines."""
    known = set()
    for names, t in top_items(ctx):
        if "{" in t or "typedef" in t: known |= names
    out = text
    for names, t in top_items(text):
        if ("{" in t or "typedef" in t) and names & known: out = out.replace(t + "\n", "", 1)
    return out if out != text else None

def alone(args):
    """args: (dst_seg, dst, [(src_seg, src)]) -> (dst_seg, dst, text, src) for the first source that matches."""
    seg, func, sources = args
    cf = S.file_of(seg, func)
    if not cf or (seg, cf) in S.LIBFILES: return seg, func, None, "no C file", None
    why, clash = "no clean symbol map", None
    for sseg, sfunc in sources:
        m = symbol_map(sseg, sfunc, seg, func)
        if not m: continue
        cm = const_map((sseg, sfunc), (seg, func))
        if cm is None: why = "differs beyond symbols and constants"; continue
        ctx = context(seg, cf, func)
        plain = with_consts(translate(open("matched/%s/%s.c" % (sseg, sfunc)).read(), m), cm)
        full = with_consts(translate(self_contained(sseg, sfunc, ctx, m), m), cm)
        tries = [full, R.with_context_decls(full, ctx, func)]
        if plain != full: tries += [plain, R.with_context_decls(plain, ctx, func)]
        for t in list(tries):            # the snippet may define a type the file already has
            d = t and drop_known_types(t, ctx)
            if d: tries += [d, R.with_context_decls(d, ctx, func)]
        for t in tries:   # as copied, then with the file's declarations
            if not t: continue
            out = try_alone(func, seg, t, ctx)
            if out.startswith("MATCH"): return seg, func, t, "%s/%s" % (sseg, sfunc), None
            why = "alone: " + (out.strip().splitlines() or ["compile error"])[0][:80]
            if why.startswith("alone: compile") and clash is None: clash = tries[-1] if len(tries) > 2 else t
        if cm and why.startswith("alone: score"):      # a literal that means two things: rewrite only some uses
            base = translate(self_contained(sseg, sfunc, ctx, m), m)
            for b0 in (base, drop_known_types(base, ctx)):
                if not b0: continue
                for t in const_subsets(b0, func, cm):
                    for tt in (t, R.with_context_decls(t, ctx, func)):
                        if tt and try_alone(func, seg, tt, ctx).startswith("MATCH"):
                            return seg, func, tt, "%s/%s (some constants)" % (sseg, sfunc), None
    return seg, func, None, why, clash

def file_ok(seg, cf, snips, must):
    """Build the file with snips; returns the subset of snips kept, or None if any `must` name dropped out."""
    with tempfile.TemporaryDirectory() as td:
        kept, rej, text, problem = S.settle(seg, cf, snips, td)
    if problem or not must <= set(kept): return None
    return set(kept)

def fit(seg, cf, base, new):
    """Largest set of `new` that builds with every `base` function still matching (bisects on failure)."""
    if not new: return {}
    kept = file_ok(seg, cf, dict(base, **new), set(base))
    if kept is not None: return {n: new[n] for n in new if n in kept}
    if len(new) == 1: return {}
    names = sorted(new); half = len(names) // 2
    a = fit(seg, cf, base, {n: new[n] for n in names[:half]})
    b = fit(seg, cf, dict(base, **a), {n: new[n] for n in names[half:]})
    return dict(a, **b)

CLASH_LOG = "queue/propagate_clash_failed.jsonl"     # unify failures: (seg, func, candidate, file state) hashes

CLASH_RETRY_S = 24 * 3600         # a failed repair is retried at most once a day (files change every cycle)
FILE_BUDGET_S = 20 * 60           # unify time per file per run; the rest waits for the next run

def clash_key(seg, n, text, neigh=None):
    import hashlib
    return "%s/%s/%s" % (seg, n, hashlib.sha1(text.encode()).hexdigest()[:16])

def known_failures():
    """Keys of clash repairs that failed within CLASH_RETRY_S."""
    if not os.path.exists(CLASH_LOG): return set()
    now, out = time.time(), set()
    for l in open(CLASH_LOG):
        r = json.loads(l)
        if now - r.get("t", 0) < CLASH_RETRY_S: out.add(r["key"])
    return out

def one_file(item):
    (seg, cf), (new, clash) = item
    failed_before = known_failures()
    import unify
    reg = S.registry(); names = {e[0] for e in S.entries(seg, cf)}
    base = {n: t for (s, n), t in reg.items() if s == seg and n in names}
    added = fit(seg, cf, base, new)
    dropped = {}
    for n in new:                                 # matched alone but breaks a neighbour: a declaration clash,
        if n not in added: clash.setdefault(n, new[n])   # so give it unify's file-wide repair below
    clash = dict(clash)
    how = {n: "copy" for n in added}
    neigh = dict(base, **added); edits = {}
    fails = []
    t_file = time.time()
    unify.BUDGET_S = 120                          # per function inside propagation (unify's own default is 600)
    for n in sorted(clash):                       # declaration clashes: unify's file-wide repair
        key = clash_key(seg, n, clash[n], neigh)
        if key in failed_before: dropped[n] = "clash: unify failed in the last day"; continue
        if time.time() - t_file > FILE_BUDGET_S: dropped[n] = "clash: deferred (file time budget)"; continue
        try: h, snips = unify.fix_one(seg, cf, neigh, n, clash[n])
        except Exception as e: h, snips = None, None
        if not h: dropped[n] = "clash unify could not repair"; fails.append(key); continue
        for m, t in snips.items():
            if m != n and t != neigh.get(m):
                if m in base: edits[m] = t
                else: added[m] = t
        neigh = snips; added[n] = snips[n]; how[n] = h
    with open(CLASH_LOG, "a") as fh:              # one short line per failure; appends from parallel workers are safe
        for k in fails: fh.write(json.dumps({"key": k, "t": int(time.time())}) + "\n")
    return (seg, cf), added, how, edits, dropped

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
    # alone-stage memo: a copy that failed before is skipped while its sources, its file's registered C and this
    # tool are unchanged (each loop cycle otherwise re-checks ~1,100 known failures)
    import hashlib
    ALONE_LOG = "queue/propagate_alone_failed.jsonl"
    tool_v = hashlib.sha1(open(__file__, "rb").read()).hexdigest()[:12]
    filesnips = collections.defaultdict(list)
    for (sg, n), t in reg.items(): filesnips[(sg, S.file_of(sg, n))].append(n + "\0" + t)
    filehash = {k: hashlib.sha1("\0".join(sorted(v)).encode()).hexdigest()[:16] for k, v in filesnips.items()}
    def akey(job):
        sg, fn, src = job
        h = hashlib.sha1((tool_v + sg + fn + filehash.get((sg, S.file_of(sg, fn)), "")).encode())
        for k in src: h.update(reg[k].encode())
        return h.hexdigest()[:20]
    failed_before = {json.loads(l)["key"] for l in open(ALONE_LOG)} if os.path.exists(ALONE_LOG) else set()
    keys = {(j[0], j[1]): akey(j) for j in jobs}
    skipped = [j for j in jobs if keys[(j[0], j[1])] in failed_before]
    jobs = [j for j in jobs if keys[(j[0], j[1])] not in failed_before]
    print(len(jobs) + len(skipped), "unmatched copies of matched functions;", len(skipped),
          "skipped (failed before, nothing changed)", flush=True)
    cands, clashes, log = {}, {}, open(OUT + "/propagate.jsonl", "a" if "--resume" in sys.argv else "w")
    if "--resume" in sys.argv:          # reuse the alone-stage results of an interrupted run
        saved = json.load(open(OUT + "/alone.json"))
        cands = {tuple(k.split("/")): t for k, t in saved.get("match", saved).items()}
        clashes = {tuple(k.split("/")): t for k, t in saved.get("clash", {}).items()}
        cands = {k: t for k, t in cands.items() if k not in reg}; clashes = {k: t for k, t in clashes.items() if k not in reg}
        jobs = []
    with Pool(max(1, os.cpu_count() - 4)) as p:
        for i, (seg, func, text, how, clash) in enumerate(p.imap_unordered(alone, jobs, chunksize=8)):
            if text: cands[(seg, func)] = text
            elif clash: clashes[(seg, func)] = clash
            else:
                with open(ALONE_LOG, "a") as fh: fh.write(json.dumps({"key": keys[(seg, func)]}) + "\n")
            log.write(json.dumps(dict(segment=seg, func=func, alone=bool(text), how=how)) + "\n")
            if i % 500 == 0: print(i, "checked,", len(cands), "match alone", flush=True)
    json.dump({"match": {"%s/%s" % k: t for k, t in cands.items()},
               "clash": {"%s/%s" % k: t for k, t in clashes.items()}}, open(OUT + "/alone.json", "w"))   # for --resume
    byfile = collections.defaultdict(lambda: ({}, {}))
    for k, t in cands.items(): byfile[(k[0], S.file_of(*k))][0][k[1]] = t
    for k, t in clashes.items(): byfile[(k[0], S.file_of(*k))][1][k[1]] = t
    print(len(cands), "of", len(jobs) or len(cands), "match alone,", len(clashes), "only clash; building",
          len(byfile), "files", flush=True)
    results = {}
    with Pool(max(1, os.cpu_count() - 2)) as p:
        for i, (key, added, how, edits, dropped) in enumerate(p.imap_unordered(one_file, sorted(byfile.items()))):
            results[key] = (added, how, edits)
            for n, why in dropped.items():
                log.write(json.dumps(dict(segment=key[0], func=n, infile=False, why=why)) + "\n")
            if i % 20 == 0: print(i, "files built", flush=True)
    new = sum(len(a) for a, _, _ in results.values())
    viaunify = sum(1 for _, h, _ in results.values() for v in h.values() if v != "copy")
    nedit = sum(len(e) for _, _, e in results.values())
    summary = "%d copies, %d match alone, %d match in their files (%d via unify, %d neighbours rewritten); 0 registered functions lost" % (
        len(jobs) or len(cands) + len(clashes), len(cands), new, viaunify, nedit)
    print(summary); open(OUT + "/summary.txt", "w").write(summary + "\n")
    if apply:
        for (seg, cf), (added, how, edits) in results.items():
            os.makedirs("matched/" + seg, exist_ok=True)
            for n, t in list(added.items()) + list(edits.items()): open("matched/%s/%s.c" % (seg, n), "w").write(t)
        print("wrote", new, "functions and", nedit, "rewritten neighbours to matched/")
