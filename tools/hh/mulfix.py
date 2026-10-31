"""Reproduce the original toolchain's VR4300 multiply-erratum padding in an IDO object (in place).

  mulfix.py FILE.o [FILE.o ...]

The VR4300 can compute a wrong result in a float multiply that directly follows another one (if the first had a 0,
infinity or sNaN operand). Hybrid Heaven's build put a nop after a mul.s/mul.d whenever the next instruction could be
another multiply: in IDO's own assembly (cc -S) that is the next instruction being a mul.s/mul.d, or a LABEL (a block
boundary: what runs next is not known). The padding was applied to that assembly, before as1's delay-slot filling;
IDO 5.3/7.1 have no option for it. This is the post-assembly equivalent. A nop goes after a mul.s/mul.d that is
  1. directly followed by another mul.s/mul.d (ROM: 669 padded pairs, none unpadded), or
  2. directly followed by a PC-relative branch destination (ROM: 21 padded, none unpadded), or
  3. directly followed by the final `jr $ra` (with a nop delay slot) of a function that has another `jr $ra`: IDO emits
     its return label `$NN:` before the final `j $31` exactly when the C has an early `return`, and a leaf function's
     early returns become inline `jr $ra`s (ROM: func_8002EA88 padded; the 5 unpadded mul;jr $ra are all in
     functions with a single jr $ra).
div.s/div.d are never padded (ROM: 16 directly before a branch destination). Labels that as1 later stopped targeting
(it re-aims a branch past the instruction it copies into the delay slot; ROM: func_801F152C) leave no trace in the
object and are not reproduced. Evidence: tools/hh/mulfix_audit.py and SOL_REPORT.md (Task 19).
It then fixes everything that refers to a moved address:
  - PC-relative branches inside .text that cross an insertion (a destination at an insertion point stays on its
    instruction, so the nop is on the fall-through path only, as in the ROM)
  - .rel.text offsets, and in-place addends of relocations that point into .text (R_MIPS_26 jumps, HI16/LO16 pairs)
  - R_MIPS_32 words in other sections that point into .text (jump tables, function pointer tables)
  - symbol values and sizes in .text
and re-lays out the file (sections after .text move). .mdebug is left as is (the ROM build doesn't read it).
Objects without an unpadded site are not touched, so asm-only objects are unchanged. Running it twice is harmless.
"""
import struct, sys
from pathlib import Path

def _u32(b, o): return struct.unpack_from(">I", b, o)[0]

def is_mul(w): return (w >> 26) == 0x11 and ((w >> 21) & 31) in (16, 17) and (w & 0x3F) == 2

def branch_field(w):
    """Signed 16-bit offset (in words) for PC-relative branches, else None."""
    op = w >> 26
    if op in (1, 4, 5, 6, 7, 0x14, 0x15, 0x16, 0x17) or (op == 0x11 and ((w >> 21) & 31) == 8):
        o = w & 0xFFFF; return o - 0x10000 if o & 0x8000 else o
    return None

JR_RA = 0x03E00008

def _transfer(w):
    """A branch or jump (an instruction with a delay slot)."""
    return branch_field(w) is not None or (w >> 26) in (2, 3) or ((w >> 26) == 0 and (w & 0x3F) in (8, 9))

def insertion_points(words, funcs=()):
    """Word indexes k where a nop goes (before words[k]); see the module docstring for the three rules.

    funcs: (start, end) word ranges of the functions in `words`, for rule 3 (not applied without them)."""
    targets = {k + 1 + f for k, w in enumerate(words) if (f := branch_field(w)) is not None}
    for start, end in funcs:
        jrs = [k for k in range(start, min(end, len(words))) if words[k] == JR_RA]
        if len(jrs) >= 2:
            j = jrs[-1]
            if j + 1 < len(words) and words[j + 1] == 0 and j >= 2 and not _transfer(words[j - 2]):
                targets.add(j)                                    # IDO's return label `$NN:` was on the final jr $ra
    return [k + 1 for k in range(len(words) - 1)
            if is_mul(words[k]) and (is_mul(words[k + 1]) or k + 1 in targets)]

