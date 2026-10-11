"""Model-free repair of rejected matches by unifying declarations across a C file (no model calls).

  unify.py BATCH [--apply]     writes queue/BATCH/{functions.txt,results.jsonl,work/<func>/attempt.c,unify.jsonl}

reconcile.py makes a rejected attempt adopt its neighbours' declarations. That fails when the neighbours
are the ones that guessed wrong: an already-matched function wrote `extern void func_80151AE0(void);`
before anyone knew func_80151AE0 takes two arguments, so the real definition can never join the file.

For each rejected function this finds every name that the attempt and its matched neighbours declare
differently, and tries file-wide choices for each such name, in order of preference:
  - the real definition's prototype (when the name is a function defined in this file)
  - the same without parameters, `RET f();` (old-style C: calls compile the same for int/pointer args)
  - each distinct declaration some snippet already uses
Every declaration line of that name, in the attempt and in every neighbour, is rewritten to the choice.
A choice is kept only if the whole file compiles, every C function in it matches, and its .text keeps
its original size (the same test `srcbuild.py add` applies). Functions of one file are repaired one
after another against the updated neighbours; files run in parallel.

With --apply the repaired attempt and every rewritten neighbour are written into matched/; then run
`srcbuild.py all` and `make` to confirm the ROM.
"""
import glob, itertools, json, os, re, sys, tempfile
from multiprocessing import Pool
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
_argv = sys.argv; sys.argv = ["srcbuild.py", "none"]
sys.path.insert(0, "tools/hh"); import srcbuild as S, reconcile as R
sys.argv = _argv
MAX_COMBOS = 48

def decls_of(text):
    """name -> list of (line index, stripped line) for file-scope declarations; plus defined function heads."""
    d, heads, depth = {}, {}, 0
    lines = text.splitlines()
    for i, l in enumerate(lines):
        n = S.decl_name(l, depth)
        if n: d.setdefault(n, []).append((i, l.strip()))
        elif depth == 0 and S.DEFN.match(l):
            heads[S.DEFN.match(l).group(1)] = l.split("{")[0].strip()
        depth += l.count("{") - l.count("}")
    return d, heads

def norm(l):
    l = re.sub(r"\s+", " ", l.strip()); l = re.sub(r"^extern ", "", l)
    return re.sub(r"\s*([(),;*])\s*", r"\1", l)

def unproto(head):
    """'void f(s32 a, T *b)' -> 'void f();'"""
    return head[:head.index("(")].rstrip() + "();"

def conflicts(snips):
    """name -> ordered candidate declarations, for names declared differently across snippets."""
    all_decls, heads = {}, {}
    for n, t in snips.items():
        d, h = decls_of(t); heads.update(h)
        for name, occ in d.items():
            for _, l in occ: all_decls.setdefault(name, []).append(l)
    out = {}
    for name, ls in all_decls.items():
        forms = {norm(l) for l in ls}
        if name in heads: forms.add(norm(heads[name] + ";"))
        if len(forms) < 2: continue
        cands = []
        if name in heads:
            cands += ["extern " + heads[name] + ";", "extern " + unproto(heads[name])]
        for l in ls:
            l = l if l.startswith("extern") else "extern " + l
            if norm(l) not in {norm(c) for c in cands}: cands.append(l)
        out[name] = cands
    return out

def rewrite(text, choice):
    lines, depth = text.splitlines(), 0
    for i, l in enumerate(lines):
        n = S.decl_name(l, depth)
        depth += l.count("{") - l.count("}")
        if n in choice: lines[i] = choice[n]
    return "\n".join(lines) + "\n"

def file_ok(seg, cf, snips):
    with tempfile.TemporaryDirectory() as td:
        kept, rej, text, problem = S.settle(seg, cf, snips, td)
    return not rej and problem is None and set(kept) == set(snips)

def fix_one(seg, cf, neigh, func, attempt):
    """Returns (how, new snips incl. func) or (None, None)."""
    snips = dict(neigh); snips[func] = attempt
    if file_ok(seg, cf, snips): return "as is", snips
    ctxd = R.with_context_decls(attempt, S.context_for(seg, func), func)
    conf = conflicts(snips)
    if not conf:
        if ctxd and file_ok(seg, cf, dict(neigh, **{func: ctxd})): return "context declarations", dict(neigh, **{func: ctxd})
        return None, None
    names = sorted(conf)
    for n_try, combo in enumerate(itertools.product(*[conf[n] for n in names])):
        if n_try >= MAX_COMBOS: break
        choice = dict(zip(names, combo))
        new = {n: rewrite(t, choice) for n, t in snips.items()}
        if file_ok(seg, cf, new):
            changed = [n for n in neigh if new[n] != neigh[n]]
            return "unified %s; rewrote %s" % (", ".join("%s -> %s" % kv for kv in choice.items()),
                                               ", ".join(changed) or "no neighbours"), new
    return None, None

WORD = re.compile(r"\b[A-Za-z_]\w*\b")

