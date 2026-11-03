#!/usr/bin/env python3
"""Shared struct database from the target asm, matched C and the GGA headers (Task 30, plan item 4).

  types_db.py build                 mine every function (types_mine.py), unify, write include/types/*.h
                                    and queue/types.jsonl
  types_db.py context SEG FUNC      the recovered types/globals FUNC's asm touches, as C (srcbuild.py context
                                    appends this to context.h when TYPES=1)
  types_db.py show NAME             one type or global from queue/types.jsonl

Unification (Steensgaard-style, with congruence: once two objects are one type, the objects their pointer
fields point to are one type too):
  hard   the same key in every function (a global, a function's parameter i, a field of a hard-equal object)
  soft   a pointer stored into a field, passed as an argument, returned, or a call's result: merged only
         when the two layouts are compatible (no overlapping accesses of different width/float-ness, down
         to the pointed-to objects), never through libultra or a parameter its callee never dereferences.
Overlaps that remain inside one type are kept out of the emitted layout (largest-use field wins) and listed
as evidence. Field names come from GGA's headers (CC0) when a GGA type is seeded, else from names that
matched C uses for the same offset of the same object (votes), else unkXX.
"""
import collections
import functools
import glob
import gzip
import json
import math
import os
import re
import sys
from multiprocessing import Pool

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
HH = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "../.."))
import types_mine as M

DB_PATH = "queue/types.jsonl"
BIG_TYPE = 40          # types with more fields are shown to a worker compacted to the fields its function uses
HDR_DIR = "include/types"
FACTS = "build/types/facts.json.gz"

WIDTH = {"lb": 1, "lbu": 1, "sb": 1, "lh": 2, "lhu": 2, "sh": 2, "lw": 4, "sw": 4, "lwc1": 4, "swc1": 4,
         "ldc1": 8, "sdc1": 8, "ld": 8, "sd": 8}
FLOAT = {"lwc1": "f", "swc1": "f", "ldc1": "d", "sdc1": "d"}
CHILD = re.compile(r"^(.*)/([0-9A-F]+)$")
ELEM = re.compile(r"^(.*)\[([0-9A-F]+)\]$")

# GGA objects at known HH addresses (include/gga/*.h header comments; Task 25). kind: obj | ptr | array
GGA_SEEDS = {
    "D_80091BC0": ("Heap", "obj", "gga/heap.h", "gHeap"),
    "D_800CBDA4": ("SndTrack", "ptr", "gga/snd.h", "gSndCurTrack"),
    "D_80091BD8": ("AMAudioMgr", "obj", "gga/audio.h", "__am"),
    "D_80096020": ("AMDMAState", "obj", "gga/audio.h", "dmaState"),
    "D_80096030": ("AMDMABuffer", "array", "gga/audio.h", "dmaBuffs"),
}


def shape(op):
    return WIDTH[op], FLOAT.get(op, "i")


@functools.lru_cache(None)
def libultra_funcs():
    out = set()
    for l in open(os.path.join(HH, "tools/hh/libultra_names.txt")):
        m = re.match(r"\s*\w+\s*=\s*0x([0-9A-Fa-f]{8});", l)
        if m: out.add("main:func_%s" % m.group(1).upper())
    lib = json.load(open(os.path.join(HH, "tools/hh/libultra.json")))
    for (seg, func), path in M.function_index().items():
        if "%s/%s" % (seg, path.split("/")[-2]) in lib: out.add("%s:%s" % (seg, func))
    return out


# ---------------------------------------------------------------- union-find over objects

class DB:
    def __init__(self):
        self.parent, self.data, self.keymap = [], [], {}
        self.refused = collections.Counter()       # soft edges refused for a conflict, by kind
        self.merged = collections.Counter()

    def new(self):
        self.parent.append(len(self.parent))
        self.data.append({"acc": collections.Counter(), "offf": collections.defaultdict(set), "sign": collections.Counter(),
                          "ch": {}, "el": {},
                          "anchors": set(), "funcs": set(),
                          "fnptr": set(), "fnstore": collections.defaultdict(set), "size": 1})
        return len(self.parent) - 1

    def find(self, i):
        root = i
        while self.parent[root] != root: root = self.parent[root]
        while self.parent[i] != root: self.parent[i], i = root, self.parent[i]
        return root

    def node(self, key):
        if key in self.keymap: return self.find(self.keymap[key])
        m = CHILD.match(key)
        if m: n = self.child(self.node(m.group(1)), int(m.group(2), 16))
        else:
            m = ELEM.match(key)
            if m: n = self.elem(self.node(m.group(1)), int(m.group(2), 16))
            else:
                n = self.new(); self.data[n]["anchors"].add(key)
        self.keymap[key] = n
        return self.find(n)

    def child(self, p, off):
        p = self.find(p); c = self.data[p]["ch"].get(off)
        if c is None: c = self.new(); self.data[p]["ch"][off] = c
        return self.find(c)

    def elem(self, p, stride):
        p = self.find(p); c = self.data[p]["el"].get(stride)
        if c is None: c = self.new(); self.data[p]["el"][stride] = c
        return self.find(c)

    def union(self, a, b):
        work = [(a, b)]
        while work:
            x, y = work.pop(); x, y = self.find(x), self.find(y)
            if x == y: continue
            dx, dy = self.data[x], self.data[y]
            if dx["size"] < dy["size"]: x, y, dx, dy = y, x, dy, dx
            self.parent[y] = x
            dx["size"] += dy["size"]; dx["acc"].update(dy["acc"]); dx["anchors"] |= dy["anchors"]; dx["sign"].update(dy["sign"])
            dx["funcs"] |= dy["funcs"]; dx["fnptr"] |= dy["fnptr"]
            for k, v in dy["fnstore"].items(): dx["fnstore"][k] |= v
            for k, v in dy["offf"].items(): dx["offf"][k] |= v
            for f in ("ch", "el"):
                for off, c in dy[f].items():
                    if off in dx[f]: work.append((dx[f][off], c))
                    else: dx[f][off] = c
            self.data[y] = None

    # --- compatibility of a soft merge
    def shapes(self, n):
        out = {}
        for (off, op) in self.data[n]["acc"]:
            out.setdefault(off, set()).add(shape(op))
        return out

    def conflict(self, a, b):
        sa, sb = self.shapes(a), self.shapes(b)
        for off, xs in sa.items():
            for w, f in xs:
                for o2 in range(off - 7, off + w):
                    for w2, f2 in sb.get(o2, ()):
                        if (o2, w2) == (off, w) or o2 + w2 <= off: continue     # same word as int and float: a copy
                        if (w2, f2) in sa.get(o2, ()) or (w, f) in sb.get(off, ()): continue   # already in both
                        return True
        return False

    def compatible(self, a, b, depth=4, seen=None):
        a, b = self.find(a), self.find(b)
        if a == b: return True
        seen = seen if seen is not None else set()
        if (a, b) in seen: return True
        seen.add((a, b))
        if self.conflict(a, b): return False
        if depth == 0: return True
        da, db_ = self.data[a], self.data[b]
        for f in ("ch", "el"):
            for off in set(da[f]) & set(db_[f]):
                if not self.compatible(da[f][off], db_[f][off], depth - 1, seen): return False
        # a pointer field on one side must not be a non-pointer access on the other
        for x, y in ((da, b), (db_, a)):
            sh = self.shapes(y)
            for off, c in x["ch"].items():
                c = self.find(c)
                if self.data[c]["acc"] or self.data[c]["ch"]:
                    if any(s != (4, "i") for s in sh.get(off, ())): return False
        return True

    def soft(self, kind, a, b):
        a, b = self.find(a), self.find(b)
        if a == b: return
        if self.compatible(a, b):
            self.union(a, b); self.merged[kind] += 1
        else:
            self.refused[kind] += 1

    def has_fields(self, n):
        n = self.find(n); d = self.data[n]
        return bool(d["acc"]) or any(self.has_fields(c) for c in d["el"].values())


