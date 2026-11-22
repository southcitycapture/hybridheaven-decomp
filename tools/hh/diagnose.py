"""Diagnosis lines for a non-matching function (`try_func.py --diagnose`, shown by ./check when DIAG=1).

The positional score ("score 2/24") compares instruction N with instruction N, so one inserted instruction makes
everything after it look wrong, and a register-allocation difference looks like a total failure. This prints:
  aligned   similarity after diffing the two instruction sequences (an insertion costs one instruction)
  verdict   registers renamed by first use (temporaries, saved, float registers):
              identical      -> only register allocation differs: structure is done (the permuter's job)
              same multiset  -> same instructions in a different order (scheduling)
              otherwise      -> the first few aligned differences, as instructions
  frame     stack frame diff (frame_diff): frame size, saved-register set, and the $sp slots each side uses (offset,
            width, load/store counts, first use, address taken), paired by offset then by kind in first-use order;
            prints locals that look missing, extra or moved (e.g. a target buffer yours never touches)
"""
import collections, difflib

FIXED = {0, 1, 4, 5, 6, 7} | set(range(26, 32))     # zero, at, a0-a3, k0-k1, gp, sp, fp, ra keep their roles
                                                    # (v0/v1 are renamed too: IDO also uses them as temporaries)

def _fields(w):
    """(gprs, fprs) register fields of one instruction: lists of (shift, value)."""
    op = w >> 26; g, f = [], []
    if op == 0:                                             # SPECIAL: rs rt rd
        g = [(21, (w >> 21) & 31), (16, (w >> 16) & 31), (11, (w >> 11) & 31)]
    elif op in (2, 3):                                      # j / jal
        pass
    elif op == 0x11:                                        # COP1
        fmt = (w >> 21) & 31
        if fmt in (0, 4, 2, 6):                             # mfc1/mtc1/cfc1/ctc1: rt is a GPR, fs an FPR
            g = [(16, (w >> 16) & 31)]; f = [(11, (w >> 11) & 31)]
        elif fmt == 8:                                      # bc1t/bc1f
            pass
        else:                                               # arithmetic: ft fs fd
            f = [(16, (w >> 16) & 31), (11, (w >> 11) & 31), (6, (w >> 6) & 31)]
    elif op in (0x31, 0x35, 0x39, 0x3D):                    # lwc1/ldc1/swc1/sdc1: base GPR, ft FPR
        g = [(21, (w >> 21) & 31)]; f = [(16, (w >> 16) & 31)]
    else:                                                   # I-type: rs rt
        g = [(21, (w >> 21) & 31), (16, (w >> 16) & 31)]
    return g, f

