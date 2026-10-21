"""Reconcile a frozen C file with new verified matches, without re-rendering it from scratch.

srcbuild freezes a file when a from-scratch render of its registered snippets plus a new one would lose a registered
function (declaration order changes codegen), and turns every new candidate away ("file frozen: adding it would evict
registered functions"). This instead edits the file as it stands: the new snippet replaces its own GLOBAL_ASM entry
(splitting a merged block if needed), its declarations are deduplicated against the file's, and names it declares
differently from the file (or types it redefines) are made private with `#define NAME NAME__<func>` around the snippet
(the alias links at NAME's address, see try_func.ADDR_NAME and gen_extern_syms). A candidate text is kept only if the
file compiles, every previously registered function still matches at its address, the new one matches, and the file
keeps its .text size. Falls back to from-scratch renders (plain / hoisted / unproto / aliased) that keep everything.

  reconcile_frozen.py scan CANDS.json OUT.json     dry run over candidates ({seg, func, attempt, cfile} per item)
  reconcile_frozen.py apply OUT.json               write the winning src files and register their snippets
  (srcbuild.build_one calls reconcile_file() itself on the frozen path)
"""
import json, os, re, sys, tempfile
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
sys.path.insert(0, os.path.join(HH, "tools/hh"))
_main = sys.modules.get("__main__")
if os.path.basename(getattr(_main, "__file__", "") or "") == "srcbuild.py": S = _main   # called from srcbuild itself
else:
    _argv, sys.argv = sys.argv, ["srcbuild.py", "none"]       # import srcbuild without running a mode
    import srcbuild as S
    sys.argv = _argv
from elftools.elf.elffile import ELFFile

ADDR_SYM = re.compile(r"^(?:func|D)_[0-9A-F]{8}$")
TAG_DEF = re.compile(r"^\s*(?:typedef\s+)?(?:struct|union|enum)\s+(\w+)\s*\{")
PRAGMA = re.compile(r'^#pragma GLOBAL_ASM\("([^"]+)"\)\s*$')

def _norm_decl(line):
    return " ".join(re.sub(r"/\*.*?\*/|//.*$", "", line).replace("extern ", "").split())

def _def_head(line):
    """A definition's signature as a normalized declaration (`s32 f(s32 a) {` -> `s32 f(s32 a);`)."""
    return _norm_decl(line.split("{")[0].rstrip() + ";")

ALIAS_DEF = re.compile(r"^\s*#define\s+(\w+)\s+\1_\w+\s*$")
ALIAS_UNDEF = re.compile(r"^\s*#undef\s+(\w+)\s*$")
BLOCK_START = re.compile(r"^\s*(?:typedef\b|(?:struct|union|enum)\s+\w+\s*\{)")