def mine_all(jobs=8):
    items = [(s, f, p) for (s, f), p in sorted(M.function_index().items())]
    with Pool(jobs) as pool:
        res = pool.map(M.mine_job, items, chunksize=64)
    os.makedirs(os.path.dirname(FACTS), exist_ok=True)
    with gzip.open(FACTS, "wt") as fh: json.dump(res, fh)
    return res


def solve(facts):
    db = DB(); lib = libultra_funcs()
    # hard identities: every access of every function
    for seg, func, f in facts:
        fn = "%s:%s" % (seg, func)
        for key, off, op, n in f.get("acc", ()):
            d = db.data[db.node(key)]
            d["acc"][(off, op)] += n; d["funcs"].add(fn); d["offf"][off].add(fn)
        for key, off, sg, us in f.get("sign", ()):
            d = db.data[db.node(key)]; d["sign"][(off, "s")] += sg; d["sign"][(off, "u")] += us
        for key, off in f.get("fnptr", ()):
            db.data[db.node(key)]["fnptr"].add(off)
        for key, off, target in f.get("fnstore", ()):
            db.data[db.node(key)]["fnstore"][off].add(target)
        for g in f.get("globals", ()):
            db.data[db.node(g)]["funcs"].add(fn)
    # which callee parameters are dereferenced by their own function (a generic pass-through is not a type)
    deref = set()
    for seg, func, f in facts:
        for key, off, op, n in f.get("acc", ()):
            if key.startswith("p:") and "/" not in key and "[" not in key: deref.add(key)
    edges = []
    for seg, func, f in facts:
        for kind, a, b in f.get("edges", ()):
            if kind == "arg":
                callee = b.rsplit(":", 1)[0][2:]
                if callee in lib or b not in deref: continue
            if kind == "ret" and b[2:] in lib: continue
            edges.append((("st", "retv", "ret", "arg").index(kind), kind, a, b))
    for _, kind, a, b in sorted(edges):
        db.soft(kind, db.node(a), db.node(b))
    return db




# ---------------------------------------------------------------- C layouts (matched snippets, GGA headers)

BASE = {"s8": 1, "u8": 1, "char": 1, "s16": 2, "u16": 2, "short": 2, "s32": 4, "u32": 4, "int": 4, "long": 4,
        "f32": 4, "float": 4, "f64": 8, "double": 8, "s64": 8, "u64": 8}
GENERIC_NAME = re.compile(r"^(unk|pad|field|filler|unused|padding|sp|f|s|b|p|u|w|h|x|i|v|a|c|d|e|g|l|m|n|o|q|r|t|"
                          r"z|y|k|j|s8|u8|s16|u16|s32|u32|f32|ptr|val|data|ent|arr|vals|values|words|bytes)"
                          r"_?[0-9A-Fa-fx_]*$")
SEMANTIC_SHORT = {"x", "y", "z", "w"}


def strip_c(text):
    text = re.sub(r"/\*.*?\*/", " ", text, flags=re.S)
    text = re.sub(r"//[^\n]*", "", text)
    return "\n".join(l for l in text.split("\n") if not l.lstrip().startswith("#"))


def c_eval(expr):
    expr = expr.strip()
    if not re.fullmatch(r"[0-9A-Fa-fxX+\-*/() \t]+", expr): raise ValueError(expr)
    return int(eval(re.sub(r"(?<![/])/(?![/])", "//", expr), {"__builtins__": {}}))


def split_top(text, sep):
    out, depth, cur = [], 0, ""
    for ch in text:
        if ch in "({[": depth += 1
        elif ch in ")}]": depth -= 1
        if ch == sep and depth == 0: out.append(cur); cur = ""
        else: cur += ch
    if cur.strip(): out.append(cur)
    return out


