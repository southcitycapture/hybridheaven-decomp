#!/usr/bin/env python3
"""Field-access miner for type recovery (Task 30): one function's target asm -> access facts.

  types_mine.py SEG FUNC            # print the facts of one function (JSON)

A forward dataflow over each function's basic blocks (delay slots, likely branches, calls, stack spills)
tracks which object every register points into:

  P(key, delta)          a pointer `delta` bytes into object `key`
  X(key, delta, stride)  a pointer into an array of `stride`-byte elements of `key` (index unknown)
  H(sym, add) / HX       a %hi(sym) half (plus a scaled index)
  L(sym, m)              m * an unknown index value `sym` (to find array strides: sll/addu/subu/mult)
  I(c)                   a constant;  SP(d) the stack pointer + d (spill slots are tracked)

Object keys are strings, so facts from many functions can be unified later (types_db.py):
  g:SCOPE:NAME          a global (SCOPE = the segment that owns its address, see scope_of)
  p:SEG:FUNC:i          parameter i (a0..a3) of a function
  r:SEG:FUNC            what a function returns;   s:SEG:FUNC:ADDR  the value a call at ADDR returned
  KEY/OFF               the object the pointer at KEY+OFF points to (a pointer loaded from a field)
  KEY[STRIDE]           an element of an array of STRIDE-byte elements at KEY

A join of two different values is unknown (an index symbol at most): loops that step a pointer, and
pointers that differ by path, never produce accesses. Unaligned/partial (lwl/lwr) accesses are skipped.
"""
import functools
import glob
import json
import math
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
HH = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "../.."))

LOADS = {"lb": (1, "s"), "lbu": (1, "u"), "lh": (2, "s"), "lhu": (2, "u"), "lw": (4, "w"),
         "lwc1": (4, "f"), "ldc1": (8, "d"), "ld": (8, "l")}
STORES = {"sb": (1, "b"), "sh": (2, "h"), "sw": (4, "w"), "swc1": (4, "f"), "sdc1": (8, "d"), "sd": (8, "l")}
UNALIGNED = {"lwl", "lwr", "swl", "swr", "ldl", "ldr", "sdl", "sdr"}
BRANCH1 = {"beqz", "bnez", "blez", "bgtz", "bltz", "bgez", "beqzl", "bnezl", "blezl", "bgtzl", "bltzl",
           "bgezl", "bltzal", "bgezal"}
BRANCH2 = {"beq", "bne", "beql", "bnel"}
BRANCH0 = {"bc1t", "bc1f", "bc1tl", "bc1fl"}
LIKELY = {"beql", "bnel", "beqzl", "bnezl", "blezl", "bgtzl", "bltzl", "bgezl", "bc1tl", "bc1fl"}
NO_DEST = set(STORES) | UNALIGNED | BRANCH0 | BRANCH1 | BRANCH2 | {
    "b", "j", "jr", "jal", "jalr", "mtc1", "dmtc1", "ctc1", "mult", "multu", "div", "divu", "dmult", "dmultu",
    "ddiv", "ddivu", "break", "teq", "tne", "sync", "cache", "nop", "mthi", "mtlo", "c.lt.s", "c.le.s",
    "c.eq.s", "c.lt.d", "c.le.d", "c.eq.d", "c.un.s", "c.un.d", "c.ult.s", "c.ule.s", "c.olt.s", "c.ole.s"}
CALLER_SAVED = ["$at", "$v0", "$v1", "$a0", "$a1", "$a2", "$a3", "$t0", "$t1", "$t2", "$t3", "$t4", "$t5", "$t6",
                "$t7", "$t8", "$t9", "$hi", "$lo"]
ARGS = ["$a0", "$a1", "$a2", "$a3"]

