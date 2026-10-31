"""Model-free "address-only" fixer: attempts whose every instruction matches and only a relocated field is wrong
(a %hi/%lo pair, a jal target, an invented symbol name). The object's relocations are paired with the symbols the
original asm names at the same instructions, and:
  - a wrong or invented symbol is renamed to the target's (`func_A` -> `func_B`; when the target is an offset into
    another symbol every use becomes a cast into it, `(*(s32 *)((u8 *)&D_80123440 + 0x10))`; when context.h already
    declares the target with another type, uses go through a cast), then re-checked with tools/hh/try_func.py;
  - a "wrong" address that standalone try_func can't judge (a literal pooled in the attempt's own .rodata when splat
    didn't migrate the function's rodata, a reference to the function itself (linked at vram & ~0xF), or to a
    neighbour that context.h defines) is left unchanged and judged by srcbuild.py's in-file check alone (INFILE_ONLY).
Everything kept passes srcbuild.py's in-file check (when the file doesn't compile there, context.h's declarations of the
names the function uses are added and it is retried), except a try_func MATCH in a "frozen" file whose in-file render
fails for registered neighbours too: integration (srcbuild add) decides those.

  addrfix.py [--dry-run] [--jobs N] [--batch addrfix] [--only FUNC] [--tries N]

Candidates: unregistered functions with an attempt (queue/*/work/FUNC[@SEG]/.attempts/N.c) whose check said
"instructions match but an address is wrong" or "isn't a real symbol", plus the permuter's "address-only mismatch:
needs a model" functions. Every attempt of those functions is re-checked here; up to --tries address-only ones each
(best .ali score first, then newest) are tried.

The real run writes a normal batch for tools/swarm/loop.py to integrate: queue/BATCH/{functions.txt, results.jsonl
(MATCH lines only: FAIL lines would count as failed attempts in tools/hh/pick.py), work/FUNC[@SEG]/attempt.c, DONE},
plus queue/BATCH/report.jsonl with every candidate's outcome. Run with env.sh sourced (mips-linux-gnu-ld)."""
import argparse, collections, contextlib, csv, glob, io, json, os, re, shutil, subprocess, sys, tempfile, time
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../.."))
os.chdir(HH)
import try_func, workdir
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

ADDR_ONLY = re.compile(r"address is wrong|isn't a real symbol")
PY = os.path.join(HH, ".venv/bin/python")

# ---------------------------------------------------------------- candidates

def segments_of():
    by = collections.defaultdict(set)
    for r in csv.DictReader(open("queue/functions.csv")): by[r["func"]].add(r["segment"])
    return by

def batch_segs(batch, func, cache={}):
    if batch not in cache:
        m = collections.defaultdict(set); p = "queue/%s/results.jsonl" % batch
        if os.path.exists(p):
            for l in open(p):
                try: r = json.loads(l); m[r.get("func")].add(r.get("segment"))
                except ValueError: pass
        cache[batch] = m
    return cache[batch].get(func, set())

def dir_seg(d, segs):
    """(func, seg) of a work dir, or None when an old FUNC-only dir can't be placed in one segment."""
    b, name = d.split("/")[1], d.split("/")[3]
    if "@" in name: f, s = name.split("@", 1); return f, s
    if not name.startswith("func_"): return None
    if len(segs.get(name, ())) == 1: return name, next(iter(segs[name]))
    s = batch_segs(b, name) & segs.get(name, set())
    return (name, next(iter(s))) if len(s) == 1 else None

def candidates():
    segs = segments_of()
    reg = {(p.split("/")[1], os.path.basename(p)[:-2]) for p in glob.glob("matched/*/*.c")}
    want = set()
    for res in glob.glob("queue/*/work/*/.attempts/*.res"):
        try: first = open(res).readline()
        except OSError: continue
        if ADDR_ONLY.search(first):
            k = dir_seg(os.path.dirname(os.path.dirname(res)), segs)
            if k: want.add(k)
    for p in glob.glob("queue/permute*/results.jsonl"):
        for l in open(p):
            try: r = json.loads(l)
            except ValueError: continue
            if "address-only" in str(r.get("note", "")): want.add((r["func"], r["segment"]))
    want = {k for k in want if (k[1], k[0]) not in reg}
    # every attempt file of those functions, in any batch
    files = collections.defaultdict(list)
    for d in glob.glob("queue/*/work/*"):
        k = dir_seg(d, segs) if os.path.isdir(d) else None
        if k not in want: continue
        for c in glob.glob(d + "/.attempts/*.c") + [d + "/attempt.c"]:
            if os.path.exists(c): files[k].append(c)
    return sorted(want), files