def top_items(text):
    """File-scope items of a header or snippet: list of (names it defines, text). Function bodies are skipped."""
    items, cur, depth, incomment = [], [], 0, False
    for l in text.splitlines():
        if not cur and (incomment or l.lstrip().startswith("/*")):
            incomment = "*/" not in l; continue
        code = re.sub(r"/\*.*?\*/|//.*", "", l).rstrip()
        if not cur and (not code.strip() or code.startswith("#")): continue
        cur.append(l); depth += code.count("{") - code.count("}")
        if depth == 0 and (code.endswith(";") or code.endswith("}")):
            t = "\n".join(cur); cur = []
            if code.endswith("}"): continue                     # a function body
            names = set(re.findall(r"\b(?:struct|union|enum)\s+(\w+)\s*\{", t))
            last = re.sub(r"/\*.*?\*/|//.*", "", t.splitlines()[-1])
            m = S.TYPEDEF.search(last) or S.TYPEDEF.search(t)
            if m and "typedef" in t: names.add(m.group(1) or m.group(2))
            n = S.decl_name(re.sub(r"/\*.*?\*/|//.*", "", t.splitlines()[0]), 0)
            if n: names.add(n)
            if names: items.append((names, t))
    return items

def with_own_context(attempt, func, path, neigh, order):
    """The attempt plus what it used from its own work/context.h and known.h that is not declared earlier
    in the file. Type definitions hoisted this way are removed from the later neighbours that defined
    them. Returns (attempt, neighbours) or None."""
    pos = order.index(func)
    have = set()
    for n, t in neigh.items():
        if order.index(n) < pos:
            for names, _ in top_items(t): have |= names
    items = []
    for h in ("context.h", "known.h"):
        f = os.path.join(os.path.dirname(path), h)
        if os.path.exists(f): items += top_items(open(f).read())
    own = set()
    for names, _ in top_items(attempt): own |= names
    need, keep, used = set(WORD.findall(attempt)), [], set()
    changed = True
    while changed:                                  # close over types the kept items mention
        changed = False
        for i, (names, t) in enumerate(items):
            if i in used or not (names & need) or names & (have | own | {func}): continue
            used.add(i); keep.append((i, names, t)); need |= set(WORD.findall(t)); changed = True
    if not keep: return None
    hoisted = set()
    for _, names, t in keep:
        if "{" in t: hoisted |= names
    neigh = dict(neigh)
    for n, t in neigh.items():                       # drop later definitions of hoisted types
        if order.index(n) > pos:
            for names, item in top_items(t):
                if "{" in item and names & hoisted: t = t.replace(item + "\n", "", 1)
            neigh[n] = t
    lines = attempt.splitlines()
    k = max([j + 1 for j, l in enumerate(lines) if l.startswith("#include")] or [0])
    return "\n".join(lines[:k] + [t for i, _, t in sorted(keep)] + lines[k:]) + "\n", neigh

def one_file(args):
    (seg, cf), items = args
    reg = S.registry()
    info = {e[0] for e in S.entries(seg, cf)}
    neigh = {n: t for (s, n), t in reg.items() if s == seg and n in info}
    order = [e[0] for e in S.entries(seg, cf)]
    out = []
    for func, path in items:
        attempt = open(path).read()
        if '#include "context.h"' not in attempt: attempt = attempt.replace('#include "common.h"', '#include "context.h"', 1)
        try:
            how, new = fix_one(seg, cf, neigh, func, attempt)
            own = None if how else with_own_context(attempt, func, path, neigh, order)
            if own:
                how, new = fix_one(seg, cf, own[1], func, own[0])
                if how: how = "own context declarations; " + how
        except Exception as e: how, new = None, None; print("ERROR", seg, func, repr(e), flush=True)
        if how:
            edits = {n: t for n, t in new.items() if n != func and t != neigh.get(n)}
            neigh = {n: t for n, t in new.items() if n != func}   # later functions see the rewritten neighbours
            neigh[func] = new[func]
            out.append((seg, func, how, new[func], edits))
        else: out.append((seg, func, None, None, {}))
    return out

if __name__ == "__main__":
    B = sys.argv[1]; Q = "queue/" + B; apply = "--apply" in sys.argv
    os.makedirs(Q + "/work", exist_ok=True)
    src = R.sources()
    byfile = {}
    for (seg, func), p in sorted(src.items()):
        cf = S.file_of(seg, func)
        if cf and (seg, cf) not in S.LIBFILES: byfile.setdefault((seg, cf), []).append((func, p))
    print(len(src), "rejected functions with a verified attempt, in", len(byfile), "files", flush=True)
    res, fl, log = open(Q + "/results.jsonl", "w"), open(Q + "/functions.txt", "w"), open(Q + "/unify.jsonl", "w")
    ok = 0
    with Pool(max(1, os.cpu_count() - 4)) as p:
        for out in p.imap_unordered(one_file, sorted(byfile.items())):
            for seg, func, how, text, edits in out:
                fl.write("%s %s\n" % (func, seg))
                if how:
                    ok += 1
                    d = "%s/work/%s" % (Q, func); os.makedirs(d, exist_ok=True)
                    open(d + "/attempt.c", "w").write(text)
                    if apply:
                        open("matched/%s/%s.c" % (seg, func), "w").write(text)
                        for n, t in edits.items(): open("matched/%s/%s.c" % (seg, n), "w").write(t)
                log.write(json.dumps(dict(func=func, segment=seg, how=how, rewrote=sorted(edits))) + "\n")
                res.write(json.dumps(dict(func=func, segment=seg, model="unify (no model)", verified="MATCH" if how else "FAIL",
                                          checks=0, cost_usd_equiv=0.0, output_tokens=0, note=how or "still clashes")) + "\n")
                res.flush(); log.flush()
                print(("FIXED " if how else "fail  ") + seg + " " + func + ("  " + how if how else ""), flush=True)
    print(ok, "repaired" + (" and written to matched/" if apply else " (dry run; --apply writes matched/)"))
