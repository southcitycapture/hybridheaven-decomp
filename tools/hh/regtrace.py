#!/usr/bin/env python3
"""Register tracer: which C value got which register in an attempt, which register the target gives it, and why.

  regtrace.py FUNC --seg SEG --source attempt.c [--json out.json] [--max-rows N]

IDO 7.1 allocates registers in two places, and `cc -K` keeps the evidence of both:
  * uopt's global colouring (Chow priority colouring) assigns every value that lives across statements: locals,
    parameters, and uopt's own temporaries (loop induction values, hoisted addresses and constants). Its output ucode
    (the .O file) is already register-allocated: such a value appears as `Rmt` memory with the register number as its
    offset. cfe's ucode (the .B file) still names the same values by their stack slot, and the -g3 symbol table names
    those slots, so .B against .O says which C variable is in which register.
  * ugen allocates the short-lived expression temporaries inside one statement ($t6-$t9, $at, $f4-$f10 ...). Those
    registers never appear in the .O file.

The report aligns the attempt's instructions with the target's (opcodes, plus the immediates of li / %lo, which say
which constant or address a value is), reads the register each aligned pair uses, and attributes every disagreement to
one uopt value (its C name or uopt temp, references, live blocks, an estimated priority, the target's register for it)
or to a ugen temporary on a source line. It also reads the colouring order: uopt pops values by priority and gives each
the lowest free register of its pool, so of two values live at the same time, the one in $s0 was popped before the one
in $s1. Where the target's order differs, the report names the pair and the levers that move priority. Instructions
that agree in register but work on different values in the two builds are listed as an ordering difference.

Model (IDO 7.1 uopt; n64-decomp-workbench's instrumented-uopt laws L10-L12, read-only at ~/work/tools-ext):
  priority = save / units; save grows ~10 per reference; units = raw if raw < 3 else ((raw - 2) >> 2) + 2 with
  raw = references + live blocks; ties go to the first occurrence; interference is per basic block. The estimate
  counts references in uopt's output, so it is a guide, not uopt's number. On the 113 register walls of 2026-11-02 it
  ordered 90% of overlapping callee-saved pairs and 82% of $v1/$t pairs the way uopt did; argument/result registers
  ($a0-$a3, $v0, $f0/$f2/$f12/$f14) follow a move-saving preference first, so they are left out of the order check.
"""
import argparse
import collections
import difflib
import json
import os
from pathlib import Path
import shutil
import struct
import subprocess
import sys
import tempfile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import diagnose as D
import try_func as T
import ucode as U

HH = Path(T.HH)
GPR = ("zero at v0 v1 a0 a1 a2 a3 t0 t1 t2 t3 t4 t5 t6 t7 s0 s1 s2 s3 s4 s5 s6 s7 t8 t9 k0 k1 gp sp fp ra").split()
CALLEE = set(range(16, 24)) | {30} | set(range(52, 64))          # s0-s7, fp; f20-f31
FIXED = {0, 1, 26, 27, 28, 29, 31}


def rname(r):
    return "$" + (GPR[r] if r < 32 else "f%d" % (r - 32))


# ---------------------------------------------------------------------------------------------------------- compile

def stage(source, directory, seg=None, func=None):
    """Copy the attempt and the headers next to it (context.h, known.h) into `directory`. Registry snippets don't
    keep their worker's headers: then context.h is rebuilt from the function's real file (as wall.py does)."""
    src = Path(source)
    parent = src.parent.parent if src.parent.name == ".attempts" else src.parent
    os.makedirs(directory, exist_ok=True)
    for h in list(parent.glob("*.h")) + list(src.parent.glob("*.h")):
        shutil.copy(h, directory)
    text = src.read_text(errors="replace")
    if '"context.h"' in text and not (Path(directory) / "context.h").exists() and seg and func:
        cwd = os.getcwd()
        try:
            import srcbuild
            (Path(directory) / "context.h").write_text(srcbuild.context_for(seg, func))
        finally:
            os.chdir(cwd)
        if not (Path(directory) / "known.h").exists(): (Path(directory) / "known.h").write_text("")
    dst = Path(directory) / "attempt.c"
    shutil.copy(src, dst)
    return dst


def cc_keep(directory, g, fix=True):
    """Compile attempt.c in `directory` the way try_func does, keeping cfe's .B and uopt's .O (cc -K). With
    HH_MULFIX=1, mulfix (fix=True) rewrites the ELF without updating .mdebug's file offsets, so the -g3 build skips it."""
    import idoflags
    cmd = [str(HH / "tools/ido/7.1/cc"), "-c"] + idoflags.BASE + [
           "-I", str(HH / "include"), "-I", str(HH / "src"), "-O2", "-g%d" % g, "-K", "-o", "attempt.o", "attempt.c"]
    r = subprocess.run(cmd, cwd=directory, capture_output=True, text=True)
    if r.returncode:
        raise SystemExit("compile failed:\n" + r.stderr[-3000:])
    if fix:
        idoflags.post(os.path.join(directory, "attempt.o"))


# ---------------------------------------------------------------------------------------------------- symbol table