class CLayouts:
    """Struct layouts from C text: name -> {"size", "align", "fields": [(off, name, size, ptr_struct, elem)]}."""

    def __init__(self, base=None):
        self.structs = dict(base.structs) if base else {}
        self.alias = dict(base.alias) if base else {}

    def size_align(self, tname):
        seen = 0
        while tname in self.alias and seen < 8: tname = self.alias[tname]; seen += 1
        if tname in BASE: return BASE[tname], BASE[tname]
        st = self.structs.get(tname)
        if st: return st["size"], st["align"]
        raise KeyError(tname)

    def parse(self, text):
        text = strip_c(text)
        for m in re.finditer(r"\btypedef\s+(?:(?:struct|union)\s+)?(\w+)\s+(\*?)\s*(\w+)\s*;", text):
            if m.group(2): continue
            if m.group(1) != m.group(3): self.alias[m.group(3)] = m.group(1)
        pos = 0
        pat = re.compile(r"\b(typedef\s+)?(struct|union)\s*(\w+)?\s*\{")
        while True:
            m = pat.search(text, pos)
            if not m: break
            depth, j = 0, m.end() - 1
            while j < len(text):
                if text[j] == "{": depth += 1
                elif text[j] == "}":
                    depth -= 1
                    if depth == 0: break
                j += 1
            body = text[m.end():j]
            semi = text.find(";", j)
            after = text[j + 1:semi] if semi >= 0 else ""
            pos = j + 1
            try:
                lay = self.layout(body, m.group(2) == "union")
            except (KeyError, ValueError, ZeroDivisionError, SyntaxError):
                continue
            names = []
            if m.group(3): names.append(m.group(3)); names.append("struct " + m.group(3))
            if m.group(1):
                for d in after.split(","):
                    d = d.strip()
                    if re.fullmatch(r"\w+", d): names.append(d)
            for n in names: self.structs[n] = lay
        return self

    def member_type(self, t):
        t = re.sub(r"\b(const|volatile|signed)\b", " ", t).strip()
        t = re.sub(r"\bunsigned\s+(char|short|int|long)\b", lambda m: {"char": "u8", "short": "u16"}.get(m.group(1), "u32"), t)
        t = re.sub(r"\bunsigned\b", "u32", t).strip()
        if t.startswith(("struct ", "union ")): t = "struct " + t.split()[1]
        return t

    def layout(self, body, union=False):
        fields, off, size, align = [], 0, 0, 1
        for mem in split_top(body, ";"):
            mem = mem.strip()
            if not mem: continue
            if ":" in mem and "::" not in mem: raise ValueError("bitfield")
            nested = re.match(r"^(struct|union)\s*(\w+)?\s*\{(.*)\}\s*(.*)$", mem, re.S)
            if nested:
                sub = self.layout(nested.group(3), nested.group(1) == "union")
                decls = [d.strip() for d in nested.group(4).split(",") if d.strip()] or [""]
                for d in decls:
                    a = sub["align"]; off = (off + a - 1) // a * a if not union else 0
                    for f in sub["fields"]:
                        fields.append((off + f[0], (d + "." if d else "") + f[1], f[2], f[3], f[4]))
                    n = sub["size"]
                    size = max(size, off + n); align = max(align, a)
                    if not union: off += n
                continue
            fp = re.match(r"^(.*?)\(\s*\*\s*(\w+)\s*\)\s*\(.*\)\s*$", mem, re.S)
            if fp:
                decls = [("*", fp.group(2), "")]; tname = "void"
            else:
                m = re.match(r"^((?:struct|union)\s+\w+|(?:unsigned|signed)\s+\w+|\w+)\s*(.*)$", mem, re.S)
                if not m: raise ValueError(mem)
                tname = self.member_type(m.group(1)); decls = []
                for d in split_top(m.group(2), ","):
                    dm = re.fullmatch(r"\s*(\**)\s*(\w+)\s*((?:\[[^\]]*\])*)\s*", d)
                    if not dm: raise ValueError(d)
                    decls.append((dm.group(1), dm.group(2), dm.group(3)))
            for stars, name, dims in decls:
                if stars:
                    esz = eal = 4
                    ptr = tname if (tname in self.structs or tname.startswith("struct ")) and len(stars) == 1 else None
                    if ptr is None and len(stars) == 1:
                        base = tname
                        for _ in range(8):
                            if base in self.alias: base = self.alias[base]
                        if base in self.structs: ptr = base
                else:
                    esz, eal = self.size_align(tname); ptr = None
                n = 1
                for dim in re.findall(r"\[([^\]]*)\]", dims):
                    n *= c_eval(dim) if dim.strip() else 0
                a = eal; o = 0 if union else (off + a - 1) // a * a
                fields.append((o, name, esz * n, ptr, esz if dims else None))
                if not stars and not dims and tname in self.structs:      # an embedded struct: its fields too
                    for f in self.structs[tname]["fields"]:
                        fields.append((o + f[0], name + "." + f[1], f[2], f[3], f[4]))
                size = max(size, o + esz * n); align = max(align, a)
                if not union: off = o + esz * n
        size = (size + align - 1) // align * align
        return {"size": size, "align": align, "fields": fields}


@functools.lru_cache(None)
def gga_layouts():
    lay = CLayouts()
    for p in sorted(glob.glob(os.path.join(HH, "include/gga/*.h"))):
        lay.parse(open(p).read())
    return lay


def gga_header_of(name):
    for p in sorted(glob.glob(os.path.join(HH, "include/gga/*.h"))):
        if re.search(r"\}\s*%s\s*;" % re.escape(name), strip_c(open(p).read())):
            return "gga/" + os.path.basename(p)
    return None


def snippet_ties(seg, text):
    """(anchor key, layout name, how) for each global/parameter matched C gives a struct type, + the layouts."""
    lay = CLayouts(gga_layouts()).parse(text)
    ties = []
    body = strip_c(text)
    for m in re.finditer(r"^\s*extern\s+(?:struct\s+)?(\w+)\s+(\*?)\s*(D_[0-9A-F]{8})\s*(\[[^\]]*\])?\s*;", body, re.M):
        t, star, sym, arr = m.groups()
        if t not in lay.structs: continue
        g = M.gkey(seg, sym)
        if star: ties.append((g + "/0", t, "extern pointer"))
        elif arr: ties.append((M.elem(g, lay.structs[t]["size"]), t, "extern array"))
        else: ties.append((g, t, "extern"))
    for m in re.finditer(r"\(\s*(?:struct\s+)?(\w+)\s*\*\s*\)\s*&\s*(D_[0-9A-F]{8})\b", body):
        if m.group(1) in lay.structs: ties.append((M.gkey(seg, m.group(2)), m.group(1), "cast"))
    for m in re.finditer(r"^[A-Za-z_][\w \t\*]*?\b(func_[0-9A-F]{8})\s*\(([^)]*)\)\s*\{", body, re.M):
        for i, prm in enumerate(split_top(m.group(2), ",")[:4]):
            pm = re.match(r"^\s*(?:struct\s+)?(\w+)\s*\*\s*\w*\s*$", prm)
            if pm and pm.group(1) in lay.structs:
                ties.append(("p:%s:%s:%d" % (seg, m.group(1), i), pm.group(1), "parameter"))
    return ties, lay


def semantic(name):
    base = name.split(".")[-1]
    return base in SEMANTIC_SHORT or not GENERIC_NAME.match(base)


def apply_names(db, key, lname, lay, votes, depth=0, seen=None):
    """Vote matched-C field names onto the object `key` stands for, following pointer fields into children."""
    if key not in db.keymap and depth == 0: return
    seen = seen or set()
    n = db.find(db.keymap[key]) if depth == 0 else key
    if (n, lname) in seen or depth > 4: return
    seen.add((n, lname))
    st = lay.structs.get(lname)
    if not st: return
    d = db.data[n]
    widths = {}
    for o, op in d["acc"]: widths.setdefault(o, set()).add(WIDTH[op])
    for off, name, size, ptr, elem in st["fields"]:
        w = elem or size                 # an array field: its element width at its first element
        if semantic(name) and w in widths.get(off, ()):
            votes[(n, off)][(name.split(".")[-1], w)] += 1
        if ptr and off in d["ch"]:
            apply_names(db, db.find(d["ch"][off]), ptr, lay, votes, depth + 1, seen)


