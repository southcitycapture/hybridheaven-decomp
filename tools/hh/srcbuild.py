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
import functools, glob, hashlib, json, os, re, shutil, subprocess, sys, tempfile
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
DEFN = re.compile(r"^(?!extern\b)[A-Za-z_][\w\s\*]*?\b(func_[0-9A-F]{8})\s*\([^;]*$")
# a one-line old-style definition, `void f(arg0) T *arg0; {` (DEFN excludes `;`): existing_ok must see it as a definition,
# or a file holding one is never "already right" and gets re-rendered (and, once frozen, rebuilt one at a time) every time
KR_DEFN = re.compile(r"^[A-Za-z_][\w\s\*]*?\b(func_[0-9A-F]{8})\s*\([^;{]*\)\s*(?:[^{};]*;)+\s*\{\s*$")
TYPEDEF = re.compile(r"\btypedef\b.*?\b(\w+)\s*;\s*$|^\s*}\s*(\w+)\s*;\s*$")
# a file-scope prototype without `extern` (`void func_800062F8(s32, s32);`); only used at brace depth 0
PROTO = re.compile(r"^\s*(?!return\b|else\b|case\b|goto\b)(?:[A-Za-z_]\w*[\s\*]+)+\**\s*((?:func|D)_[0-9A-F]{8}|[A-Za-z_]\w*)\s*\([^;{]*\)\s*;\s*(?://.*|/\*.*\*/)?$")

_RD = {}
def _rd(path):
    """An asm file's text, read once per process: render runs ~1,000 times on a 900-function file (file027) and
    re-reading every asm file each time was ~7 million opens, most of the build's time. asm/ doesn't change during a
    build; the twins srcbuild writes (_ro_, _lr_) are read with open()."""
    t = _RD.get(path)
    if t is None: t = _RD[path] = open(path).read()
    return t

def entries(seg, cfile):
    """Functions of one C file in address order: (name, asm path, rom offset, size)."""
    out = []
    for p in glob.glob("asm/nonmatchings/%s/%s/*.s" % (seg, cfile)):
        if os.path.basename(p).startswith(("_mrg_", "_ro_")): continue      # generated blocks, not functions
        s = _rd(p)
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
    for l in _rd(path).splitlines(True):
        if l.startswith(".section"): sect = l.split()[1]; continue
        if sect != ".text":
            m = RO_LINE.search(l)
            if m: v = int(m.group(1), 16); lo = v if lo is None else min(lo, v)
    return lo

def rodata_blocks(seg, cfile):
    return list(_rodata_blocks(seg, cfile))

@functools.lru_cache(maxsize=None)
def _rodata_blocks(seg, cfile):
    """Rodata splat could not migrate into one function (shared, or not referenced by code): (vram, path)."""
    out = []
    # labels splat already migrated into a function's own asm: a leftover block with the same label would duplicate it
    owned = set()
    for p in glob.glob("asm/nonmatchings/%s/%s/func_*.s" % (seg, cfile)):
        owned |= set(re.findall(r"^\s*dlabel\s+(\S+)", _rd(p), re.M))
    for p in glob.glob("asm/nonmatchings/%s/%s/*.s" % (seg, cfile)):
        b = os.path.basename(p)
        if b.startswith(("func_", "_pad", "pad", "_ro_", "_mrg_", "_ap_", "_lr_")): continue
        if set(re.findall(r"^\s*dlabel\s+(\S+)", _rd(p), re.M)) & owned: continue
        if not open(p).readline().startswith(".section .rodata") and ".section .late_rodata" not in open(p).read(200): continue
        v = rodata_min(p)
        if v is not None: out.append((v, p))
    return tuple(sorted(out))

def _ro_items(text):
    """A function asm's non-.text sections as [(section, vram, lines)] per item (an item starts at its `nonmatching`
    line; `.align` lines just before it belong to it)."""
    items, sect, buf = [], ".text", []
    for l in text.split("\n"):
        if l.startswith(".section"): sect = l.split()[1].rstrip(","); buf = []; continue
        if sect == ".text": continue
        if re.match(r"\s*\.align\b", l) and (not items or items[-1][0] != sect or "enddlabel" in items[-1][2][-1] or not items[-1][2][-1].strip()):
            buf.append(l); continue
        if re.match(r"\s*nonmatching\s", l):
            items.append([sect, None, buf + [l]]); buf = []; continue
        if items and items[-1][0] == sect:
            items[-1][2].append(l)
            m = RO_LINE.search(l)
            if m and items[-1][1] is None: items[-1][1] = int(m.group(1), 16)
    return [tuple(x) for x in items if x[1] is not None]

@functools.lru_cache(maxsize=None)
def late_split(seg, cfile, blocks):
    """The address where this file's late rodata starts. IDO emits [regular rodata][late rodata] per file, but splat
    labels some items on the wrong side (file048/801E1BE0: 2 'late' floats, 34 regular items, 86 late, 8 regular
    strays). Chosen as the boundary that disagrees with splat's labels least. None if the file has no late items."""
    pts = []
    for f in glob.glob("asm/nonmatchings/%s/%s/func_*.s" % (seg, cfile)):
        pts += [(v, sect == ".late_rodata") for sect, v, _ in _ro_items(_rd(f))]
    pts += [(v, False) for v, _ in blocks]
    if not any(l for _, l in pts): return None
    pts.sort(); best = None
    late_before, reg_after = 0, sum(1 for _, l in pts if not l)
    for k, (v, l) in enumerate(pts):        # boundary just before item k
        cost = late_before + reg_after
        if best is None or cost < best[0]: best = (cost, v)
        late_before += l; reg_after -= (not l)
    return best[1]

