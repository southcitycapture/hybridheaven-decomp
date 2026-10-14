"""Build src/ C files from the matched/ registry, deterministically, and verify every C function
in its real file context.

Each src/<seg>/<file>.c is generated from scratch: #include "common.h", then one entry per function
in address order: the registry snippet if there is one, else `#pragma GLOBAL_ASM(...)` (or splat's
empty-stub C for `jr $ra; nop` functions). Snippets are combined like this:
  - a snippet's `extern` declarations are dropped when that name was already declared or defined
    earlier in the file (workers each declare what they use; the first declaration wins)
  - a snippet that still makes the file fail to compile, or whose function no longer matches in
    this file, is left out (reported as rejected) and the file is rebuilt without it

  srcbuild.py all                  rebuild every src file from the registry (no new matches)
  srcbuild.py add BATCH [BATCH..]  add each batch's verified matches to the registry, keeping only
                                   those that work in context; then run `make` to confirm the ROM
"""
import glob, hashlib, json, os, re, shutil, subprocess, sys, tempfile
from multiprocessing import Pool
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
sys.path.insert(0, os.path.join(HH, "tools/hh"))
import try_func, workdir
from elftools.elf.elffile import ELFFile
IMG = open("build/expanded.bin", "rb").read()
IDO = "tools/ido/7.1/cc"
CFLAGS = "-G 0 -non_shared -Xcpluscomm -mips2 -O2 -I include -I src".split()
ASFLAGS = "-EB -march=vr4300 -mabi=32 -G 0 -I include -I build/include".split()
DECL = re.compile(r"^\s*extern\b[^;]*?\b((?:func|D)_[0-9A-F]{8}|[A-Za-z_]\w*)\s*(?:\(|\[|;)")
DEFN = re.compile(r"^[A-Za-z_][\w\s\*]*?\b(func_[0-9A-F]{8})\s*\([^;]*$")
TYPEDEF = re.compile(r"\btypedef\b.*?\b(\w+)\s*;\s*$|^\s*}\s*(\w+)\s*;\s*$")
# a file-scope prototype without `extern` (`void func_800062F8(s32, s32);`); only used at brace depth 0
PROTO = re.compile(r"^\s*(?!return\b|else\b|case\b|goto\b)(?:[A-Za-z_]\w*[\s\*]+)+\**\s*((?:func|D)_[0-9A-F]{8}|[A-Za-z_]\w*)\s*\([^;{]*\)\s*;\s*(?://.*|/\*.*\*/)?$")

def entries(seg, cfile):
    """Functions of one C file in address order: (name, asm path, rom offset, size)."""
    out = []
    for p in glob.glob("asm/nonmatchings/%s/%s/*.s" % (seg, cfile)):
        if os.path.basename(p).startswith(("_mrg_", "_ro_")): continue      # generated blocks, not functions
        s = open(p).read()
        m = re.search(r"nonmatching (\S+), (0x[0-9A-F]+)\s+[gj]label \1\s+/\* ([0-9A-F]+) ([0-9A-F]+) ", s)   # jlabel: also a jump target
        if m: out.append((m.group(1), p, int(m.group(3), 16), int(m.group(2), 16), int(m.group(4), 16)))
    return sorted(out, key=lambda e: e[2])

def _text_ends():
    """Expanded-image offset where each segment's text ends (start of its data subsegment)."""
    ends, cur = {}, None
    for l in open("hybridheaven.yaml"):
        m = re.match(r"\s+- \[0x([0-9A-F]+), c, (\w+)/", l)
        if m: cur = m.group(2); continue
        m = re.match(r"\s+- \[0x([0-9A-F]+), data\]", l)
        if m and cur: ends[cur] = int(m.group(1), 16); cur = None
    return ends
def _file_rodata():
    """(seg, cfile) -> vram of that C file's .rodata (per-file `.rodata` subsegments in hybridheaven.yaml)."""
    out, cur = {}, {}
    for l in open("hybridheaven.yaml"):
        m = re.match(r"  - name: (\w+)", l)
        if m: cur = {}; continue
        m = re.match(r"    (start|vram): (0x[0-9A-F]+)", l)
        if m: cur[m.group(1)] = int(m.group(2), 16); continue
        m = re.match(r"\s+- \[0x([0-9A-F]+), \.rodata, (\w+)/(\w+)\]", l)
        if m and "vram" in cur: out[(m.group(2), m.group(3))] = cur["vram"] + int(m.group(1), 16) - cur["start"]
    return out
