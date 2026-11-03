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
SECTION = re.compile(r"^\s*\.section\s+(\S+)")

def asm_path(seg, func):
    cf = S.file_of(seg, func)
    return cf and "asm/nonmatchings/%s/%s/%s.s" % (seg, cf, func)

def asm_syms(path):
    """Symbol operands in instruction order (labels inside the function are local and not mapped). Only .text lines
    count: a function whose switch has a jump table starts its .s with a .late_rodata block of `.word .L...` lines,
    which look like instructions and shifted the whole map (Task 23: func_801C1A34 got "no clean symbol map")."""
    out, text = [], True
    for l in open(path):
        sec = SECTION.match(l)
        if sec: text = sec.group(1) == ".text"; continue
        if not text: continue
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

IMM_SIGNED = {8, 9, 0xA, 0xB}              # addi addiu slti sltiu: C literals, sign-extended
IMM_UNSIGNED = {0xC, 0xD, 0xE}             # andi ori xori
MEM_OPS = {0x20, 0x21, 0x23, 0x24, 0x25, 0x28, 0x29, 0x2B, 0x31, 0x35, 0x39, 0x3D}   # loads/stores: field offsets

def _sx(v):
    return (v & 0xFFFF) - 0x10000 if v & 0x8000 else v & 0xFFFF

def imm_maps(src, dst):
    """(constants, offsets) that differ between two same-shape functions, or None if they differ in anything else
    (relocated %hi/%lo operands and jal targets are handled by the symbol map). constants: {old: new} for
    addi/addiu/slti/sltiu/andi/ori/xori immediates; offsets: {old: new} for load/store offsets that are not
    symbol operands, i.e. the same code on a struct whose fields sit elsewhere (Task 23: lhu 0x1D8 -> 0x192)."""
    a, b = words(src), words(dst)
    if len(a) != len(b): return None
    sa = asm_syms(asm_path(*src))[:len(a)]
    out, offs = {}, {}
    for i, (x, y) in enumerate(zip(a, b)):
        if x == y: continue
        op = x >> 26
        if op in (2, 3) or (i < len(sa) and sa[i]): continue          # jal/j or a symbol operand
        if (x & 0xFFFF0000) != (y & 0xFFFF0000): return None
        if op in IMM_SIGNED: m, k, v = out, _sx(x), _sx(y)
        elif op in IMM_UNSIGNED: m, k, v = out, x & 0xFFFF, y & 0xFFFF
        elif op in MEM_OPS: m, k, v = offs, _sx(x), _sx(y)
        else: return None
        if m.setdefault(k, v) != v: return None
    return out, offs

def const_map(src, dst):
    """{old: new} constants (see imm_maps); None if the functions differ in more than constants (offsets count)."""
    r = imm_maps(src, dst)
    return None if r is None or r[1] else r[0]

LIT = re.compile(r"(-?)\b(0[xX][0-9A-Fa-f]+|\d+)([uUlL]*)\b(?![.\w])")    # 15, 0xF, 5U (suffix kept)

def body_span(text, func):
    """(start, end) of func's definition body ({ to the matching }), or None."""
    m = re.search(r"\b%s\s*\([^;{}]*\)\s*\{" % re.escape(func), text)
    if not m: return None
    depth = 0
    for i in range(m.end() - 1, len(text)):
        if text[i] == "{": depth += 1
        elif text[i] == "}":
            depth -= 1
            if depth == 0: return m.end() - 1, i + 1
    return None

def with_consts(text, cm, func=None):
    """Rewrite integer literals per cm, keeping hex/decimal style. Literals of other values are untouched. With func,
    only inside its body: a constant in the code says nothing about array sizes or struct padding elsewhere (Task 23:
    `u8 padC[4]` became `padC[12]` because 4 -> 12 was an addiu change)."""
    if not cm: return text
    if func:
        sp = body_span(text, func)
        if sp: return text[:sp[0]] + with_consts(text[sp[0]:sp[1]], cm) + text[sp[1]:]
    def sub(g):
        neg, tok = g.group(1), g.group(2)
        v = int(tok, 0) * (-1 if neg else 1)
        if v not in cm: return g.group(0)
        n = cm[v]
        if neg and n >= 0: return g.group(0)                        # sign flip: leave it, verification decides
        mag = abs(n); body = ("0x%X" % mag) if tok.lower().startswith("0x") else str(mag)
        return ("-" if n < 0 else "") + body + g.group(3)
    return LIT.sub(sub, text)

