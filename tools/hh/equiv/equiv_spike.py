"""Differential-execution spike v4 (throwaway, generalised). Needs unicorn==2.1.3 (2.1.4 aborts on memory hooks
that fire in branch delay slots).
usage: equiv4.py FUNC SIZE SEG N cand.bin[:label] ... --protos file.c [file.h ...]
  FUNC/SIZE: original function (hex); SEG: overlay holding it (main is always mapped too)
  cand.bin: candidate linked at CAND (text then its own rodata), external symbols at original addresses."""
import sys, struct, random, hashlib, re, math
import numpy as np
from unicorn import Uc, UcError, UC_ARCH_MIPS, UC_MODE_MIPS32, UC_MODE_BIG_ENDIAN, UC_HOOK_CODE, \
    UC_HOOK_MEM_WRITE, UC_HOOK_MEM_READ
from unicorn.mips_const import *

EXPF = "/home/claude/work/hybrid-heaven-decomp/build/expanded.bin"
SEGS = {"main": (0x1060, 0x80000460, 0x8004DBD0 - 0x80000460),
        "file008": (0x4E6F40, 0x80107830, 0x89CF0), "file009": (0x570C30, 0x801BF1A0, 0x24E70)}
PURE = {0x8001EAD0, 0x8001EB64, 0x8001EF38, 0x8002FC20}   # sin, cos, atan2, sqrt: run the real code
CAND, STACK_TOP, RET, PAGE, RAM = 0x80800000, 0x807F0000, 0x80001000, 0x1000, 0x900000
TABLE, STUB, BOOT = 0x80880000, 0x80890000, 0x808A0000   # stub return table / stub code (scratch RAM)
FCSR = 0x01000800                                   # FS | EV | RN, as osCreateThread sets it
A = [UC_MIPS_REG_A0, UC_MIPS_REG_A1, UC_MIPS_REG_A2, UC_MIPS_REG_A3]
SAVED = [UC_MIPS_REG_S0 + i for i in range(8)] + [UC_MIPS_REG_FP, UC_MIPS_REG_GP]
GPR = [UC_MIPS_REG_ZERO + i for i in range(32)]
LOADSTORE = {0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x28, 0x29, 0x2A, 0x2B, 0x2E, 0x31, 0x35, 0x39, 0x3D}
IMGF = open(EXPF, "rb").read()
P = lambda va: va & 0x1FFFFFFF

def protos(paths):
    """callee address -> list of 'i'/'f'/'d' param kinds, from `func_XXXXXXXX(...)` declarations."""
    out = {}
    for p in paths:
        for m in re.finditer(r"\b(?:f32|f64|s32|u32|s16|u16|s8|u8|void|int|float|double)\s*\*?\s*func_([0-9A-F]{8})\s*\(([^)]*)\)", open(p).read()):
            ps = [x.strip() for x in m.group(2).split(",") if x.strip() and x.strip() != "void"]
            if any("..." in x for x in ps): continue
            SZ = {"s8": 1, "u8": 1, "s16": 2, "u16": 2, "s32": 4, "u32": 4, "f32": 4, "int": 4, "f64": 8}
            out[int(m.group(1), 16)] = ["f" if re.match(r"(const\s+)?(f32|float)\b(?!\s*\*)", x) else
                                        "d" if re.match(r"(f64|double)\b(?!\s*\*)", x) else
                                        "p%d" % SZ[x.split()[0]] if "*" in x and x.split()[0] in SZ else "i" for x in ps]
    return out

def o32_args(uc, kinds):
    """Read the arguments a callee receives under o32 (floats in $f12/$f14 only while all earlier args are FP)."""
    vals, slot, allfp, sp = [], 0, True, uc.reg_read(UC_MIPS_REG_SP)
    for k in kinds:
        if k == "d": slot = (slot + 1) & ~1
        k = "i" if k.startswith("p") else k
        if allfp and k in ("f", "d") and slot < 4 and len(vals) < 2:
            r = UC_MIPS_REG_F12 + 2 * len(vals)
            vals.append(("f", uc.reg_read(r)) if k == "f" else ("d", uc.reg_read(r), uc.reg_read(r + 1)))
        elif slot < 4:
            vals.append(uc.reg_read(A[slot]) if k != "d" else (uc.reg_read(A[slot]), uc.reg_read(A[slot + 1])))
        else:
            vals.append(struct.unpack(">I", uc.mem_read(P(sp + 4 * slot), 4))[0])
        if k not in ("f", "d"): allfp = False
        slot += 2 if k == "d" else 1
    return tuple(vals)