class Scan:
    """File-scope facts of a src file. declared_at[i]: names declared or defined at file scope on lines < i (a name
    inside one of the file's own alias regions `#define N N__x` .. `#undef N` is the alias, not N). decl_text: name ->
    first declaration (normalized), "DEF" for a function defined here, ("type", None) for a tag/typedef. file_defs:
    function -> its definition head. types: [(start, end, {names})] type definition blocks. aliased_at[i]: names
    under an alias at line i."""
    def __init__(self, text):
        self.lines = lines = text.splitlines()
        self.decl_text, self.file_defs, self.declared_at, self.aliased_at, self.types, self.decl_line = {}, {}, [], [], [], {}
        declared, active, depth, block = set(), set(), 0, None
        for i, l in enumerate(lines):
            self.declared_at.append(set(declared)); self.aliased_at.append(set(active))
            m = ALIAS_DEF.match(l)
            if m: active.add(m.group(1)); continue
            m = ALIAS_UNDEF.match(l)
            if m: active.discard(m.group(1)); continue
            if depth == 0 and block is None and BLOCK_START.match(l) and not l.lstrip().startswith("#"): block = [i, set()]
            if block is not None:
                for t in TAG_DEF.findall(l) + [x for x in S.TYPEDEF.findall(l) for x in x if x]:
                    if t not in active: block[1].add(t)
            if depth == 0:
                n = S.decl_name(l, 0); m = S.DEFN.match(l)
                if n and n not in active: declared.add(n); self.decl_text.setdefault(n, _norm_decl(l)); self.decl_line.setdefault(n, l.strip())
                elif m and m.group(1) not in active:
                    declared.add(m.group(1)); self.file_defs.setdefault(m.group(1), _def_head(l)); self.decl_text.setdefault(m.group(1), "DEF")
                for t in TAG_DEF.findall(l):
                    if t not in active: self.decl_text.setdefault(t, ("type", None))
                t = S.TYPEDEF.search(l)
                if t and not l.lstrip().startswith("#"):
                    tn = t.group(1) or t.group(2)
                    if tn not in active: declared.add(tn); self.decl_text.setdefault(tn, ("type", None))
            depth += l.count("{") - l.count("}")
            if block is not None and depth == 0 and l.rstrip().endswith(";"):
                self.types.append((block[0], i, block[1])); block = None
        self.declared_at.append(set(declared)); self.aliased_at.append(set(active))

def scan(text):
    sc = Scan(text)
    return sc.lines, sc.decl_text, sc.file_defs, sc.declared_at

def private_names(text, decl_text, file_defs, own):
    """Names the snippet must keep private (ported from the rodata2 branch): address-named symbols it declares differently
    from the file's first declaration or definition, and struct/union/enum tags and typedef names the file already has."""
    out, depth = set(), 0
    for l in text.splitlines():
        if depth == 0:
            n = S.decl_name(l, 0)
            if n and ADDR_SYM.match(n) and n != own:
                if n in file_defs:
                    if file_defs[n] != _norm_decl(l): out.add(n)
                elif n in decl_text and decl_text[n] != _norm_decl(l): out.add(n)
            for t in TAG_DEF.findall(l) + [x for x in S.TYPEDEF.findall(l) for x in x if x]:
                if t in decl_text and decl_text[t] != ("type", own): out.add(t)
        depth += l.count("{") - l.count("}")
    return out

def merged_paths(block):
    """Asm paths a _mrg_ block was made from (their glabels, in order)."""
    seg, cf = block.split("/")[2:4]
    names = re.findall(r"^glabel (func_[0-9A-F]{8})", open(block).read(), re.M)
    return ["asm/nonmatchings/%s/%s/%s.s" % (seg, cf, n) for n in names]

def locate(lines, seg, cfile, name):
    """(line index, before paths, after paths) of the GLOBAL_ASM entry holding `name`, or None."""
    own = "asm/nonmatchings/%s/%s/%s.s" % (seg, cfile, name)
    for i, l in enumerate(lines):
        m = PRAGMA.match(l)
        if not m: continue
        p = m.group(1)
        if p == own: return i, [], []
        if os.path.basename(p).startswith("_mrg_") and os.path.exists(p):
            ps = merged_paths(p)
            if own in ps:
                k = ps.index(own); return i, ps[:k], ps[k + 1:]
    return None

MULTI = re.compile(r"^(\s*extern\s+(?:(?:const|volatile|unsigned|signed|struct|union|enum)\s+)*[A-Za-z_]\w*)\s+(\**\s*[A-Za-z_]\w*(?:\[[^\]]*\])*(?:\s*,\s*\**\s*[A-Za-z_]\w*(?:\[[^\]]*\])*)+)\s*;\s*$")