MASK_IMM = IMM_SIGNED | IMM_UNSIGNED | MEM_OPS | {0xF}

def shape(k):
    """Normalized shape of a function: its words with jal/j targets and every immediate that imm_maps can map (or the
    symbol map covers: lui) masked. functions.csv's `fp` keeps slti/sltiu/andi/ori/xori immediates, so copies that
    differ only in such a constant (file025's `n >= 5` vs `n >= 15`) were never grouped."""
    out = []
    for w in words(k):
        op = w >> 26
        out.append((w & 0xFC000000) if op in (2, 3) else (w & 0xFFFF0000) if op in MASK_IMM else w)
    return hash(tuple(out))

def shape_groups(rows):
    """{shape: [(seg, func)]}; also fills ROW. Functions whose bytes can't be read (csv out of date) group by fp."""
    groups = collections.defaultdict(list)
    for r in rows: ROW[(r["segment"], r["func"])] = r
    for r in rows:
        k = (r["segment"], r["func"])
        try: key = ("s", shape(k))
        except Exception: key = ("fp", r["fp"])
        groups[key].append(k)
    return groups

_ctx = {}
def context(seg, cf, func):
    if (seg, cf) not in _ctx: _ctx[(seg, cf)] = S.context_for(seg, func)
    return _ctx[(seg, cf)]

_sctx = {}
def definition(text, func):
    """(start, end) of func's definition: from the start of the line its header begins on to its closing brace."""
    sp = body_span(text, func)
    if not sp: return None
    m = None
    for m in re.finditer(r"\b%s\s*\(" % re.escape(func), text[:sp[0]]): pass
    return text.rfind("\n", 0, m.start()) + 1, sp[1]

def as_built(sseg, sfunc):
    """The registry snippet with its definition replaced by the one in src/ when the two differ, else None. The
    integration path may have rewritten the body on the way in (symfix_literals/rodata_owned: `extern f32
    D_801E8870` -> `1170.0f`, a constant owned by the file's rodata); a copy must take the form that links, since the
    source symbol would otherwise map onto the copy's own rodata label (Task 23: func_801E4558)."""
    text = open("matched/%s/%s.c" % (sseg, sfunc)).read()
    cf = S.file_of(sseg, sfunc)
    try: src = open("src/%s/%s.c" % (sseg, cf)).read()
    except (OSError, TypeError): return None
    a, b = definition(text, sfunc) or (None, None), definition(src, sfunc) or (None, None)
    if a[0] is None or b[0] is None: return None
    body = src[b[0]:b[1]]
    if body.strip() == text[a[0]:a[1]].strip(): return None
    return text[:a[0]] + body + text[a[1]:]

def self_contained(sseg, sfunc, dctx, m=None, text=None):
    """The source snippet (or `text`, a variant of it) plus what it used from its own file's declarations (it
    compiled with those in force), leaving out names the target file already declares."""
    text = text or open("matched/%s/%s.c" % (sseg, sfunc)).read()
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

def try_alone(func, seg, t, ctx):
    with tempfile.TemporaryDirectory() as td:
        p = os.path.join(td, "attempt.c"); open(p, "w").write(t)
        open(os.path.join(td, "context.h"), "w").write(ctx)
        open(os.path.join(td, "known.h"), "w").write("")
        r = subprocess.run([PY, "tools/hh/try_func.py", func, p, "--seg", seg], capture_output=True, text=True)
    return r.stdout

BSS_DEF = re.compile(r"^(?!\s*(?:extern|typedef|static)\b)([A-Za-z_][\w ]*?\b(D_([0-9A-F]{8})\w*)\s*(?:\[[^\]]*\])*)\s*;\s*$", re.M)