def _uses_defs(w):
    """(source registers, destination registers) of one instruction; FPRs are numbered 32+n, hi/lo 64/65."""
    op, rs, rt, rd = w >> 26, (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31
    if op == 0:
        fn = w & 0x3F
        if fn in (0x08, 0x09): return [rs], ([rd] if fn == 9 else [])          # jr / jalr
        if fn in (0x18, 0x19, 0x1A, 0x1B): return [rs, rt], [64, 65]           # mult/div
        if fn in (0x10, 0x12): return [64 if fn == 0x10 else 65], [rd]         # mfhi / mflo
        if fn in (0x00, 0x02, 0x03): return [rt], [rd]                         # shifts by constant
        return [rs, rt], [rd]
    if op == 1: return [rs], []                                                # bltz/bgez...
    if op in (2, 3): return [], ([31] if op == 3 else [])
    if op in (4, 5, 6, 7, 0x14, 0x15, 0x16, 0x17): return [rs, rt], []         # branches
    if op == 0xF: return [], [rt]                                              # lui
    if op in (0x28, 0x29, 0x2B): return [rs, rt], []                           # stores
    if op in (0x31, 0x35): return [rs], [32 + rt]                              # lwc1/ldc1
    if op in (0x39, 0x3D): return [rs, 32 + rt], []                            # swc1/sdc1
    if op == 0x11:
        fmt, ft, fs, fd = rs, rt, rd, (w >> 6) & 31
        if fmt == 0: return [32 + fs], [rt]                                    # mfc1
        if fmt == 4: return [rt], [32 + fs]                                    # mtc1
        if fmt in (2, 6, 8): return ([rt] if fmt == 6 else []), ([rt] if fmt == 2 else [])
        if (w & 0x3F) >= 0x30: return [32 + fs, 32 + ft], []                   # c.cond
        return [32 + fs, 32 + ft], [32 + fd]
    return [rs], [rt]                                                          # ALU immediates, loads

def canonical(words, masks):
    """Each instruction as (opcode/immediate bits with registers and relocated fields cleared, the values it reads).
    Values are numbered by definition order, so register allocation and register reuse don't matter; a value that is
    read before any write (arguments, $sp, $zero, $ra) is named by its register."""
    cur, nxt, out = {}, 0, []
    REGBITS = {0: 0x03FFF800, 0x11: 0x001FFFC0}
    for w, mask in zip(words, masks):
        op = w >> 26
        uses, defs = _uses_defs(w)
        clear = REGBITS.get(op, 0x03FF0000 if op not in (2, 3) else 0)
        key = (w & mask) & ~clear
        src = tuple(cur.get(r, "r%d" % r) for r in uses)
        for r in defs:
            if r != 0: cur[r] = nxt; nxt += 1
        out.append((key, src, len(defs)))
    return out

LS = {0x20, 0x21, 0x23, 0x24, 0x25, 0x28, 0x29, 0x2B, 0x31, 0x35, 0x39, 0x3D, 9}   # loads, stores, addiu

def reloc_masks(words):
    """Masks for fields the linker fills, read from the code itself (same rule for mine and the target):
    jump targets, lui immediates, and the low half of loads/stores/addiu whose base came from a lui."""
    hi, out = set(), []
    for w in words:
        op, rs, rt = w >> 26, (w >> 21) & 31, (w >> 16) & 31
        if op in (2, 3): out.append(0xFC000000); continue
        if op == 0xF: out.append(0xFFFF0000); hi.add(rt); continue
        out.append(0xFFFF0000 if op in LS and rs in hi else 0xFFFFFFFF)
        if op == 0:                                            # rd written; an addu of an address stays an address
            rd = (w >> 11) & 31
            if (w & 0x3F) == 0x21 and (rs in hi or rt in hi): hi.add(rd)
            else: hi.discard(rd)
        elif op not in (0x28, 0x29, 0x2B, 0x39, 0x3D) and op >= 8: hi.discard(rt)   # rt written (not stores)
    return out

BRANCH = {1, 4, 5, 6, 7, 0x14, 0x15, 0x16, 0x17}         # REGIMM, beq/bne/blez/bgtz and their -likely forms
KEEP = {0: 0, 29: 29, 31: 31}                             # $zero, $sp, $ra keep their identity; every other register is "r"

def shape_tokens(words, masks=None):
    """Each instruction as opcode + operand shape, blind to register allocation and to addresses: every register
    field except $zero/$sp/$ra becomes one generic register, linker-filled fields (jump targets, %hi/%lo) and branch
    offsets are cleared. Non-relocated immediates (struct offsets, constants, stack offsets) stay."""
    masks = masks or reloc_masks(words)
    out = []
    for w, m in zip(words, masks):
        op = w >> 26
        w &= m
        if op in BRANCH or (op == 0x11 and (w >> 21) & 31 == 8): w &= ~0xFFFF
        g, f = _fields(w)
        for sh, v in g: w = (w & ~(31 << sh)) | (KEEP.get(v, 1) << sh)
        for sh, v in f: w = (w & ~(31 << sh)) | (1 << sh)
        out.append(w)
    return out

def shape_similarity(mine, orig):
    """Aligned similarity in [0, 1] of two code byte strings over shape_tokens (difflib; one inserted instruction
    costs one instruction, a renamed register costs nothing)."""
    a, b = _words(mine), _words(orig)
    if not a and not b: return 1.0
    return difflib.SequenceMatcher(None, shape_tokens(a), shape_tokens(b), autojunk=False).ratio()

def _words(b): return [int.from_bytes(b[i:i + 4], "big") for i in range(0, len(b) - 3, 4)]

def _dis(w, vram):
    try:
        import rabbitizer
        return rabbitizer.Instruction(w, vram).disassemble().replace("        ", " ")
    except Exception:
        return "%08X" % w

def frame(words):
    """(frame size, saved registers, other $sp slots) from the instructions."""
    size, saved, slots = 0, [], set()
    names = {16: "s0", 17: "s1", 18: "s2", 19: "s3", 20: "s4", 21: "s5", 22: "s6", 23: "s7", 30: "fp", 31: "ra"}
    for i, w in enumerate(words):
        op, rs, rt, imm = w >> 26, (w >> 21) & 31, (w >> 16) & 31, w & 0xFFFF
        simm = imm - 0x10000 if imm & 0x8000 else imm
        if op == 9 and rs == 29 and rt == 29 and simm < 0 and not size: size = -simm
        elif op == 0x2B and rs == 29 and rt in names and i < 12: saved.append((simm, names[rt]))
        elif rs == 29 and op in (0x20, 0x21, 0x23, 0x24, 0x25, 0x28, 0x29, 0x2B, 0x31, 0x35, 0x39, 0x3D):
            slots.add(simm)
    sv = {o for o, _ in saved}
    return size, [n for _, n in sorted(saved)], sorted(slots - sv)

WIDTH = {0x20: 1, 0x24: 1, 0x28: 1, 0x21: 2, 0x25: 2, 0x29: 2, 0x23: 4, 0x2B: 4, 0x31: 4, 0x39: 4,
         0x22: 4, 0x26: 4, 0x2A: 4, 0x2E: 4, 0x37: 8, 0x3F: 8, 0x35: 8, 0x3D: 8}       # loads/stores: bytes
STORES = {0x28, 0x29, 0x2B, 0x39, 0x3D, 0x2A, 0x2E, 0x3F}
CALLEE = {16: "s0", 17: "s1", 18: "s2", 19: "s3", 20: "s4", 21: "s5", 22: "s6", 23: "s7", 30: "fp", 31: "ra"}

def frame_map(words):
    """The stack frame as the code uses it: dict(size, saved={reg name: offset}, slots={offset: slot}) where a slot is
    dict(width=set of access widths, loads, stores, first=instruction index of first use, addr=index where its address
    is taken (addiu rX, $sp, K) or None, via=accesses through such a pointer). Offsets are from $sp after the prologue.
    Saves are stores of a callee-saved register (s0-s7, fp, ra, f20-f30) before anything writes it; the matching
    restores are not counted as slot uses."""
    size, saved, slots, written, base = 0, {}, {}, set(), {}
    def slot(off, i):
        return slots.setdefault(off, dict(width=set(), loads=0, stores=0, first=i, addr=None, via=0))
    for i, w in enumerate(words):
        op, rs, rt, imm = w >> 26, (w >> 21) & 31, (w >> 16) & 31, w & 0xFFFF
        simm = imm - 0x10000 if imm & 0x8000 else imm
        uses, defs = _uses_defs(w)
        if op == 9 and rs == 29 and rt == 29:
            if simm < 0 and not size: size = -simm
            continue
        if op == 9 and rs == 29 and rt != 29:                     # addiu rX, $sp, K: address of a local
            s_ = slot(simm, i)
            if s_["addr"] is None: s_["addr"] = i
            base[rt] = simm
            continue
        if op in WIDTH and (rs == 29 or rs in base):
            off = simm + (base[rs] if rs != 29 else 0)
            if rs == 29 and op in STORES:
                reg = CALLEE.get(rt) if op in (0x2B, 0x3F) else ("f%d" % rt if op in (0x3D, 0x39) and 20 <= rt <= 31 else None)
                regkey = rt if op in (0x2B, 0x3F) else 32 + rt
                if reg and regkey not in written and reg not in saved:
                    saved[reg] = off
                    for r in defs: written.add(r)
                    continue
            if rs == 29 and op not in STORES:
                reg = CALLEE.get(rt) if op in (0x23, 0x37) else ("f%d" % rt if op in (0x35, 0x31) and 20 <= rt <= 31 else None)
                if reg and saved.get(reg) == off:                 # restore
                    continue
            s_ = slot(off, i); s_["width"].add(WIDTH[op])
            s_["stores" if op in STORES else "loads"] += 1
            if rs != 29: s_["via"] += 1
        for r in defs:
            written.add(r); base.pop(r, None)
    return dict(size=size, saved=saved, slots=slots)

def _region(off, size, saved_offs):
    if off >= size: return "incoming-arg home"
    if off < 0x10: return "callee arg home"
    if saved_offs and off >= min(saved_offs): return "save area"
    return "local"

def _sig(sl):
    return (tuple(sorted(sl["width"])), sl["addr"] is not None)

def _desc(off, sl, frame_size, next_off):
    w = "/".join(str(x) for x in sorted(sl["width"])) or "-"
    txt = "sp+0x%X w%s L%d S%d first +0x%03X" % (off, w, sl["loads"], sl["stores"], 4 * sl["first"])
    if sl["addr"] is not None:
        txt += ", address taken (extent up to 0x%X bytes)" % (next_off - off)
    return txt

def frame_diff(mine_words, orig_words):
    """Lines comparing the two stack frames: size, saved registers, and the $sp slots each side uses, paired by offset
    first, then (same width / address-taken kind) in first-use order; the rest are missing or extra."""
    ft, fm = frame_map(orig_words), frame_map(mine_words)
    out = []
    if ft["size"] != fm["size"]:
        out.append("frame size: target 0x%X, mine 0x%X (target %d bytes %s)" % (ft["size"], fm["size"],
                   abs(ft["size"] - fm["size"]), "larger" if ft["size"] > fm["size"] else "smaller"))
    st, sm = set(ft["saved"]), set(fm["saved"])
    order = lambda xs: ",".join(sorted(xs, key=lambda r: (r[0] == "f", r != "ra", r)))
    if st != sm:
        line = "saved registers: target %s, mine %s" % (order(st) or "-", order(sm) or "-")
        if st - sm: line += "; mine lacks %s" % order(st - sm)
        if sm - st: line += "; mine adds %s" % order(sm - st)
        if len(st) != len(sm):
            line += " (%s values live across calls in the target)" % ("more" if len(st) > len(sm) else "fewer")
        out.append(line)
    def extents(f):
        """Upper bound of each slot's object: the next slot (an address-taken slot: the next address-taken slot, since
        a buffer's own members show up as slots inside it), the save area or the frame end."""
        ends = set(f["saved"].values()) | {max(f["size"], 0)}
        offs = sorted(set(f["slots"]) | ends); taken = sorted(set(o for o, s_ in f["slots"].items() if s_["addr"] is not None) | ends)
        out = {}
        for o, s_ in f["slots"].items():
            pool = taken if s_["addr"] is not None else offs
            out[o] = next((x for x in pool if x > o), o + max(s_["width"] or {4}))
        return out
    et, em = extents(ft), extents(fm)
    T, M = dict(ft["slots"]), dict(fm["slots"])
    same = [o for o in T if o in M and _sig(T[o]) == _sig(M[o])]
    for o in same: T.pop(o); M.pop(o)
    tl = sorted(T, key=lambda o: T[o]["first"]); ml = sorted(M, key=lambda o: M[o]["first"])
    moved = []
    sm_ = difflib.SequenceMatcher(None, [_sig(T[o]) for o in tl], [_sig(M[o]) for o in ml], autojunk=False)
    pt, pm = set(), set()
    for blk in sm_.get_matching_blocks():
        for k in range(blk.size):
            a, b = tl[blk.a + k], ml[blk.b + k]; moved.append((a, b)); pt.add(a); pm.add(b)
    # a buffer the target uses and mine never touches is the most useful single line
    for o in sorted(set(T) - pt):
        sl = T[o]
        reg = _region(o, ft["size"], list(ft["saved"].values()))
        if sl["addr"] is not None:
            out.append("target has a 0x%X-byte buffer at sp+0x%X (%s, address taken at +0x%03X) never touched by yours"
                       % (et[o] - o, o, reg, 4 * sl["addr"]))
        else:
            out.append("missing in mine: %s (%s)" % (_desc(o, sl, ft["size"], et[o]), reg))
    for o in sorted(set(M) - pm):
        out.append("extra in mine:   %s (%s)" % (_desc(o, M[o], fm["size"], em[o]), _region(o, fm["size"], list(fm["saved"].values()))))
    shift = collections.Counter(b - a for a, b in moved)
    for a, b in sorted(moved):
        out.append("moved: target %s = mine sp+0x%X" % (_desc(a, ft["slots"][a], ft["size"], et[a]), b))
    if moved and not (set(T) - pt) and not (set(M) - pm):
        if len(shift) == 1:
            out.append("same locals, all shifted by %+d: frame/save-area size differs, not the locals" % next(iter(shift)))
        else:
            out.append("same locals at different offsets: declaration order (or a merged/split temporary) differs")
    if out:
        out.insert(0, "frame slots (target vs mine; w=width, L/S=loads/stores, first=first use):")
        if same:
            out.append("  %d slot(s) identical: %s" % (len(same), ",".join("0x%X" % o for o in sorted(same))))
    return out

def diagnose(mine, orig, vram):
    a, b = _words(mine), _words(orig)
    out = []
    ma, mb = reloc_masks(a), reloc_masks(b)
    ca, cb = canonical(a, ma), canonical(b, mb)
    sm = difflib.SequenceMatcher(None, ca, cb, autojunk=False)
    out.append("aligned similarity %.0f%% (positional scores drop after any inserted instruction; this one doesn't); "
               "shape %.1f%% (registers, addresses, branch offsets blind: the figure score_attempts.py tiers by)"
               % (100 * sm.ratio(), 100 * shape_similarity(mine, orig)))
    if ca == cb:
        out.append("VERDICT: structure complete - only register allocation differs. Stop changing logic; "
                   "report this attempt as your best (the permuter handles register allocation).")
    elif collections.Counter(k for k, _, _ in ca) == collections.Counter(k for k, _, _ in cb):
        out.append("VERDICT: same instructions in a different order (scheduling): reorder statements or "
                   "temporaries, don't change logic.")
    else:
        shown = 0
        for tag, i1, i2, j1, j2 in sm.get_opcodes():
            if tag == "equal": continue
            if shown == 0: out.append("aligned differences (first few):")
            if tag == "insert":
                out.append("  +0x%03X target has %d more: %s" % (4 * j1, j2 - j1,
                           "; ".join(_dis(b[j], vram + 4 * j) for j in range(j1, min(j2, j1 + 3)))))
            elif tag == "delete":
                out.append("  +0x%03X mine has %d extra: %s" % (4 * i1, i2 - i1,
                           "; ".join(_dis(a[i], vram + 4 * i) for i in range(i1, min(i2, i1 + 3)))))
            else:
                for k in range(min(i2 - i1, j2 - j1, 2)):
                    out.append("  +0x%03X mine %-34s target %s" % (4 * (i1 + k), _dis(a[i1 + k], vram + 4 * (i1 + k)),
                                                                _dis(b[j1 + k], vram + 4 * (j1 + k))))
            shown += 1
            if shown >= 6: break
    out.extend(frame_diff(a, b))
    return out