@functools.lru_cache(maxsize=None)
def late_orphans(seg, cfile, blocks):
    """Leftover blocks that are really one asm function's late rodata: {function asm path: [block paths]}.
    A block at or after the file's late split (late_split) used by exactly one asm function rides along with that
    function as its .late_rodata (file009/801CD500: D_801E35F0, the 500.0 of func_801D0F54, landed ahead of the
    whole late region as a plain .rodata block and shifted 0x88 bytes; file009 came out a byte too big)."""
    L = late_split(seg, cfile, blocks)
    if L is None: return {}
    funcs = glob.glob("asm/nonmatchings/%s/%s/func_*.s" % (seg, cfile))
    out = {}
    for v, p in blocks:
        if v < L: continue
        labels = re.findall(r"^\s*dlabel\s+(\S+)", _rd(p), re.M)
        users = [f for f in funcs if any(re.search(r"%%(?:hi|lo)\(%s\)" % re.escape(l), _rd(f)) for l in labels)]
        if len(users) == 1: out.setdefault(users[0], []).append(p)
    return out

@functools.lru_cache(maxsize=None)
def early_lates(seg, cfile, blocks):
    """Asm functions whose .late_rodata holds items before the file's late split: really regular rodata."""
    L = late_split(seg, cfile, blocks)
    if L is None: return set()
    return {f for f in glob.glob("asm/nonmatchings/%s/%s/func_*.s" % (seg, cfile))
            if any(sect == ".late_rodata" and v < L for sect, v, _ in _ro_items(_rd(f)))}

def with_late(path, blocks, split=None):
    """A twin of a function's asm (build/lr/.../_lr_<func>.s): its .late_rodata items before `split` moved to
    .rodata, and the given data blocks appended as .late_rodata."""
    text = _rd(path)
    items = _ro_items(text)
    reg = [ls for sect, v, ls in items if sect == ".rodata" or (split is not None and v < split)]
    late = [ls for sect, v, ls in items if sect == ".late_rodata" and not (split is not None and v < split)]
    for b in blocks: late.append([l for l in open(b).read().splitlines() if not l.startswith(".section")])
    code = []; sect = ".text"
    for l in text.split("\n"):
        if l.startswith(".section"): sect = l.split()[1].rstrip(","); continue
        if sect == ".text": code.append(l)
    out = []
    if reg: out += [".section .rodata"] + [l for ls in reg for l in ls]
    if late: out += [".section .late_rodata"] + [l for ls in late for l in ls]
    out += [".section .text"] + code
    # kept out of asm/: entries(), gen_extern_syms and others scan asm/ and would count the twin as a second definition
    tw = os.path.join("build/lr", os.path.dirname(path), "_lr_" + os.path.basename(path)); os.makedirs(os.path.dirname(tw), exist_ok=True)
    t = "\n".join(out) + "\n"
    if not os.path.exists(tw) or open(tw).read() != t: open(tw, "w").write(t)
    return tw

def rodata_part(path):
    """The non-.text sections of a function's asm (its migrated rodata), as text, or None."""
    out, sect, any_ro = [], ".text", False
    for l in _rd(path).split("\n"):
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
    if not ro: return None
    if c_makes_rodata(seg, name, snippet):
        # it makes some (float literals) but may still read other items by name (file015/func_80241F20: four
        # __FILE__ strings as `extern u8 D_80258310[]`): keep just those regular .rodata items
        ro = named_rodata(ro, snippet)
        if not ro: return None
    p = "asm/nonmatchings/%s/%s/_ro_%s.s" % (seg, cfile, name)
    if not os.path.exists(p) or open(p).read() != ro: open(p, "w").write(ro)
    return p

def named_rodata(ro, snippet):
    """The items of a function's .rodata section (not .late_rodata) that the C snippet names, as a block, or None."""
    items, cur, sect = [], None, None
    for l in ro.split("\n"):
        if l.startswith(".section"): sect = l.split()[1]; cur = None; continue
        if sect != ".rodata": continue
        m = re.match(r"\s*nonmatching\s+(\S+)", l)
        if m or cur is None: cur = [m.group(1) if m else None, []]; items.append(cur)
        cur[1].append(l)
    keep = [ls for n, ls in items if n and re.search(r"\b%s\b" % re.escape(n), snippet)]
    return ".section .rodata\n" + "\n".join(l for ls in keep for l in ls) + "\n" if keep else None

LATE_ITEM = re.compile(r"dlabel (D_[0-9A-F]{8})\n\s*/\* [0-9A-F]+ [0-9A-F]{8} ([0-9A-F]{8,16}) \*/ \.(float|double)")

_LL = {}
def late_literals(path, snippet):
    k = (path, snippet)
    if k not in _LL: _LL[k] = _late_literals(path, snippet)
    return _LL[k]