def rank(c):
    ali = c[:-2] + ".ali"
    try: v = int(open(ali).read().split()[0])
    except (OSError, ValueError, IndexError): v = -1
    return (v, os.path.getmtime(c))

# ---------------------------------------------------------------- checking

def stage(src, td, text=None):
    """Copy an attempt and its work dir's headers into td; return the attempt's path there."""
    for h in glob.glob(os.path.join(os.path.dirname(os.path.abspath(src)).replace("/.attempts", ""), "*.h")):
        shutil.copy(h, td)
    p = os.path.join(td, "attempt.c")
    open(p, "w").write(text if text is not None else open(src, errors="replace").read())
    return p

def check(func, seg, path):
    """try_func's verdict line for path (run in-process; it compiles relative to path's directory)."""
    a = argparse.Namespace(func=func, src=path, cc="7.1", opt="-O2", v=False, asm=None, seg=seg, aligned_out=None, diagnose=False)
    out = io.StringIO()
    try:
        with contextlib.redirect_stdout(out): try_func._main(a)
    except SystemExit as e:
        return "error: %s" % str(e).strip().splitlines()[0][:200] if str(e) else "error"
    except Exception as e:
        return "error: %r" % e
    return out.getvalue().strip().splitlines()[0] if out.getvalue().strip() else "error: no output"

def infile(func, seg, path):
    r = subprocess.run([PY, "tools/hh/srcbuild.py", "infile", seg, func, path], capture_output=True, text=True, timeout=900)
    return r.returncode == 0, (r.stdout.strip().splitlines() or [r.stderr.strip()[-200:]])[0][:300]

# ---------------------------------------------------------------- relocation pairing

def sext(v): return v - 0x10000 if v & 0x8000 else v

DEFINED = set()      # symbols the attempt defines itself (the last mine_refs object)

def _ref_facts(obj):
    with open(obj, "rb") as fh:
        e = ELFFile(fh); text = e.get_section_by_name(".text").data(); symtab = e.get_section_by_name(".symtab")
        symbols = {s.name: s for s in symtab.iter_symbols()}
        rels = []
        defined = {s.name for s in symbols.values()
                   if s.name and s["st_shndx"] != "SHN_UNDEF" and s["st_info"]["type"] != "STT_SECTION"}
        for sec in e.iter_sections():
            if isinstance(sec, RelocationSection) and sec.name == ".rel.text":
                for r in sec.iter_relocations():
                    s = symtab.get_symbol(r["r_info_sym"])
                    name = s.name if s.name else ("<section %s>" % s["st_shndx"])
                    if s["st_info"]["type"] == "STT_SECTION": name = "<section %s>" % e.get_section(s["st_shndx"]).name
                    rels.append((r["r_offset"], r["r_info_type"], name))
    return text, symbols, rels, defined


def mine_refs(obj, func, _facts=None):
    """{offset: (kind, symbol, addend)} for the function's relocations, from the unlinked object (REL: the addend
    lives in the instruction; a HI16 pairs with the next LO16 of the same symbol)."""
    text, symbols, rels, defined = _facts or _ref_facts(obj)
    fs = symbols.get(func)
    if fs is None: return None
    start = fs["st_value"]; size = fs["st_size"] or len(text) - start
    DEFINED.clear()
    DEFINED.update(defined - {func})
    word = lambda o: int.from_bytes(text[o:o + 4], "big")
    out, pending, last_hi = {}, collections.defaultdict(list), {}
    for o, t, name in rels:
        if t == 5: pending[name].append(o)
        elif t == 6:
            lo = sext(word(o) & 0xFFFF)
            his = pending.pop(name, [])
            for h in his:
                last_hi[name] = word(h) & 0xFFFF
                if start <= h < start + size: out[h - start] = ("hi", name, ((word(h) & 0xFFFF) << 16) + lo)
            hi = last_hi.get(name, 0)
            if start <= o < start + size: out[o - start] = ("lo", name, (hi << 16) + lo)
        elif t == 4:
            if start <= o < start + size: out[o - start] = ("jal", name, (word(o) & 0x3FFFFFF) << 2)
        elif start <= o < start + size: out[o - start] = ("other", name, 0)
    for name, hs in pending.items():
        for h in hs:
            if start <= h < start + size: out[h - start] = ("hi", name, (word(h) & 0xFFFF) << 16)
    return out