def owned_bss(seg, cf):
    """(start, end) of the BSS span this C file owns (tools/hh/bss_splits.json), or None."""
    import bss_layout
    try: a, n = bss_layout.owners().get((seg, cf), (0, 0))
    except Exception: return None
    return (a, a + n) if n else None

def bss_as_extern(text, span):
    """The snippet with its BSS definitions that fall outside `span` turned into extern declarations and its
    `<func>_bss_prefix` padding dropped, or None if it defines no such BSS. A copy in another file (or at another
    address) does not own its source's BSS: the target file's layout (bss_splits.json) decides who defines what
    (Task 23: file025's timer-script copies defined `u64 D_801E1670;` plus the source's prefix)."""
    defs = [g for g in BSS_DEF.finditer(text) if not (span and span[0] <= int(g.group(3), 16) < span[1])]
    if not defs: return None
    for g in reversed(defs): text = text[:g.start()] + "extern " + g.group(1).strip() + ";" + text[g.end():]
    return "".join(l for l in text.splitlines(True) if not PAD.match(l))

DECL = re.compile(r"^\s*(?:extern\s+)?[A-Za-z_][\w ]*?\b(D_[0-9A-F]{8})\s*(?:\[[^\]]*\])*\s*;\s*$", re.M)

SUFFIX = re.compile(r"^\s*u8\s+\w+_bss_suffix\s*\[[^\]]*\]\s*;\s*$")
PAD = re.compile(r"^\s*u8\s+\w+_bss_(?:prefix|suffix)\s*\[[^\]]*\]\s*;\s*$")

def bss_groups(texts):
    """{D_X: (address, lines)}: each BSS definition in texts with the `<func>_bss_prefix` padding before it (between
    it and the previous function) and the `<func>_bss_suffix` padding right after it. The first text that defines a
    symbol wins."""
    out = {}
    for text in texts:
        lines = text.splitlines()
        for i, l in enumerate(lines):
            g = BSS_DEF.match(l)
            if not g or g.group(2) in out: continue
            got = [l]
            for j in range(i - 1, max(-1, i - 40), -1):
                if lines[j].rstrip() == "}" or BSS_DEF.match(lines[j]): break    # a function's end (not a struct's)
                if PAD.match(lines[j]) and "_bss_prefix" in lines[j]: got.insert(0, lines[j]); break
            for j in range(i + 1, min(len(lines), i + 4)):
                if SUFFIX.match(lines[j]): got.append(lines[j]); break
                if lines[j].strip(): break
            out[g.group(2)] = (int(g.group(3), 16), got)
    return out

def borrow_bss(text, seg, cf, extra=()):
    """The snippet with its declarations of BSS that the target file defines (or `extra` snippets about to join it)
    replaced by the file's definition lines, padding included, for every definition at or below the highest
    address it uses, in address order; None if there is nothing to borrow. IDO lays BSS out in the order symbols
    are first seen (an `extern` counts), so a function that precedes the definers must repeat their tentative
    definitions in address order; a plain `extern u64` there moves the storage, and also changes the code
    (Task 23: file025's timer start functions)."""
    try: src = open("src/%s/%s.c" % (seg, cf)).read()
    except (OSError, TypeError): src = ""
    have = bss_groups([src] + list(extra))
    lines = text.splitlines(True)
    hits = [i for i, l in enumerate(lines) if DECL.match(l) and DECL.match(l).group(1) in have]
    if not hits: return None
    top = max(have[DECL.match(lines[i]).group(1)][0] for i in hits)
    chain = sorted((a, d, got) for d, (a, got) in have.items() if a <= top)
    names = {d for _, d, _ in chain}
    out = []
    for i, l in enumerate(lines):
        if i == hits[0]: out += [x + "\n" for _, _, got in chain for x in got]
        g = DECL.match(l)
        if (g and g.group(1) in names) or PAD.match(l): continue
        out.append(l)
    return "".join(out)

def drop_known_types(text, ctx):
    """Remove the snippet's struct/typedef definitions that the target file's context already defines."""
    known = set()
    for names, t in top_items(ctx):
        if "{" in t or "typedef" in t: known |= names
    out = text
    for names, t in top_items(text):
        if ("{" in t or "typedef" in t) and names & known: out = out.replace(t + "\n", "", 1)
    return out if out != text else None