def _late_literals(path, snippet):
    """Matched C written before per-file rodata read its float constants by name (`extern f32 D_...;`). They're the
    function's own late rodata, which IDO emits itself from literals: replace each such name by its exact value."""
    text = _rd(path)
    if ".late_rodata" not in text: return snippet
    late = text.split(".section .late_rodata", 1)[1].split(".section .text", 1)[0]
    import struct
    for name, hexv, kind in LATE_ITEM.findall(late):
        # `extern f32 D_a;` or one name of `extern f32 D_a, D_b, D_c;` (file015/func_80241F20 had five on one line)
        m = re.search(r"^\s*extern\s+(?:const\s+)?(f32|f64|float|double)(?:\s+const)?\s+((?:\w+\s*,\s*)*%s(?:\s*,\s*\w+)*)\s*;\s*$" % name, snippet, re.M)
        if not m: continue
        if kind == "float" and len(hexv) == 8:
            v = struct.unpack(">f", bytes.fromhex(hexv))[0]; lit = repr(float("%.9g" % v))
            if struct.unpack(">f", struct.pack(">f", float(lit)))[0] != v: continue
            lit += "f"
        elif kind == "double" and len(hexv) == 16:
            v = struct.unpack(">d", bytes.fromhex(hexv))[0]; lit = repr(v)
        else: continue
        if "inf" in lit or "nan" in lit: continue
        if lit.startswith("-"): lit = "(" + lit + ")"
        rest = [x.strip() for x in m.group(2).split(",") if x.strip() != name]
        keep = "extern %s %s;" % (m.group(1), ", ".join(rest)) if rest else ""
        body = snippet[:m.start()] + keep + snippet[m.end():]
        cut = m.start() + len(keep)
        snippet = body[:cut] + re.sub(r"\b%s\b" % name, lit, body[cut:])
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
    for l in (open(path) if "/_" in path else _rd(path).splitlines(True)):
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