def mdebug(obj):
    """Procedures in an object's .mdebug (IDO -g3): {name: dict(params={off: name}, locals={off: name},
    lines=[source line of each instruction])}."""
    from elftools.elf.elffile import ELFFile
    raw = open(obj, "rb").read()
    with open(obj, "rb") as fh:
        e = ELFFile(fh)
        sec = e.get_section_by_name(".mdebug")
        if sec is None: return {}
        sizes = {s.name: s["st_size"] for s in e.get_section_by_name(".symtab").iter_symbols() if s.name}
        h = struct.unpack(">hh23I", sec.data()[:96])
    (ilineMax, cbLine, cbLineOffset, idnMax, cbDnOffset, ipdMax, cbPdOffset, isymMax, cbSymOffset, ioptMax, cbOptOffset,
     iauxMax, cbAuxOffset, issMax, cbSsOffset, issExtMax, cbSsExtOffset, ifdMax, cbFdOffset) = h[2:21]

    def sym(i):
        iss, val, bits = struct.unpack_from(">iiI", raw, cbSymOffset + 12 * i)
        return raw[cbSsOffset + iss:raw.index(b"\0", cbSsOffset + iss)].decode("latin-1"), val, bits >> 26, (bits >> 21) & 31

    procs = {}
    for f in range(ifdMax):
        fd = struct.unpack_from(">10I2H7I", raw, cbFdOffset + 72 * f)
        adr, issBase, isymBase, csym = fd[0], fd[2], fd[4], fd[5]
        ipdFirst, cpd, fdLineOff = fd[10], fd[11], fd[17]

        def fsym(i):
            iss, val, bits = struct.unpack_from(">iiI", raw, cbSymOffset + 12 * (isymBase + i))
            s = cbSsOffset + issBase + iss
            return raw[s:raw.index(b"\0", s)].decode("latin-1"), val, bits >> 26, (bits >> 21) & 31
        for p in range(ipdFirst, ipdFirst + cpd):
            pd = struct.unpack_from(">9I2H3I", raw, cbPdOffset + 52 * p)
            isym, lnLow, pdLineOff = pd[1], pd[11], pd[13]
            name = fsym(isym)[0]
            params, local, depth, k = {}, {}, 0, isym
            while k < csym:
                n, val, st, sc = fsym(k)
                if st in (6, 14, 7): depth += 1          # Proc, StaticProc, Block
                elif st == 8:
                    depth -= 1
                    if depth == 0: break
                elif st == 3: params[val] = n
                elif st == 4 and sc != 4: local.setdefault(val, []).append(n)
                k += 1
            count = sizes.get(name, 0) // 4
            lines, line, pos = [], lnLow, cbLineOffset + fdLineOff + pdLineOff
            while len(lines) < count and pos < cbLineOffset + cbLine:
                b = raw[pos]; pos += 1
                delta = b >> 4
                if delta == 8:
                    delta = struct.unpack_from(">h", raw, pos)[0]; pos += 2
                elif delta > 7:
                    delta -= 16
                line += delta
                lines += [line] * ((b & 15) + 1)
            procs[name] = dict(params=params, locals={o: "|".join(dict.fromkeys(v)) for o, v in local.items()},
                               lines=lines[:count])
    return procs


# ------------------------------------------------------------------------------------------------------- ucode side

def proc_name(recs):
    """A procedure's name: cfe puts it in the comm record right after ent."""
    for r in recs[1:4]:
        if r.op == "comm" and len(r.words) > 6:
            n = r.words[4]
            return b"".join(struct.pack(">I", w) for w in r.words[6:])[:n].decode("latin-1")
    return None


def find_proc(path, func):
    for ent, recs in U.procedures(U.read(path)):
        if proc_name(recs) == func:
            return recs
    return None


HOME_OPS = ("lod", "str")


def home(r):
    """(memory type, offset) of a variable reference: ('R', reg) for registers, ('M', off) locals, ('P', off) params."""
    if r.op in HOME_OPS and r.m in "RMP":
        return r.m, (r.offset & ~3 if r.m == "P" else r.offset)      # a char/short parameter is read at +3/+2
    return None


CMP = {"les": "cmp", "leq": "cmp", "grt": "cmp", "geq": "cmp", "equ": "eq", "neq": "eq"}
TRANSPARENT = {"cvt", "cvtl", "swp", "dup"}


def kind(n):
    r = n.rec
    if r.op == "ldc": return "c%s" % r.const
    if r.op == "lod": return "v"
    return CMP.get(r.op, r.op)