def normalize(snippet):
    """The snippet with one declarator per `extern` line (dedup and aliasing see one name per line) and without the
    worker idiom `#define X X_ctx` / `#include` / `#undef X` that hid a context.h name from its own declaration."""
    lines = snippet.splitlines(); out = []
    defs = {m.group(1) for l in lines for m in [re.match(r"^\s*#define\s+((?:func|D)_[0-9A-F]{8})\s+\1_ctx\s*$", l)] if m}
    for l in lines:
        m = re.match(r"^\s*#(define|undef)\s+((?:func|D)_[0-9A-F]{8})\b", l)
        if m and m.group(2) in defs: continue
        m = MULTI.match(l)
        if m and "(" not in l:
            out += ["%s %s;" % (m.group(1), d.strip()) for d in m.group(2).split(",")]; continue
        out.append(l)
    return "\n".join(out) + "\n"

def borrowed(sc, i, snippet, own_types):
    """Type definitions the snippet uses that the file only defines after line i (the attempt was compiled against
    context.h, which had them): the blocks to copy in front of the snippet, in file order, and the names they define
    (to alias: a typedef can't be defined twice). Blocks a copied block needs are copied too."""
    before = sc.declared_at[i]
    later = [(st, en, names) for st, en, names in sc.types if st > i and not names & before and not names & own_types]
    byname = {n: blk for blk in later for n in blk[2]}
    need, todo, out = set(), set(re.findall(r"\b[A-Za-z_]\w*\b", snippet)) & set(byname), []
    while todo:
        n = todo.pop(); blk = byname[n]
        if blk in out: continue
        out.append(blk); need |= blk[2]
        todo |= set(re.findall(r"\b[A-Za-z_]\w*\b", "\n".join(sc.lines[blk[0]:blk[1] + 1]))) & set(byname) - need
    out.sort()
    return sum((sc.lines[st:en + 1] for st, en, _ in out), []), need

def body_for(seg, cfile, name, snippet, sc, i, alias):
    """Lines to put in the file for `snippet` at line i (late literals resolved, kept rodata block, declarations
    deduplicated, private names aliased when `alias`; alias="isolate" also aliases every address-named symbol the
    snippet declares that the file doesn't declare the same way before it, so later neighbours see exactly what they
    saw before). Functions the file defines later and types it defines later that the snippet uses get an aliased
    forward declaration / a copy of the definition (see borrowed)."""
    declared, decl_text, file_defs = sc.declared_at[i], sc.decl_text, sc.file_defs
    path = "asm/nonmatchings/%s/%s/%s.s" % (seg, cfile, name)
    snippet = normalize(S.late_literals(path, snippet))
    out = []
    kb = S.kept_rodata_block(seg, cfile, name, path, snippet)
    if kb: out += ['#pragma GLOBAL_ASM("%s")' % kb, ""]
    own, depth = set(), 0
    for l in snippet.splitlines():
        n = S.decl_name(l, depth) or (S.DEFN.match(l).group(1) if depth == 0 and S.DEFN.match(l) else None)
        if n: own.add(n)
        if depth == 0:
            for t in TAG_DEF.findall(l) + [x for x in S.TYPEDEF.findall(l) for x in x if x]: own.add(t)
        depth += l.count("{") - l.count("}")
    md = S.missing_decls(snippet, declared)
    full = "\n".join(md) + "\n" + snippet
    priv = private_names(full, decl_text, file_defs, name) if alias else set()
    if alias in ("isolate", "shield"):
        depth = 0
        for l in full.splitlines():
            n = S.decl_name(l, depth); depth += l.count("{") - l.count("}")
            if n and ADDR_SYM.match(n) and n != name and not (n in declared and decl_text.get(n) == _norm_decl(l)):
                priv.add(n)
    if alias == "shield":       # functions the snippet calls without declaring, which the file declares or defines
        depth = 0               # before it: the snippet sees them as it did alone (implicit `int f()`)
        called = set(re.findall(r"\b(func_[0-9A-F]{8})\s*\(", snippet)) - own - {name}
        priv |= {n for n in called if n in declared}
    # functions defined further down that the snippet uses without declaring: an aliased forward declaration
    used = set(re.findall(r"\b(func_[0-9A-F]{8})\b", snippet)) - own - {name}
    fwd = sorted(n for n in used if n in file_defs and n not in declared)
    # data the snippet uses that only a later neighbour declares (context.h had it): that declaration, aliased
    md_names = {S.decl_name(l, 0) for l in md}
    later = sorted(n for n in set(re.findall(r"\b(D_[0-9A-F]{8})\b", snippet)) - own - declared - md_names
                   if n in sc.decl_line)
    extra = [file_defs[n] for n in fwd] + [sc.decl_line[n] for n in later]
    blocks, tnames = borrowed(sc, i, snippet + "\n".join(extra), own)
    priv |= set(fwd) | set(later) | tnames
    out += ["#define %s %s__%s" % (n, n, name) for n in sorted(priv)]
    out += blocks
    out += ["extern " + file_defs[n] for n in fwd] + [sc.decl_line[n] for n in later]
    out += md
    out += S.snippet_lines(snippet, declared - priv)
    # a macro the snippet defines for itself must not leak into later neighbours (`#define g ...` broke a later
    # snippet's `s32 g;`)
    macros = [m.group(1) for l in snippet.splitlines() for m in [re.match(r"^\s*#define\s+(\w+)", l)] if m]
    undone = {m.group(1) for l in snippet.splitlines() for m in [re.match(r"^\s*#undef\s+(\w+)", l)] if m}
    out += ["#undef %s" % m for m in dict.fromkeys(macros) if m not in undone and m not in priv]
    out += ["#undef %s" % n for n in sorted(priv)]
    return out, priv