_COVER = {}
def covered_words(dirpath):
    """Word addresses the asm of one C file already holds (data lines `/* ROM VRAM BYTES */`, any section)."""
    if dirpath not in _COVER:
        out = set()
        for p in glob.glob(os.path.join(HH, dirpath, "*.s")):
            if os.path.basename(p).startswith("_ap_"): continue
            t = open(p).read()
            for m in re.finditer(r"/\* [0-9A-F]+ ([0-9A-F]{8}) ([0-9A-F]+) \*/", t):
                v = int(m.group(1), 16); out.update(range(v & ~3, v + len(m.group(2)) // 2, 4))
            # strings: `/* ROM VRAM */ .asciz "..."` then the bytes in a comment on the next line
            # (the comment also shows zero padding after the string; the assembler emits only up to the next 4 bytes)
            for m in re.finditer(r"/\* [0-9A-F]+ ([0-9A-F]{8}) \*/\s*\.asci[iz][^\n]*\n\s*/\* ([0-9A-F]+) \*/", t):
                v = int(m.group(1), 16); raw = bytes.fromhex(m.group(2))
                end = v + (raw.index(0) + 1 if 0 in raw else len(raw)); end = (end + 3) & ~3
                out.update(range(v & ~3, end, 4))
        _COVER[dirpath] = out
    return _COVER[dirpath]

def padded_block(path):
    """A data-only rodata block that starts 8-aligned (`.align 3`) right after 4 zero bytes in the original is the
    original compiler's alignment padding before a double. C rodata before it (strings) ends 4-aligned, so asm-processor
    sees the block at 4 mod 8 and stops ("unexpected alignment mod 8 ... provide explicit alignment padding",
    file008 D_80188A08). Use a twin `_ap_<name>.s` that carries the padding word itself; gen_pads.py recreates twins."""
    full = os.path.join(HH, path) if not os.path.isabs(path) else path
    try: text = open(full).read()
    except OSError: return path
    if not re.search(r"^\s*\.align 3\s*$", text, re.M): return path
    m = re.search(r"/\* ([0-9A-F]+) ([0-9A-F]{8}) ", text)
    if not m or int(m.group(2), 16) % 8: return path
    rom = int(m.group(1), 16)
    if rom < 4 or IMG[rom - 4:rom] != b"\0\0\0\0": return path
    if int(m.group(2), 16) - 4 in covered_words(os.path.dirname(path)): return path   # a real zero word, not padding
    twin = os.path.join(os.path.dirname(path), "_ap_" + os.path.basename(path))
    if not os.path.exists(os.path.join(HH, twin)):
        body = [l for l in text.splitlines() if l.strip() not in (".section .rodata", ".align 3")]
        open(os.path.join(HH, twin), "w").write(".section .rodata\n\n.word 0\n" + "\n".join(body) + "\n")
    return twin

ADDR_SYM = re.compile(r"^(?:func|D|B)_[0-9A-F]{8}$")
TAG_DEF = re.compile(r"^\s*(?:typedef\s+)?(?:struct|union|enum)\s+(\w+)\s*\{")

def _norm_decl(line):
    return " ".join(re.sub(r"/\*.*?\*/|//.*$", "", line).replace("extern ", "").split())

def private_names(text, decl_text, file_defs, own):
    """Names this snippet must keep private: file-scope declarations of address-named symbols that differ from the
    file's first declaration (or that declare a function another snippet of this file defines), and struct/union/enum
    tags and typedef names an earlier snippet already defined. Each snippet was matched compiled on its own, with its
    own declarations; one C file allows one declaration per name, so a neighbour's type for a shared global (a struct
    here, an s32 there) broke ~90 functions per overlay-rodata re-split (compile errors) and changed codegen for others.
    Renamed via #define to NAME__<function> around the snippet; the alias is linked at NAME's address (address-named
    symbols carry their address), so the bytes are the same."""
    out, depth = set(), 0
    for l in text.splitlines():
        if depth == 0:
            n = decl_name(l, 0)
            if n and ADDR_SYM.match(n) and n != own and (
                    (n in decl_text and decl_text[n] != _norm_decl(l)) or (n in file_defs and file_defs[n] != own)):
                out.add(n)
            for t in TAG_DEF.findall(l) + [x for x in TYPEDEF.findall(l) for x in x if x]:
                if t in decl_text and decl_text[t] != ("type", own): out.add(t)
        depth += l.count("{") - l.count("}")
        if depth == 0:
            t = TYPEDEF.search(l)
            if t:
                tn = t.group(1) or t.group(2)
                if tn in decl_text and decl_text[tn] != ("type", own): out.add(tn)
    return out

def render(seg, cfile, snips, pad=0, keep_ro=True, hoist=False):
    """Return (text, line ranges per snippet function). hoist=True puts one declaration per name at the top."""
    lines = ['#include "common.h"', ""]; ranges = {}; declared = set()
    decl_text = {}                             # name -> first declaration (normalized) or ("type", owner)
    file_defs = {}                             # function defined in this file -> the snippet that defines it
    for n, t in snips.items():
        for l in t.splitlines():
            m = DEFN.match(l)
            if m: file_defs.setdefault(m.group(1), n)
    if hoist:
        hd = hoisted_decls(seg, snips, unproto=(hoist == "unproto"))
        lines += sorted(hd.values()) + [""]; declared |= set(hd)
        for n, l in hd.items(): decl_text.setdefault(n, _norm_decl(l))
    group, gt, gl = [], 0, 0                  # consecutive asm functions waiting to be emitted as one block
    def flush():
        nonlocal group, gt, gl
        if group: lines.extend(['#pragma GLOBAL_ASM("%s")' % merged_block(seg, cfile, group), ""])
        group, gt, gl = [], 0, 0
    pending = rodata_blocks(seg, cfile)        # emitted in rodata order, just before the first function whose rodata comes later
    tp = tuple(pending)
    lorph = late_orphans(seg, cfile, tp)       # ...except a lone function's late literal: it travels with that function
    early = early_lates(seg, cfile, tp)        # and 'late' items splat put before the file's late region are regular
    lsplit = late_split(seg, cfile, tp) if (lorph or early) else None
    taken = {b for bs in lorph.values() for b in bs}
    pending = [(v, p) for v, p in pending if p not in taken]
    for name, path, off, size, vram in entries(seg, cfile):
        lo = rodata_min(path) if pending else None
        if pending and lo is not None and pending[0][0] < lo: flush()
        while pending and lo is not None and pending[0][0] < lo:
            lines += ['#pragma GLOBAL_ASM("%s")' % padded_block(pending.pop(0)[1]), ""]
        if name in snips or is_stub(off, size): flush()
        if name in snips:
            snips = dict(snips); snips[name] = late_literals(path, snips[name])
            kb = kept_rodata_block(seg, cfile, name, path, snips[name]) if keep_ro else None
            if kb: lines += ['#pragma GLOBAL_ASM("%s")' % kb, ""]
            priv = private_names(snips[name], decl_text, file_defs, name)
            body = (["#define %s %s__%s" % (n, n, name) for n in sorted(priv)]
                    + missing_decls(snips[name], declared) + snippet_lines(snips[name], declared - priv)
                    + ["#undef %s" % n for n in sorted(priv)])
            start = len(lines) + 1; lines += body + [""]; ranges[name] = (start, len(lines))
            depth = 0
            for l in body:
                n = decl_name(l, depth) or (DEFN.match(l).group(1) if depth == 0 and DEFN.match(l) else None)
                if n and n not in priv:      # a private name's declaration ends at its #undef: later snippets need their own
                    declared.add(n)
                    decl_text.setdefault(n, "DEF" if DEFN.match(l) and depth == 0 else _norm_decl(l))
                if depth == 0:
                    for tg in TAG_DEF.findall(l):
                        if tg not in priv: decl_text.setdefault(tg, ("type", name))
                depth += l.count("{") - l.count("}")
                t = TYPEDEF.search(l)
                if t:
                    tn = t.group(1) or t.group(2)
                    if tn not in priv: declared.add(tn); decl_text.setdefault(tn, ("type", name))
        elif is_stub(off, size):
            lines += ["void %s(void) {" % name, "}", ""]; declared.add(name)
        else:
            if path in lorph or path in early: path = with_late(path, lorph.get(path, []), lsplit)
            t, l = asm_weights(path)
            group.append(path); gt += t; gl += l
            if 3 * gl <= gt: flush()           # this block (with any merged predecessors) satisfies asm-processor
    flush()
    lines += sum((['#pragma GLOBAL_ASM("%s")' % padded_block(p), ""] for _, p in pending), [])
    if pad: lines += ['#pragma GLOBAL_ASM("%s")' % pad_asm(seg, cfile, pad), ""]
    return "\n".join(lines) + "\n", ranges

def compile_file(text, td):
    c = os.path.join(td, "f.c"); o = os.path.join(td, "f.o"); open(c, "w").write(text)
    # same string encoding as the Makefile's ASMPROC: the game's strings are EUC-JP, the sources UTF-8. Without it every
    # Japanese string in a file's GLOBAL_ASM data or C literals came out longer (UTF-8), shifting the rest of the file's
    # rodata: the per-file check could reject matching functions (found on the overlay-rodata branch, 89 of 175)
    r = subprocess.run([sys.executable, "tools/asm-processor/build.py", "--input-enc", "utf-8", "--output-enc", "euc-jp",
                        IDO, "--", "mips-linux-gnu-as"] + ASFLAGS +
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
    if exact is None: return False          # unresolved symbols OR a failed link: neither proves an exact match
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

def fn_body(text, name):
    """The definition of `name` in C text (signature line to its closing brace), whitespace-normalized; None if absent."""
    lines = text.splitlines()
    for i, l in enumerate(lines):
        m = DEFN.match(l) or KR_DEFN.match(l)
        if m and m.group(1) == name:
            out, depth, opened = [], 0, False
            for l2 in lines[i:]:
                out.append(l2); depth += l2.count("{") - l2.count("}"); opened = opened or "{" in l2
                if opened and depth <= 0: return " ".join(" ".join(out).split())
    return None

def _seg_bss():
    """segment -> vram where its .bss starts (hybridheaven.yaml `{ type: bss, vram: ... }`): where its rodata ends."""
    out, cur = {}, None
    for l in open("hybridheaven.yaml"):
        m = re.match(r"  - name: (\w+)", l)
        if m: cur = m.group(1); continue
        m = re.match(r"\s+- \{ type: bss, vram: 0x([0-9A-F]+)", l)
        if m and cur: out[cur] = int(m.group(1), 16)
    # Also bound the last per-file readonly subsegment in overlays with no BSS.
    for f in json.load(open("build/expanded.json"))["files"]:
        if "exp_len" in f:
            out.setdefault("file%03d" % f["id"], f["vram"] + f["exp_len"])
    return out
SEG_BSS = _seg_bss()

_YEXT = None
def yaml_extent(seg, cfile):
    """Size of seg/cfile's .rodata subsegment in hybridheaven.yaml (next subsegment's offset minus its own), or None."""
    global _YEXT
    if _YEXT is None:
        _YEXT, rows = {}, []
        for l in open("hybridheaven.yaml"):
            m = re.match(r"\s+- \[0x([0-9A-F]+), ([.\w]+)(?:, ([\w/]+))?\]", l)
            if m: rows.append((int(m.group(1), 16), m.group(2), m.group(3)))
            elif re.match(r"\s+- name:|\s*- \[0x[0-9A-F]+\]\s*$", l): rows.append((None, None, None))
        for (o, k, n), (o2, k2, n2) in zip(rows, rows[1:]):
            if k == ".rodata" and n and o2 is not None and o2 > o: _YEXT[tuple(n.split("/"))] = o2 - o
    return _YEXT.get((seg, cfile))

def file_rodata_size(seg, cfile):
    """Bytes of .rodata this C file owns in the per-file layout: up to the next file's, the last one up to the
    segment's .bss. None if the file has no per-file rodata."""
    st = FILE_RODATA.get((seg, cfile))
    if st is None: return None
    # the yaml's own extent when it has one: up to the next subsegment of any kind (main/80032720 is followed by a
    # bare 16-byte rodata subsegment before the next C file's rodata, which a next-C-file rule counted as its own)
    y = yaml_extent(seg, cfile)
    if y is not None: return y
    nxt = sorted(v for (s, c), v in FILE_RODATA.items() if s == seg and v > st)
    end = nxt[0] if nxt else SEG_BSS.get(seg)
    return (end - st) if end else None

def defined_functions(text):
    """C definitions, without mistaking a prototype plus the next definition for K&R parameter declarations."""
    code = "\n".join(l for l in text.splitlines() if not l.lstrip().startswith("#"))
    return set(re.findall(r"^[A-Za-z_][\w \*]*?\b(func_[0-9A-F]{8}|main)\s*\([^;{}]*\)\s*(?:[^(){};#]*;)*\s*\{", code, re.M))

def existing_ok(seg, cfile, snips, td, bodies=True, asm_ok=()):
    """The current src file, if it already is a correct build of exactly these snippets: it compiles, its C function
    definitions are exactly the registered ones, each matches at its address and the file keeps its size. A file built
    up one match at a time can be right where a from-scratch render of the same snippets is not (declaration order
    changes codegen: file045 lost 4 matches to every `srcbuild all`, which paused the loop 2026-10-15 and 10-20).
    asm_ok: unchanged registry entries already absent from HEAD's C definitions; preserve their committed ASM too."""
    path = "src/%s/%s.c" % (seg, cfile)
    if not os.path.exists(path): return False
    text = open(path).read()
    # A K&R parameter declaration cannot contain another function signature. Otherwise a prototype plus the next
    # definition is swallowed as one K&R definition (file008/80124ED0: func_8012C778 instead of func_80126198).
    defined = defined_functions(text)
    info = {e[0]: e for e in entries(seg, cfile)}
    stubs = {n for n, e in info.items() if is_stub(e[2], e[3])}
    if defined - stubs - set(snips) or set(snips) - stubs - defined - set(asm_ok): return False
    # same bodies too: unify and protofix rewrite registered snippets, and a stale file must not pass for the new text
    if bodies and any(fn_body(t, n) is None or fn_body(t, n) != fn_body(text, n) for n, t in snips.items() if n in defined): return False
    obj, err = compile_file(text, td)
    if obj is None: return False
    base = min(e[4] for e in info.values()); ro = FILE_RODATA.get((seg, cfile))
    if not all(n in info and func_ok(obj, n, info[n][2], info[n][3], info[n][4], base, ro) for n in snips if n in defined): return False
    start, end = file_span(seg, cfile)
    with open(obj, "rb") as fh:
        e = ELFFile(fh)
        if e.get_section_by_name(".text")["sh_size"] != end - start: return False
        # and its whole .rodata: a file kept from an older layout can compile and match function by function while
        # missing a data block the current layout gives it (file009/801C2580: 0x210 bytes short, every later file shifted)
        want = file_rodata_size(seg, cfile)
        if want is not None:
            ro = e.get_section_by_name(".rodata")
            if (((ro["sh_size"] if ro is not None else 0) + 15) & ~15) != want: return False   # files' rodata is 16-aligned
    return True

def build_one(args):
    """Build one C file. `prio` orders the snippets (lower = registered earlier); earlier work always wins a
    conflict: if the all-at-once build drops anything, rebuild by adding snippets one at a time in priority order."""
    seg, cfile, snips, prio, committed, asm_ok = args
    fname = "%s/%s" % (seg, cfile)
    old = {n: t for n, t in snips.items() if prio.get(n, float("inf")) != float("inf")}
    # The ROM-checked source is authoritative when both it and its complete registry inputs are still HEAD's blobs.
    # Re-rendering can lose reconciled aliases/declarations, even with identical bodies, or import a different
    # missing_decls declaration from an unrelated file's grown registry. Do not reinterpret this unchanged file.
    if committed and set(old) == set(snips): return (fname, dict(old), {}, None)
    with tempfile.TemporaryDirectory() as td:
        if snips and existing_ok(seg, cfile, snips, td, asm_ok=asm_ok):
            return (fname, dict(snips), {}, None)   # already right: keep the file as it is
        path = "src/%s.c" % fname
        if os.path.exists(path):
            current = open(path).read()
            present = {n: t for n, t in snips.items() if fn_body(current, n) is not None}
            new = {n: t for n, t in snips.items() if n not in present}
            import reconcile_frozen
            if new and reconcile_frozen.verify(seg, cfile, current, list(present), td)[0]:
                text, acc, rej = reconcile_frozen.integrate(seg, cfile, current, new, td)
                if acc: open(path, "w").write(text)
                return (fname, dict(present, **{n: new[n] for n in acc}), rej, None)
        kept, rej, text, problem = settle(seg, cfile, snips, td)
        if (problem or set(old) - set(kept)) and (committed or existing_ok(seg, cfile, old, td, bodies=False, asm_ok=asm_ok)):
            # the file as it stands is a correct build of its registered functions (the last ROM-checked one, even if
            # unify/protofix have since rewritten a snippet's text), and a from-scratch render, or adding the new
            # ones, would cost one of them (file045 loses 4, file018 lost 2 in cycle 29): keep it frozen. New candidates
            # are edited into the file as it stands instead (reconcile_frozen: declaration dedup, private aliases),
            # each kept only if every registered function still matches and the new one does
            new = {n: t for n, t in snips.items() if n not in old}
            if not new: return (fname, dict(old), {}, None)
            import reconcile_frozen
            text, acc, rej = reconcile_frozen.reconcile_file(seg, cfile, open("src/%s.c" % fname).read(), old, new, td)
            if acc: open("src/%s.c" % fname, "w").write(text)
            kept = dict(old); kept.update({n: new[n] for n in acc})
            return (fname, kept, {n: "file frozen: adding it would evict registered functions (reconcile: %s)"
                                  % rej.get(n, "?")[:300] for n in new if n not in acc}, None)
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
        if set(old) - set(kept):
            # An unrecognized/stale source is not permission to evict registered work. Fail before writing the file
            # (and before run's caller can move registry entries to matched_rejected), rather than sacrifice it.
            raise RuntimeError("%s: cannot rebuild registered functions: %s" % (fname, ", ".join(sorted(set(old) - set(kept)))))
        for i in range(0, len(rest), 16):
            try_add(rest[i:i + 16])
        if text is None:
            k2, r2, text, p2 = settle(seg, cfile, {}, td)
        open("src/%s.c" % fname, "w").write(text if text else render(seg, cfile, {})[0])
        return (fname, kept, rejected, None)

LINK_BLOCKLIST = "queue/link_blocklist.txt"   # "seg func" per line: matches in-file but breaks the full link

def link_blocked():
    """Functions whose C passes every in-file check but breaks the whole-ROM link ("jump to a non-instruction-aligned
    address", 2026-10-19/20): never built into src/, whatever step (unify, propagate, re-offers) puts them back."""
    if not os.path.exists(LINK_BLOCKLIST): return set()
    return {tuple(l.split()[:2]) for l in open(LINK_BLOCKLIST) if len(l.split()) >= 2 and not l.startswith("#")}

def registry():
    reg, blocked = {}, link_blocked()
    for p in glob.glob("matched/*/*.c"):
        seg, name = p.split("/")[1], os.path.basename(p)[:-2]
        if (seg, name) not in blocked: reg[(seg, name)] = open(p).read()
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

def run(cands, new_keys, every_file=False):
    """cands: {(seg, name): text}. Builds every affected file; returns (kept keys, rejected {key: why}).
    Files built from library source (tools/hh/libultra.json) are left alone. every_file (srcbuild all): also process
    C files with no matched function through the committed-input guard, and delete src files the asm layout no
    longer has. Uncommitted/changed-input files still rebuild: after a re-split their old GLOBAL_ASM paths can
    point at the old layout and stop the build."""
    byfile = {}
    for (seg, name), text in cands.items():
        cf = file_of(seg, name)
        if cf and (seg, cf) not in LIBFILES: byfile.setdefault((seg, cf), {})[name] = text
    if every_file:
        layout = {tuple(d.split("/")[2:4]) for d in glob.glob("asm/nonmatchings/*/*") if os.path.isdir(d)}
        for key in layout - LIBFILES: byfile.setdefault(key, {})
        for p in glob.glob("src/*/*.c"):
            key = (p.split("/")[1], os.path.basename(p)[:-2])
            if key not in layout and key not in LIBFILES and os.path.isdir("asm/nonmatchings/" + key[0]):
                os.remove(p); print("removed %s: not in the asm layout any more" % p)
    prio = {}
    added = added_times()
    for (seg, name) in cands:
        p = "matched/%s/%s.c" % (seg, name)
        if (seg, name) in new_keys or not os.path.exists(p): prio[(seg, name)] = float("inf")
        else: prio[(seg, name)] = added.get(p, os.path.getmtime(p))
    # adding: only files that have a new candidate. Rebuilding the others gains nothing and twice evicted registered
    # functions from files whose inputs had not changed (2026-10-23: file057/80364340, main/800201D0, 6 functions)
    if new_keys:
        touched = {(seg, file_of(seg, n)) for seg, n in new_keys}
        byfile = {k: v for k, v in byfile.items() if k in touched}
    # Snapshot HEAD once, before forking. Compare the whole per-file registry, including declarations and removals,
    # not just fn_body: reconciled src text need not be a literal rendering of its snippets.
    head = {}
    for line in subprocess.check_output(["git", "ls-tree", "-r", "HEAD", "--", "matched", "src", LINK_BLOCKLIST], text=True).splitlines():
        meta, path = line.split("\t", 1); head[path] = meta.split()[2]
    head_snips, blocked = {}, link_blocked()
    for path, oid in head.items():
        if path.startswith("matched/") and path.endswith(".c"):
            _, seg, name = path.split("/"); name = name[:-2]
            if (seg, name) in blocked: continue       # registry() excludes these too
            head_snips.setdefault((seg, file_of(seg, name)), {})[name] = oid
    def blob(text):
        data = text.encode(); return hashlib.sha1(b"blob %d\0" % len(data) + data).hexdigest()
    blocklist_ok = (blob(open(LINK_BLOCKLIST).read()) if os.path.exists(LINK_BLOCKLIST) else None) == head.get(LINK_BLOCKLIST)
    jobs = []
    for (seg, cf), sn in sorted(byfile.items()):
        old = {n: blob(t) for n, t in sn.items() if (seg, n) not in new_keys}
        path = "src/%s/%s.c" % (seg, cf)
        committed = (blocklist_ok and old == head_snips.get((seg, cf), {}) and os.path.exists(path)
                     and blob(open(path).read()) == head.get(path))
        # Some HEAD registry entries already use ASM in the ROM-checked source (main/800201D0, file057/80364340).
        # Preserve that baseline after adding a neighbour too; only unchanged committed snippets get this allowance.
        asm_ok = set()
        if not committed and path in head:
            defined = defined_functions(subprocess.check_output(["git", "show", "HEAD:" + path], text=True))
            asm_ok = {n for n, oid in old.items() if oid == head_snips.get((seg, cf), {}).get(n) and n not in defined}
        jobs.append((seg, cf, sn, {n: prio[(seg, n)] for n in sn}, committed, asm_ok))
    kept, rejected = set(), {}
    byname = {"%s/%s" % (j[0], j[1]): j for j in jobs}
    lost = lambda fname, rej: sorted(n for n in rej if (fname.split("/")[0], n) not in new_keys)
    with Pool(max(1, os.cpu_count() - 2)) as p:
        results = list(p.imap_unordered(build_one, jobs))
    for i, (fname, snips, rej, problem) in enumerate(results):
        if lost(fname, rej):
            # a registered function dropped out. Twice (cycles 12 and 28) a whole-registry rebuild dropped registered
            # functions from a file whose inputs had not changed, and a rebuild of the same file kept them all:
            # something transient. Build the file again and keep the better build; log it either way.
            first = lost(fname, rej)
            for _ in range(2):
                r2 = build_one(byname[fname])
                if len(lost(fname, r2[2])) < len(first) or _ == 1: break
            with open("queue/srcbuild_flaky.jsonl", "a") as fh:
                fh.write(json.dumps({"file": fname, "first": {n: rej[n] for n in first},
                                     "retry": {n: r2[2][n] for n in lost(fname, r2[2])}}) + "\n")
            results[i] = r2
    for fname, snips, rej, problem in results:
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
    """Dry-run the same frozen-file integration as add, preserving every C neighbour and the file's size/rodata."""
    cf = file_of(seg, func)
    import reconcile_frozen
    text = open("src/%s/%s.c" % (seg, cf)).read()
    with tempfile.TemporaryDirectory() as td:
        _, acc, rej = reconcile_frozen.integrate(seg, cf, text, {func: reconcile_frozen.read_attempt(seg, func, path)}, td)
    if func not in acc: return False, "IN-FILE FAIL: %s/%s.c: %s" % (seg, cf, rej.get(func, "not accepted"))
    return True, "IN-FILE MATCH: also matches inside %s/%s.c (%s); all C neighbours preserved" % (seg, cf, acc[func])


def trial_snippets(seg, cfile, snips, td):
    """Repair-tool trial against the frozen file, with the same whole-file gate as workers/add.

    Registry entries still represented by ASM are candidates, never protected neighbours.
    Return settle's tuple so older repair callers can use the shared path too.
    """
    import reconcile_frozen as R
    path = 'src/%s/%s.c' % (seg, cfile)
    original = open(path).read()
    present = defined_functions(original) & {e[0] for e in entries(seg, cfile)}
    ok, why = R.verify(seg, cfile, original, present, td)
    if not ok: return {}, {}, original, 'baseline: ' + why
    reg = registry()
    # Frozen source can intentionally differ from an unchanged registry recipe
    # (private aliases, explicit readonly storage). A repair trial must edit only
    # changed inputs, rather than reinterpret every verified neighbour's recipe.
    unchanged = {n for n, t in snips.items() if n in present and (seg, n) in reg
                 and R.normalize(t) == R.normalize(reg[(seg, n)])}
    pending = {n: t for n, t in snips.items() if n not in unchanged}
    text, accepted, rejected = R.integrate(seg, cfile, original, pending, td)
    accepted = set(accepted) | unchanged
    ok, why = R.verify(seg, cfile, text, present | set(accepted), td)
    if not ok or not present <= defined_functions(text):
        return {}, {}, original, 'trial lost a neighbour: ' + why
    return {n: snips[n] for n in accepted}, rejected, text, None


if __name__ == "__main__" and sys.argv[1] == "switches":
    seg, func = sys.argv[2:4]
    cf = file_of(seg, func)
    if cf and (seg == 'main' or (seg, cf) in FILE_RODATA):
        print('\nFile-layout policy: `switch` is allowed in %s/%s.c. Use it when target.s uses a jump table (`jr` through `jtbl_`).' % (seg, cf))
    else:
        print('\nFile-layout policy: do not use `switch` here; this file has no linked per-file rodata placement.')


if __name__ == "__main__" and sys.argv[1] == "context":
    sys.stdout.write(context_for(sys.argv[2], sys.argv[3]))

if __name__ == "__main__" and sys.argv[1] == "infile":       # srcbuild.py infile SEG FUNC ATTEMPT.c
    ok, msg = infile_check(sys.argv[2], sys.argv[3], sys.argv[4]); print(msg); sys.exit(0 if ok else 1)


if __name__ == "__main__" and sys.argv[1] in ("all", "add"):
    mode = sys.argv[1]
    reg = registry()
    if mode == "all":
        kept, rejected = run(reg, set(), every_file=True)
        print("rebuilt from registry: %d functions in C, %d rejected" % (len(kept), len(rejected)))
        # every_file already rebuilds stale no-registry files. A second all-asm pass would bypass its committed
        # source guard and discard intentional C-owned readonly data, hh-block recipes, or placeholder formatting.
        os.makedirs("matched_rejected", exist_ok=True)
        with open("queue/rejected.jsonl", "a") as fh:
            for (seg, n), why in sorted(rejected.items()):
                os.makedirs("matched_rejected/" + seg, exist_ok=True)
                shutil.move("matched/%s/%s.c" % (seg, n), "matched_rejected/%s/%s.c" % (seg, n))
                fh.write(json.dumps({"segment": seg, "func": n, "why": why, "was_registered": True}) + "\n")
    elif mode == "add":
        new = {}; blocked = link_blocked()
        for b in sys.argv[2:]:
            for l in open("queue/%s/results.jsonl" % b):
                r = json.loads(l); key = (r["segment"], r["func"])
                if r["verified"] == "MATCH" and key not in reg and key not in blocked:
                    a = workdir.attempt(b, r["func"], r["segment"])
                    if a is None: continue     # work dir archived (tools/swarm/housekeep.py): offered and settled before
                    import reconcile_frozen
                    new[key] = reconcile_frozen.read_attempt(key[0], key[1], a)
        # skip candidates rejected before with the same text while their file's registered functions were the same:
        # the loop re-offers the last few batches every cycle, and each retried reject costs a one-at-a-time rebuild of
        # its file (cycles 23-25 hit the 60 min integrate timeout that way)
        MEMO = "queue/srcbuild_reject_memo.jsonl"
        sha = lambda t: hashlib.sha1(t.encode()).hexdigest()[:16]
        # A refusal under the old layout or an older integration implementation
        # says nothing about this one, even when the registry text is identical.
        gate_version = sha(''.join(open(p).read() for p in (
            'tools/hh/srcbuild.py', 'tools/hh/reconcile_frozen.py', 'tools/hh/try_func.py',
            'tools/hh/kept_blocks.py', 'hybridheaven.yaml')))
        byfile = {}
        for (seg, n), t in reg.items(): byfile.setdefault((seg, file_of(seg, n)), []).append(n + sha(t))
        def memo_key(key, text):
            cf = file_of(*key)
            path = 'src/%s/%s.c' % (key[0], cf)
            frozen = open(path).read() if os.path.exists(path) else ''
            return "%s %s %s %s %s" % (key[0], key[1], sha(text),
                sha("".join(sorted(byfile.get((key[0], cf), [])))), sha(gate_version + frozen))
        seen = {json.loads(l)["key"] for l in open(MEMO)} if os.path.exists(MEMO) else set()
        if os.environ.get("SRCBUILD_NO_MEMO"): seen = set()   # re-offer every earlier reject (after a check fix)
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