DICT = set()                                         # comparison constants (filled from the original)
VARIADIC = {0x8001DFFC: 3}                          # printf-like callees: index of the format argument
def printf_args(uc, fmt_index):
    """Fixed args + as many vararg slots as the format string's conversions need (double = 2 aligned slots)."""
    sp = uc.reg_read(UC_MIPS_REG_SP)
    word = lambda i: uc.reg_read(A[i]) if i < 4 else struct.unpack(">I", uc.mem_read(P(sp + 4 * i), 4))[0]
    fmtp = word(fmt_index)
    try: fmt = bytes(uc.mem_read(P(fmtp), 160)).split(b"\0")[0]
    except Exception: fmt = b""
    vals, i = [word(j) for j in range(fmt_index)] + [fmt.decode("latin1")], fmt_index + 1
    for conv in re.findall(rb"%[-+ #0]*\d*(?:\.\d+)?(l?[a-zA-Z%])", fmt):
        if conv == b"%": continue
        if conv in (b"f", b"e", b"g"): i = (i + 1) & ~1; vals.append((word(i), word(i + 1))); i += 2
        else: vals.append(word(i)); i += 1
    return tuple(vals)

def rand_word(r):
    if r.random() < 0.6: return struct.unpack(">I", struct.pack(">f", r.uniform(-1e3, 1e3)))[0]
    return r.randrange(-64, 64) & 0xFFFFFFFF

_RAMCACHE = {}
def random_ram(seed):
    """8+ MB of typed filler: 60% normal floats in +-1000, 40% small ints; never valid pointers."""
    g = np.random.default_rng(seed)
    n = RAM // 4
    f = g.uniform(-1e3, 1e3, n).astype(">f4").view(">u4")
    i = (g.integers(-64, 64, n).astype(np.int64) & 0xFFFFFFFF).astype(">u4")
    w = np.where(g.random(n) < 0.6, f, i).astype(">u4")
    stack = np.frombuffer(random.Random(seed ^ 0x5157).randbytes(0x10000), np.uint8)
    out = w.view(np.uint8).copy()
    out[P(STACK_TOP) - 0x10000:P(STACK_TOP)] = stack
    return out