def verify(seg, cfile, text, names, td):
    """(ok, why): the file compiles, every name in `names` matches at its address, the .text keeps its size."""
    obj, err = S.compile_file(text, td)
    if obj is None:
        errs = re.findall(r"Error: \S+ (line \d+: .*)", err) or re.findall(r"line \d+: .*", err)
        return False, "compile error: " + " | ".join(m.strip() for m in errs[:3])[:300]
    info = {e[0]: e for e in S.entries(seg, cfile)}
    base = min(e[4] for e in info.values()); ro = S.FILE_RODATA.get((seg, cfile))
    bad = [n for n in names if n not in info or not S.func_ok(obj, n, info[n][2], info[n][3], info[n][4], base, ro)]
    if bad: return False, "does not match: " + ", ".join(bad[:4])
    start, end = S.file_span(seg, cfile)
    with open(obj, "rb") as fh:
        got = ELFFile(fh).get_section_by_name(".text")["sh_size"]
    if got != end - start: return False, "file .text is 0x%X, original 0x%X" % (got, end - start)
    return True, "ok"

def _wrap_later(lines, targets, at):
    """Alias each (line index, name) declaration around the function definition that follows it. A declaration in the
    file's hoisted header (before any definition) serves the whole file: it is aliased everywhere but around the new
    snippet's own entry (`at`, its GLOBAL_ASM line). Edits are applied bottom-up so positions stay valid."""
    out = list(lines)
    first = next((j for j, l in enumerate(out) if S.DEFN.match(l)), len(out))
    header = sorted({n for k, n in targets if k < first})
    ops = [(at, "bracket", None)] if header else []
    for k, name in targets:
        if k < first: ops.append((k, "define", name)); continue
        end, depth, seen = k, 0, False
        for j in range(k, len(out)):
            if S.DEFN.match(out[j]) and depth == 0: seen = True
            depth += out[j].count("{") - out[j].count("}")
            if seen and depth <= 0: end = j; break
        else: end = k
        if k < at <= end: end = at - 1           # never swallow the new snippet's own entry
        ops.append((k, "region", (name, end)))
    for pos, kind, arg in sorted(ops, key=lambda o: -o[0]):
        if kind == "bracket":
            out[pos + 1:pos + 1] = ["#define %s %s__decl" % (n, n) for n in header]
            out[pos:pos] = ["#undef %s" % n for n in header]
        elif kind == "define": out[pos:pos] = ["#define %s %s__decl" % (arg, arg)]
        else:
            name, end = arg
            out[end + 1:end + 1] = ["#undef %s" % name]; out[pos:pos] = ["#define %s %s__decl%d" % (name, name, pos)]
    return out