def mine_refs_many(obj, functions):
    """Read a whole-file ELF once while retaining the scalar HI16/LO16 rules."""
    facts = _ref_facts(obj)
    return {name: mine_refs(obj, name, facts) for name in functions}

EXPR = re.compile(r"^\s*\(?\s*([A-Za-z_.$][\w.$]*)\s*(?:([+-])\s*(0x[0-9A-Fa-f]+|\d+))?\s*\)?\s*$")

def target_refs(asm, vram):
    """{offset: (kind, symbol, addend)} from the original asm's operands."""
    out = {}
    for l in open(asm):
        m = re.match(r"\s*/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(\S+)\s*(.*)", l)
        if not m: continue
        o = int(m.group(1), 16) - vram; op, args = m.group(2), m.group(3)
        h = re.search(r"%(hi|lo)\(([^()]*(?:\([^()]*\))?[^()]*)\)", args)
        if h:
            e = EXPR.match(h.group(2))
            if e: out[o] = (h.group(1), e.group(1), (int(e.group(3), 0) * (-1 if e.group(2) == "-" else 1)) if e.group(3) else 0)
            else: out[o] = (h.group(1), None, 0)
        elif op in ("jal", "j") and re.match(r"[A-Za-z_]\w*$", args.strip()) and not args.strip().startswith(".L"):
            out[o] = ("jal", args.strip(), 0)
    return out

def addr(name):
    m = try_func.ADDR_NAME.match(name or "")
    if m: return int(m.group(1) or m.group(2), 16)
    return try_func.NAMED.get(name)

# ---------------------------------------------------------------- C rewriting

def top_decl(text, name):
    """(line index, line) of a top-level declaration of `name` in text, or None."""
    depth = 0
    for i, l in enumerate(text.splitlines()):
        if depth == 0 and re.search(r"\b%s\b" % re.escape(name), l) and l.rstrip().endswith(";") and not l.lstrip().startswith("#"):
            return i, l
        depth += l.count("{") - l.count("}")
    return None

def decl_type(line, name):
    """('array'|'scalar'|'func', TYPE) of `extern TYPE name...;`, or None."""
    m = re.match(r"\s*(?:extern\s+)?(?:static\s+)?(.+?)\s*\b%s\b\s*(.*?);\s*(?://.*|/\*.*)?$" % re.escape(name), line)
    if not m: return None
    ty, rest = m.group(1).strip(), m.group(2).strip()
    if "(" in ty or ty.endswith("("): return None
    if rest.startswith("("): return ("func", ty)
    if rest.startswith("["):
        if re.fullmatch(r"(\[[^\]]*\])", rest): return ("array", ty)
        return None
    if rest: return None
    return ("scalar", ty)

def rewrite(text, ctx, plan):
    """Apply {S: (X, k)} to the attempt text. ctx is context.h's text (for declarations the attempt doesn't carry)."""
    for S, (X, k) in plan.items():
        d = top_decl(text, S); dc = top_decl(ctx, S)
        line = d[1] if d else (dc[1] if dc else None)
        if X == "extern":
            if not d or "=" in d[1] or d[1].lstrip().startswith("extern"): return None, "can't make %s extern" % S
            ls = text.splitlines(); ls[d[0]] = "extern " + ls[d[0]].lstrip(); text = "\n".join(ls) + "\n"
            continue
        declared = top_decl(ctx, X) or (top_decl(text, X) if X != S else None)
        if k == 0 and line is not None and declared and re.sub(r"\b%s\b" % re.escape(S), X, line).strip() != declared[1].strip():
            # X is declared already, with another type: keep S's type through a cast (codegen depends on it)
            fm = re.match(r"\s*(?:extern\s+)?(.+?)\s*\b%s\s*\((.*)\)\s*;" % re.escape(S), line)
            if fm: expr = "((%s (*)(%s))%s)" % (fm.group(1), fm.group(2), X)
            else:
                dt = decl_type(line, S)
                if dt is None: return None, "can't cast %s (%s)" % (S, line.strip()[:60])
                expr = ("((%s *)&%s)" if dt[0] == "array" else "(*(%s *)&%s)") % (dt[1], X)
            text = replace_uses(text, S, expr, d[0] if d else -1)
            continue
        if k == 0:
            text = re.sub(r"\b%s\b" % re.escape(S), X, text)
            if not top_decl(text, X) and not top_decl(ctx, X):
                if line is None: return None, "no declaration for %s" % S
                text = add_decl(text, re.sub(r"\b%s\b" % re.escape(S), X, line).strip())
            continue
        if line is None: return None, "no declaration for %s" % S
        dt = decl_type(line, S)
        if dt is None or dt[0] == "func": return None, "can't offset %s (%s)" % (S, line.strip()[:60])
        kind, ty = dt
        ref = "((u8 *)&%s %s 0x%X)" % (X, "+" if k > 0 else "-", abs(k))
        expr = ("((%s *)%s)" if kind == "array" else "(*(%s *)%s)") % (ty, ref)
        text = replace_uses(text, S, expr, d[0] if d else -1)
        if not top_decl(text, X) and not top_decl(ctx, X): text = add_decl(text, "extern u8 %s[];" % X)
    return text, None