# ---------------------------------------------------------------- types from classes

def ctype_for(ops, width, fl, sign=(0, 0)):
    """C type of a field from its accesses; sign = (signed, unsigned) uses of a loaded word (types_mine.sign_use)."""
    if fl == "f": return "f32"
    if fl == "d": return "f64"
    if width == 8: return "s64"
    if width == 1:
        s, u = ops.get("lb", 0), ops.get("lbu", 0)
        return "s8" if s > u else "u8"
    if width == 2:
        s, u = ops.get("lh", 0), ops.get("lhu", 0)
        return "u16" if u > s else "s16"
    return "u32" if sign[1] > sign[0] else "s32"


class Builder:
    def __init__(self, db, facts):
        self.db, self.facts = db, facts
        self.roots = sorted({db.find(i) for i in range(len(db.parent))})
        self.votes = collections.defaultdict(collections.Counter)
        self.names, self.home, self.gga, self.rendered = {}, {}, {}, {}
        self.parents = collections.defaultdict(list)        # class -> [(parent class, off, 'p'|'e')]
        for r in self.roots:
            d = db.data[r]
            for off, c in sorted(d["ch"].items()): self.parents[db.find(c)].append((r, off, "p"))
            for st, c in sorted(d["el"].items()): self.parents[db.find(c)].append((r, st, "e"))
        self.compute_arrays()

    # --- arrays: a class with element strides is an array of its (folded) element class
    def compute_arrays(self):
        db = self.db
        self.arrays, self.folds = {}, collections.defaultdict(list)
        for n in self.roots:
            d = db.data[n]
            el = sorted(((sum(db.data[db.find(c)]["acc"].values()), st, db.find(c)) for st, c in d["el"].items()
                         if db.has_fields(c)), key=lambda t: (-t[0], t[1]))
            if not el: continue
            _, st, e = el[0]
            srcs = [(n, st)] + [(c, st) for _, s2, c in el[1:] if s2 % st == 0 and c != e]
            ends = [off + shape(op)[0] for src, m in srcs + [(e, st)] for (o, op) in db.data[src]["acc"]
                    for off in [o % m]]
            folded = collections.Counter()
            for src, m in srcs + [(e, st)]:
                for (o, op), c in db.data[src]["acc"].items(): folded[(o % m, op)] += c
            base = sum(lost_uses(db.data[x]["acc"]) for x, m in srcs + [(e, st)])
            # folding the direct accesses into one element must not create overlaps (a big struct that some code
            # also indexes as an array of words is still a struct)
            if ends and max(ends) <= st and lost_uses(folded) <= base:
                self.arrays[n] = (e, st)
                self.folds[e] += srcs
        self.elem_stride = {e: st for n, (e, st) in self.arrays.items()}

    def acc_of(self, n):
        acc = collections.Counter(self.db.data[n]["acc"])
        for src, m in self.folds.get(n, ()):
            if src == n: continue
            for (off, op), c in self.db.data[src]["acc"].items(): acc[(off % m, op)] += c
        return acc

    def offf_of(self, n):
        out = collections.defaultdict(set)
        for off, fs in self.db.data[n]["offf"].items(): out[off] |= fs
        for src, m in self.folds.get(n, ()):
            if src == n: continue
            for off, fs in self.db.data[src]["offf"].items(): out[off % m] |= fs
        return out

    def sign_of(self, n, off):
        sg = self.db.data[n]["sign"]; s, u = sg.get((off, "s"), 0), sg.get((off, "u"), 0)
        for src, m in self.folds.get(n, ()):
            if src == n: continue
            for (o, k), c in self.db.data[src]["sign"].items():
                if o % m == off: s, u = (s + c, u) if k == "s" else (s, u + c)
        return s, u

    def kids_of(self, n):
        kids = dict(self.db.data[n]["ch"])
        for src, m in self.folds.get(n, ()):
            for off, c in self.db.data[src]["ch"].items(): kids.setdefault(off % m, c)
        return kids

    def fnptr_of(self, n):
        out = set(self.db.data[n]["fnptr"])
        for src, m in self.folds.get(n, ()): out |= {o % m for o in self.db.data[src]["fnptr"]}
        return out

    def live(self, c):
        c = self.db.find(c)
        return bool(self.acc_of(c)) or bool(self.db.data[c]["ch"]) or c in self.arrays

    # --- evidence from matched C and GGA
    def collect_names(self):
        db = self.db; self.tie_log = collections.Counter()
        for p in sorted(glob.glob(os.path.join(HH, "matched/*/*.c"))):
            seg = p.split("/")[-2]
            try:
                ties, lay = snippet_ties(seg, open(p).read())
            except Exception:
                continue
            for key, lname, how in ties:
                base = re.split(r"[/\[]", key)[0]
                if base not in db.keymap: continue
                n = db.node(key)
                self.tie_log[how] += 1
                apply_names(db, n, lname, lay, self.votes, depth=1)
        g = gga_layouts()
        for sym, (tname, kind, hdr, gname) in GGA_SEEDS.items():
            key = M.gkey("main", sym)
            if key not in db.keymap: continue
            n = db.find(db.keymap[key])
            if kind == "ptr":
                n = db.find(db.data[n]["ch"][0]) if 0 in db.data[n]["ch"] else None
            if n is None: continue
            if n in self.arrays and kind != "obj": n = self.arrays[n][0]   # an array of them, or a pointer stepping through one
            if kind == "array" and n not in self.folds: continue
            self.gga[n] = (tname, hdr, sym, gname)

    def gga_consistent(self, n, tname):
        st = gga_layouts().structs[tname]
        starts = {f[0]: f for f in st["fields"]}
        bad = []
        for (off, op), c in self.acc_of(n).items():
            w, fl = shape(op)
            f = starts.get(off)
            if f is None:
                inside = [x for x in st["fields"] if x[0] <= off < x[0] + x[2] and (x[4] or x[1].startswith("pad"))]
                if not inside and off < st["size"]: bad.append((off, op))
                elif off >= st["size"]: bad.append((off, op))
            elif f[2] != w and not f[4]: bad.append((off, op))
        return bad

    # --- per-class layout
    def fields_of(self, n):
        """Chosen non-overlapping fields [(off, width, fl, ops, uses)] (most used first) and the rejected ones."""
        return choose_fields(self.acc_of(n))

    def name_classes(self):
        db = self.db; names = {}; used = set()

        def uniq(base):
            base = re.sub(r"\W", "_", base)[:56]
            nm, k = base, 2
            while nm in used: nm = "%s_%d" % (base, k); k += 1
            used.add(nm); return nm

        def anchor_rank(a):
            parts = a.split(":")
            return ({"g": 0, "p": 1, "r": 2, "s": 3}.get(parts[0], 9), parts[1].startswith("?"), a)

        order = [r for r in self.roots if self.live(r) or self.db.data[r]["el"]]
        for r, (tname, hdr, sym, gname) in sorted(self.gga.items(), key=lambda kv: kv[1][0]):
            if not self.gga_consistent(r, tname): names[r] = tname; used.add(tname)
        used |= {n for n in gga_layouts().structs if not n.startswith("struct ")}
        for r in order:
            if r in names: continue
            anchors = sorted(db.data[r]["anchors"], key=anchor_rank)
            if not anchors: continue
            parts = anchors[0].split(":")
            if parts[0] == "g":
                sc = parts[1].lstrip("?")
                nm = "T_%s" % parts[2] + ("" if sc in ("main", "abs", "file008", "file009") else "_%s" % sc)
            elif parts[0] == "p": nm = "T_%s_a%s" % (parts[2], parts[3])
            elif parts[0] == "r": nm = "T_%s_ret" % parts[2]
            else: nm = "T_%s_ret_%s" % (parts[2], parts[3])
            names[r] = uniq(nm)
        changed = True
        while changed:            # derived: the pointee of a named class's field, or its array element
            changed = False
            for r in order:
                if r in names: continue
                for p, off, how in self.parents.get(r, ()):
                    if p in names:
                        names[r] = uniq("%s_p%X" % (names[p][:44], off) if how == "p" else "%s_elem" % names[p][:48])
                        changed = True; break
        for r in order:
            if r not in names: names[r] = uniq("T_anon_%d" % r)
        self.names = names

    @functools.lru_cache(None)
    def shape_of(self, n):
        """('array', elem, stride) | ('ptr', class) | ('scalar', ctype) | ('struct',) | ('opaque',)."""
        if n in self.gga: return ("struct",)
        if n in self.arrays: return ("array",) + self.arrays[n]
        taken, rejected = self.fields_of(n)
        if not taken: return ("opaque",)
        kids = {off for off, c in self.kids_of(n).items() if self.live(c)}
        stride = self.elem_stride.get(n)
        if (len(taken) == 1 and taken[0][0] == 0 and not rejected and not kids - {0} and n not in self.gga
                and (stride is None or stride == taken[0][1])):
            off, w, fl, ops, uses = taken[0]
            if 0 in kids and w == 4 and fl == "i": return ("ptr", self.db.find(self.kids_of(n)[0]))
            if 0 in self.fnptr_of(n): return ("scalar", "void (*)()")
            return ("scalar", ctype_for(ops, w, fl, self.sign_of(n, 0)))
        return ("struct",)

    def ptr_to(self, c, depth=0):
        """The C type of a pointer to class c."""
        c = self.db.find(c)
        if depth > 3: return "void *"
        sh = self.shape_of(c)
        if sh[0] == "array": return self.elem_ctype(c, depth + 1) + " *"
        if sh[0] == "ptr": return self.ptr_to(sh[1], depth + 1) + "*"
        if sh[0] == "scalar": return "void *" if "(" in sh[1] else sh[1] + " *"
        if sh[0] == "struct" and c in self.rendered: return "struct %s *" % self.names[c]
        return "void *"

    def elem_ctype(self, n, depth=0):
        e, st = self.arrays[n]
        sh = self.shape_of(e)
        if sh[0] == "scalar" and shape_width(sh[1]) == st: return sh[1] if "(" not in sh[1] else "void *"
        if sh[0] == "ptr" and st == 4: return self.ptr_to(sh[1], depth + 1)
        if e in self.rendered: return "struct %s" % self.names[e]
        return None

    def choose_emitted(self):
        """Classes worth a shared type: used by 2+ functions, or a global's, or GGA's; plus what their pointer
        fields and array elements lead to."""
        db = self.db; out = set(); work = []
        for r in self.names:
            d = db.data[r]
            if not self.live(r): continue
            if len(d["funcs"]) >= 2 or any(a.startswith("g:") for a in d["anchors"]) or r in self.gga:
                work.append(r)
        while work:
            r = db.find(work.pop())
            if r in out or r not in self.names: continue
            out.add(r)
            for c in list(self.kids_of(r).values()) + list(db.data[r]["el"].values()):
                c = db.find(c)
                if c not in out and self.live(c): work.append(c)
            if r in self.arrays: work.append(self.arrays[r][0])
        return out

    def field_name(self, n, off, w, used):
        v = {k: c for k, c in self.votes.get((n, off), {}).items() if k[1] == w}
        if v:
            (name, _), c = sorted(v.items(), key=lambda kv: (-kv[1], kv[0]))[0]
            if name not in used: return name, "matched C (%d)" % c
        return "unk%X" % off, None

    def render_struct(self, n, size=None):
        db = self.db; name = self.names[n]
        taken, rejected = self.fields_of(n)
        kids, fnptr = self.kids_of(n), self.fnptr_of(n)
        gname = {}
        if n in self.gga:
            for f in gga_layouts().structs[self.gga[n][0]]["fields"]: gname.setdefault(f[0], f[1].split(".")[-1])
        lines, recs, used, pos, align = [], [], set(), 0, 1
        offf = self.offf_of(n) if len(taken) > BIG_TYPE else {}
        for off, w, fl, ops, uses in taken:
            if off > pos: lines.append("    /* 0x%03X */ u8 pad%X[0x%X];" % (pos, pos, off - pos))
            ct = ctype_for(ops, w, fl, self.sign_of(n, off)); src = None
            c = db.find(kids[off]) if off in kids else None
            if w == 4 and fl == "i":
                if off in fnptr: ct = "fn"
                elif c is not None and self.live(c): ct = self.ptr_to(c)
                elif c is not None and db.data[c]["anchors"]: ct = "void *"
            if off in gname: fname, src = gname[off], "GGA"
            else: fname, src = self.field_name(n, off, w, used)
            if fname in used: fname = "%s_%X" % (fname, off)
            used.add(fname)
            decl = "void (*%s)()" % fname if ct == "fn" else ("%s%s" % (ct, fname) if ct.endswith("*") else "%s %s" % (ct, fname))
            note = ["%d use%s" % (uses, "s" if uses != 1 else "")]
            lo = {1: ("lb", "lbu"), 2: ("lh", "lhu")}.get(w)
            if lo and ops.get(lo[0]) and ops.get(lo[1]):
                note.append("loaded both signed (%s x%d) and unsigned (%s x%d)" % (lo[0], ops[lo[0]], lo[1], ops[lo[1]]))
            sg = self.sign_of(n, off) if (w == 4 and fl == "i") else (0, 0)
            if sg[0] and sg[1]: note.append("used signed x%d, unsigned x%d" % sg)
            ov = [r for r in rejected if off <= r[0] < off + w or r[0] <= off < r[0] + r[1]]
            if ov: note.append("also " + ", ".join("%s@0x%X" % (ctype_for(r[3], r[1], r[2]), r[0]) for r in ov[:3]))
            lines.append("    /* 0x%03X */ %s; /* %s */" % (off, decl, "; ".join(note)))
            recs.append({"off": off, "name": fname, "type": "void (*)()" if ct == "fn" else ct.strip(), "width": w,
                         "uses": uses, "ops": dict(ops), **({"name_from": src} if src else {}),
                         **({"fns": sorted(offf.get(off, ()))} if offf else {})})
            pos = off + w; align = max(align, 8 if w == 8 else w)
        end = pos
        total = size if size and size >= end and size % align == 0 else (end + align - 1) // align * align
        if total > end: lines.append("    /* 0x%03X */ u8 pad%X[0x%X];" % (end, end, total - end))
        exact = bool(size) and total == size
        # The closing line stays `} NAME;` (reconcile_frozen.Scan finds type blocks by it when a worker's snippet is
        # frozen with the context declarations it used).
        text = "typedef struct %s { /* size %s0x%X */\n%s\n} %s;" % (name, "" if exact else ">= ", total, "\n".join(lines), name)
        over = [{"off": r[0], "type": ctype_for(r[3], r[1], r[2]), "uses": r[4]} for r in rejected]
        return text, recs, over, total, exact

    def build(self):
        db = self.db
        self.collect_names()
        self.shape_of.cache_clear()
        self.name_classes()
        emit = self.choose_emitted()
        stride_of = {e: st for n, (e, st) in self.arrays.items()}
        # what gets a typedef: structs (and array elements that are structs); GGA-consistent ones use GGA's header
        todo = sorted(r for r in emit if self.shape_of(r)[0] == "struct")
        for r in todo:
            if r in self.gga and not self.gga_consistent(r, self.gga[r][0]):
                tname, hdr, sym, gname = self.gga[r]
                self.rendered[r] = {"include": hdr, "fields": [], "overlaps": [], "size": gga_layouts().structs[tname]["size"], "exact": True}
            else:
                self.rendered[r] = None
        for r in todo:                 # second pass: pointer field types need to know what is rendered
            if self.rendered[r] is not None: continue
            text, recs, over, size, exact = self.render_struct(r, size=stride_of.get(r))
            self.rendered[r] = {"c": text, "fields": recs, "overlaps": over, "size": size, "exact": exact}
        fact_funcs = collections.defaultdict(set)
        for seg, func, f in self.facts:
            for g in f.get("globals", ()): fact_funcs[g].add("%s:%s" % (seg, func))

        home = {}
        for r in self.rendered:     # one segment's header if only it uses the type, main.h if main does, else shared.h
            srcs = [r] + [x for x, m in self.folds.get(r, ())]
            segs = {f.split(":")[0] for x in srcs for f in db.data[x]["funcs"]}
            segs |= {a.split(":")[1].lstrip("?") for x in srcs for a in db.data[x]["anchors"]}
            segs.discard("abs")
            home[r] = "main" if "main" in segs or not segs else (segs.pop() if len(segs) == 1 else "shared")
        self.home = home
        rows = []
        for r, info in sorted(self.rendered.items(), key=lambda kv: self.names[kv[0]]):
            d = db.data[r]
            srcs = [r] + [s for s, m in self.folds.get(r, ()) if s != r]
            anchors = sorted(set().union(*(db.data[s]["anchors"] for s in srcs)))
            funcs = sorted(set().union(*(db.data[s]["funcs"] for s in srcs)))
            parents = ["%s.%s0x%X" % (self.names[p], "elem" if how == "e" else "", off)
                       for p, off, how in self.parents.get(r, ()) if p in self.names and how == "p"]
            arrays = [a[2:] for s in srcs if s != r for a in sorted(db.data[s]["anchors"])]
            ev = {"accesses": sum(self.acc_of(r).values()), "functions": len(funcs), "anchors": len(anchors)}
            if r in stride_of: ev["array_stride"] = stride_of[r]
            if r in self.gga: ev["gga"] = "%s (GGA %s = %s)" % (self.gga[r][0], self.gga[r][3], self.gga[r][2])
            named = sum(1 for f in info["fields"] if f.get("name_from"))
            if named: ev["named_fields"] = named
            row = {"kind": "type", "type": self.names[r], "home": home[r], "size": info["size"], "exact_size": info["exact"],
                   "fields": info["fields"], "overlaps": info["overlaps"], "evidence": ev,
                   "globals": sorted({a.split(":")[2] for a in anchors if a.startswith("g:")}),
                   "params": [a[2:] for a in anchors if a.startswith("p:")][:300],
                   "pointee_of": parents[:20], "array_of": arrays[:20], "functions": funcs}
            if info.get("include"): row["include"] = info["include"]
            else: row["c"] = info["c"]
            rows.append(row)
        grows = []
        for key in sorted(k for k in db.keymap if k.startswith("g:") and "/" not in k and "[" not in k):
            r = db.find(db.keymap[key]); _, scope, sym = key.split(":")
            if not sym.startswith(("D_", "B_")) and sym not in M.named_symbols(): continue
            decl, tname = self.global_decl(r, sym)
            if decl is None: continue
            grows.append({"kind": "global", "global": sym, "scope": scope, "type": tname, "decl": decl,
                          "certain": self.decl_certain(r), "functions": sorted(fact_funcs.get(key, set()))})
        return rows, grows

    def lookup(self, key, off):
        """(type name, field record or None) for an access at key+off, or None when no shared type covers it."""
        if key not in self.db.keymap: return None
        n = self.db.find(self.db.keymap[key])
        if n in self.arrays and n not in self.gga:
            e, st = self.arrays[n]; n, off = self.db.find(e), off % st
        info = self.rendered.get(n)
        if not info: return None
        if info.get("include"):
            f = [x for x in gga_layouts().structs[self.names[n]]["fields"] if x[0] == off]
            return self.names[n], ({"off": off, "name": f[0][1], "width": f[0][4] or f[0][2]} if f else None)
        f = [x for x in info["fields"] if x["off"] == off]
        return self.names[n], (f[0] if f else None)

    def decl_certain(self, r):
        """Is a global's recovered type more than a guess? A plain 32-bit int (lw/sw only) or a store-only byte or
        halfword has no signedness in the asm; workers get those as a note, not a declaration."""
        sh = self.shape_of(r)
        if sh[0] != "scalar": return True
        taken, _ = self.fields_of(r)
        off, w, fl, ops, uses = taken[0]
        if fl in ("f", "d") or "(" in sh[1]: return True
        if w in (1, 2): return any(op.startswith("l") for op in ops)
        return any(self.sign_of(r, 0))

    def global_decl(self, r, sym):
        sh = self.shape_of(r)
        if sh[0] == "opaque": return None, None
        if sh[0] == "ptr":
            t = self.ptr_to(sh[1], 1)
            return "extern %s%s;" % (t, sym), t
        if sh[0] == "scalar":
            t = sh[1]
            if "(" in t: return "extern void (*%s)();" % sym, t
            return "extern %s %s;" % (t, sym), t
        if sh[0] == "array":
            et = self.elem_ctype(r)
            if et is None: return None, None
            return ("extern %s%s[];" if et.endswith("*") else "extern %s %s[];") % (et, sym), et + "[]"
        if r not in self.rendered: return None, None
        return "extern %s %s;" % (self.names[r], sym), self.names[r]