def own_decl_fixes(lines, name, snippet, at):
    """Declarations in the file that clash with the snippet: the file's declarations of `name` that disagree with the
    snippet's definition (a neighbour declared the new function with a prototype, the snippet defines it old-style),
    and declarations after the snippet's place (`at`) of functions the snippet calls without declaring (implicit
    `int f()` first, then a prototype: IDO rejects the prototype). Yields (how, lines) with those declarations aliased
    around the neighbour that follows them (the definition stays the real symbol), dropped, or replaced by the
    definition's head."""
    head = next((_def_head(l) for l in snippet.splitlines() if S.DEFN.match(l) and S.DEFN.match(l).group(1) == name), None)
    own, depth = set(), 0
    for l in snippet.splitlines():
        n = S.decl_name(l, depth); depth += l.count("{") - l.count("}")
        if n: own.add(n)
    called = set(re.findall(r"\b(func_[0-9A-F]{8})\s*\(", snippet)) - own - {name}
    bad, later, depth = [], [], 0
    first = next((j for j, l in enumerate(lines) if S.DEFN.match(l)), len(lines))
    sc = Scan("\n".join(lines) + "\n")
    for k, l in enumerate(lines):
        if depth == 0:
            n = S.decl_name(l, 0)
            if n in sc.aliased_at[k]: pass
            elif n == name and head is not None and _norm_decl(l) != head: bad.append(k)
            elif n in called and "(" in l: later.append((k, n))
        depth += l.count("{") - l.count("}")
    if bad: yield "alias-later", _wrap_later(lines, [(k, name) for k in bad], at)
    if later: yield "alias-uses", _wrap_later(lines, later, at)
    if bad and later: yield "alias-both", _wrap_later(lines, [(k, name) for k in bad] + later, at)
    if bad:
        yield "drop-decl", [l for k, l in enumerate(lines) if k not in bad]
        yield "fix-decl", ["extern " + head if k in bad else l for k, l in enumerate(lines)]

def insert_variants(seg, cfile, text, name, snippet):
    """Candidate texts with `snippet` in place of its asm entry: plain declarations, then private aliases, then the
    snippet's own file-scope declarations hoisted to the top of the file; each also with the file's clashing
    declarations of `name` itself repaired (own_decl_fixes)."""
    lines0 = text.splitlines(); snippet = normalize(snippet)
    loc0 = locate(lines0, seg, cfile, name)
    if loc0 is None: return
    for fix, lines in [("", lines0)] + list(own_decl_fixes(lines0, name, snippet, loc0[0])):
        sc = Scan("\n".join(lines) + "\n"); lines = sc.lines
        loc = locate(lines, seg, cfile, name)
        if loc is None: return
        i, before, after = loc
        pre = ['#pragma GLOBAL_ASM("%s")' % S.merged_block(seg, cfile, before), ""] if before else []
        post = ["", '#pragma GLOBAL_ASM("%s")' % S.merged_block(seg, cfile, after)] if after else []
        tag = ("+" + fix) if fix else ""
        seen = set()
        for alias in (False, True, "isolate", "shield"):
            body, priv = body_for(seg, cfile, name, snippet, sc, i, alias)
            if tuple(sorted(priv)) in seen: continue
            seen.add(tuple(sorted(priv)))
            yield (alias if alias in ("isolate", "shield") else "alias" if alias else "plain") + tag, "\n".join(lines[:i] + pre + body + post + lines[i + 1:]) + "\n"
        # the snippet's declarations at the top (a name it uses may only be declared further down the file)
        body, priv = body_for(seg, cfile, name, snippet, sc, 0, False)
        decls, rest, depth = [], [], 0
        for l in body:
            n = S.decl_name(l, depth); depth += l.count("{") - l.count("}")
            (decls if n and n not in sc.declared_at[i] and n not in priv and not l.startswith("#pragma") else rest).append(l)
        if decls:
            top = next((k + 1 for k, l in enumerate(lines) if l.startswith("#include")), 0)
            yield "hoist-own" + tag, "\n".join(lines[:top] + decls + lines[top:i] + pre + rest + post + lines[i + 1:]) + "\n"