LINE = re.compile(r"^\s*/\*\s*[0-9A-F]+\s+([0-9A-F]{8})\s+[0-9A-F]{8}\s*\*/\s+(\S+)\s*(.*?)\s*$")
LABEL = re.compile(r"^\s*(\.L[0-9A-F_]+|[A-Za-z_][\w.]*):\s*$")
MEM = re.compile(r"^(.*)\((\$\w+)\)$")
RELOC = re.compile(r"^%(hi|lo)\(\s*([A-Za-z_][\w.]*)\s*(?:\+\s*(0x[0-9A-Fa-f]+|\d+))?\s*\)$")
SHIFTCONST = re.compile(r"^\((0x[0-9A-Fa-f]+|\d+)\s*(>>|&)\s*(0x[0-9A-Fa-f]+|\d+)\)$")


def num(s):
    s = s.strip()
    neg = s.startswith("-")
    v = int(s.lstrip("-"), 0)
    return -v if neg else v


# ---------------------------------------------------------------- symbols and scopes

@functools.lru_cache(None)
def segments():
    """Code segments: name -> (vram start, vram end incl. bss)."""
    import yaml
    y = yaml.safe_load(open(os.path.join(HH, "hybridheaven.yaml")))
    segs = y["segments"]; out = {}
    for i, s in enumerate(segs):
        if isinstance(s, dict) and s.get("type") == "code" and "vram" in s:
            nxt = None
            for t in segs[i + 1:]:
                nxt = t["start"] if isinstance(t, dict) else t[0]; break
            if nxt is None: continue
            out[s["name"]] = (s["vram"], s["vram"] + nxt - s["start"] + s.get("bss_size", 0))
    return out


@functools.lru_cache(None)
def named_symbols():
    out = {}
    path = os.path.join(HH, "symbol_addrs.txt")
    for l in open(path) if os.path.exists(path) else ():
        m = re.match(r"\s*(\w+)\s*=\s*(0x[0-9A-Fa-f]+)", l)
        if m: out[m.group(1)] = int(m.group(2), 16)
    return out


def sym_addr(name):
    m = re.match(r"^(?:D_|B_|func_)([0-9A-F]{8})", name)
    if m: return int(m.group(1), 16)
    return named_symbols().get(name)


@functools.lru_cache(None)
def scope_of(seg, name):
    """The segment whose address range holds this global, as seen from `seg`: its own segment first, else the
    single segment containing the address; 'abs' outside every segment; '?SEG' when several overlays overlap."""
    a = sym_addr(name)
    if a is None: return "abs"
    segs = segments()
    if seg in segs and segs[seg][0] <= a < segs[seg][1]: return seg
    owners = [s for s, (lo, hi) in segs.items() if lo <= a < hi and s != "entry"]
    if len(owners) == 1: return owners[0]
    if not owners: return "abs"
    return "?" + seg


@functools.lru_cache(None)
def function_index():
    """(seg, func) -> asm path, for every canonical function (generated _mrg_/_ro_ blocks excluded)."""
    out = {}
    for p in glob.glob(os.path.join(HH, "asm/nonmatchings/*/*/func_*.s")):
        parts = p.split("/")
        out[(parts[-3], parts[-1][:-2])] = p
    return out


@functools.lru_cache(None)
def _by_name():
    out = {}
    for seg, f in function_index(): out.setdefault(f, []).append(seg)
    return out


def callee_of(seg, name):
    """Resolve a jal target name to (seg, func): the caller's own segment, else main, else a unique owner."""
    idx = function_index()
    if (seg, name) in idx: return seg, name
    if ("main", name) in idx: return "main", name
    owners = _by_name().get(name, [])
    if len(owners) == 1: return owners[0], name
    a = sym_addr(name)
    if a is not None:
        sc = scope_of(seg, name)
        if sc in segments(): return sc, name
    return None


# ---------------------------------------------------------------- parsing

def parse(path):
    """-> (instructions [(vram, op, [operands])], {label: index}) for the .text part of one function file."""
    insns, labels, text = [], {}, True
    for l in open(path):
        s = l.strip()
        if s.startswith(".section"):
            text = ".text" in s; continue
        if not text: continue
        m = LINE.match(l)
        if m:
            ops = [o.strip() for o in split_ops(m.group(3))] if m.group(3) else []
            insns.append((int(m.group(1), 16), m.group(2), ops)); continue
        m = LABEL.match(l)
        if m: labels[m.group(1)] = len(insns)
        elif s.startswith(("glabel", "jlabel")):
            labels[s.split()[1]] = len(insns)
    return insns, labels