def references(stmts):
    """Every variable reference with a context key that survives uopt's rewrites (folded address offsets,
    commuted operands, Rmt for Mmt): [(line, home, key)]."""
    out = []
    for st in stmts:
        parent = {}
        for n in st.walk():
            for k in n.kids: parent.setdefault(id(k), n)
        for n in st.walk():
            r = n.rec
            h = home(r)
            if h is None: continue
            if r.op == "str":
                rhs = n.kids[0] if n.kids else None
                while rhs is not None and rhs.rec.op in TRANSPARENT and rhs.kids: rhs = rhs.kids[0]
                key = ("def", kind(rhs) if rhs is not None else "?")
                out.append((n.line, h, key)); continue
            # climb through transparent nodes and constant adds to the first real consumer
            cur, disp = n, 0
            p = parent.get(id(cur))
            while p is not None:
                if p.rec.op in TRANSPARENT:
                    cur = p; p = parent.get(id(cur)); continue
                if p.rec.op == "add" and len(p.kids) == 2:
                    other = p.kids[1] if p.kids[0] is cur else p.kids[0]
                    if other.rec.op == "ldc" and other.rec.const is not None:
                        disp += other.rec.const; cur = p; p = parent.get(id(cur)); continue
                break
            if p is None:
                key = ("root", st.rec.op)
            elif p.rec.op in ("ilod", "istr", "isld", "isst"):
                key = ("base", disp + (p.rec.offset or 0), p.rec.dtype)
            else:
                sib = tuple(sorted(kind(k) for k in p.kids if k is not cur))
                key = ("opnd", CMP.get(p.rec.op, p.rec.op), sib)
            out.append((n.line, h, key))
    return out


def map_homes(brecs, orecs):
    """Evidence that a cfe home (stack slot or parameter) is held in a uopt home: [(cfe home, uopt home, line, weight)].

    References on the same source line with the same context key (e.g. both are the base of a 4-byte load at +0x30)
    vote 1 (split among equal candidates); a cfe home with no keyed match on a line falls back to a weak vote for
    everything uopt references on that line. uopt's rstr/rlod annotations (memory home + register) vote 5."""
    bref, oref = references(U.statements(brecs)), references(U.statements(orecs))
    out = []
    by_line_b, by_line_o = collections.defaultdict(list), collections.defaultdict(list)
    for line, h, key in bref:
        if h[0] in "MP": by_line_b[line].append((h, key))
    for line, h, key in oref: by_line_o[line].append((h, key))
    for line, bl in by_line_b.items():
        ol = by_line_o.get(line, [])
        if not ol: continue
        okeys = collections.defaultdict(list)
        for h, key in ol: okeys[key].append(h)
        for h, key in bl:
            if key in okeys:
                for oh in okeys[key]: out.append((h, oh, line, 1.0 / len(okeys[key])))
            else:
                for oh, _ in ol: out.append((h, oh, line, 0.2 / len(ol)))
    # incoming integer arguments: uopt copies a parameter out of $a0-$a3 into its register at the entry (`R19 = R4`),
    # or leaves it there
    defined = set()
    for st in U.statements(orecs):
        r = st.rec
        if r.op == "str" and r.m == "R":
            k = st.kids[0] if st.kids else None
            while k is not None and k.rec.op in TRANSPARENT and k.kids: k = k.kids[0]
            if k is not None and k.rec.op == "lod" and k.rec.m == "R" and 4 <= k.rec.offset <= 7 \
                    and k.rec.offset not in defined:
                out.append((("P", 4 * (k.rec.offset - 4)), ("R", r.offset), st.line, 3.0))
            defined.add(r.offset)
    for a in range(4):
        out.append((("P", 4 * a), ("R", 4 + a), 0, 0.3))
    line = 0
    for r in orecs:
        if r.op == "loc": line = r.words[1]
        if r.op in ("rstr", "rlod") and r.m in "MP":
            out.append(((r.m, r.offset & ~3 if r.m == "P" else r.offset), ("R", r.lexlev), line, 5.0))
    return out


# ----------------------------------------------------------------------------------------- uopt-side CFG and webs

def blocks_of(recs):
    """Basic blocks of a procedure's ucode: [dict(recs, succ_labels, falls)], plus label -> block index."""
    bl, cur, labels = [], [], {}
    def close(falls, succ):
        nonlocal cur
        bl.append(dict(recs=cur, falls=falls, succ=succ)); cur = []
    i = 0
    while i < len(recs):
        r = recs[i]
        if r.op == "lab":
            if cur: close(True, [])
            labels[r.label] = len(bl)
        cur.append(r)
        if r.op in ("fjp", "tjp"): close(True, [r.label])
        elif r.op == "ujp": close(False, [r.label])
        elif r.op == "ret": close(False, [])
        elif r.op == "xjp":
            succ = [r.words[2]]
            j = i + 1
            while j < len(recs) and recs[j].op in ("clab", "ujp", "loc"):
                if recs[j].op == "ujp": succ.append(recs[j].label)
                j += 1
            close(False, succ)
        i += 1
    if cur: close(False, [])
    for k, b in enumerate(bl):
        s = {labels[l] for l in b["succ"] if l in labels}
        if b["falls"] and k + 1 < len(bl): s.add(k + 1)
        b["next"] = sorted(s)
    return bl


def events(r):
    """(uses, defs) registers of one .O record."""
    if r.op == "lod" and r.m == "R": return [r.offset], []
    if r.op == "str" and r.m == "R": return [], [r.offset]
    if r.op == "rldc": return [], [r.block]
    if r.op == "rlda": return [], [r.words[2]]
    if r.op == "rlod": return [], [r.lexlev]
    if r.op == "rstr": return [r.lexlev], []
    return [], []