def func_ranges(sym, ti, nwords):
    """(start, end) word ranges of the sized function symbols in section `ti` of a .symtab image."""
    out = []
    for o in range(0, len(sym), 16):
        nm, val, size, info, other, shndx = struct.unpack_from(">IIIBBH", sym, o)
        if shndx == ti and (info & 0xF) == 2 and size:
            out.append((val // 4, min(nwords, (val + size) // 4)))
    return out

def fix(path):
    b = bytearray(Path(path).read_bytes())
    if b[:4] != b"\x7fELF" or b[5] != 2: return 0                       # big-endian ELF32 only
    shoff, = struct.unpack_from(">I", b, 0x20); shentsize, shnum, shstrndx = struct.unpack_from(">HHH", b, 0x2E)
    sh = [list(struct.unpack_from(">IIIIIIIIII", b, shoff + i * shentsize)) for i in range(shnum)]
    # name, type, flags, addr, offset, size, link, info, addralign, entsize
    strtab = sh[shstrndx]; names = [b[strtab[4] + s[0]:b.index(b"\0", strtab[4] + s[0])].decode() for s in sh]
    if ".text" not in names: return 0
    ti = names.index(".text"); t = sh[ti]
    data = [bytes(b[s[4]:s[4] + s[5]]) if s[1] != 8 else b"" for s in sh]   # SHT_NOBITS has no file data
    words = [_u32(data[ti], k) for k in range(0, t[5] - 3, 4)]
    symi = names.index(".symtab")
    ins = insertion_points(words, func_ranges(data[symi], ti, len(words)))
    if not ins: return 0
    def moved(off):
        """New .text offset of old offset `off` (an address at or after an insertion point moves down)."""
        return off + 4 * sum(1 for p in ins if 4 * p <= off)
    def moved_word(k):
        return k + sum(1 for p in ins if p <= k)
    # 1. new .text with nops; branches re-aimed
    out = [0] * (len(words) + len(ins))
    for k, w in enumerate(words):
        f = branch_field(w)
        if f is not None:
            tgt = k + 1 + f
            if 0 <= tgt <= len(words):
                nf = moved_word(tgt) - (moved_word(k) + 1)
                w = (w & 0xFFFF0000) | (nf & 0xFFFF)
        out[moved_word(k)] = w
    text = bytearray(b"".join(struct.pack(">I", w) for w in out)) + data[ti][4 * len(words):]
    # symbols
    sym = bytearray(data[symi])
    text_syms = set()
    for o in range(0, len(sym), 16):
        nm, val, size, info, other, shndx = struct.unpack_from(">IIIBBH", sym, o)
        if shndx == ti:
            nv = moved(val)
            ns = size and moved(val + size - 1) + 1 - nv if size else 0   # grows when the function holds insertions
            # a symbol exactly at an insertion point (a label that is the second mul) stays on its instruction
            struct.pack_into(">II", sym, o + 4, nv, ns if size else size)
        if (info & 0xF) == 3 and shndx == ti: text_syms.add(o // 16)          # the .text section symbol
    data[symi] = bytes(sym)
    # 2. relocations
    for ri, s in enumerate(sh):
        if s[1] != 9: continue                                              # SHT_REL
        target = s[7]; rel = bytearray(data[ri]); tdata = text if target == ti else bytearray(data[target])
        entries = []
        for o in range(0, len(rel), 8):
            off, info = struct.unpack_from(">II", rel, o)
            entries.append([o, off, info >> 8, info & 0xFF])
        def into_text(symidx):
            nm, val, size, info, other, shndx = struct.unpack_from(">IIIBBH", sym, symidx * 16)
            return shndx == ti and (info & 0xF) == 3                         # section symbol: addend is a .text offset
        k = 0
        while k < len(entries):
            o, off, si, typ = entries[k]
            noff = moved(off) if target == ti else off
            struct.pack_into(">I", rel, o + 0, noff)
            if into_text(si):
                if typ == 4:                                                 # R_MIPS_26: target in the instruction
                    w = _u32(tdata, noff); a = (w & 0x3FFFFFF) << 2
                    struct.pack_into(">I", tdata, noff, (w & 0xFC000000) | ((moved(a) >> 2) & 0x3FFFFFF))
                elif typ == 2:                                               # R_MIPS_32 (jump tables): the word
                    struct.pack_into(">I", tdata, noff, moved(_u32(tdata, noff)))
                elif typ == 5 and k + 1 < len(entries) and entries[k + 1][3] == 6:   # HI16 + LO16 pair
                    o2, off2, si2, _ = entries[k + 1]; noff2 = moved(off2) if target == ti else off2
                    hi, lo = _u32(tdata, noff), _u32(tdata, noff2)
                    lo16 = lo & 0xFFFF; lo16 = lo16 - 0x10000 if lo16 & 0x8000 else lo16
                    a = moved(((hi & 0xFFFF) << 16) + lo16)
                    nhi = ((a + 0x8000) >> 16) & 0xFFFF; nlo = a & 0xFFFF
                    struct.pack_into(">I", tdata, noff, (hi & 0xFFFF0000) | nhi)
                    struct.pack_into(">I", tdata, noff2, (lo & 0xFFFF0000) | nlo)
                    struct.pack_into(">I", rel, o2, noff2); k += 1
            k += 1
        data[ri] = bytes(rel)
        if target != ti: data[target] = bytes(tdata)
    # IDO pads .text to 16 bytes: drop the old trailing zero padding and pad again after the last function
    end = 0
    for o in range(0, len(sym), 16):
        nm, val, size, info, other, shndx = struct.unpack_from(">IIIBBH", sym, o)
        if shndx == ti and (info & 0xF) != 3: end = max(end, val + size)
    while len(text) > end and len(text) >= 4 and text[-4:] == b"\0\0\0\0": del text[-4:]
    text += b"\0" * (-len(text) % 16)
    data[ti] = bytes(text); sh[ti][5] = len(text)
    # 3. re-lay out: sections in file order, each at its alignment; section header table at the end
    order = sorted((s[4], i) for i, s in enumerate(sh) if i and s[1] != 8)
    nb = bytearray(b[:0x34]); pos = 0x34
    for _, i in order:
        al = max(1, sh[i][8]); pos = (pos + al - 1) // al * al
        nb += b"\0" * (pos - len(nb)); sh[i][4] = pos; nb += data[i]; pos += len(data[i]); sh[i][5] = len(data[i])
    pos = (pos + 3) // 4 * 4; nb += b"\0" * (pos - len(nb))
    struct.pack_into(">I", nb, 0x20, pos)
    for s in sh: nb += struct.pack(">IIIIIIIIII", *s)
    Path(path).write_bytes(nb)
    return len(ins)

if __name__ == "__main__":
    for p in sys.argv[1:]:
        n = fix(p)
        if n: print("%s: %d nops inserted" % (p, n))