SCORE = re.compile(r"score (\d+)/(\d+)")
NEAR = ("code matches but the function's .rodata", "instructions match but an address is wrong")
MAX_CLIMB = 48                    # try_func runs per copy for the literal search below

def verdict(out):
    """'match', 'near' (the code matches alone; only rodata or an address differs, which the in-file build settles:
    standalone placement of jump tables, floats and BSS is not the file's), or the score fraction (0 when none)."""
    if out.startswith("MATCH"): return "match"
    if any(n in out for n in NEAR): return "near"
    m = SCORE.search(out)
    return int(m.group(1)) / max(1, int(m.group(2))) if m else 0.0

def literal_sites(text, func, cm, offs):
    """[(start, end, neg, tok, [new values])]: integer literals the copy may need changed. In func's body: a value
    that is a changed constant or a changed load/store offset (either direction, a rewrite may need undoing). In a
    struct/union the snippet defines: pad sizes moved by each observed offset change (fields sit elsewhere)."""
    sp = body_span(text, func) or (0, 0)
    deltas = sorted({b - a for a, b in offs.items()})
    inv = {}
    for m in (cm, offs):
        for a, b in m.items(): inv.setdefault(b, set()).add(a)
    structs = [(g.start(), g.end()) for g in re.finditer(r"\b(?:struct|union)\s+\w*\s*\{[^{}]*\}", text)
               if not sp[0] <= g.start() < sp[1]]
    out = []
    for g in LIT.finditer(text):
        v = int(g.group(2), 0) * (-1 if g.group(1) else 1)
        vals = set()
        if sp[0] <= g.start() < sp[1]:
            for m in (cm, offs):
                if v in m: vals.add(m[v])
            vals |= inv.get(v, set())
        elif any(a <= g.start() < b for a, b in structs) and v > 0:
            vals |= {v + d for d in deltas if v + d > 0}
        vals.discard(v)
        if vals: out.append((g.start(), g.end(2), g.group(1), g.group(2), sorted(vals)))
    return out

def render(text, sites, state):
    """text with sites[i] set to state[i] (style kept: hex stays hex)."""
    for i in sorted(state, reverse=True):
        a, b, neg, tok, _ = sites[i]; n = state[i]
        body = ("0x%X" % abs(n)) if tok.lower().startswith("0x") else str(abs(n))
        text = text[:a] + ("-" if n < 0 else "") + body + text[b:]
    return text

def climb(func, seg, text, ctx, cm, offs, budget=MAX_CLIMB):
    """Greedy literal search guided by try_func's score: each round tries every single literal change from
    literal_sites and keeps the best one that raises the score. Returns (text, 'match'|'near') or None.
    Replaces trying subsets in order of size (32 at most), which never reached the 4-of-6 rewrite of
    func_801387CC (`case 1:` must stay, `sp7C = 1;` must change)."""
    sites = literal_sites(text, func, cm, offs)
    if not sites: return None
    state, runs = {}, 0
    best = verdict(try_alone(func, seg, text, ctx)); runs += 1
    if best in ("match", "near"): return text, best
    while runs < budget:
        top = None
        for i, site in enumerate(sites):
            for v in site[4]:
                if state.get(i) == v: continue
                if runs >= budget: break
                st = dict(state); st[i] = v
                t = render(text, sites, st)
                r = verdict(try_alone(func, seg, t, ctx)); runs += 1
                if r in ("match", "near"): return t, r
                if r > best and (top is None or r > top[0]): top = (r, st)
        if not top: return None
        best, state = top
    return None