def choose_fields(acc):
    """Greedy non-overlapping layout from an access Counter {(off, op): n}: most-used shapes first.
    -> (taken [(off, width, fl, ops, uses)], rejected [...])."""
    by = collections.defaultdict(collections.Counter)
    for (off, op), c in acc.items(): by[(off, shape(op))][op] += c
    # a float field is also copied/passed with lw/sw (a float argument in a2/a3, struct copies); an int field is
    # never loaded with lwc1. Words at an offset with any float access are floats.
    for (off, (w, fl)) in list(by):
        if fl == "i" and w in (4, 8) and (off, (w, "f" if w == 4 else "d")) in by:
            by[(off, (w, "f" if w == 4 else "d"))].update(by.pop((off, (w, fl))))
    cands = sorted(by.items(), key=lambda kv: (-sum(kv[1].values()), kv[0][0]))
    taken, rejected = [], []
    for (off, (w, fl)), ops in cands:
        al = 8 if w == 8 else w
        ok = off >= 0 and off % al == 0 and all(off + w <= o or o + w2 <= off for o, w2, *_ in taken)
        (taken if ok else rejected).append((off, w, fl, ops, sum(ops.values())))
    return sorted(taken), rejected


def lost_uses(acc):
    return sum(r[4] for r in choose_fields(acc)[1])


