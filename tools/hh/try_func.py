"""Compile a C file with IDO and compare one function against the original ROM bytes.

  try_func.py FUNC file.c [--cc 7.1|5.3] [--opt "-O2"] [-v]

Prints MATCH, or a score (matching words / total) and the first differences.
Relocated fields (jal targets, %hi/%lo immediates) are ignored in the comparison,
since the linker fills those in."""
import argparse, os, re, subprocess, sys, tempfile, glob
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../.."))
IMG = os.path.join(HH, "build/expanded.bin")

def find_func(name, asm=None, seg=None):
    # Function names repeat across overlays that share a RAM slot, so prefer an exact file.
    if asm is None and seg is not None:
        hits = glob.glob(os.path.join(HH, "asm/nonmatchings", seg, "**", name + ".s"), recursive=True)
        if len(hits) != 1: sys.exit("expected one %s.s under segment %s, found %d" % (name, seg, len(hits)))
        asm = hits[0]
    paths = [asm] if asm else glob.glob(os.path.join(HH, "asm/**/*.s"), recursive=True)
    for p in paths:
        s = open(p).read()
        m = re.search(r"nonmatching %s, (0x[0-9A-F]+)\s+glabel %s\s+/\* ([0-9A-F]+) ([0-9A-F]+) " % (name, name), s)
        if m: return int(m.group(2), 16), int(m.group(1), 16), int(m.group(3), 16)
    sys.exit("function %s not found in asm/" % name)

def compile_c(src, cc, opt, out):
    ido = os.path.join(HH, "tools/ido", cc)
    cmd = [os.path.join(ido, "cc"), "-c", "-G", "0", "-non_shared", "-Xcpluscomm", "-mips2",
           "-I", os.path.join(HH, "include"), "-I", os.path.join(HH, "src")] + opt.split() + ["-o", out, src]
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode: sys.exit("compile failed:\n" + r.stderr)

def func_bytes(obj, name):
    with open(obj, "rb") as fh:
        e = ELFFile(fh); text = e.get_section_by_name(".text"); data = text.data()
        sym = next(s for s in e.get_section_by_name(".symtab").iter_symbols() if s.name == name)
        start, size = sym["st_value"], sym["st_size"] or len(data) - sym["st_value"]
        relocs = {}
        for sec in e.iter_sections():
            if isinstance(sec, RelocationSection) and sec.name in (".rel.text", ".rela.text"):
                for r in sec.iter_relocations(): relocs[r["r_offset"]] = r["r_info_type"]
        return data[start:start + size], {o - start: t for o, t in relocs.items() if start <= o < start + size}

MASK = {2: 0, 4: 0xFC000000, 5: 0xFFFF0000, 6: 0xFFFF0000}   # R_MIPS_32, 26, HI16, LO16
ADDR_NAME = re.compile(r"^(?:func_|D_|B_|jtbl_)([0-9A-F]{8})$|^\.L([0-9A-F]{8})$")

def linked_func_bytes(obj, name, vram, base=None):
    """Link obj so `name` sits at `vram`, resolving every address-named symbol (func_XXXXXXXX,
    D_XXXXXXXX, ...) to the address in its name, and return the function's final bytes.
    Returns None if a referenced symbol has no address in its name (only the masked compare is possible)."""
    with open(obj, "rb") as fh:
        e = ELFFile(fh); st = e.get_section_by_name(".symtab")
        size = next(x for x in st.iter_symbols() if x.name == name)["st_size"]
        undef = [x.name for x in st.iter_symbols() if x["st_shndx"] == "SHN_UNDEF" and x.name]
    defs = []
    for u in undef:
        m = ADDR_NAME.match(u)
        if not m: return None
        defs.append("--defsym=%s=0x%s" % (u, m.group(1) or m.group(2)))
    out = obj + ".linked"
    def link(base):
        r = subprocess.run(["mips-linux-gnu-ld", "-EB", "-Ttext=0x%X" % base, "-e", "0", "--no-check-sections",
                            "-z", "muldefs", "-o", out, obj] + defs, capture_output=True, text=True)
        if r.returncode: return None
        with open(out, "rb") as fh:
            e = ELFFile(fh); t = e.get_section_by_name(".text")
            v = next(x for x in e.get_section_by_name(".symtab").iter_symbols() if x.name == name)["st_value"]
            return v, t["sh_addr"], t.data()
    # The function's own address doesn't affect its bytes (branches are PC-relative, and jal / %hi / %lo
    # targets are absolute), so link near vram and just read it back by its symbol.
    got = link(base if base is not None else vram & ~0xF)   # base: where the object's .text really starts
    if not got: return None
    v, addr, data = got
    n = size or len(data) - (v - addr)
    return data[v - addr:v - addr + n]

def compare(mine, rel, orig):
    n = max(len(mine), len(orig)) // 4; good = 0; diffs = []
    for k in range(n):
        a = int.from_bytes(mine[4*k:4*k+4], "big") if 4*k < len(mine) else None
        b = int.from_bytes(orig[4*k:4*k+4], "big") if 4*k < len(orig) else None
        if a is not None and b is not None:
            m = MASK.get(rel.get(4*k), 0xFFFFFFFF)
            if (a & m) == (b & m): good += 1; continue
        diffs.append((k, a, b))
    return good, n, diffs

def main():
    ap = argparse.ArgumentParser(); ap.add_argument("func"); ap.add_argument("src")
    ap.add_argument("--cc", default="7.1"); ap.add_argument("--opt", default="-O2"); ap.add_argument("-v", action="store_true")
    ap.add_argument("--asm", help="the function's .s file (exact target)"); ap.add_argument("--seg", help="segment, e.g. file020")
    a = ap.parse_args()
    off, size, vram = find_func(a.func, a.asm, a.seg)
    orig = open(IMG, "rb").read()[off:off + size]
    with tempfile.TemporaryDirectory() as td:
        o = os.path.join(td, "f.o"); compile_c(a.src, a.cc, a.opt, o)
        mine, rel = func_bytes(o, a.func)
        exact = linked_func_bytes(o, a.func, vram)
    # IDO pads functions to 8 bytes with nops; ignore trailing padding differences
    while len(mine) > len(orig) and mine[-4:] == b"\0\0\0\0": mine = mine[:-4]
    good, n, diffs = compare(mine, rel, orig)
    if not diffs and exact is not None:
        while len(exact) > len(orig) and exact[-4:] == b"\0\0\0\0": exact = exact[:-4]
        if exact != orig:
            # every instruction matches but a relocated field differs: wrong symbol or offset
            good, n, diffs = compare(exact, {}, orig)
            print("score %d/%d: instructions match but an address is wrong (wrong symbol or offset)" % (good, n))
            if a.v:
                import rabbitizer
                for k, x, y in diffs[:8]:
                    print("  +0x%03X mine %-36s target %s" % (4*k, rabbitizer.Instruction(x, vram + 4*k).disassemble(),
                                                                rabbitizer.Instruction(y, vram + 4*k).disassemble()))
            return 1
    if not diffs: print("MATCH"); return 0
    print("score %d/%d (size mine 0x%X, target 0x%X)" % (good, n, len(mine), len(orig)))
    if a.v:
        import rabbitizer
        for k, x, y in diffs[:12]:
            fx = rabbitizer.Instruction(x).disassemble() if x is not None else "-"
            fy = rabbitizer.Instruction(y).disassemble() if y is not None else "-"
            print("  +0x%03X mine %-36s target %s" % (4*k, fx, fy))
    return 1

if __name__ == "__main__":
    sys.exit(main())