def replace_uses(text, S, expr, di):
    """Every use of S becomes expr; S's own declaration (line di) goes, as nothing refers to it any more."""
    out = []
    for i, l in enumerate(text.splitlines()):
        if i == di: continue
        out.append(l if l.lstrip().startswith("#") else re.sub(r"\b%s\b" % re.escape(S), lambda m: expr, l))
    return "\n".join(out) + "\n"

def add_decl(text, decl):
    """Insert a declaration after the includes/externs at the top of the attempt."""
    lines = text.splitlines(); at = 0
    for i, l in enumerate(lines):
        if l.startswith("#include"): at = i + 1
    lines.insert(at, decl)
    return "\n".join(lines) + "\n"

def plan_for(func, seg, src, td):
    """Pair relocations and decide a rewrite: ({S: (X, k)}, None) or (None, reason)."""
    off, size, vram, asm = try_func.find_func(func, None, seg)
    obj = os.path.join(td, "f.o")
    try: try_func.compile_c(src, "7.1", "-O2", obj)
    except SystemExit: return None, "compile failed"
    mine = mine_refs(obj, func)
    if mine is None: return None, "function not in object"
    tgt = target_refs(asm, vram)
    groups = collections.defaultdict(list)
    for o, (kind, S, a) in sorted(mine.items()):
        groups[S].append((o, kind, a, tgt.get(o)))
    plan, wrong = {}, 0
    for S, refs in groups.items():
        sa = addr(S)
        bad = []
        for o, kind, a, t in refs:
            if t is None: bad.append((o, None)); continue
            tk, T, b = t
            ta = addr(T)
            same = (T == S and a == b) or (sa is not None and ta is not None and sa + a == ta + b)
            if not same: bad.append((o, t))
        if S in DEFINED and addr(S) is not None and not bad and not any(k == "jal" for _, k, _, _ in refs):
            # `u64 D_X;` defines the variable in the attempt (IDO schedules file-local variables differently, so
            # making it `extern` doesn't match either: tried); only the in-file build places it
            plan[("local", S)] = (None, 0); wrong += 1; continue
        if not bad: continue
        if S in DEFINED: return None, "%s is defined in the attempt and also wrong" % S
        wrong += len(bad)
        if S == "<section .rodata>":
            # a literal the attempt pools in its own .rodata: try_func places that .rodata right after the function
            # when splat didn't migrate the function's rodata, so only the in-file build can say where it lands.
            # (Rewriting the literal as the target's extern global changes IDO's scheduling: tried, never matched.)
            plan[("local", S)] = (None, 0); continue
        if S.startswith("<section"): return None, "local data (%s) differs" % S[9:-1]
        if any(t is None or t[1] is None for _, t in bad): return None, "target has no symbol at a relocation"
        # one X for S: the target symbol named at the wrong relocations (the most common one)
        X = collections.Counter(t[1] for _, t in bad).most_common(1)[0][0]
        xa = addr(X); ks = set()
        for o, kind, a, t in refs:
            if t is None: return None, "target has no symbol at a relocation"
            tk, T, b = t
            if T == X or (T == S and xa is not None and addr(S) == xa): ks.add(b - a)
            elif xa is not None and addr(T) is not None: ks.add(addr(T) + b - xa - a)
            else: return None, "%s maps to several unrelated symbols" % S
        if len(ks) != 1: return None, "%s needs different offsets at different uses" % S
        k = ks.pop()
        if any(kind == "jal" for _, kind, _, _ in refs) and k: return None, "call target offset"
        if X == S and k == 0: return None, "no change found"
        plan[S] = (X, k)
    if not plan:
        own = sorted({S for S in groups if S == func or S in DEFINED})
        if own: return {("local", "reference to %s" % ", ".join(own)): (None, 0)}, None   # try_func links func at vram & ~0xF
        return None, "no wrong relocation found"
    return plan, None