def rerender_variants(seg, cfile, snips):
    for mode in (False, True, "unproto"):
        try: yield "render-%s" % mode, S.render(seg, cfile, snips, hoist=mode)[0]
        except Exception as e: continue

def reconcile_file(seg, cfile, text, old, new, td=None, log=None):
    """Add the `new` snippets ({name: text}) to a frozen file whose current text `text` is a correct build of `old`.
    Returns (text, accepted {name: how}, rejected {name: why}). The registered set never shrinks: every candidate text
    must keep all of `old` (and the already accepted new ones) matching."""
    own_td = td is None
    if own_td: td = tempfile.mkdtemp()
    info = {e[0]: e for e in S.entries(seg, cfile)}
    accepted, rejected, have = {}, {}, dict(old)
    todo = sorted((n for n in new if n in info), key=lambda n: info[n][2])
    for n in list(todo):
        others = {m.group(1) for l in new[n].splitlines() for m in [S.DEFN.match(l)] if m} - {n}
        if others: rejected[n] = "defines other functions too (%s)" % ", ".join(sorted(others)); todo.remove(n)
    try:
        for rnd in range(2):                     # a second pass: one new neighbour's declarations may unblock another
            for name in [n for n in todo if n not in accepted]:
                why = {}
                for how, cand in insert_variants(seg, cfile, text, name, new[name]):
                    ok, msg = verify(seg, cfile, cand, list(have) + [name], td)
                    if log: log("%s/%s %s %s: %s" % (seg, cfile, name, how, msg))
                    if ok: text = cand; accepted[name] = how; have[name] = new[name]; break
                    why[how] = msg
                else:
                    if rnd == 1 or not why:
                        if not why:          # no asm entry for it in the file (already C, or a generated block)
                            for how, cand in rerender_variants(seg, cfile, dict(have, **{name: new[name]})):
                                ok, msg = verify(seg, cfile, cand, list(have) + [name], td)
                                if log: log("%s/%s %s %s: %s" % (seg, cfile, name, how, msg))
                                if ok: text = cand; accepted[name] = how; have[name] = new[name]; break
                                why[how] = msg
                        if name not in accepted:
                            rejected[name] = "; ".join("%s: %s" % kv for kv in why.items()) or "no asm entry in the file"
            if len(accepted) == len(todo): break
        for name in new:
            if name not in info: rejected[name] = "not a function of this file"
    finally:
        if own_td: import shutil; shutil.rmtree(td, ignore_errors=True)
    return text, accepted, rejected

def _job(args):
    seg, cfile, items = args
    old = {n: t for (s, n), t in S.registry().items() if s == seg and n in {e[0] for e in S.entries(seg, cfile)}}
    path = "src/%s/%s.c" % (seg, cfile)
    if not os.path.exists(path): return seg, cfile, None, {}, {n: "no src file" for n in items}, old
    text0 = open(path).read()
    with tempfile.TemporaryDirectory() as td:
        ok, msg = verify(seg, cfile, text0, list(old), td)     # (srcbuild.existing_ok misses K&R definitions)
        if not ok:
            return seg, cfile, None, {}, {n: "current src file is not a correct build of its registered functions: " + msg for n in items}, old
        new = {n: open(p).read() for n, p in items.items()}
        text, acc, rej = reconcile_file(seg, cfile, text0, old, new, td)
        # the result must still pass srcbuild's own check for a frozen file
        if acc:
            open(os.path.join(td, "check.c"), "w").write(text)
            allsn = dict(old, **{n: new[n] for n in acc})
            obj, err = S.compile_file(text, td)
            ok, msg = verify(seg, cfile, text, list(allsn), td)
            if not ok: return seg, cfile, None, {}, {n: "final verify failed: " + msg for n in items}, old
    return seg, cfile, text, acc, rej, old