def shape_width(ct):
    return {"s8": 1, "u8": 1, "s16": 2, "u16": 2, "s32": 4, "u32": 4, "f32": 4, "f64": 8, "s64": 8}.get(ct, 4)


def build(write=True):
    facts = mine_all()
    db = solve(facts)
    b = Builder(db, facts)
    rows, grows = b.build()
    if write:
        with open(DB_PATH, "w") as fh:
            for r in rows + grows: fh.write(json.dumps(r, sort_keys=True) + "\n")
        write_headers(rows, grows)
    return b, rows, grows


def type_deps(row, known):
    """Struct tags a type's text refers to (pointer fields)."""
    return sorted(set(re.findall(r"struct (\w+) \*", row.get("c") or "")) & known)


def describe(r):
    """Where a type is used, for its header comment."""
    if r["globals"]: return ", ".join(r["globals"][:3]) + (" (+%d)" % (len(r["globals"]) - 3) if len(r["globals"]) > 3 else "")
    if r["array_of"]: return "element of " + ", ".join(r["array_of"][:2])
    if r["pointee_of"]: return "pointed to by " + ", ".join(r["pointee_of"][:2])
    if r["params"]: return "parameter " + ", ".join(r["params"][:2])
    return "anonymous"


def type_base(t):
    """The type name a global's type refers to: 'struct T_x *' -> T_x, 'T_y[]' -> T_y."""
    return re.sub(r"[\s\*\[\]]+$", "", t.replace("[]", "")).replace("struct ", "").strip()