def webs(orecs):
    """uopt's register-allocated values, one per (register, connected live range)."""
    bl = blocks_of([r for r in orecs])
    n = len(bl)
    use, dfn = [set() for _ in range(n)], [set() for _ in range(n)]
    refs = [collections.Counter() for _ in range(n)]
    for k, b in enumerate(bl):
        for r in b["recs"]:
            u, d = events(r)
            for x in u:
                refs[k][x] += 1
                if x not in dfn[k]: use[k].add(x)
            for x in d:
                refs[k][x] += 1; dfn[k].add(x)
    live_in, live_out = [set() for _ in range(n)], [set() for _ in range(n)]
    changed = True
    while changed:
        changed = False
        for k in reversed(range(n)):
            out = set().union(*(live_in[s] for s in bl[k]["next"])) if bl[k]["next"] else set()
            inn = use[k] | (out - dfn[k])
            if out != live_out[k] or inn != live_in[k]:
                live_out[k], live_in[k], changed = out, inn, True
    # calls crossed: a register live just after a cup
    crosses = collections.defaultdict(set)
    for k, b in enumerate(bl):
        live = set(live_out[k])
        for r in reversed(b["recs"]):
            if r.op in ("cup", "icuf", "rcuf"):
                for x in live: crosses[x].add(k)
            u, d = events(r)
            live -= set(d); live |= set(u)
    regs = set()
    for k in range(n): regs |= set(refs[k]) | live_in[k] | live_out[k]
    out = []
    for R in sorted(regs):
        members = [k for k in range(n) if R in refs[k] or R in live_in[k] or R in live_out[k]]
        parent = {k: k for k in members}
        def find(x):
            while parent[x] != x: parent[x] = parent[parent[x]]; x = parent[x]
            return x
        for k in members:
            for s in bl[k]["next"]:
                if s in parent and R in live_out[k] and R in live_in[s]: parent[find(s)] = find(k)
        groups = collections.defaultdict(list)
        for k in members: groups[find(k)].append(k)
        for g in groups.values():
            out.append(dict(reg=R, blocks=sorted(g), refs=sum(refs[k][R] for k in g),
                            call=R in CALLEE and any(k in crosses[R] for k in g)))
    return out, bl


def lines_of_blocks(bl):
    """Source lines (from loc records) seen in each block."""
    out, line = [], 0
    for b in bl:
        s = set()
        for r in b["recs"]:
            if r.op == "loc": line = r.words[1]
            s.add(line)
        out.append(s)
    return out


def units(raw):
    return raw if raw < 3 else ((raw - 2) >> 2) + 2


# ------------------------------------------------------------------------------------------------- expressions

def show(n, names, depth=0):
    """Short C-like text for a ucode expression tree."""
    r = n.rec
    if depth > 3: return "..."
    if r.op == "lod":
        h = home(r)
        return names.get(h, rname(r.offset) if r.m == "R" else "%s%d" % (r.m, r.offset))
    if r.op == "ldc": return str(r.const) if r.const is not None else "const"
    if r.op == "lda": return "&" + names.get((r.m, r.offset), "%s%d" % (r.m, r.offset))
    k = [show(x, names, depth + 1) for x in n.kids]
    if r.op in ("ilod", "isld"): return "*(%s%s)" % (k[0] if k else "?", "+%d" % r.offset if r.offset else "")
    ops = {"add": "+", "sub": "-", "mpy": "*", "div": "/", "and": "&", "ior": "|", "xor": "^", "shl": "<<",
           "shr": ">>", "les": "<", "leq": "<=", "grt": ">", "geq": ">=", "equ": "==", "neq": "!="}
    if r.op in ops and len(k) == 2: return "(%s %s %s)" % (k[0], ops[r.op], k[1])
    if r.op in TRANSPARENT and k: return k[0]
    if r.op in ("inc", "dec") and k: return "(%s %s %d)" % (k[0], "+" if r.op == "inc" else "-", r.words[1])
    return "%s(%s)" % (r.op, ", ".join(k))


# ------------------------------------------------------------------------------------------------------ asm side

def regs_of(w):
    g, f = D._fields(w)
    return [(s, v) for s, v in g] + [(100 + s, 32 + v) for s, v in f]


def token(w):
    """Alignment token: the opcode, plus the immediate where it identifies a value (lui of a linked address, `li`)."""
    op = w >> 26
    if op == 0xF: return ("I", op, w & 0xFFFF)
    if op in (9, 0xD) and (w >> 21) & 31 == 0: return ("I", op, w & 0xFFFF, "li")
    if op == 9 and (w >> 21) & 31 == (w >> 16) & 31: return ("I", op, w & 0xFFFF, "lo")    # %lo of an address
    if op == 0: return ("S", w & 63)
    if op == 1: return ("R", (w >> 16) & 31)
    if op in (0x10, 0x11, 0x12): return ("C", op, (w >> 21) & 31, w & 63)
    if op in (2, 3): return ("J", op)
    if op in (4, 5, 6, 7, 0x14, 0x15, 0x16, 0x17): return ("B", op)
    return ("I", op, w & 0xFFFF if op >= 0x20 else None)


