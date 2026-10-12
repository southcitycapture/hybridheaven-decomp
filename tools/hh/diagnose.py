"""Diagnosis lines for a non-matching function (`try_func.py --diagnose`, shown by ./check when DIAG=1).

The positional score ("score 2/24") compares instruction N with instruction N, so one inserted instruction makes
everything after it look wrong, and a register-allocation difference looks like a total failure. This prints:
  aligned   similarity after diffing the two instruction sequences (an insertion costs one instruction)
  verdict   registers renamed by first use (temporaries, saved, float registers):
              identical      -> only register allocation differs: structure is done (the permuter's job)
              same multiset  -> same instructions in a different order (scheduling)
              otherwise      -> the first few aligned differences, as instructions
  frame     stack frame size, saved registers and stack slots used, when they differ from the target
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

def diagnose(mine, orig, vram):
    a, b = _words(mine), _words(orig)
    out = []
    ma, mb = reloc_masks(a), reloc_masks(b)
    ca, cb = canonical(a, ma), canonical(b, mb)
    sm = difflib.SequenceMatcher(None, ca, cb, autojunk=False)
    out.append("aligned similarity %.0f%% (positional scores drop after any inserted instruction; this one doesn't)"
               % (100 * sm.ratio()))
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
    fa, fb = frame(a), frame(b)
    if fa != fb:
        f = lambda x: "0x%X, saves %s, other stack slots %s" % (x[0], ",".join(x[1]) or "-",
                                                             ",".join("0x%X" % s for s in x[2]) or "-")
        out.append("frame: target %s" % f(fb))
        out.append("       mine   %s" % f(fa))
    return out