def write_headers(rows, grows):
    os.makedirs(HDR_DIR, exist_ok=True)
    for old in glob.glob(os.path.join(HDR_DIR, "*.h")): os.remove(old)
    byhome = collections.defaultdict(list)
    for r in rows: byhome[r["home"]].append(r)
    type_home = {r["type"]: r["home"] for r in rows}
    gbyscope = collections.defaultdict(list)
    for g in grows:
        sc = g["scope"].lstrip("?")
        gbyscope[sc if sc in byhome or sc in M.segments() else "main"].append(g)
    for home in sorted(set(byhome) | set(gbyscope)):
        incs, out = set(), []
        for r in byhome.get(home, ()):
            if r.get("include"): incs.add(r["include"])
        typed = []
        for g in gbyscope.get(home, ()):
            base = type_base(g["type"])
            th = type_home.get(base)
            if th and th != home and "*" not in g["type"]: incs.add("types/%s.h" % th)   # pointers need no body
            typed.append(g)
        guard = "TYPES_%s_H" % home.upper()
        out.append("#ifndef %s\n#define %s\n" % (guard, guard))
        out.append("/* Recovered types for %s (tools/hh/types_db.py, Task 30): one struct per object family that the\n"
                   " * target asm accesses at fixed offsets; unkXX fields, names from GGA (CC0) or matched C where\n"
                   " * evidence exists. Not used by the ROM build: workers get the relevant subset with TYPES=1.\n"
                   " * Index and evidence: queue/types.jsonl. */\n" % home)
        out.append('#include "common.h"')
        for i in sorted(incs):
            if i != "types/%s.h" % home: out.append('#include "%s"' % i)
        out.append("")
        for r in sorted(byhome.get(home, ()), key=lambda r: r["type"]):
            if r.get("c"):
                out.append("/* %s; %d functions */" % (describe(r), r["evidence"]["functions"]))
                out.append(r["c"]); out.append("")
        for g in sorted(typed, key=lambda g: g["global"]):
            out.append(g["decl"])
        out.append("\n#endif")
        open(os.path.join(HDR_DIR, "%s.h" % home), "w").write("\n".join(out) + "\n")


# ---------------------------------------------------------------- worker context (TYPES=1)

@functools.lru_cache(None)
def load_db(path=DB_PATH):
    types, globs, byfunc = {}, {}, collections.defaultdict(set)
    if not os.path.exists(os.path.join(HH, path)): return types, globs, byfunc
    for l in open(os.path.join(HH, path)):
        r = json.loads(l)
        if r["kind"] == "type":
            types[r["type"]] = r
            for f in r["functions"]: byfunc[f].add(r["type"])
        else:
            globs[(r["scope"], r["global"])] = r
    return types, globs, byfunc