# ---------------------------------------------------------------- one function

def ctx_decls(text, ctx, func):
    """text plus context.h's one-line declarations of the names func's body uses but the attempt doesn't declare.
    In the real file the attempt can come before the neighbour that declares a name, and an implicit declaration
    there clashes with the neighbour's prototype ("redeclaration of ..."); context.h holds exactly those prototypes."""
    m = re.search(r"^[^\n;{}]*\b%s\s*\([^;{]*\)\s*\{" % re.escape(func), text, re.M)
    body = text[m.start():] if m else text
    used = set(re.findall(r"\b[A-Za-z_]\w*\b", body))
    add = []
    for l in ctx.splitlines():
        if not l.rstrip().endswith(";") or l.startswith((" ", "\t", "#", "typedef", "}")): continue
        names = re.findall(r"\b([A-Za-z_]\w*)\s*(?:\(|\[|;|=)", l)
        n = next((x for x in names if x in used), None)
        if n and n != func and not top_decl(text, n) and l not in add: add.append(l)
    for l in reversed(add): text = add_decl(text, l)
    return text, len(add)

_BROKEN = {}
def file_broken(func, seg):
    """True when the in-file check already fails to compile the file for a registered neighbour, without us: the
    from-scratch render of a "frozen" file (srcbuild keeps those as they stand and edits new functions in)."""
    cf = os.path.basename(os.path.dirname(try_func.find_func(func, None, seg)[3]))
    if (seg, cf) not in _BROKEN:
        nb = sorted(os.path.basename(h)[:-2] for h in glob.glob("asm/nonmatchings/%s/%s/*.s" % (seg, cf))
                    if os.path.exists("matched/%s/%s.c" % (seg, os.path.basename(h)[:-2])))
        if not nb: _BROKEN[(seg, cf)] = False
        else:
            ok, msg = infile(nb[0], seg, os.path.join(HH, "matched/%s/%s.c" % (seg, nb[0])))
            _BROKEN[(seg, cf)] = (not ok and "does not compile" in msg)
    return _BROKEN[(seg, cf)]

def settle(func, seg, src, td, text, want_match):
    """In-file check of text; when the file doesn't compile with it, retry with context.h's declarations added
    (then re-checked standalone: MATCH if want_match, else still address-only). Returns (ok, msg, text)."""
    p = stage(src, td, text); ok, msg = infile(func, seg, p)
    if ok or "does not compile" not in msg: return ok, msg, text
    if file_broken(func, seg): return None, "FROZEN: the in-file render fails for registered neighbours too", text
    ctx = open(os.path.join(td, "context.h")).read() if os.path.exists(os.path.join(td, "context.h")) else ""
    t2, n = ctx_decls(text, ctx, func)
    if not n: return ok, msg, text
    p = stage(src, td, t2); v = check(func, seg, p)
    if not (v.startswith("MATCH") if want_match else ADDR_ONLY.search(v)):
        return False, msg + " (with context declarations added: %s)" % v[:80], text
    ok2, msg2 = infile(func, seg, p)
    return (ok2, msg2, t2) if ok2 else (False, msg2 + " (after adding context declarations)", text)