if __name__ == "__main__" and sys.argv[1] == "scan":
    from multiprocessing import Pool
    cands = json.load(open(sys.argv[2]))
    byfile = {}
    for c in cands:
        if c.get("cfile") and not c.get("lib") and c.get("alone", True):
            byfile.setdefault((c["seg"], c["cfile"]), {})[c["func"]] = c["attempt"]
    jobs = [(seg, cf, items) for (seg, cf), items in sorted(byfile.items())]
    out = {}
    with Pool(int(os.environ.get("JOBS", max(1, os.cpu_count() // 2)))) as p:
        for seg, cf, text, acc, rej, old in p.imap_unordered(_job, jobs):
            key = "%s/%s" % (seg, cf)
            out[key] = dict(seg=seg, cfile=cf, text=text, accepted=acc, rejected=rej, registered=sorted(old),
                            attempts={n: byfile[(seg, cf)][n] for n in acc})
            print(key, "accepted", sorted(acc.items()), "rejected", len(rej), flush=True)
    json.dump(out, open(sys.argv[3], "w"), indent=1)
    print(sum(len(v["accepted"]) for v in out.values()), "accepted,", sum(len(v["rejected"]) for v in out.values()), "rejected")

if __name__ == "__main__" and sys.argv[1] == "apply":
    res = json.load(open(sys.argv[2])); n = 0
    for key, v in sorted(res.items()):
        if not v["accepted"] or not v["text"]: continue
        open("src/%s.c" % key, "w").write(v["text"])
        for name in v["accepted"]:
            os.makedirs("matched/" + v["seg"], exist_ok=True)
            open("matched/%s/%s.c" % (v["seg"], name), "w").write(open(v["attempts"][name]).read()); n += 1
    print("registered", n, "functions")

if __name__ == "__main__" and sys.argv[1] == "report":
    # reconcile_frozen.py report OUT.json: what the scan could not place, by reason; compile errors of the snippet in its
    # file context (a struct or declaration the attempt relied on has changed since) need a model: queue/reconcile/needs_model.txt
    res = json.load(open(sys.argv[2])); os.makedirs("queue/reconcile", exist_ok=True)
    kinds, model = {}, []
    for key, v in sorted(res.items()):
        for n, w in sorted(v["rejected"].items()):
            first = w.split(";")[0].split(": ", 1)[-1]
            if "compile error" in first: kind = "compile error in file context"; model.append("%s %s" % (n, v["seg"]))
            elif first.startswith("does not match: %s" % n) and ("," not in first.split(": ", 1)[1]): kind = "new function does not match in file"
            elif first.startswith("does not match"): kind = "would evict registered functions"
            elif "not a correct build" in first: kind = "src file stale (registry changed under the scan)"
            else: kind = first[:60]
            kinds.setdefault(kind, []).append("%s/%s %s: %s" % (v["seg"], v["cfile"], n, w[:400]))
    with open("queue/reconcile/needs_model.txt", "w") as fh: fh.write("".join(l + "\n" for l in model))
    with open("queue/reconcile/rejected.txt", "w") as fh:
        for kind, items in sorted(kinds.items()):
            fh.write("## %s (%d)\n" % (kind, len(items)) + "".join(l + "\n" for l in items) + "\n")
    print("accepted %d; rejected by reason: %s; needs_model.txt: %d" % (sum(len(v["accepted"]) for v in res.values()),
          ", ".join("%s=%d" % (k, len(v)) for k, v in sorted(kinds.items())), len(model)))