def jal_targets(code, base):
    return {((base + i + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2)
            for i in range(0, len(code) - 3, 4) for w in [struct.unpack(">I", code[i:i + 4])[0]] if w >> 26 == 3}

class H:
    def __init__(s, func, size, seg, kinds):
        s.func, s.size, s.seg, s.kinds = func, size, seg, kinds
        s.orig = IMGF[SEGS[seg][0] + func - SEGS[seg][1]:][:size]

    def run(s, code_addr, code, code_len, inp, poison):
        seed, ov = inp["seed"], inp["ov"]
        uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS32 | UC_MODE_BIG_ENDIAN)
        uc.mem_map(0, RAM)
        ready = set()
        ram = random_ram(seed)
        for name in ("main", s.seg):
            e, v, l = SEGS[name]; ram[P(v):P(v) + l] = np.frombuffer(IMGF[e:e + l], np.uint8)
        if code_addr >= CAND: ram[P(CAND):P(CAND) + len(s.blob)] = np.frombuffer(s.blob, np.uint8)
        for a, val in ov.items():
            n, val = val if isinstance(val, tuple) else (4, val)
            ram[P(a):P(a) + n] = np.frombuffer((val & ((1 << 8 * n) - 1)).to_bytes(n, "big"), np.uint8)
        uc.mem_write(0, ram.tobytes())
        sp0 = STACK_TOP - 0x100
        uc.mem_write(P(STACK_TOP) - 0x10000, random.Random(poison).randbytes(0x10000))
        dirty, reads, calls, lastpc, pure = {}, [], [], [None], [None]
        private = lambda a: P(sp0) - 0x8000 <= a < P(sp0) + 16 or P(TABLE) <= a < P(TABLE) + 0x10000
        def onwrite(uc, acc, addr, size, value, _):     # no unicorn API calls in memory hooks
            addr = P(addr) if 0x80000000 <= addr < 0xC0000000 else addr   # 2.0.1 reports virtual addresses
            if private(addr) or pure[0]: return
            for i in range(size): dirty[(addr + i) | 0x80000000] = (value >> (8 * (size - 1 - i))) & 0xFF
        def onread(uc, acc, addr, size, value, _):
            addr = P(addr) if 0x80000000 <= addr < 0xC0000000 else addr
            if not private(addr) and addr < RAM and not pure[0]:
                if size == 4 and addr & 3 == 0: reads.append(addr | 0x80000000)
                sized.append((addr | 0x80000000, size))
        uc.hook_add(UC_HOOK_MEM_WRITE, onwrite); uc.hook_add(UC_HOOK_MEM_READ, onread)
        end = code_addr + code_len
        stubs = jal_targets(code[:code_len], code_addr) if code_addr < CAND else \
            jal_targets(s.blob[code_addr - CAND:code_addr - CAND + code_len], code_addr)
        cov = set(); sized = []; wishes = set()
        body = s.blob[code_addr - CAND:] if code_addr >= CAND else code
        brs = {code_addr + i: ((w >> 21) & 31, (w >> 16) & 31) for i in range(0, code_len, 4)
               for w in [struct.unpack(">I", body[i:i + 4])[0]] if w >> 26 in (4, 5, 0x14, 0x15)}
        def own(uc, addr, size, _):
            lastpc[0] = addr; pure[0] = None; cov.add(addr)
            b = brs.get(addr)
            if b:      # condition coverage: compared values that are dictionary constants, and the outcome
                x, y = uc.reg_read(GPR[b[0]]), uc.reg_read(GPR[b[1]])
                cov.add(("cmp", addr - code_addr, x == y, x if x in DICT else None, y if y in DICT else None))
                for u, c in ((x, y), (y, x)):
                    if c in DICT and u != c: wishes.add((u, c))      # input-to-state: want u to become c
        def oncode(uc, addr, size, _):
            if pure[0] or addr == RET or BOOT <= addr < BOOT + 0x18: return
            if addr in PURE:
                pure[0] = addr
                calls.append(("pure", hex(addr), o32_args(uc, s.kinds.get(addr, ["i"] * 4))))
                return
            if STUB <= addr < STUB + 0x40 * 256:
                t = tramp.get(addr)
                if t is None: return                      # inside a trampoline
                dig = hashlib.sha1(repr(sorted(dirty.items())).encode()).hexdigest()[:12]
                args = printf_args(uc, VARIADIC[t]) if t in VARIADIC else o32_args(uc, s.kinds.get(t, ["i"] * 4))
                calls.append((hex(t), args, dig))
                # out-parameters: typed pointer args into the caller's frame get deterministic contents
                sp_now = uc.reg_read(UC_MIPS_REG_SP)
                for i, kd in enumerate(s.kinds.get(t, [])[:4]):
                    a = uc.reg_read(A[i])
                    if kd.startswith("p") and sp_now <= a < STACK_TOP:
                        n = int(kd[1:]); val = (seed * 1009 + len(calls) * 31 + i) & ((1 << (8 * n)) - 1)
                        uc.mem_write(P(a), val.to_bytes(n, "big"))
                return
            calls.append(("UNSTUBBED", hex(addr))); uc.emu_stop()
        uc.hook_add(UC_HOOK_CODE, own, begin=code_addr, end=end - 1)
        uc.hook_add(UC_HOOK_CODE, oncode, begin=0, end=code_addr - 1)
        uc.hook_add(UC_HOOK_CODE, oncode, begin=end, end=0xFFFFFFFF)
        for i, reg in enumerate(SAVED): uc.reg_write(reg, 0x5A5A0000 + i)
        for i in range(20, 32, 2): uc.reg_write(UC_MIPS_REG_F0 + i, 0x3F800000 + i)   # callee-saved FPRs
        for reg, v in zip(A, inp["args"]): uc.reg_write(reg, v)
        for i, v in enumerate(inp.get("fargs", [])): uc.reg_write(UC_MIPS_REG_F12 + 2 * i, v)
        uc.reg_write(UC_MIPS_REG_SP, sp0); uc.reg_write(UC_MIPS_REG_RA, RET)
        uc.reg_write(UC_MIPS_REG_CP0_STATUS, uc.reg_read(UC_MIPS_REG_CP0_STATUS) & ~4)
        # stubs are MIPS code (register writes from hooks crash unicorn 2.1.3): callee entry -> j STUB;
        # STUB pops (v0, f0) from a seeded table, clobbers caller-saved registers, returns
        tbl = b"".join(struct.pack(">II", (seed * 7919 + k) & 0xFFFF,
                       struct.unpack(">I", struct.pack(">f", ((seed * 31 + k) % 2000) / 7.0 - 100))[0]) for k in range(1, 4097))
        uc.mem_write(P(TABLE), struct.pack(">II", 0, 0) + tbl)
        for k, v in inp.get("rv", {}).items(): uc.mem_write(P(TABLE) + 8 * k, struct.pack(">I", v))
        hi, lo = TABLE >> 16, TABLE & 0xFFFF
        stubcode = [0x3C190000 | hi, 0x8F380000 | lo, 0x27180008, 0xAF380000 | lo, 0x0319C021,
                    0x8F020000 | lo, 0xC7000000 | lo + 4, 0x3C04DEAD, 0x3C05DEAD, 0x3C06DEAD, 0x3C07DEAD,
                    0x3C08DEAD, 0x3C09DEAD, 0x3C03DEAD, 0x03E00008, 0x00000000]
        tramp = {}
        for i, t in enumerate(sorted(stubs - PURE)):     # per-callee trampoline = copy of the stub code
            tramp[STUB + 0x40 * i] = t
            uc.mem_write(P(STUB + 0x40 * i), b"".join(struct.pack(">I", w) for w in stubcode))
        back = {v: k for k, v in tramp.items()}
        img = bytearray(uc.mem_read(P(code_addr), code_len))
        for off in range(0, code_len, 4):                 # redirect every jal in the function under test
            w = struct.unpack(">I", img[off:off + 4])[0]
            if w >> 26 == 3:
                t = ((code_addr + off + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2)
                if t in back: img[off:off + 4] = struct.pack(">I", 0x0C000000 | ((back[t] >> 2) & 0x3FFFFFF))
        uc.mem_write(P(code_addr), bytes(img))
        # FCSR via a ctc1 prologue (unicorn 2.0.1 has no FCSR register id); t0 is caller-saved scratch
        uc.mem_write(P(BOOT), struct.pack(">IIIIII", 0x3C080000 | FCSR >> 16, 0x35080000 | FCSR & 0xFFFF,
                                          0x44C8F800, 0x08000000 | ((code_addr >> 2) & 0x3FFFFFF), 0, 0))
        err, base = None, None
        try:
            uc.emu_start(BOOT, RET, count=20_000_000)
        except UcError as e:
            err = str(e).split(" (")[0]
            w = struct.unpack(">I", uc.mem_read(P(lastpc[0]), 4))[0] if lastpc[0] else 0
            if (w >> 26) in LOADSTORE: base = (uc.reg_read(GPR[(w >> 21) & 31]), (w & 0xFFFF) - ((w & 0x8000) << 1))
            elif (w >> 26) == 0x11:     # FP trap: report NaN/denormal single operands as 'needs a float here'
                bad = [v for r in ((w >> 11) & 31, (w >> 16) & 31) for v in [uc.reg_read(UC_MIPS_REG_F0 + r) & 0xFFFFFFFF]
                       if (v >> 23) & 0xFF in (0, 0xFF) and v & 0x7FFFFFFF]
                base = ("float", bad[0] if bad else None)   # 2.0.1: FPR reads return 0 -> use the loads
        if calls and calls[-1][0] == "UNSTUBBED": err = "unstubbed jump " + calls[-1][1]
        lastw = (lastpc[0], struct.unpack(">I", uc.mem_read(P(lastpc[0]), 4))[0]) if lastpc[0] else None
        ret = (uc.reg_read(UC_MIPS_REG_V0), uc.reg_read(UC_MIPS_REG_F0))
        allreads = list(reads)
        if err:   # provenance: values at the read addresses (read after the fact)
            reads = [(a, struct.unpack(">I", uc.mem_read(P(a), 4))[0]) for a in reads[-4000:]]
        rd = lambda a, n: int.from_bytes(bytes(uc.mem_read(P(a), n)), "big") if P(a) + n <= RAM else None
        sizedvals = {(a, n, rd(a, n)) for a, n in set(sized)}
        return dict(wishes=wishes, sizedvals=sizedvals, sized=sized, allreads=allreads, cov=cov, lastw=lastw, err=err, base=base, reads=reads, calls=calls, dirty=dirty, ret=ret,
                    mem=hashlib.sha1(repr(sorted(dirty.items())).encode()).hexdigest()[:12],
                    saved=[uc.reg_read(r) for r in SAVED] == [0x5A5A0000 + i for i in range(len(SAVED))],
                    # (callee-saved FPRs: unicorn 2.0.1 cannot read FPRs; check via an epilogue store instead)
                    sp=uc.reg_read(UC_MIPS_REG_SP) == sp0)

    def make_input(s, seed, tries=200):
        r = random.Random(seed)
        inp = dict(seed=seed, ov={}, args=[rand_word(r) for _ in range(4)], ptr={}, rv={})
        nxt = [0x80500000 + 0x1000 * r.randrange(256)]
        for _ in range(tries):
            o = s.run(s.func, s.orig, s.size, inp, 1)
            if o["err"] is None: return inp, o
            if o["base"] is None: return None, o
            v, off = o["base"]
            if v == "float":                       # an untyped word was used as a float: give it a normal float
                weird = lambda x: (x >> 23) & 0xFF in (0, 0xFF) and x & 0x7FFFFFFF
                src = [a for a, x in reversed(o["reads"]) if (x == off if off is not None else weird(x))
                       and a not in inp["ov"]]
                if not src: return None, o
                inp["ov"][src[0]] = struct.unpack(">I", struct.pack(">f", r.uniform(-1e3, 1e3)))[0]; continue
            src = [a for a, x in reversed(o["reads"]) if x == v]
            p = nxt[0]; nxt[0] += 0x1000
            if src: inp["ov"][src[0]] = p; inp["ptr"][src[0]] = off
            elif v in inp["args"]: i = inp["args"].index(v); inp["args"][i] = p; inp["ptr"][i] = off
            else:   # returned by a stubbed callee? (stub k returns table[k])
                ks = [k for k in range(1, len(o["calls"]) + 1) if (seed * 7919 + k) & 0xFFFF == v
                      and k not in inp.setdefault("rv", {})]
                if not ks: return None, o
                inp["rv"][ks[-1]] = p; inp["ptr"][("rv", ks[-1])] = off
        return None, o

def outcome(o, with_ret):
    return (o["err"], o["calls"], o["mem"], o["saved"], o["sp"], o["ret"] if with_ret else None)

if __name__ == "__main__":
    argv = sys.argv[1:]
    pi = argv.index("--protos"); pfiles = argv[pi + 1:]; argv = argv[:pi]
    func, size, seg, N = int(argv[0], 16), int(argv[1], 16), argv[2], int(argv[3])
    kinds = protos(pfiles)
    h = H(func, size, seg, kinds)
    with_ret = "--void" not in argv
    GUIDED = next((a.split("=")[1] for a in argv if a.startswith("--guided=")), "0")
    inputs, skipped, ub = [], 0, 0
    for seed in range(N):
        inp, o = h.make_input(seed)
        if inp is None: skipped += 1; continue
        if outcome(o, with_ret) != outcome(h.run(func, h.orig, size, inp, 2), with_ret): ub += 1; continue
        inputs.append((inp, o))
    # coverage-guided phase: put the function's own immediates (cmplog-style dictionary) into words it reads
    imms = E_DICT = sorted({struct.unpack(">h", h.orig[i + 2:i + 4])[0] & 0xFFFFFFFF for i in range(0, len(h.orig), 4)
                   if struct.unpack(">I", h.orig[i:i + 4])[0] >> 26 in (0x08, 0x09, 0x0A, 0x0B, 0x0D)} | {0, 1})
    DICT.update(imms)
    for i_, (inp_, o_) in enumerate(inputs): inputs[i_] = (inp_, h.run(func, h.orig, size, inp_, 1))
    cov = set().union(*[o["cov"] for _, o in inputs]) if inputs else set()
    base_cov = len(cov); r = random.Random(12345); added = 0
    for it in range(int(GUIDED)):
        if not inputs: break
        inp, o = r.choice(inputs)
        tgts = [("m", a, n) for a, n in set(o["sized"]) if a not in inp["ptr"]] + \
               [("rv", k, 4) for k in range(1, len(o["calls"]) + 1) if ("rv", k) not in inp["ptr"]]
        if not tgts: continue
        v = dict(inp, ov=dict(inp["ov"]), rv=dict(inp.get("rv", {})))
        hits = []
        if o["wishes"] and r.random() < 0.7:          # Redqueen-lite: a read whose value is the compared operand
            u, c = r.choice(sorted(o["wishes"]))
            sx = lambda val, n: val - (1 << 8 * n) if val is not None and val >> (8 * n - 1) else val
            hits = [(a, n) for a, n, val in o["sizedvals"] if a not in inp["ptr"] and val is not None and
                    (val == u or (sx(val, n) & 0xFFFFFFFF) == u)]
        if hits:
            a, n = r.choice(hits); v["ov"][a] = (n, c)
        else:
            kind, a, n = r.choice(tgts)
            if kind == "m": v["ov"][a] = (n, r.choice(imms))
            else: v["rv"][a] = r.choice(imms)
        ov_ = h.run(func, h.orig, size, v, 1)
        if ov_["err"] is None and not ov_["cov"] <= cov and \
           outcome(ov_, with_ret) == outcome(h.run(func, h.orig, size, v, 2), with_ret):
            cov |= ov_["cov"]; inputs.append((v, ov_)); added += 1
    ninsn = lambda c: len([x for x in c if isinstance(x, int)])
    base_cov, cov_n = ninsn(set().union(*[o["cov"] for _, o in inputs[:len(inputs) - added]])), ninsn(cov)
    print("coverage of original: %d -> %d of %d instructions (%d guided inputs added from %d tries, dictionary %d consts)"
          % (base_cov, cov_n, size // 4, added, int(GUIDED), len(imms)))
    print("%d inputs (abandoned %d, original depends on uninitialised stack: %d); pointers materialised: %s; "
          "calls per run: %s" % (len(inputs), skipped, ub, sorted(set(len(i["ptr"]) for i, _ in inputs))[:6],
                                sorted(set(len(o["calls"]) for _, o in inputs))[:8]))
    for c in [a for a in argv[4:] if not a.startswith("--")]:
        path, off, clen = (c.split(":") + ["0", ""])[:3]
        h.blob = open(path, "rb").read(); off = int(off, 16); clen = int(clen, 16) if clen else len(h.blob) - off
        bad = [(i, o, cc) for i, o in inputs for cc in [h.run(CAND + off, h.blob, clen, i, 3)] if outcome(o, with_ret) != outcome(cc, with_ret)]
        print("%-28s %s (%d/%d inputs differ)" % (path, "EQUIVALENT on sample" if not bad else "NOT EQUIVALENT", len(bad), len(inputs)))
        if bad:
            i, o, cc = bad[0]
            k = next((j for j, (x, y) in enumerate(zip(o["calls"], cc["calls"])) if x != y), None)
            print("   seed %d: err %s/%s; first differing call #%s: %s vs %s; ret %s/%s" % (
                i["seed"], o["err"], cc["err"], k, o["calls"][k] if k is not None else "-",
                cc["calls"][k] if k is not None and k < len(cc["calls"]) else "-", o["ret"], cc["ret"]))