def fix_one(args):
    (func, seg), srcs, tries = args
    t0 = time.time(); tried = 0; reasons = []
    os.nice(5)
    done = lambda outcome, src, plan, orig, text, msg: dict(func=func, segment=seg, outcome=outcome, source=src, plan=plan,
                                                           source_text=orig, text=text, infile=msg, seconds=int(time.time() - t0))
    for src in sorted(set(srcs), key=rank, reverse=True):
        if tried >= tries: break
        with tempfile.TemporaryDirectory() as td:
            p = stage(src, td); v = check(func, seg, p); orig = open(p).read()
            if v.startswith("MATCH"):
                ok, msg, text = settle(func, seg, src, td, orig, True)
                if ok is None: return done("MATCH", src, "none (already matches; in-file check unusable: frozen file)", orig, text, msg)
                if ok: return done("MATCH", src, "none (already matches)" + (" + context declarations" if text != orig else ""), orig, text, msg)
                reasons.append("already MATCH; in-file: " + msg[:150]); continue
            if not ADDR_ONLY.search(v): continue
            tried += 1
            plan, why = plan_for(func, seg, p, td)
            if plan is None: reasons.append(why); continue
            ctx = open(os.path.join(td, "context.h")).read() if os.path.exists(os.path.join(td, "context.h")) else ""
            local = [S for S in plan if isinstance(S, tuple) and S[0] == "local"]
            if local:
                if len(local) != len(plan): reasons.append("file-local data/literal plus wrong symbols"); continue
                ok, msg, text = settle(func, seg, src, td, orig, False)
                if not ok: reasons.append("file-local; in-file: " + msg[:150]); continue
                return done("INFILE_ONLY", src, "unchanged (%s placed by the file)%s" % (", ".join(S[1] for S in local),
                            " + context declarations" if text != orig else ""), orig, text, msg)
            new, why = rewrite(orig, ctx, plan)
            if new is None: reasons.append(why); continue
            q = stage(src, td, new); v2 = check(func, seg, q)
            if not v2.startswith("MATCH") and "error" in v2.lower():
                # the renamed extern clashes with an existing declaration: drop the attempt's own extern lines for X
                new2 = new
                for S, (X, k) in plan.items():
                    d = top_decl(new2, X)
                    if d and k == 0 and top_decl(ctx, X):
                        ls = new2.splitlines(); del ls[d[0]]; new2 = "\n".join(ls) + "\n"
                if new2 != new:
                    q = stage(src, td, new2); v2 = check(func, seg, q); new = new2
            if not v2.startswith("MATCH"):
                casts = any("(*)(" in l for l in new.splitlines()) and not any("(*)(" in l for l in orig.splitlines())
                reasons.append("rewrite didn't match%s: %s" % (" (call through a cast: the alias's prototype differs from context.h's)"
                                                               if casts else "", v2[:120])); continue
            ok, msg, text = settle(func, seg, src, td, new, True)
            if ok is None:
                return done("MATCH", src, "; ".join("%s -> %s%s" % (S, X, " %+#x" % k if k else "") for S, (X, k) in plan.items())
                            + " (in-file check unusable: frozen file)", orig, new, msg)
            if not ok: reasons.append("rewritten, MATCH standalone; in-file: " + msg[:150]); continue
            return done("MATCH", src, "; ".join("%s -> %s%s" % (S, X, " %+#x" % k if k else "") for S, (X, k) in plan.items())
                        + (" + context declarations" if text != new else ""), orig, text, msg)
    if tried == 0 and not reasons: reasons.append("no attempt is address-only now")
    return dict(func=func, segment=seg, outcome="FAIL", reasons=reasons, seconds=int(time.time() - t0))