def saverestore(w):
    """A callee-saved register's save or restore in the prologue/epilogue (about the register, not a value)."""
    op, base, rt = w >> 26, (w >> 21) & 31, (w >> 16) & 31
    if base != 29: return False
    if op in (0x23, 0x2B): return rt in CALLEE or rt == 31
    if op in (0x31, 0x35, 0x39, 0x3D): return 32 + rt in CALLEE
    return False


def align(mine, target):
    """Pairs (i, j) of aligned instructions with the same opcode."""
    sm = difflib.SequenceMatcher(None, [token(w) for w in mine], [token(w) for w in target], autojunk=False)
    pairs = []
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == "equal" or (tag == "replace" and i2 - i1 == j2 - j1):
            pairs += [(i1 + k, j1 + k) for k in range(i2 - i1) if token(mine[i1 + k]) == token(target[j1 + k])]
    # value-building instructions that moved (two hoisted constants built in the other order) can't both align in
    # sequence; pair each leftover one with the nearest leftover target instruction that builds the same value
    used_i, used_j = {i for i, _ in pairs}, {j for _, j in pairs}
    free = collections.defaultdict(list)
    for j, w in enumerate(target):
        if j not in used_j and token(w)[-1] in ("li", "lo"): free[token(w)].append(j)
    for i, w in enumerate(mine):
        if i not in used_i and free.get(token(w)):
            j = min(free[token(w)], key=lambda j: abs(j - i)); free[token(w)].remove(j); pairs.append((i, j))
    return pairs, sm.ratio()


def map_lines(g0, g3, lines3):
    """Source line of each scheduled (-g0) instruction, from the unscheduled -g3 build of the same ucode."""
    def mask(w):
        op = w >> 26
        return w & 0xFFFF0000 if op in (1, 4, 5, 6, 7, 0x14, 0x15, 0x16, 0x17) else w & 0xFC000000 if op in (2, 3) else w
    a, b = [mask(w) for w in g0], [mask(w) for w in g3]
    out = [None] * len(a)
    used = set()
    sm = difflib.SequenceMatcher(None, a, b, autojunk=False)
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == "equal":
            for k in range(i2 - i1):
                out[i1 + k] = lines3[j1 + k] if j1 + k < len(lines3) else None; used.add(j1 + k)
    free = collections.defaultdict(list)
    for j, w in enumerate(b):
        if j not in used: free[w].append(j)
    for i, w in enumerate(a):
        if out[i] is None and free.get(w):
            j = min(free[w], key=lambda j: abs(j - i)); free[w].remove(j)
            out[i] = lines3[j] if j < len(lines3) else None
    last = None
    for i in range(len(out)):
        if out[i] is None or out[i] == 0: out[i] = last
        else: last = out[i]
    return out


# --------------------------------------------------------------------------------------------------------- trace