def split_ops(s):
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch == "(": depth += 1
        elif ch == ")": depth -= 1
        if ch == "," and depth == 0:
            out.append(cur); cur = ""
        else:
            cur += ch
    if cur.strip(): out.append(cur)
    return out


def is_branch(op):
    return op in BRANCH0 or op in BRANCH1 or op in BRANCH2 or op in ("b", "j") or op == "jr"


def branch_target(op, ops):
    if op == "jr": return None
    return ops[-1] if ops else None


# ---------------------------------------------------------------- dataflow

def child(key, off): return "%s/%X" % (key, off)
def elem(key, stride): return "%s[%X]" % (key, stride)


class Facts:
    def __init__(self):
        self.acc = {}          # (key, off, op) -> count
        self.edges = set()     # (kind, k1, k2)
        self.fnptr = set()     # (key, off): called through
        self.fnstore = set()   # (key, off, func): a function address stored there
        self.globals = set()   # global keys referenced (address taken or accessed)
        self.consts = {}       # call-site key -> {argi: constant} (allocation sizes etc.)
        self.calls = set()
        self.sites = {}        # vram -> (key, off, op) of every attributed load/store (not serialized)
        self.sign = {}         # (key, off) -> {"s": n, "u": n}: signed/unsigned uses of a loaded word

    def add(self, key, off, op, vram=None):
        k = (key, off, op); self.acc[k] = self.acc.get(k, 0) + 1
        if vram is not None: self.sites[vram] = k

    def json(self):
        return {"acc": [[k, o, op, n] for (k, o, op), n in sorted(self.acc.items())],
                "edges": sorted(self.edges), "fnptr": sorted(self.fnptr), "fnstore": sorted(self.fnstore),
                "globals": sorted(self.globals), "consts": self.consts, "calls": sorted(self.calls),
                "sign": [[k, o, v.get("s", 0), v.get("u", 0)] for (k, o), v in sorted(self.sign.items())]}


def as_lin(v):
    if v is None: return None
    if v[0] == "L": return v[1], v[2]
    if v[0] in ("U", "P"): return v, 1
    return None


def join(x, y):
    """Two pointers into the same object that differ by a constant: a pointer stepping through an array
    (a loop's `p += stride`). The element stride is the gcd of the differences."""
    if x[0] in ("P", "X") and y[0] in ("P", "X") and x[1] == y[1]:
        s = math.gcd(x[3] if x[0] == "X" else 0, y[3] if y[0] == "X" else 0, abs(x[2] - y[2]))
        if s <= 0 or s > 0x10000: return None
        return ("X", x[1], x[2] % s, s)
    return None


def gkey(seg, sym):
    return "g:%s:%s" % (scope_of(seg, sym), sym)