def bucket(r):
    if r["outcome"] != "FAIL": return r["outcome"]
    w = r["reasons"][-1] if r["reasons"] else "?"
    w = re.sub(r"func_[0-9A-F]{8}|D_[0-9A-F]{8}|B_[0-9A-F]{8}|\b[a-z]\w*_[0-9A-F]{8}\w*", "SYM", w)
    w = re.sub(r"score \d+/\d+", "score", w)
    if "in-file:" in w: return w.split("in-file:")[0] + "in-file:" + w.split("in-file:")[1][:40]
    return w.split(":")[0] if w.startswith("rewrite") else w[:70]

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dry-run", action="store_true"); ap.add_argument("--jobs", type=int, default=4)
    ap.add_argument("--batch", default="addrfix"); ap.add_argument("--only"); ap.add_argument("--tries", type=int, default=6)
    ap.add_argument("--walls", help="wall.py JSONL: check every symbols case (and saved standalone matches), including unlogged attempts")
    a = ap.parse_args()
    if a.walls:
        # The wall scan has freshly compiled these exact sources; do not rely on
        # historical .res messages to discover the address-only candidates.
        want, files = [], {}
        for line in open(a.walls):
            r = json.loads(line)
            if r["class"] not in ("symbols", "match") or not r.get("attempt_source"): continue
            k = r["func"], r["seg"]
            if os.path.exists("matched/%s/%s.c" % (k[1], k[0])): continue
            src = r["attempt_source"]
            if src.startswith("matched_rejected/"):
                # Recreate the headers used by wall.py when compiling a rejected
                # registry snippet. Keep the original file untouched.
                import wall
                d = os.path.join(HH, "build/wall-addrfix", k[1], k[0]); os.makedirs(d, exist_ok=True)
                src = wall.stage(os.path.join(HH, src), d, r)
            want.append(k); files[k] = [src]
    else:
        want, files = candidates()
    if a.only: want = [k for k in want if k[0] == a.only]
    print("candidates: %d functions (%d with attempt files)" % (len(want), sum(1 for k in want if files.get(k))), flush=True)
    from multiprocessing import Pool
    with Pool(a.jobs) as pool:
        res = pool.map(fix_one, [(k, files.get(k, []), a.tries) for k in want], chunksize=1)
    rej = set()
    if os.path.exists("queue/rejected.jsonl"):
        for l in open("queue/rejected.jsonl"):
            try: r = json.loads(l); rej.add((r["func"], r["segment"]))
            except (ValueError, KeyError): pass
    # already-matching attempts some batch recorded as MATCH are the loop's business already; the rest are offered
    elsewhere = set()
    for p in glob.glob("queue/*/results.jsonl"):
        if p.split("/")[1] == a.batch: continue
        for l in open(p):
            if '"MATCH"' in l:
                try: r = json.loads(l); elsewhere.add((r["func"], r["segment"])) if r.get("verified") == "MATCH" else None
                except (ValueError, KeyError): pass
    for r in res:
        if not a.walls and r["outcome"] == "MATCH" and r["plan"].startswith("none") and (r["func"], r["segment"]) in elsewhere:
            r["outcome"] = "ALREADY_MATCH_ELSEWHERE"
    counts = collections.Counter(bucket(r) for r in res)
    print("outcomes:"); [print("%5d  %s" % (n, k)) for k, n in counts.most_common()]
    m = [r for r in res if r["outcome"] in ("MATCH", "INFILE_ONLY")]
    size = lambda rs: sum(try_func.find_func(r["func"], None, r["segment"])[1] for r in rs)
    print("kept: %d (%d bytes): %d MATCH (try_func), %d INFILE_ONLY (exact in-file only); previously in queue/rejected.jsonl: %d" % (
        len(m), size(m), sum(r["outcome"] == "MATCH" for r in m), sum(r["outcome"] == "INFILE_ONLY" for r in m),
        sum((r["func"], r["segment"]) in rej for r in m)))
    if a.dry_run:
        for r in res:
            if r["outcome"] == "FAIL": print("  F %s %s %s" % (r["segment"], r["func"], r["reasons"][-1:]))
        for r in m: print("  %-11s %s %s  %s" % (r["outcome"], r["segment"], r["func"], r["plan"]))
        return
    B = "queue/" + a.batch
    os.makedirs(B + "/work", exist_ok=True)
    with open(B + "/report.jsonl", "w") as rep:
        for r in res: rep.write(json.dumps({k: v for k, v in r.items() if k != "text"}) + "\n")
    with open(B + "/functions.txt", "w") as ft, open(B + "/results.jsonl", "w") as rs:
        for r in m:
            d = workdir.path(a.batch, r["func"], r["segment"]); os.makedirs(d, exist_ok=True)
            srcdir = os.path.dirname(os.path.abspath(r["source"])).replace("/.attempts", "")
            for h in glob.glob(srcdir + "/*.h"): shutil.copy(h, d)
            open(d + "/attempt.c", "w").write(r["text"])
            shutil.copy(try_func.find_func(r["func"], None, r["segment"])[3], d + "/target.s")
            open(d + "/verify.txt", "w").write("MATCH\n%s\nfrom %s\nfix: %s\n" % (r["infile"], r["source"], r["plan"]))
            ft.write("%s %s\n" % (r["func"], r["segment"]))
            rs.write(json.dumps(dict(func=r["func"], segment=r["segment"], model="addrfix", verified="MATCH",
                                     claimed="addrfix %s: %s" % (r["outcome"], r["plan"]), checks=0, turns=0, seconds=r["seconds"],
                                     input_tokens=0, output_tokens=0, cache_read=0, cache_write=0, cost_usd_equiv=0.0,
                                     source=r["source"])) + "\n")
    open(B + "/DONE", "w").close()
    print("wrote %s" % B)

if __name__ == "__main__":
    main()