def trace(func, seg, source, keep=None):
    off, size, vram, asm = T.find_func(func, seg=seg)
    target = D._words(open(T.IMG, "rb").read()[off:off + size])
    root = Path(keep) if keep else Path(tempfile.mkdtemp(prefix="regtrace-", dir=str(HH / "build")))
    try:
        d0, d3 = root / "g0", root / "g3"
        stage(source, d0, seg, func); stage(source, d3, seg, func)
        cc_keep(d0, 0); cc_keep(d3, 3, fix=False)
        mine_b, _ = T.func_bytes(str(d0 / "attempt.o"), func)
        obj = str(d0 / "attempt.o")
        ro = T.asm_rodata_start(asm)
        try:
            got = T.linked_func_bytes(obj, func, vram, rodata=ro, want_rodata=True) if T.obj_rodata_size(obj) and ro \
                else T.linked_func_bytes(obj, func, vram)
            if isinstance(got, tuple): got = got[0]
        except (StopIteration, OSError):
            got = None
        if got and len(got) == len(mine_b): mine_b = got      # linked: addresses comparable with the target's
        g3_b, _ = T.func_bytes(str(d3 / "attempt.o"), func)
        mine, g3 = D._words(mine_b), D._words(g3_b)
        while len(mine) > len(target) and mine and mine[-1] == 0: mine.pop()
        brecs, orecs = find_proc(d0 / "attempt.B", func), find_proc(d0 / "attempt.O", func)
        orecs3 = find_proc(d3 / "attempt.O", func)
        try:
            sym = mdebug(str(d3 / "attempt.o")).get(func, {})
        except (struct.error, ValueError, IndexError):
            sym = {}
        src_lines = (d0 / "attempt.c").read_text(errors="replace").splitlines()
    finally:
        if not keep: shutil.rmtree(root, ignore_errors=True)
    if brecs is None or orecs is None:
        raise SystemExit("%s not found in the attempt's ucode" % func)
    same = orecs3 is not None and [(r.op, r.m, r.offset) for r in orecs if r.op in HOME_OPS] == \
        [(r.op, r.m, r.offset) for r in orecs3 if r.op in HOME_OPS]
    lines = map_lines(mine, g3, sym.get("lines", [])) if same and sym.get("lines") else [None] * len(mine)

    # names of cfe homes
    names = {}
    for o, n in sym.get("params", {}).items(): names[("P", o & ~3)] = n
    for o, n in sym.get("locals", {}).items(): names[("M", o)] = n
    for r in brecs:
        h = home(r)
        if h and h not in names and h[0] in "MP": names[h] = "tmp%s%d" % ("P" if h[0] == "P" else "", h[1])
    evidence = map_homes(brecs, orecs)
    best, tot = {}, collections.defaultdict(collections.Counter)
    for h, oh, line, w in evidence: tot[h][oh] += w
    for h, c in tot.items():
        oh, v = c.most_common(1)[0]
        best[h] = (oh, v / sum(c.values()))
    ws, bl = webs(orecs)
    blines = lines_of_blocks(bl)
    stmts = U.statements(orecs)
    first, defs = {}, collections.defaultdict(list)
    for k, r in enumerate(orecs):
        u, d = events(r)
        for x in u: first.setdefault(x, k)          # tie-break proxy: first use in uopt's output
    for st in stmts:
        if st.rec.op == "str" and st.rec.m == "R" and st.kids:
            defs[st.rec.offset].append((st.line, st))
    hoisted, uses_at, line = collections.defaultdict(list), [], 0
    for r in orecs:
        if r.op == "loc": line = r.words[1]
        elif r.op == "rldc": hoisted[r.block].append((line, "const %s" % (r.words[4] if len(r.words) > 4 else "?")))
        elif r.op == "rlda": hoisted[r.words[2]].append((line, "&global"))
        elif r.op == "lod" and r.m == "R": uses_at.append((line, r.offset))
    for wb in ws:
        wb["lines"] = set().union(*(blines[k] for k in wb["blocks"])) if wb["blocks"] else set()
        wb["votes"], wb["at"], wb["ident"] = collections.Counter(), [], collections.Counter()
        here = collections.Counter()
        for h, oh, line, w in evidence:
            if oh == ("R", wb["reg"]) and line in wb["lines"]: here[h] += w
        cfe = [h for h, v in here.items() if v >= 0.5 and best.get(h, (None,))[0] == ("R", wb["reg"])]
        wb["names"] = list(dict.fromkeys(names.get(h, "%s%d" % h) for h in sorted(cfe, key=lambda h: -here[h])))
        wb["named"] = bool(wb["names"])
        wb["raw"] = wb["refs"] + len(wb["blocks"])
        wb["prio"] = round(10.0 * wb["refs"] / units(wb["raw"]), 1)
        wb["first"] = first.get(wb["reg"], 1 << 30)
        if not wb["names"]:
            ds = list(dict.fromkeys(show(st.kids[0], names) for line, st in defs.get(wb["reg"], []) if line in wb["lines"]))
            if not ds:
                ds = list(dict.fromkeys(d for line, d in hoisted.get(wb["reg"], []) if line in wb["lines"] or not line))
            use = next((line for line, R_ in uses_at if R_ == wb["reg"] and line in wb["lines"]), None)
            wb["names"] = ["temp = " + " | ".join(ds[:2])] if ds else ["uopt temp"]
            if use and src_lines and 0 < use <= len(src_lines) and not wb["names"][0].startswith("temp = $"):
                wb["names"][0] += " (for line %d)" % use
    by_reg = collections.defaultdict(list)
    for wb in ws: by_reg[wb["reg"]].append(wb)

    def owner(reg, line):
        cand = by_reg.get(reg, [])
        if len(cand) > 1 and line is not None:
            cand = [w for w in cand if line in w["lines"]]
        if not cand: return None
        if line is not None and not any(line in w["lines"] for w in cand) and reg not in CALLEE: return None
        return cand[0]

    # aligned instruction pairs -> (mine index, mine register, target register, owning value)
    pairs, ratio = align(mine, target)
    regpairs = []
    for i, j in pairs:
        if saverestore(mine[i]) or saverestore(target[j]): continue
        a, b = regs_of(mine[i]), regs_of(target[j])
        line = lines[i] if i < len(lines) else None
        for (sa, ra), (sb, rb) in zip(a, b):
            if sa == sb and ra not in FIXED and rb not in FIXED:
                wb = owner(ra, line)
                regpairs.append((i, ra, rb, wb, line))
                if wb is None: continue
                wb["votes"][rb] += 1; wb["at"].append((i, rb, line))
                # an instruction that builds the value (li k, addiu %lo(sym)) says which value it is: it decides
                if sa == 16 and token(mine[i])[-1] in ("li", "lo"): wb["ident"][rb] += 1
    for wb in ws:
        wb["target"] = (wb["ident"] or wb["votes"]).most_common(1)[0][0] if wb["votes"] else None
        wb["ok"] = wb["target"] is None or wb["target"] == wb["reg"]
        wl = sorted(l for l in wb["lines"] if l)
        wb["span"] = "%d-%d" % (wl[0], wl[-1]) if wl else "-"
    # disagreements left after each value's majority: ordering between two values, or a ugen temporary
    swaps, temps = collections.Counter(), collections.defaultdict(collections.Counter)
    tgt_owner = {}
    for wb in ws:
        if wb["target"] is not None: tgt_owner.setdefault(wb["target"], []).append(wb)
    for i, ra, rb, wb, line in regpairs:
        if wb is None:
            if ra != rb: temps[line][(ra, rb)] += 1
            continue
        if rb == wb["target"] or rb == ra: continue
        others = [o for o in tgt_owner.get(rb, []) if o is not wb and o["names"] != wb["names"]
                  and (line is None or line in o["lines"])]
        if others:
            swaps[(id(wb), id(others[0]), line)] += 1
        else:
            temps[line][(ra, rb)] += 1
    mismatched = sum(1 for i, ra, rb, wb, line in regpairs if ra != rb)
    return dict(func=func, seg=seg, source=str(source), webs=ws, temps=temps, swaps=swaps, ratio=ratio, lines=lines,
                src=src_lines, names=names, best=best, same_ucode=same, n_mine=len(mine), n_target=len(target),
                mine=mine, target=target, vram=vram, mismatched=mismatched, regpairs=len(regpairs))


