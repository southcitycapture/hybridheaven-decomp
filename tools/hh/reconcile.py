"""Model-free repair of matches that were rejected in file context (queue/rejected.jsonl).

  reconcile.py BATCH        writes queue/BATCH/{functions.txt,results.jsonl,work/<func>/attempt.c}

Most rejections are declaration clashes, not wrong code: a function compiled alone against context.h, but
in the real file a name it uses is only declared further down (IDO then assumes `int f()` and the later
declaration clashes), or the attempt declares a name differently from its neighbours. For each rejected
function this tries, in order:
  1. the attempt as it is (the neighbours may have changed since)
  2. the attempt with the file's own declaration (from context.h) put in front for every name it uses,
     replacing the attempt's own declarations of those names
and keeps the first version that matches both alone and inside its real C file (srcbuild infile check).
Results go out as a normal batch, so `integrate.py BATCH` adds them.
"""
import glob, json, os, re, subprocess, sys, tempfile
from multiprocessing import Pool
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
sys.argv, _argv = ["srcbuild.py", "none"], sys.argv            # import srcbuild without running a mode
sys.path.insert(0, "tools/hh"); import srcbuild as S
sys.argv = _argv
PY = ".venv/bin/python"

def sources():
    """(seg, func) -> newest verified-MATCH attempt path, for rejected functions not in the registry."""
    rej = {(r["segment"], r["func"]) for r in map(json.loads, open("queue/rejected.jsonl"))}
    rej = {k for k in rej if not os.path.exists("matched/%s/%s.c" % k)}
    out = {}
    for res in sorted(glob.glob("queue/*/results.jsonl"), key=os.path.getmtime):
        b = res.split("/")[1]
        for l in open(res):
            r = json.loads(l); k = (r["segment"], r["func"])
            p = "queue/%s/work/%s/attempt.c" % (b, r["func"])
            if k in rej and r["verified"] == "MATCH" and os.path.exists(p): out[k] = p
    return out

def ctx_decls(ctx):
    """name -> single-line file-scope declaration in context.h."""
    d = {}
    for l in ctx.splitlines():
        n = S.decl_name(l, 0)
        if n and n not in d: d[n] = l.strip()
    return d

def with_context_decls(text, ctx, func):
    decls = ctx_decls(ctx)
    used = set(re.findall(r"\b[A-Za-z_]\w*\b", text)) - {func}
    lines, depth, own = [], 0, set()
    for l in text.splitlines():
        n = S.decl_name(l, depth); depth += l.count("{") - l.count("}")
        if n and n in decls and n in used: own.add(n); continue     # replaced by the file's declaration
        lines.append(l)
    front = [decls[n] for n in sorted(used & set(decls))]
    if not front: return None
    i = max([k + 1 for k, l in enumerate(lines) if l.startswith("#include")] or [0])
    return "\n".join(lines[:i] + front + lines[i:]) + "\n"

def check(seg, func, text, ctx):
    with tempfile.TemporaryDirectory() as td:
        p = os.path.join(td, "attempt.c"); open(p, "w").write(text)
        open(os.path.join(td, "context.h"), "w").write(ctx); open(os.path.join(td, "known.h"), "w").write("")
        r = subprocess.run([PY, "tools/hh/try_func.py", func, p, "--seg", seg], capture_output=True, text=True)
        if not r.stdout.startswith("MATCH"): return False
        return S.infile_check(seg, func, p)[0]

def one(args):
    (seg, func), path = args
    orig = open(path).read()
    if '#include "context.h"' not in orig: orig = orig.replace('#include "common.h"', '#include "context.h"', 1)
    ctx = S.context_for(seg, func)
    for how, text in (("as is", orig), ("context declarations", with_context_decls(orig, ctx, func))):
        if text and check(seg, func, text, ctx): return seg, func, how, text, ctx
    return seg, func, None, None, None

if __name__ == "__main__":
    B = sys.argv[1]; Q = "queue/" + B
    os.makedirs(Q + "/work", exist_ok=True)
    src = sources(); print(len(src), "rejected functions with a verified attempt", flush=True)
    res, fl = open(Q + "/results.jsonl", "w"), open(Q + "/functions.txt", "w")
    with Pool(max(1, os.cpu_count() - 4)) as p:
        for seg, func, how, text, ctx in p.imap_unordered(one, sorted(src.items())):
            fl.write("%s %s\n" % (func, seg))
            if how:
                d = "%s/work/%s" % (Q, func); os.makedirs(d, exist_ok=True)
                open(d + "/attempt.c", "w").write(text); open(d + "/context.h", "w").write(ctx); open(d + "/known.h", "w").write("")
            res.write(json.dumps(dict(func=func, segment=seg, model="reconcile (no model)", verified="MATCH" if how else "FAIL",
                                      checks=0, cost_usd_equiv=0.0, output_tokens=0, note=how or "still clashes")) + "\n"); res.flush()
    print(open(Q + "/results.jsonl").read().count('"MATCH"'), "reconciled")