FILE_RODATA = _file_rodata()
SPLITS = {k: [int(x, 16) for x in v] for k, v in json.load(open("tools/hh/file_splits.json")).items()}
TEXT_END = _text_ends()

def file_span(seg, cfile):
    """(start, end) expanded-image offsets of one original C file's .text."""
    ents = entries(seg, cfile); start = ents[0][2]
    st = SPLITS[seg]; i = st.index(start)
    end = st[i + 1] if i + 1 < len(st) else TEXT_END.get(seg, ents[-1][2] + ents[-1][3])
    return start, end

def pad_asm(seg, cfile, nbytes):
    """An asm file holding the original's end-of-file zero padding (IDO doesn't emit it for C)."""
    p = "asm/nonmatchings/%s/%s/_pad_%d.s" % (seg, cfile, nbytes)     # size in the name: gen_pads.py recreates it
    with open(p, "w") as fh:
        fh.write("glabel pad_%s_%s\n" % (seg, cfile) + "".join("    nop\n" for _ in range(nbytes // 4)))
    return p

def is_stub(off, size):
    return size == 8 and IMG[off:off + 8] == b"\x03\xe0\x00\x08\x00\x00\x00\x00"

def decl_name(line, depth):
    """Name declared by a file-scope declaration line (extern or bare prototype), else None."""
    if depth: return None
    m = DECL.match(line) or PROTO.match(line)
    return m.group(1) if m else None

def snippet_lines(text, declared):
    """Snippet body without #include and without declarations of names already declared."""
    keep, depth = [], 0
    for line in text.splitlines():
        if line.lstrip().startswith("#include"): continue
        n = decl_name(line, depth)
        depth += line.count("{") - line.count("}")
        if n and n in declared: continue
        keep.append(line)
    return keep

RO_LINE = re.compile(r"/\* [0-9A-F]+ ([0-9A-F]{8}) ")

def rodata_min(path):
    """Lowest vram of the rodata a function's asm carries (migrated by splat), else None."""
    sect, lo = ".text", None
    for l in open(path):
        if l.startswith(".section"): sect = l.split()[1]; continue
        if sect != ".text":
            m = RO_LINE.search(l)
            if m: v = int(m.group(1), 16); lo = v if lo is None else min(lo, v)
    return lo

def rodata_blocks(seg, cfile):
    """Rodata splat could not migrate into one function (shared, or not referenced by code): (vram, path)."""
    out = []
    # labels splat already migrated into a function's own asm: a leftover block with the same label would duplicate it
    owned = set()
    for p in glob.glob("asm/nonmatchings/%s/%s/func_*.s" % (seg, cfile)):
        owned |= set(re.findall(r"^\s*dlabel\s+(\S+)", open(p).read(), re.M))
    for p in glob.glob("asm/nonmatchings/%s/%s/*.s" % (seg, cfile)):
        b = os.path.basename(p)
        if b.startswith(("func_", "_pad", "pad", "_ro_", "_mrg_")): continue
        if set(re.findall(r"^\s*dlabel\s+(\S+)", open(p).read(), re.M)) & owned: continue
        if not open(p).readline().startswith(".section .rodata") and ".section .late_rodata" not in open(p).read(200): continue
        v = rodata_min(p)
        if v is not None: out.append((v, p))
    return sorted(out)

def rodata_part(path):
    """The non-.text sections of a function's asm (its migrated rodata), as text, or None."""
    out, sect, any_ro = [], ".text", False
    for l in open(path).read().split("\n"):
        if l.startswith(".section"): sect = l.split()[1]
        if sect != ".text": out.append(l); any_ro |= bool(l.strip()) and not l.startswith(".section")
    return "\n".join(out) + "\n" if any_ro else None

def c_makes_rodata(seg, name, snippet):
    """Does this C function produce .rodata of its own (switch table, float/double literal, string)? Compiled
    alone against its file's declarations, like a worker's attempt; cached by snippet hash."""
    import hashlib
    key = hashlib.sha1((seg + name + snippet).encode()).hexdigest()
    cache = "build/c_rodata/%s" % key
    if os.path.exists(cache): return open(cache).read() == "1"
    with tempfile.TemporaryDirectory() as td:
        open(os.path.join(td, "context.h"), "w").write(context_for(seg, name))
        open(os.path.join(td, "known.h"), "w").write("")
        c = os.path.join(td, "a.c"); o = os.path.join(td, "a.o")
        open(c, "w").write(snippet if '#include "context.h"' in snippet else '#include "context.h"\n' + snippet)
        r = subprocess.run([IDO, "-c"] + CFLAGS + ["-I", td, "-o", o, c], capture_output=True, text=True)
        if r.returncode == 0: made = try_func.obj_rodata_size(o) > 0
        else:   # can't compile alone (needs a neighbour's declaration): judge from the source, a wrong guess only rejects
            made = bool(re.search(r"\bswitch\b|\"|\b\d+\.\d*(?:[eE][-+]?\d+)?f?\b", snippet))
    os.makedirs("build/c_rodata", exist_ok=True); open(cache, "w").write("1" if made else "0")
    return made

def kept_rodata_block(seg, cfile, name, path, snippet):
    """A C function that doesn't produce the original's rodata itself (it reads constants by name, or the original
    had strings the C no longer needs) still needs that rodata in place: emit the function's own rodata as an asm
    block before it. Returns the block's path or None."""
    ro = rodata_part(path)
    if not ro or c_makes_rodata(seg, name, snippet): return None
    p = "asm/nonmatchings/%s/%s/_ro_%s.s" % (seg, cfile, name)
    if not os.path.exists(p) or open(p).read() != ro: open(p, "w").write(ro)
    return p

LATE_ITEM = re.compile(r"dlabel (D_[0-9A-F]{8})\n\s*/\* [0-9A-F]+ [0-9A-F]{8} ([0-9A-F]{8,16}) \*/ \.(float|double)")

def late_literals(path, snippet):
    """Matched C written before per-file rodata read its float constants by name (`extern f32 D_...;`). They're the
    function's own late rodata, which IDO emits itself from literals: replace each such name by its exact value."""
    text = open(path).read()
    if ".late_rodata" not in text: return snippet
    late = text.split(".section .late_rodata", 1)[1].split(".section .text", 1)[0]
    import struct
    for name, hexv, kind in LATE_ITEM.findall(late):
        m = re.search(r"^\s*extern\s+(f32|f64|float|double)\s+%s\s*;\s*$" % name, snippet, re.M)
        if not m: continue
        if kind == "float" and len(hexv) == 8:
            v = struct.unpack(">f", bytes.fromhex(hexv))[0]; lit = repr(float("%.9g" % v))
            if struct.unpack(">f", struct.pack(">f", float(lit)))[0] != v: continue
            lit += "f"
        elif kind == "double" and len(hexv) == 16:
            v = struct.unpack(">d", bytes.fromhex(hexv))[0]; lit = repr(v)
        else: continue
        if "e" in lit or "inf" in lit or "nan" in lit: continue
        if lit.startswith("-"): lit = "(" + lit + ")"
        snippet = snippet[:m.start()] + snippet[m.end():]
        snippet = re.sub(r"\b%s\b" % name, lit, snippet)
    return snippet

_DECLS = None
def decl_index():
    """name -> its most common single-line file-scope declaration across the registry (for names a function uses
    but nothing before it in its C file declares, e.g. after a file was split)."""
    global _DECLS
    if _DECLS is None:
        import collections
        c = collections.defaultdict(collections.Counter)
        for text in registry().values():
            depth = 0
            for l in text.splitlines():
                n = decl_name(l, depth); depth += l.count("{") - l.count("}")
                if n and re.match(r"(func|D)_[0-9A-F]{8}$", n): c[n][l.strip()] += 1
        _DECLS = {n: cnt.most_common(1)[0][0] for n, cnt in c.items()}
    return _DECLS

def missing_decls(snippet, declared):
    """Declaration lines for address-named symbols the snippet uses but neither it nor the file so far declares."""
    own, depth = set(), 0
    for l in snippet.splitlines():
        n = decl_name(l, depth) or (DEFN.match(l).group(1) if depth == 0 and DEFN.match(l) else None)
        if n: own.add(n)
        depth += l.count("{") - l.count("}")
    # data only: an undeclared D_ name is a compile error, while an undeclared function is an implicit declaration
    # the original match may rely on (a prototype would change its argument handling)
    used = set(re.findall(r"\b(D_[0-9A-F]{8})\b", snippet)) - own - declared
    idx = decl_index()
    basic = re.compile(r"^extern\s+(?:volatile\s+)?(?:unsigned\s+|signed\s+)?(?:[usf](?:8|16|32|64)|v[us](?:8|16|32)|char|short|int|long|float|double|void)\s*\**\s*D_[0-9A-F]{8}\s*(?:\[[0-9xA-Fa-f]*\]\s*)*;$")
    return [idx[n] for n in sorted(used) if n in idx and basic.match(idx[n])
            and not re.search(r"\bextern\b[^;]*\b%s\b" % n, snippet)]     # declared somewhere in the snippet itself

INS_LINE = re.compile(r"^\s*/\* [0-9A-F]+ [0-9A-F]{8} [0-9A-F]{8} \*/\s+\S")

def asm_weights(path):
    """(instruction count, late-rodata words) of a function's asm block."""
    text = late = 0; sect = ".text"
    for l in open(path):
        if l.startswith(".section"): sect = l.split()[1]; continue
        if sect == ".text" and INS_LINE.match(l): text += 1
        elif sect == ".late_rodata":
            if ".double" in l: late += 2
            elif re.search(r"\.(word|float)\b", l): late += 1
    return text, late

def merged_block(seg, cfile, paths):
    """One GLOBAL_ASM block for several consecutive asm functions (asm-processor needs at least 3 instructions per
    late-rodata word in a block; a function with a big jump table and little code gets its neighbours' code too)."""
    if len(paths) == 1: return paths[0]
    p = "asm/nonmatchings/%s/%s/_mrg_%s" % (seg, cfile, os.path.basename(paths[0]))
    text = "".join(open(x).read() + "\n" for x in paths)
    if not os.path.exists(p) or open(p).read() != text: open(p, "w").write(text)
    return p

BASIC = {"extern", "void", "s8", "u8", "s16", "u16", "s32", "u32", "s64", "u64", "f32", "f64", "int", "char", "short",
         "long", "unsigned", "signed", "float", "double", "const", "volatile"}
_FEATS = None

def hoisted_decls(seg, snips, unproto=False):
    """One declaration per function/data name used in this file, to put at the top: a later neighbour's declaration
    otherwise meets an earlier implicit `int f()` (after a file re-split, e.g. file017/802414B0.c). Only declarations
    built from basic types (a struct type might be defined further down). When the file's snippets disagree on the
    return type, the asm decides: callers that read $v0 after the call get the non-void one (features.py `v0`)."""
    global _FEATS
    if _FEATS is None:
        import features; _FEATS = features.features()
    forms = {}
    for n, t in snips.items():
        depth = 0
        for l in t.splitlines():
            name = decl_name(l, depth); depth += l.count("{") - l.count("}")
            if not name: continue
            words = set(re.findall(r"[A-Za-z_]\w*", re.sub(r"\b%s\b" % re.escape(name), "", l.split("(")[0] if "(" in l else l)))
            words |= set(re.findall(r"[A-Za-z_]\w*", l.split("(", 1)[1])) - {"arg0", "arg1", "arg2", "arg3"} if "(" in l else set()
            if not words <= BASIC: continue
            forms.setdefault(name, []).append(l.strip() if l.strip().startswith("extern") else "extern " + l.strip())
    v0 = set()
    for n in snips: v0 |= set(_FEATS.get((seg, n), {}).get("v0", []))
    if unproto:                                 # functions declared differently by different snippets: one old-style
        allf = {}                               # declaration takes every call's arguments; return type from the asm
        for n, t in snips.items():
            depth = 0
            for l in t.splitlines():
                name = decl_name(l, depth); depth += l.count("{") - l.count("}")
                if name and name.startswith("func_") and "(" in l: allf.setdefault(name, set()).add(re.sub(r"\s+", " ", l.strip()))
        for name, fs in allf.items():
            if len(fs) > 1 and name not in snips:
                forms[name] = ["extern %s %s();" % ("s32" if name in v0_all(seg, snips) else "void", name)]
    out = {}
    for name, fs in forms.items():
        nonvoid = [f for f in fs if not re.match(r"extern\s+void\s+(?!\*)", f)]
        out[name] = (nonvoid[0] if name in v0 and nonvoid else
                     next((f for f in fs if f not in nonvoid), fs[0]) if name not in v0 else fs[0])
    return out

def v0_all(seg, snips):
    global _FEATS
    if _FEATS is None:
        import features; _FEATS = features.features()
    v = set()
    for n in snips: v |= set(_FEATS.get((seg, n), {}).get("v0", []))
    return v

def render(seg, cfile, snips, pad=0, keep_ro=True, hoist=False):
    """Return (text, line ranges per snippet function). hoist=True puts one declaration per name at the top."""
    lines = ['#include "common.h"', ""]; ranges = {}; declared = set()
    if hoist:
        hd = hoisted_decls(seg, snips, unproto=(hoist == "unproto"))
        lines += sorted(hd.values()) + [""]; declared |= set(hd)
    group, gt, gl = [], 0, 0                  # consecutive asm functions waiting to be emitted as one block
    def flush():
        nonlocal group, gt, gl
        if group: lines.extend(['#pragma GLOBAL_ASM("%s")' % merged_block(seg, cfile, group), ""])
        group, gt, gl = [], 0, 0
    pending = rodata_blocks(seg, cfile)        # emitted in rodata order, just before the first function whose rodata comes later
    for name, path, off, size, vram in entries(seg, cfile):
        lo = rodata_min(path) if pending else None
        if pending and lo is not None and pending[0][0] < lo: flush()
        while pending and lo is not None and pending[0][0] < lo:
            lines += ['#pragma GLOBAL_ASM("%s")' % pending.pop(0)[1], ""]
        if name in snips or is_stub(off, size): flush()
        if name in snips:
            snips = dict(snips); snips[name] = late_literals(path, snips[name])
            kb = kept_rodata_block(seg, cfile, name, path, snips[name]) if keep_ro else None
            if kb: lines += ['#pragma GLOBAL_ASM("%s")' % kb, ""]
            body = missing_decls(snips[name], declared) + snippet_lines(snips[name], declared)
            start = len(lines) + 1; lines += body + [""]; ranges[name] = (start, len(lines))
            depth = 0
            for l in body:
                n = decl_name(l, depth) or (DEFN.match(l).group(1) if depth == 0 and DEFN.match(l) else None)
                if n: declared.add(n)
                depth += l.count("{") - l.count("}")
                t = TYPEDEF.search(l)
                if t: declared.add(t.group(1) or t.group(2))
        elif is_stub(off, size):
            lines += ["void %s(void) {" % name, "}", ""]; declared.add(name)
        else:
            t, l = asm_weights(path)
            group.append(path); gt += t; gl += l
            if 3 * gl <= gt: flush()           # this block (with any merged predecessors) satisfies asm-processor
    flush()
    lines += sum((['#pragma GLOBAL_ASM("%s")' % p, ""] for _, p in pending), [])
    if pad: lines += ['#pragma GLOBAL_ASM("%s")' % pad_asm(seg, cfile, pad), ""]
    return "\n".join(lines) + "\n", ranges

def compile_file(text, td):
    c = os.path.join(td, "f.c"); o = os.path.join(td, "f.o"); open(c, "w").write(text)
    r = subprocess.run([sys.executable, "tools/asm-processor/build.py", IDO, "--", "mips-linux-gnu-as"] + ASFLAGS +
                       ["--", "-c"] + CFLAGS + ["-o", o, c], capture_output=True, text=True)
    if r.returncode == 0:
        import mulfix; mulfix.fix(o)        # the original build's VR4300 nop between consecutive float multiplies
    return (o if r.returncode == 0 else None), r.stderr + r.stdout

def func_ok(obj, name, off, size, vram, base, rodata=None):
    """Instructions must match, and every address must resolve to the original's (exact link check).
    `rodata`: where the file's .rodata really starts (its jump tables / constants must land there)."""
    try: mine, rel = try_func.func_bytes(obj, name)
    except StopIteration: return False
    orig = IMG[off:off + size]
    while len(mine) > size and mine[-4:] == b"\0\0\0\0": mine = mine[:-4]
    if try_func.compare(mine, rel, orig)[2]: return False
    exact = try_func.linked_func_bytes(obj, name, vram, base, rodata=rodata)
    if exact is None: return not try_func.UNRESOLVED    # an invented symbol name can't be placed: not a match
    while len(exact) > size and exact[-4:] == b"\0\0\0\0": exact = exact[:-4]
    return exact == orig

def settle(seg, cfile, snips, td):
    """Try to build one C file with `snips`. Drops snippets that break it. Returns (kept, rejected, text, problem).
    If the plain build loses functions to compile errors, the file is also built with hoisted declarations
    (hoisted_decls) and the better of the two is kept, so hoisting can only add functions."""
    r0 = _settle(seg, cfile, snips, td, False)
    if not any(w.startswith("compile error") for w in r0[1].values()): return r0
    good = lambda r: len(r[0]) if r[3] is None else -1
    best = r0
    for mode in (True, "unproto"):              # hoisted declarations; then also one old-style prototype per clash
        r = _settle(seg, cfile, snips, td, mode)
        if good(r) > good(best): best = r
    return best

def _settle(seg, cfile, snips, td, hoist):
    snips = dict(snips); rejected = {}; pad = 0
    info = {e[0]: e for e in entries(seg, cfile)}
    for _ in range(len(snips) + 3):
        text, ranges = render(seg, cfile, snips, pad, hoist=hoist)
        obj, err = compile_file(text, td)
        if obj is None:
            lines = [int(x) for x in re.findall(r"line (\d+)", err)]
            bad = next((n for l in lines for n, (a, b) in ranges.items() if a <= l <= b), None)
            if bad is None:            # error not attributable: fall back to dropping the last snippet
                bad = sorted(snips, key=lambda n: info[n][2])[-1] if snips else None
            if bad is None: return {}, rejected, None, "file does not compile:\n" + err[-600:]
            rejected[bad] = "compile error in file context"; snips.pop(bad); continue
        base = min(e[4] for e in info.values())        # the C file's .text starts at its first function
        ro = FILE_RODATA.get((seg, cfile))
        wrong = [n for n in snips if not func_ok(obj, n, info[n][2], info[n][3], info[n][4], base, ro)]
        if not wrong:
            # the whole file must keep its original size, or everything after it shifts
            start, end = file_span(seg, cfile)
            with open(obj, "rb") as fh:
                got = ELFFile(fh).get_section_by_name(".text")["sh_size"]
            short = (end - start) - got
            if short > 0 and short % 4 == 0 and not any(IMG[end - short:end]) and pad == 0:
                pad = short; continue                 # rebuild with the original's zero padding
            if short != 0: return {}, rejected, None, "file .text is 0x%X, original 0x%X" % (got, end - start)
            return snips, rejected, text, None
        for n in wrong: rejected[n] = "does not match in file context (instructions or addresses)"; snips.pop(n)
    return {}, rejected, None, "gave up"

def build_one(args):
    """Build one C file. `prio` orders the snippets (lower = registered earlier); earlier work always wins a
    conflict: if the all-at-once build drops anything, rebuild by adding snippets one at a time in priority order."""
    seg, cfile, snips, prio = args
    fname = "%s/%s" % (seg, cfile)
    with tempfile.TemporaryDirectory() as td:
        kept, rej, text, problem = settle(seg, cfile, snips, td)
        if not rej and not problem:
            open("src/%s.c" % fname, "w").write(text); return (fname, kept, {}, None)
        kept, rejected, text = {}, {}, None
        order = sorted(snips, key=lambda n: (prio.get(n, float("inf")), n))
        def try_add(group):
            """Add `group` (in priority order) on top of `kept`; split on failure until the culprit is alone."""
            nonlocal kept, text
            trial = dict(kept); trial.update({n: snips[n] for n in group})
            k2, r2, t2, p2 = settle(seg, cfile, trial, td)
            if not p2 and set(k2) == set(trial):
                kept, text = k2, t2; return
            if len(group) == 1:
                rejected[group[0]] = r2.get(group[0]) or "conflicts with earlier-registered functions in this file"; return
            half = len(group) // 2
            try_add(group[:half]); try_add(group[half:])
        # registered functions built together last time: one group first (try_add splits it only if that fails),
        # instead of groups of 16 (a 500-function file took ~9 min that way); then the new ones
        old = [n for n in order if prio.get(n, float("inf")) != float("inf")]
        olds = set(old); rest = [n for n in order if n not in olds]
        if old: try_add(old)
        for i in range(0, len(rest), 16):
            try_add(rest[i:i + 16])
        if text is None:
            k2, r2, text, p2 = settle(seg, cfile, {}, td)
        open("src/%s.c" % fname, "w").write(text if text else render(seg, cfile, {})[0])
        return (fname, kept, rejected, None)

def registry():
    reg = {}
    for p in glob.glob("matched/*/*.c"):
        seg, name = p.split("/")[1], os.path.basename(p)[:-2]
        reg[(seg, name)] = open(p).read()
    return reg

_FILES = None
def file_of(seg, name):
    global _FILES
    if _FILES is None:                      # one glob instead of one per function
        _FILES = {}
        for h in glob.glob("asm/nonmatchings/*/*/*.s"):
            _, _, sg, cf, fn = h.split("/"); _FILES.setdefault((sg, fn[:-2]), []).append(cf)
    hits = _FILES.get((seg, name), [])
    return hits[0] if len(hits) == 1 else None

LIBFILES = {tuple(k.split("/")) for k in json.load(open("tools/hh/libultra.json"))} if os.path.exists("tools/hh/libultra.json") else set()

def added_times():
    """{matched/SEG/FUNC.c: commit time it was first registered}. File mtimes can't order registrations: git
    checkouts, the loop's revert and the repair tools' rewrites all reset them, so an old match could look newest
    and lose a conflict to a new one (the likely cause of cycle 12 losing 2 registered functions; a replay did not reproduce it)."""
    _, out = subprocess.getstatusoutput("git log --diff-filter=A --format=%ct --name-only -- matched")
    t, first = None, {}
    for line in out.splitlines():
        if line.isdigit(): t = float(line)
        elif line.strip() and t is not None: first[line.strip()] = min(t, first.get(line.strip(), t))
    return first

def run(cands, new_keys):
    """cands: {(seg, name): text}. Builds every affected file; returns (kept keys, rejected {key: why}).
    Files built from library source (tools/hh/libultra.json) are left alone."""
    byfile = {}
    for (seg, name), text in cands.items():
        cf = file_of(seg, name)
        if cf and (seg, cf) not in LIBFILES: byfile.setdefault((seg, cf), {})[name] = text
    prio = {}
    added = added_times()
    for (seg, name) in cands:
        p = "matched/%s/%s.c" % (seg, name)
        if (seg, name) in new_keys or not os.path.exists(p): prio[(seg, name)] = float("inf")
        else: prio[(seg, name)] = added.get(p, os.path.getmtime(p))
    jobs = [(seg, cf, sn, {n: prio[(seg, n)] for n in sn}) for (seg, cf), sn in sorted(byfile.items())]
    kept, rejected = set(), {}
    with Pool(max(1, os.cpu_count() - 2)) as p:
        for fname, snips, rej, problem in p.imap_unordered(build_one, jobs):
            seg = fname.split("/")[0]
            kept |= {(seg, n) for n in snips}; rejected.update({(seg, n): why for n, why in rej.items()})
            if problem: print("PROBLEM", fname, problem)
    return kept, rejected

def context_for(seg, func):
    """Declarations already in force in `func`'s C file (excluding func's own snippet): every extern,
    typedef/struct, and a prototype for each C function defined there. Given to workers as context.h."""
    cf = file_of(seg, func)
    reg = {n: t for (s, n), t in registry().items() if s == seg and n != func}
    names = {e[0] for e in entries(seg, cf)}
    text, _ = render(seg, cf, {n: t for n, t in reg.items() if n in names}, keep_ro=False)   # declarations only
    out, lines, i = [], text.splitlines(), 0
    while i < len(lines):
        l = lines[i]
        if l.startswith("#pragma") or l.startswith("#include") or not l.strip(): i += 1; continue
        if DEFN.match(l) and "{" in l or (DEFN.match(l) and i + 1 < len(lines) and lines[i + 1].strip() == "{"):
            head = l.split("{")[0].rstrip()
            out.append(head + ";")
            depth = l.count("{") - l.count("}"); i += 1
            if depth == 0 and "{" not in l:          # brace on the next line
                depth = lines[i].count("{") - lines[i].count("}"); i += 1
            while depth > 0 and i < len(lines):
                depth += lines[i].count("{") - lines[i].count("}"); i += 1
            continue
        out.append(l); i += 1
    return "\n".join(['#include "common.h"', "/* Declarations already used in this function's source file %s/%s.c."
                      % (seg, cf), "   Use them as they are; do not redeclare these names differently. */"] + out) + "\n"


def infile_check(seg, func, path):
    """Build `func`'s real C file with every registered neighbour plus the attempt at `path`, the way
    `add` would. Returns (ok, message). The neighbours' declarations come first and win, so a clash
    shows up here exactly as it would at integration."""
    cf = file_of(seg, func)
    info = {e[0]: e for e in entries(seg, cf)}
    snips = {n: t for (s, n), t in registry().items() if s == seg and n in info and n != func}
    snips[func] = open(path).read()
    with tempfile.TemporaryDirectory() as td:
        text, ranges = render(seg, cf, snips)
        obj, err = compile_file(text, td)
        src = text.splitlines()
        if obj is None:
            out = []
            for m in re.finditer(r"line (\d+): (.*)", err):
                n = int(m.group(1)); who = next((k for k, (a, b) in ranges.items() if a <= n <= b), None)
                where = "your function" if who == func else ("%s (already matched)" % who if who else "file")
                out.append("  %s: %s\n      > %s" % (where, m.group(2).strip(), src[n - 1].strip() if n <= len(src) else ""))
                if len(out) >= 8: break
            return False, "IN-FILE FAIL: the file %s/%s.c does not compile with your function in it:\n%s" % (seg, cf, "\n".join(out) or err[-600:])
        base = min(e[4] for e in info.values())
        ro = FILE_RODATA.get((seg, cf))
        if not func_ok(obj, func, info[func][2], info[func][3], info[func][4], base, ro):
            return False, ("IN-FILE FAIL: your function compiles in %s/%s.c but no longer matches there. In the real file, "
                           "names already declared (context.h) keep their declarations and your extern lines for them are "
                           "dropped, so use exactly the types in context.h." % (seg, cf))
        broken = [n for n in snips if n != func and not func_ok(obj, n, info[n][2], info[n][3], info[n][4], base, ro)]
        if broken:
            return False, "IN-FILE FAIL: your function breaks already-matched %s (a type or struct you define clashes)." % ", ".join(broken[:3])
    return True, "IN-FILE MATCH: also matches inside %s/%s.c with its %d matched neighbours" % (seg, cf, len(snips) - 1)


if __name__ == "__main__" and sys.argv[1] == "context":
    sys.stdout.write(context_for(sys.argv[2], sys.argv[3]))

if __name__ == "__main__" and sys.argv[1] == "infile":       # srcbuild.py infile SEG FUNC ATTEMPT.c
    ok, msg = infile_check(sys.argv[2], sys.argv[3], sys.argv[4]); print(msg); sys.exit(0 if ok else 1)


if __name__ == "__main__" and sys.argv[1] in ("all", "add"):
    mode = sys.argv[1]
    reg = registry()
    if mode == "all":
        kept, rejected = run(reg, set())
        print("rebuilt from registry: %d functions in C, %d rejected" % (len(kept), len(rejected)))
        os.makedirs("matched_rejected", exist_ok=True)
        with open("queue/rejected.jsonl", "a") as fh:
            for (seg, n), why in sorted(rejected.items()):
                os.makedirs("matched_rejected/" + seg, exist_ok=True)
                shutil.move("matched/%s/%s.c" % (seg, n), "matched_rejected/%s/%s.c" % (seg, n))
                fh.write(json.dumps({"segment": seg, "func": n, "why": why, "was_registered": True}) + "\n")
    elif mode == "add":
        new = {}
        for b in sys.argv[2:]:
            for l in open("queue/%s/results.jsonl" % b):
                r = json.loads(l); key = (r["segment"], r["func"])
                if r["verified"] == "MATCH" and key not in reg:
                    new[key] = open(workdir.attempt(b, r["func"], r["segment"])).read()
        # skip candidates rejected before with the same text while their file's registered functions were the same:
        # the loop re-offers the last few batches every cycle, and each retried reject costs a one-at-a-time rebuild of
        # its file (cycles 23-25 hit the 60 min integrate timeout that way)
        MEMO = "queue/srcbuild_reject_memo.jsonl"
        sha = lambda t: hashlib.sha1(t.encode()).hexdigest()[:16]
        byfile = {}
        for (seg, n), t in reg.items(): byfile.setdefault((seg, file_of(seg, n)), []).append(n + sha(t))
        def memo_key(key, text):
            return "%s %s %s %s" % (key[0], key[1], sha(text), sha("".join(sorted(byfile.get((key[0], file_of(*key)), [])))))
        seen = {json.loads(l)["key"] for l in open(MEMO)} if os.path.exists(MEMO) else set()
        skipped = {k for k, t in new.items() if memo_key(k, t) in seen}
        for k in skipped: new.pop(k)
        cands = dict(reg); cands.update(new)
        kept, rejected = run(cands, set(new))
        with open(MEMO, "a") as fh:
            for key, why in rejected.items():
                if key in new: fh.write(json.dumps({"key": memo_key(key, new[key]), "why": why}) + "\n")
        added = 0
        for key in new:
            if key in kept:
                os.makedirs("matched/" + key[0], exist_ok=True)
                open("matched/%s/%s.c" % key, "w").write(new[key]); added += 1
        log = "queue/rejected.jsonl"
        with open(log, "a") as fh:
            for key, why in rejected.items():
                fh.write(json.dumps({"segment": key[0], "func": key[1], "why": why, "was_registered": key in reg}) + "\n")
        print("added %d of %d new matches to the registry; %d rejected in context (see %s); %d skipped (rejected before, nothing changed)" % (added, len(new), len(rejected), log, len(skipped)))