def pool(r):
    """Register pools where uopt's choice is plain "lowest free colour" (measured on the register walls: the lower
    register had the higher estimated priority in ~90% of overlapping pairs). Argument, result and FP argument/result
    registers are left out: there a cost preference (no move needed) decides first."""
    if r is None: return None
    if r in CALLEE: return "callee-fpr" if r >= 32 else "callee-gpr"
    if r == 3 or 8 <= r <= 15 or r in (24, 25): return "temp-gpr"
    if r >= 32 and r - 32 in (4, 6, 8, 10, 16, 18): return "temp-fpr"
    return None


def order_pairs(ws, key):
    """{(first popped, second popped)} for overlapping values in the same plain pool, read from their registers."""
    out = set()
    cs = [w for w in ws if pool(w.get(key)) is not None and pool(w.get(key)) == pool(w["reg"])]
    for a in cs:
        for b in cs:
            if a is not b and pool(a[key]) == pool(b[key]) and a[key] < b[key] and set(a["blocks"]) & set(b["blocks"]):
                out.add((id(a), id(b)))
    return out


def needed_refs(w, beat):
    """Smallest number of extra references (1-8) that lifts w's estimated priority above `beat`, or None."""
    for k in range(1, 9):
        if 10.0 * (w["refs"] + k) / units(w["raw"] + k) > beat: return k
    return None


def src_text(t, line, width=58):
    return t["src"][line - 1].strip()[:width] if line and 0 < line <= len(t["src"]) else ""