def alone(args):
    """args: (dst_seg, dst, [(src_seg, src)]) -> (dst_seg, dst, text, how, clash text) for the first source whose
    copy matches alone (or is 'near': only rodata/addresses differ, for the in-file build to decide)."""
    seg, func, sources = args
    cf = S.file_of(seg, func)
    if not cf or (seg, cf) in S.LIBFILES: return seg, func, None, "no C file", None
    why, clash = "no clean symbol map", None
    for sseg, sfunc in sources:
        m = symbol_map(sseg, sfunc, seg, func)
        if not m: continue
        im = imm_maps((sseg, sfunc), (seg, func))
        if im is None: why = "differs beyond symbols, constants and offsets"; continue
        cm, offs = im
        ctx = context(seg, cf, func)
        tries = []
        for text in (open("matched/%s/%s.c" % (sseg, sfunc)).read(), as_built(sseg, sfunc)):
            if not text: continue
            plain = with_consts(translate(text, m), cm, func)
            full = with_consts(translate(self_contained(sseg, sfunc, ctx, m, text), m), cm, func)
            tries += [full, R.with_context_decls(full, ctx, func)]
            if plain != full: tries += [plain, R.with_context_decls(plain, ctx, func)]
        borrowed = [borrow_bss(t, seg, cf) for t in tries if t]
        tries = [b for b in borrowed if b] + tries
        span = owned_bss(seg, cf)
        ext = [bss_as_extern(t, span) for t in tries if t]
        if any(ext):                     # BSS this file does not own: extern first; definitions only when it might
            tries = [e for e in ext if e] + (tries if span else [])
        for t in list(tries):            # the snippet may define a type the file already has
            d = t and drop_known_types(t, ctx)
            if d: tries += [d, R.with_context_decls(d, ctx, func)]
        near, scored = None, []
        for t in tries:   # as copied, then with the file's declarations
            if not t: continue
            out = try_alone(func, seg, t, ctx)
            v = verdict(out)
            if v == "match": return seg, func, t, "%s/%s" % (sseg, sfunc), None
            if v == "near":
                near = near or t; continue
            why = "alone: " + (out.strip().splitlines() or ["compile error"])[0][:80]
            if v: scored.append((v, t))
            if why.startswith("alone: compile") and clash is None: clash = tries[-1] if len(tries) > 2 else t
        if near: return seg, func, near, "%s/%s (near alone)" % (sseg, sfunc), None
        if (cm or offs) and scored:      # a literal that means two things, or struct fields that moved: search
            base = max(scored, key=lambda x: x[0])[1]
            r = climb(func, seg, base, ctx, cm, offs)
            if r: return seg, func, r[0], "%s/%s (literal search%s)" % (sseg, sfunc, ", near" if r[1] == "near" else ""), None
            why += " (literal search failed)"
    return seg, func, None, why, clash

def file_ok(seg, cf, snips, must):
    """Build the file with snips; returns the subset of snips kept, or None if any `must` name dropped out."""
    with tempfile.TemporaryDirectory() as td:
        kept, rej, text, problem = S.trial_snippets(seg, cf, snips, td)
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
    present = S.defined_functions(open('src/%s/%s.c' % (seg, cf)).read())
    base = {n: t for (s, n), t in reg.items() if s == seg and n in names & present}
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
    reg, blocked = S.registry(), S.link_blocked()
    groups = shape_groups(rows)
    jobs = []
    for g in groups.values():
        done = [k for k in g if k in reg]
        if not done: continue
        for k in g:
            # link-blocklisted functions (the reserved file036 finale among them) are never copied onto: registry()
            # hides them, so they looked unmatched and a copy would be written to matched/ for them
            if k in reg or k in blocked or (only and k[0] != only): continue
            # prefer a source in the same segment, then any (several, in case one doesn't map cleanly)
            src = sorted(done, key=lambda d: (d[0] != k[0], d))[:3]
            jobs.append((k[0], k[1], src))
    jobs.sort(); jobs = jobs[:limit] if limit else jobs
    # alone-stage memo: a copy that failed before is skipped while its sources, its file's registered C and this
    # tool are unchanged (each loop cycle otherwise re-checks ~1,100 known failures)
    import hashlib
    ALONE_LOG = "queue/propagate_alone_failed.jsonl"
    tool_v = hashlib.sha1(b''.join(open(p, 'rb').read() for p in (
        __file__, 'tools/hh/srcbuild.py', 'tools/hh/reconcile_frozen.py',
        'tools/hh/unify.py', 'tools/hh/try_func.py', 'hybridheaven.yaml'))).hexdigest()[:12]
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