def declared_names(text):
    """Identifiers context.h already declares (externs, typedefs, struct tags)."""
    body = strip_c(text)
    names = set(re.findall(r"\b(D_[0-9A-F]{8}|B_[0-9A-F]{8})\b", body))
    # token-pasted names (`CAT(D_801BBBF, 0)`) that hide a declaration from the line above
    names |= {a + b for a, b in re.findall(r"\b\w+\(\s*([DB]_[0-9A-F]{1,7})\s*,\s*([0-9A-F]{1,7})\s*\)", body)}
    names |= set(re.findall(r"\}\s*(\w+)\s*;", body)) | set(re.findall(r"\bstruct\s+(\w+)", body))
    names |= set(re.findall(r"\btypedef\b[^;{]*?(\w+)\s*;", body))
    return names


def context_types(seg, func, base="", previous=""):
    """C text: the recovered types FUNC's asm touches and typed externs for its globals that neither `base`
    (context.h so far) nor `previous` (an earlier attempt the worker starts from) declares."""
    types, globs, byfunc = load_db()
    if not types and not globs: return "/* TYPES=1: no queue/types.jsonl (run tools/hh/types_db.py build) */\n"
    fn = "%s:%s" % (seg, func)
    facts = M.mine(seg, func).json()
    have = declared_names(base)
    mine = declared_names(previous) - have
    want = set(byfunc.get(fn, ()))
    gl = []
    for g in facts["globals"]:
        _, scope, sym = g.split(":")
        row = globs.get((scope, sym))
        if not row: continue
        gl.append(row)
        base_t = type_base(row["type"])
        if base_t in types: want.add(base_t)
    out, incs, emitted = [], set(), []
    for t in sorted(want):
        row = types[t]
        if t in have or t in mine:
            continue
        if row.get("include"):         # a GGA header: only when context.h has none of its types already
            hdr_names = set(re.findall(r"\}\s*(\w+)\s*;", strip_c(open(os.path.join(HH, "include", row["include"])).read())))
            if not hdr_names & have: incs.add(row["include"])
            continue
        emitted.append(row)
    lines = ["", "/* ---- TYPES=1: recovered shared types this function's asm touches (tools/hh/types_db.py; evidence in",
             "   queue/types.jsonl). Offsets/widths come from every function that uses the same object; unkXX names are",
             "   placeholders. Use them where they help; the asm decides (a field's real type can still differ). */"]
    for i in sorted(incs): lines.append('#include "%s"' % i)
    for row in emitted:
        lines.append("/* %s; %d functions */" % (describe(row), row["evidence"]["functions"]))
        lines.append(compact(row, fn) if any("fns" in f for f in row["fields"]) else row["c"])
    notes = []
    for row in sorted(gl, key=lambda r: r["global"]):
        if row["global"] in have or row["global"] in mine:
            notes.append("   %s: recovered as %s (declared %s; cast if you need the fields)" % (
                row["global"], row["type"], "above" if row["global"] in have else "by previous.c"))
        elif not row.get("certain", True):
            notes.append("   %s: %s-wide in every access (signedness not in the asm); declare it yourself" % (
                row["global"], {"s32": "32-bit", "u8": "8-bit", "s8": "8-bit", "s16": "16-bit", "u16": "16-bit"}.get(row["type"], row["type"])))
        else:
            lines.append(row["decl"])
    params = []
    for t in sorted(want):
        for p in types[t]["params"]:
            s, f, i = p.split(":")
            if s == seg and f == func:
                params.append("arg%s: %s *" % (i, t))
    if params: notes.insert(0, "   %s parameters: %s" % (func, ", ".join(sorted(params))))
    if notes: lines += ["/* TYPES notes:"] + notes + ["*/"]
    return "\n".join(lines) + "\n"


def field_decl(f):
    t = f["type"]
    if t == "void (*)()": return "void (*%s)()" % f["name"]
    return ("%s%s" if t.endswith("*") else "%s %s") % (t, f["name"])


def compact(row, fn):
    """A big type for one function: the fields it uses, the rest as padding (same layout and size)."""
    keep = [f for f in row["fields"] if fn in f.get("fns", ())]
    lines, pos = [], 0
    for f in keep:
        if f["off"] > pos: lines.append("    /* 0x%03X */ u8 pad%X[0x%X];" % (pos, pos, f["off"] - pos))
        lines.append("    /* 0x%03X */ %s; /* %d uses */" % (f["off"], field_decl(f), f["uses"]))
        pos = f["off"] + f["width"]
    if row["size"] > pos: lines.append("    /* 0x%03X */ u8 pad%X[0x%X];" % (pos, pos, row["size"] - pos))
    return ("typedef struct %s { /* size %s0x%X; compacted: the %d of %d fields this function uses (full type: "
            "include/types/%s.h) */\n%s\n} %s;" % (row["type"], "" if row.get("exact_size") else ">= ", row["size"],
                                                   len(keep), len(row["fields"]), row["home"], "\n".join(lines), row["type"]))


def show(name):
    types, globs, byfunc = load_db()
    if name in types:
        r = dict(types[name]); fs = r.pop("functions"); print(r.pop("c", None) or "#include \"%s\"" % r.get("include"))
        print(json.dumps({k: v for k, v in r.items() if k != "fields"}, indent=1)); print("functions (%d): %s" % (len(fs), " ".join(fs[:40])))
        return
    for (sc, g), r in globs.items():
        if g == name: print(sc, r["decl"], "used by", len(r["functions"]))


if __name__ == "__main__":
    os.chdir(HH)
    cmd = sys.argv[1] if len(sys.argv) > 1 else "build"
    if cmd == "build":
        b, rows, grows = build()
        nf = sum(len(r["fields"]) for r in rows)
        named = sum(1 for r in rows for f in r["fields"] if f.get("name_from"))
        print("types %d (fields %d, %d named), typed globals %d; headers in %s, index %s" % (
            len(rows), nf, named, len(grows), HDR_DIR, DB_PATH))
        print("soft merges %s; refused (layout conflict) %s; matched-C ties %s" % (
            dict(b.db.merged), dict(b.db.refused), dict(b.tie_log)))
    elif cmd == "context":
        base = open(sys.argv[4]).read() if len(sys.argv) > 4 else ""
        sys.stdout.write(context_types(sys.argv[2], sys.argv[3], base))
    elif cmd == "show":
        show(sys.argv[2])