def report(t, max_rows=14):
    ws = t["webs"]
    byid = {id(w): w for w in ws}
    label = lambda w: (", ".join(w["names"]))[:40]
    label1 = lambda w: "`%s`" % (", ".join(w["names"]))[:30]
    src = t["source"]
    try: src = os.path.relpath(src, HH) if os.path.abspath(src).startswith(str(HH)) else src
    except ValueError: pass
    out = ["Register trace for %s (%s): uopt's register colouring (cc -K .B/.O ucode) against the target"
           % (t["func"], src)]
    live = [w for w in ws if w["reg"] not in FIXED and w["refs"] > 0]
    bad = [w for w in live if not w["ok"]]
    groups = collections.OrderedDict()            # one row per (names, register, target): split pieces together
    for w in live:
        groups.setdefault((tuple(w["names"]), w["reg"], w["target"]), []).append(w)
    rows = []
    for (nm, reg, tgt), g in groups.items():
        rows.append(dict(label=(", ".join(nm))[:44 - 11 * (len(g) > 1)] + (" (%d pieces)" % len(g) if len(g) > 1 else ""),
                         reg=reg, target=tgt,
                         refs=sum(w["refs"] for w in g), blocks=sum(len(w["blocks"]) for w in g),
                         prio=max(w["prio"] for w in g), ok=all(w["ok"] for w in g), call=any(w["call"] for w in g),
                         named=g[0]["named"], voted=any(w["votes"] for w in g),
                         span="%s-%s" % (min(w["span"].split("-")[0] for w in g), max(w["span"].split("-")[-1] for w in g))
                         if all(w["span"] != "-" for w in g) else "-"))
    interesting = [r for r in rows if not r["ok"] or r["reg"] in CALLEE or (r["named"] and r["voted"])]
    interesting.sort(key=lambda r: (r["ok"], r["reg"] not in CALLEE, r["reg"]))
    out.append("Values uopt keeps in registers across statements: %d (%d callee-saved); in a different register than"
               " the target: %d" % (len(live), sum(w["reg"] in CALLEE for w in live), len(bad)))
    if interesting:
        out.append("  %-46s %-7s %4s %4s %6s  %-6s %-6s" % ("value (C name, or uopt's temp)", "lines", "refs", "blks",
                                                           "~prio", "yours", "target"))
        for r in interesting[:max_rows]:
            tgt = rname(r["target"]) if r["target"] is not None else "?"
            note = "" if r["ok"] else "  <- different" + (" (live across a call)" if r["call"] else "")
            out.append("  %-46s %-7s %4d %4d %6.1f  %-6s %-6s%s" % (r["label"], r["span"], r["refs"], r["blocks"],
                       r["prio"], rname(r["reg"]), tgt, note))
        if len(interesting) > max_rows: out.append("  ... %d more" % (len(interesting) - max_rows))
    mine_o, tgt_o = order_pairs(ws, "reg"), order_pairs(ws, "target")
    flips = sorted({(a, b) for (a, b) in tgt_o if (b, a) in mine_o},
                   key=lambda p: (byid[p[0]]["target"], byid[p[1]]["target"]))
    if flips:
        out.append("Colouring order: uopt pops values by priority and gives each the lowest free register of its pool,"
                   " so of two values live at the same time the lower register was popped first. Conflicts:")
        for a, b in flips[:6]:
            A, B = byid[a], byid[b]
            la, lb = label1(A), label1(B)
            hint = []
            k = needed_refs(A, B["prio"])
            if A["prio"] == B["prio"]:
                hint.append("equal estimates: the tie goes to the value that appears first in the source, so"
                            " declare/first use %s before %s" % (la, lb))
            elif k:
                hint.append("%s needs ~%d more reference%s (same blocks) to outrank %s" % (la, k, "s" * (k > 1), lb))
            hint.append("or make %s cheaper: fewer references to it, or a shorter live range" % lb)
            out.append("  target pops %s (%s) before %s (%s); yours pops it after. ~prio %.1f (%d refs, %d blocks) vs"
                       " %.1f (%d refs, %d blocks): %s." % (la, rname(A["target"]), lb, rname(B["target"]), A["prio"],
                       A["refs"], len(A["blocks"]), B["prio"], B["refs"], len(B["blocks"]), "; ".join(hint)))
        out.append("  (priority ~ 10*refs / units(refs + live blocks), units 1,2 | 3-5 -> 2 | 6-9 -> 3 | 10-13 -> 4;"
                   " uopt counts its own references, so these are estimates. A reference can be added without"
                   " code: an empty `if (x) {}` is counted and then folded.)")
    elif bad:
        out.append("No colouring-order conflict among overlapping values in the plain pools ($s, $t/$v1, $f4-$f10,"
                   " $f16/$f18): the differences are preference choices (call results prefer $v0/$f0, arguments their"
                   " $a/$f12 register, values copied to/from them follow) or values that do not overlap.")
    if t["swaps"]:
        agg = collections.Counter()
        for (a, b, line), n in t["swaps"].items(): agg[(a, b)] += n
        out.append("Same registers, different order: aligned instructions that work on one value in yours and on another"
                   " in the target (the statements that update them are in a different order):")
        for (a, b), n in agg.most_common(6):
            A, B = byid[a], byid[b]
            ls = sorted({line for (x, y, line) in t["swaps"] if (x, y) == (a, b) and line})
            where = "; ".join("line %d `%s`" % (l, src_text(t, l, 40)) for l in ls[:3])
            out.append("  %s (%s) where the target has %s (%s), %d instr. %s" % (label(A), rname(A["reg"]), label(B),
                       rname(B["reg"]), n, ("at " + where) if where else ""))
    tl = [(line, c) for line, c in t["temps"].items() if c]
    if tl:
        out.append("Expression temporaries (ugen's, inside one statement) that differ, by source line of yours:")
        for line, c in sorted(tl, key=lambda x: (x[0] is None, x[0] or 0))[:8]:
            diffs = ", ".join("%s->%s x%d" % (rname(a), rname(b), n) for (a, b), n in c.most_common(4))
            out.append("  line %-4s %-58s yours->target: %s" % (line if line else "?", src_text(t, line), diffs))
        out.append("  -> ugen takes temporaries in evaluation order: reorder operands or sub-expressions on that line,"
                   " split it into statements, or keep a value in a variable (then uopt colours it).")
    if not bad and not tl and not t["swaps"]:
        out.append("No register differences in the aligned instructions: this wall is scheduling or opcodes, not"
                   " allocation.")
    if not t["same_ucode"]:
        out.append("(the -g3 build allocated differently, so instruction source lines are not available)")
    return out


def as_json(t):
    ws = [dict(reg=rname(w["reg"]), target=rname(w["target"]) if w["target"] is not None else None, names=w["names"],
               refs=w["refs"], blocks=len(w["blocks"]), prio=w["prio"], call=w["call"], ok=w["ok"], lines=w["span"])
          for w in t["webs"] if w["reg"] not in FIXED and w["refs"]]
    temps = [dict(line=line, diffs=[dict(mine=rname(a), target=rname(b), n=n) for (a, b), n in c.items() if a != b])
             for line, c in t["temps"].items()]
    byid = {id(w): w for w in t["webs"]}
    swaps = [dict(value=byid[a]["names"], other=byid[b]["names"], line=line, n=n) for (a, b, line), n in t["swaps"].items()]
    return dict(func=t["func"], seg=t["seg"], source=t["source"], aligned=round(t["ratio"], 4), values=ws,
                temps=[x for x in temps if x["diffs"]], swaps=swaps)


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("func"); ap.add_argument("--seg", required=True); ap.add_argument("--source", required=True)
    ap.add_argument("--json"); ap.add_argument("--keep", help="keep the build directory here")
    ap.add_argument("--max-rows", type=int, default=14)
    a = ap.parse_args()
    t = trace(a.func, a.seg, a.source, a.keep)
    print("\n".join(report(t, a.max_rows)))
    if a.json:
        Path(a.json).write_text(json.dumps(as_json(t), indent=1))


if __name__ == "__main__":
    main()