class Analyzer:
    def __init__(self, seg, func, insns, labels):
        self.seg, self.func, self.insns, self.labels = seg, func, insns, labels
        self.facts = None

    # --- value helpers
    def reloc(self, s):
        m = RELOC.match(s)
        if not m: return None
        return m.group(1), m.group(2), num(m.group(3)) if m.group(3) else 0

    def mem_operand(self, s):
        m = MEM.match(s)
        if not m: return None
        disp, base = m.group(1).strip(), m.group(2)
        if not disp: return 0, None, base
        r = self.reloc(disp)
        if r: return r[2], r[1], base                 # (addend, symbol, base reg)
        try: return num(disp), None, base
        except ValueError: return None

    def address(self, regs, slots, operand):
        """The memory operand as (kind, key, off): ('obj', key, off) | ('stack', None, d) | None."""
        mo = self.mem_operand(operand)
        if mo is None: return None
        off, sym, base = mo
        bv = regs.get(base)
        if sym is not None:
            if sym.startswith(("jtbl_", ".L")): return None
            gk = gkey(self.seg, sym)
            if bv is not None and bv[0] == "HX":
                if bv[3] and bv[3] > 0: return ("obj", elem(gk, bv[3]), off % bv[3])
                return None
            if bv is None or bv[0] == "H" or base == "$zero": return ("obj", gk, off)
            return None
        if base == "$sp" or (bv is not None and bv[0] == "SP"):
            d = 0 if base == "$sp" else bv[1]
            return ("stack", None, d + off)
        if bv is None: return None
        if bv[0] == "P": return ("obj", bv[1], bv[2] + off)
        if bv[0] == "X":
            stride = bv[3]
            if not stride or stride <= 0: return None
            return ("obj", elem(bv[1], stride), (bv[2] + off) % stride)
        return None

    def fresh(self, i):
        return ("U", i)

    SIGNED_OPS = {"slt": "s", "slti": "s", "sltu": "u", "sltiu": "u", "div": "s", "divu": "u", "mult": "s",
                  "multu": "u", "sra": "s", "bltz": "s", "bgez": "s", "blez": "s", "bgtz": "s", "bltzl": "s",
                  "bgezl": "s", "blezl": "s", "bgtzl": "s"}

    def sign_use(self, op, ops, regs):
        """A loaded word used by a signed or an unsigned operation: evidence for s32 vs u32 (not srl: IDO's signed
        division uses it too; not sltiu x, 1 / sltu x, $zero: those are just == 0 / != 0)."""
        kind = self.SIGNED_OPS.get(op)
        if kind is None or self.facts is None: return
        if op == "sltiu" and ops[-1] in ("1", "0x1"): return
        if op == "sltu" and "$zero" in ops: return
        srcs = ops[1:] if op in ("slt", "slti", "sltu", "sltiu", "sra") else ops[:2] if op in ("div", "divu", "mult", "multu") else ops[:1]
        if op in ("div", "divu") and len(ops) == 3: srcs = ops[1:]
        for r in srcs:
            v = regs.get(r)
            if v is not None and v[0] == "P" and v[2] == 0:
                m = re.match(r"^(.*)/([0-9A-F]+)$", v[1])
                if m:
                    d = self.facts.sign.setdefault((m.group(1), int(m.group(2), 16)), {})
                    d[kind] = d.get(kind, 0) + 1

    # --- transfer of one instruction (i) on state (regs, slots); facts recorded when self.facts is set
    def step(self, i, regs, slots):
        vram, op, ops = self.insns[i]
        F = self.facts
        if op in self.SIGNED_OPS: self.sign_use(op, ops, regs)
        if op in LOADS or op in STORES or op in UNALIGNED:
            if len(ops) < 2: return
            a = self.address(regs, slots, ops[1])
            rt = ops[0]
            mo = self.mem_operand(ops[1])
            if mo and mo[1] and F is not None and not mo[1].startswith(("jtbl_", ".L")):
                F.globals.add(gkey(self.seg, mo[1]))
            if op in UNALIGNED:
                if op.startswith("l"): regs[rt] = self.fresh(i)
                return
            if op in LOADS:
                if a and a[0] == "stack" and op == "lw":
                    regs[rt] = slots.get(a[2], self.fresh(i)); return
                if a and a[0] == "obj":
                    if F is not None: F.add(a[1], a[2], op, vram)
                    if op == "lw":
                        regs[rt] = ("P", child(a[1], a[2]), 0); return
                if not rt.startswith("$f") or rt == "$fp": regs[rt] = self.fresh(i)
                return
            # stores
            v = regs.get(rt) if not rt.startswith("$f") or rt == "$fp" else None
            if rt == "$zero": v = ("I", 0)
            if a and a[0] == "stack":
                if op == "sw": slots[a[2]] = v
                else: slots.pop(a[2] - a[2] % 4, None)
                return
            if a and a[0] == "obj" and F is not None:
                F.add(a[1], a[2], op, vram)
                if op == "sw" and v is not None:
                    if v[0] == "P" and v[2] == 0: F.edges.add(("st", child(a[1], a[2]), v[1]))
                    elif v[0] == "F": F.fnstore.add((a[1], a[2], v[1]))
            return
        if op in ("jal", "jalr"):
            self.call(i, regs, slots); return
        if op in NO_DEST:
            if op in ("mult", "multu") and len(ops) >= 2:
                x, y = regs.get(ops[0]), regs.get(ops[1])
                lo = None
                for p, q in ((x, y), (y, x)):
                    if q is not None and q[0] == "I" and as_lin(p): lo = ("L", as_lin(p)[0], as_lin(p)[1] * q[1])
                regs["$lo"] = lo or self.fresh(i); regs["$hi"] = self.fresh(i)
            elif op in ("div", "divu", "dmult", "dmultu", "ddiv", "ddivu"):
                regs["$lo"] = self.fresh(i); regs["$hi"] = self.fresh(i)
            elif op in ("mtc1", "dmtc1", "ctc1"):
                pass
            return
        if not ops: return
        rd = ops[0]
        if not rd.startswith("$") or rd == "$zero" or (rd.startswith("$f") and rd != "$fp"):
            return
        regs[rd] = self.value(i, op, ops, regs)

    def value(self, i, op, ops, regs):
        def val(r):
            if r == "$zero": return ("I", 0)
            return regs.get(r)
        if op == "lui":
            r = self.reloc(ops[1])
            if r and r[0] == "hi":
                if r[1].startswith("func_") and not r[2]: return ("HF", r[1])
                return ("H", r[1], r[2])
            m = SHIFTCONST.match(ops[1])
            if m: return ("I", (num(m.group(1)) >> 16) << 16) if m.group(2) == ">>" else ("I", num(m.group(1)) & 0xFFFF)
            try: return ("I", num(ops[1]) << 16)
            except ValueError: return self.fresh(i)
        if op in ("addiu", "daddiu", "addi", "ori"):
            src = val(ops[1]); imm_s = ops[2] if len(ops) > 2 else "0"
            r = self.reloc(imm_s)
            if r and r[0] == "lo":
                sym = r[1]
                if sym.startswith("func_") and not r[2]: return ("F", sym)
                if sym.startswith(("jtbl_", ".L")): return self.fresh(i)
                gk = gkey(self.seg, sym)
                if self.facts is not None: self.facts.globals.add(gk)
                if src is not None and src[0] == "HX":
                    return ("X", gk, r[2], src[3]) if src[3] else self.fresh(i)
                return ("P", gk, r[2])
            m = SHIFTCONST.match(imm_s)
            if m: imm = (num(m.group(1)) >> 16) << 16 if m.group(2) == ">>" else num(m.group(1)) & 0xFFFF
            else:
                try: imm = num(imm_s)
                except ValueError: return self.fresh(i)
            if src is None: return self.fresh(i)
            if op == "ori":
                if src[0] == "I": return ("I", src[1] | imm)
                return self.fresh(i)
            t = src[0]
            if t == "I": return ("I", src[1] + imm)
            if t == "P": return ("P", src[1], src[2] + imm)
            if t == "X": return ("X", src[1], src[2] + imm, src[3])
            if t == "SP": return ("SP", src[1] + imm)
            if t == "L": return src                       # index + c: keep the multiplier
            return self.fresh(i)
        if op in ("addu", "daddu", "add", "or"):
            if len(ops) < 3: return self.fresh(i)
            if ops[2] == "$zero": return val(ops[1]) or self.fresh(i)          # move
            if ops[1] == "$zero": return val(ops[2]) or self.fresh(i)
            if op == "or": return self.fresh(i)
            x, y = val(ops[1]), val(ops[2])
            if x is None or y is None: return self.fresh(i)
            if x[0] == "I" and y[0] == "I": return ("I", x[1] + y[1])
            for p, q in ((x, y), (y, x)):
                if p[0] == "P" and q[0] == "I": return ("P", p[1], p[2] + q[1])
                if p[0] == "X" and q[0] == "I": return ("X", p[1], p[2] + q[1], p[3])
                if p[0] == "H" and q[0] == "L": return ("HX", p[1], p[2], q[2])
                if p[0] == "P" and q[0] == "L": return ("X", p[1], p[2], q[2])
                if p[0] == "X" and q[0] == "L": return self.fresh(i)
                if p[0] == "SP" and q[0] == "I": return ("SP", p[1] + q[1])
            lx, ly = as_lin(x), as_lin(y)
            if lx and ly and lx[0] == ly[0]: return ("L", lx[0], lx[1] + ly[1])
            return self.fresh(i)
        if op in ("subu", "dsubu", "sub"):
            x, y = val(ops[1]), val(ops[2])
            if x and y and x[0] == "I" and y[0] == "I": return ("I", x[1] - y[1])
            lx, ly = as_lin(x), as_lin(y)
            if lx and ly and lx[0] == ly[0]: return ("L", lx[0], lx[1] - ly[1])
            if ops[1] == "$zero" and ly: return ("L", ly[0], -ly[1])
            return self.fresh(i)
        if op in ("sll", "dsll"):
            x = val(ops[1]); k = num(ops[2])
            if x is not None and x[0] == "I": return ("I", (x[1] << k) & 0xFFFFFFFF)
            lx = as_lin(x)
            if lx: return ("L", lx[0], lx[1] << k)
            return self.fresh(i)
        if op in ("mflo",):
            return regs.get("$lo") or self.fresh(i)
        if op == "mul" and len(ops) == 3:               # -r4300_mul: three-operand mul pseudo
            x, y = val(ops[1]), val(ops[2])
            for p, q in ((x, y), (y, x)):
                if q is not None and q[0] == "I" and as_lin(p): return ("L", as_lin(p)[0], as_lin(p)[1] * q[1])
            return self.fresh(i)
        if op in ("mfc1", "dmfc1", "cfc1"):
            return self.fresh(i)
        return self.fresh(i)

    def call(self, i, regs, slots):
        vram, op, ops = self.insns[i]
        F = self.facts
        site = "s:%s:%s:%X" % (self.seg, self.func, vram)
        if op == "jal" and ops:
            callee = callee_of(self.seg, ops[0]) if ops[0].startswith("func_") or sym_addr(ops[0]) else None
            if F is not None:
                if callee:
                    F.calls.add("%s:%s" % callee)
                    for n, a in enumerate(ARGS):
                        v = regs.get(a)
                        if v is not None and v[0] == "P" and v[2] == 0:
                            F.edges.add(("arg", v[1], "p:%s:%s:%d" % (callee + (n,))))
                        elif v is not None and v[0] == "I":
                            F.consts.setdefault(site, {})[str(n)] = v[1]
                    F.edges.add(("ret", site, "r:%s:%s" % callee))
                    F.consts.setdefault(site, {})["callee"] = "%s:%s" % callee
        elif op == "jalr" and F is not None:
            tv = regs.get(ops[-1]) if ops else None
            if tv is not None and tv[0] == "P":
                m = re.match(r"^(.*)/([0-9A-F]+)$", tv[1])
                if m and tv[2] == 0: F.fnptr.add((m.group(1), int(m.group(2), 16)))
        for r in CALLER_SAVED: regs.pop(r, None)
        regs["$v0"] = ("P", site, 0)

    # --- driver
    def blocks(self):
        n = len(self.insns)
        leaders = {0}
        for name, idx in self.labels.items():
            if idx < n: leaders.add(idx)
        for i, (_, op, ops) in enumerate(self.insns):
            if is_branch(op):
                if i + 2 <= n: leaders.add(min(i + 2, n))
        leaders = sorted(l for l in leaders if l < n)
        bounds = {}
        for k, s in enumerate(leaders):
            bounds[s] = leaders[k + 1] if k + 1 < len(leaders) else n
        return bounds

    def run_block(self, s, e, regs, slots):
        """Execute [s, e); return list of (successor index | 'ret' | 'jtbl', regs, slots)."""
        regs, slots = dict(regs), dict(slots)
        i = s
        while i < e:
            vram, op, ops = self.insns[i]
            if is_branch(op):
                if op in self.SIGNED_OPS: self.sign_use(op, ops, regs)
                before = (dict(regs), dict(slots))
                if i + 1 < len(self.insns): self.step(i + 1, regs, slots)
                after = (regs, slots)
                out = []
                if op == "jr":
                    if ops and ops[0] == "$ra":
                        if self.facts is not None:
                            v = regs.get("$v0")
                            if v is not None and v[0] == "P" and v[2] == 0:
                                self.facts.edges.add(("retv", v[1], "r:%s:%s" % (self.seg, self.func)))
                        return [("ret",) + after]
                    return [("jtbl",) + after]
                tgt = self.labels.get(branch_target(op, ops))
                if tgt is not None: out.append((tgt,) + after)
                if op not in ("b", "j"):
                    fall = before if op in LIKELY else after
                    out.append((i + 2,) + (dict(fall[0]), dict(fall[1])))
                elif tgt is None:
                    out.append(("jtbl",) + after)
                return out
            if op in ("jal", "jalr"):
                if i + 1 < e: self.step(i + 1, regs, slots)
                self.step(i, regs, slots)
                i += 2; continue
            self.step(i, regs, slots)
            i += 1
        return [(e,) + (regs, slots)]

    @staticmethod
    def meet(a, b, block):
        if a is None: return b
        (ra, sa), (rb, sb) = a, b
        regs = {}
        for r in set(ra) | set(rb):
            x, y = ra.get(r), rb.get(r)
            if x == y: regs[r] = x
            elif x is not None and y is not None: regs[r] = join(x, y) or ("U", ("phi", block, r))
        slots = {k: v for k, v in sa.items() if sb.get(k) == v}
        for k in set(sa) | set(sb):
            if k not in slots and sa.get(k) is not None and sb.get(k) is not None:
                slots[k] = join(sa[k], sb[k]) or ("U", ("phis", block, k))
        return regs, slots

    def analyze(self):
        if not self.insns: return Facts()
        bounds = self.blocks()
        labelled = set(self.labels.values())
        entry = {a: ("P", "p:%s:%s:%d" % (self.seg, self.func, n), 0) for n, a in enumerate(ARGS)}
        entry["$sp"] = ("SP", 0)
        state = {0: (entry, {})}
        work = [0]; jtbl_state = None; rounds = 0
        while work and rounds < 20000:
            rounds += 1
            s = work.pop()
            if s not in bounds: continue
            for succ in self.run_block(s, bounds[s], *state[s]):
                tgt, r, sl = succ
                if tgt == "jtbl":
                    jtbl_state = self.meet(jtbl_state, (r, sl), -1); continue
                if tgt == "ret" or tgt not in bounds: continue
                new = self.meet(state.get(tgt), (r, sl), tgt)
                if new != state.get(tgt):
                    state[tgt] = new; work.append(tgt)
            if not work and jtbl_state is not None:   # jump-table targets: labelled blocks no direct edge reaches
                for b in sorted(bounds):
                    if b not in state and b in labelled:
                        state[b] = jtbl_state; work.append(b)
        # unlabelled blocks no edge reaches (after an unconditional branch's delay slot) are dead code: skipped, so
        # they cannot poison a join with an empty state
        self.facts = Facts()
        for s in sorted(bounds):
            if s in state: self.run_block(s, bounds[s], *state[s])
        return self.facts


def mine(seg, func, path=None):
    path = path or function_index().get((seg, func))
    if path is None: raise SystemExit("no asm for %s/%s" % (seg, func))
    insns, labels = parse(path)
    return Analyzer(seg, func, insns, labels).analyze()


def mine_job(job):
    seg, func, path = job
    try:
        return seg, func, mine(seg, func, path).json()
    except Exception as e:      # one bad file must not stop the whole mine
        return seg, func, {"error": "%s: %s" % (type(e).__name__, e)}


if __name__ == "__main__":
    os.chdir(HH)
    print(json.dumps(mine(sys.argv[1], sys.argv[2]).json(), indent=1))
