"""Compile a C file with IDO and compare one function against the original ROM bytes.

  try_func.py FUNC file.c [--cc 7.1|5.3] [--opt "-O2"] [-v]

Prints MATCH, or a score (matching words / total) and the first differences.
Relocated fields (jal targets, %hi/%lo immediates) are ignored in the comparison,
since the linker fills those in."""
import argparse, os, re, subprocess, sys, tempfile, glob
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
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
        m = re.search(r"nonmatching %s, (0x[0-9A-F]+)\s+[gj]label %s\s+/\* ([0-9A-F]+) ([0-9A-F]+) " % (name, name), s)
        if m: return int(m.group(2), 16), int(m.group(1), 16), int(m.group(3), 16), p
    sys.exit("function %s not found in asm/" % name)

def compile_c(src, cc, opt, out):
    ido = os.path.join(HH, "tools/ido", cc)
    cmd = [os.path.join(ido, "cc"), "-c", "-G", "0", "-non_shared", "-Xcpluscomm", "-mips2",
           "-I", os.path.join(HH, "include"), "-I", os.path.join(HH, "src")] + opt.split() + ["-o", out, src]
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode: sys.exit("compile failed:\n" + r.stderr)
    import mulfix; mulfix.fix(out)      # the original build's VR4300 nop between consecutive float multiplies

_elf = {}
_linked = {}     # one link per (object version, base, rodata, symbol defs): every function reads from it
def _parsed(obj):
    """Symbols, .text and relocations of an object, parsed once per file version (srcbuild checks every
    function of a big file against the same object)."""
    st = os.stat(obj); key = (obj, st.st_ino, st.st_mtime_ns, st.st_size)
    if key not in _elf:
        _elf.clear()
        with open(obj, "rb") as fh:
            e = ELFFile(fh); data = e.get_section_by_name(".text").data()
            syms = {}; undef = []
            for s in e.get_section_by_name(".symtab").iter_symbols():
                if s.name and s.name not in syms: syms[s.name] = (s["st_value"], s["st_size"])
                if s["st_shndx"] == "SHN_UNDEF" and s.name: undef.append(s.name)
            relocs = {}
            for sec in e.iter_sections():
                if isinstance(sec, RelocationSection) and sec.name in (".rel.text", ".rela.text"):
                    for r in sec.iter_relocations(): relocs[r["r_offset"]] = r["r_info_type"]
        _elf[key] = (data, syms, undef, relocs)
    return _elf[key]

def func_bytes(obj, name):
    data, syms, undef, relocs = _parsed(obj)
    if name not in syms: raise StopIteration
    v, sz = syms[name]
    start, size = v, sz or len(data) - v
    return data[start:start + size], {o - start: t for o, t in relocs.items() if start <= o < start + size}

MASK = {2: 0, 4: 0xFC000000, 5: 0xFFFF0000, 6: 0xFFFF0000}   # R_MIPS_32, 26, HI16, LO16
# an optional __<function> suffix is srcbuild's per-snippet private alias (srcbuild.private_names): same address
ADDR_NAME = re.compile(r"^(?:func_|D_|B_|jtbl_)([0-9A-F]{8})(?:__\w+)?$|^\.L([0-9A-F]{8})$")

def _named_symbols():
    """Symbols with a real name (not address-named) that the project defines: symbol_addrs.txt and splat's
    undefined_*_auto.txt (`name = 0xADDR;`)."""
    out = {}
    for f in ("symbol_addrs.txt", "undefined_syms_auto.txt", "undefined_funcs_auto.txt"):
        p = os.path.join(HH, f)
        if not os.path.exists(p): continue
        for l in open(p):
            m = re.match(r"\s*([A-Za-z_]\w*)\s*=\s*(0x[0-9A-Fa-f]+)", l)
            if m: out[m.group(1)] = int(m.group(2), 16)
    return out
NAMED = _named_symbols()
UNRESOLVED = []   # names the last exact link couldn't place (an invented alias like func_800058DC_2arg)

RO_LINE = re.compile(r"/\* [0-9A-F]+ ([0-9A-F]{8}) ")

def asm_rodata_start(path):
    """Lowest vram of the .rodata a function's asm carries (splat migrates a function's own rodata into it)."""
    sect, lo = ".text", None
    for l in open(path):
        if l.startswith(".section"): sect = l.split()[1]; continue
        if sect != ".text":
            m = RO_LINE.search(l)
            if m: v = int(m.group(1), 16); lo = v if lo is None else min(lo, v)
    return lo

def obj_rodata_size(obj):
    with open(obj, "rb") as fh:
        s = ELFFile(fh).get_section_by_name(".rodata")
        return s["sh_size"] if s is not None else 0

def linked_func_bytes(obj, name, vram, base=None, rodata=None, want_rodata=False, want_file=False):
    """Link obj so `name` sits at `vram`, resolving every address-named symbol (func_XXXXXXXX,
    D_XXXXXXXX, ...) to the address in its name, and return the function's final bytes.
    want_file returns the whole linked (.text, .rodata), including asm neighbours.
    Returns None if a referenced symbol has no address in its name (only the masked compare is possible)."""
    del UNRESOLVED[:]
    _, syms, undef, _ = _parsed(obj)
    if name not in syms: raise StopIteration
    size = syms[name][1]
    defs = []
    for u in undef:
        m = ADDR_NAME.match(u)
        if m: defs.append("--defsym=%s=0x%s" % (u, m.group(1) or m.group(2))); continue
        if u in NAMED: defs.append("--defsym=%s=0x%X" % (u, NAMED[u])); continue
        UNRESOLVED.append(u); return None
    out = obj + ".linked"
    def link(base):
        # .rodata (jump tables, float constants, strings) goes where the original's is, so references resolve
        st = os.stat(obj); key = (obj, st.st_ino, st.st_mtime_ns, st.st_size, base, rodata, tuple(defs))
        if key in _linked:
            vals, addr, data, ro_b = _linked[key]
            return (vals[name][0], addr, data, ro_b) if name in vals else None
        ro = ["--section-start=.rodata=0x%X" % rodata] if rodata is not None else []
        r = subprocess.run(["mips-linux-gnu-ld", "-EB", "-Ttext=0x%X" % base, "-e", "0", "--no-check-sections",
                            "-z", "muldefs"] + ro + ["-o", out, obj] + defs, capture_output=True, text=True)
        if r.returncode:
            # The default MIPS linker script can crash on overlays even without an explicitly placed .rodata.
            # Use just the game's section placement, without the default script's segment/stub layout.
            script = obj + ".ld"
            with open(script, "w") as fh:
                ro_addr = " 0x%X" % rodata if rodata is not None else ""
                fh.write("SECTIONS { .text 0x%X : { *(.text) } .rodata%s : { *(.rodata) } "
                         "/DISCARD/ : { *(.reginfo) *(.MIPS.abiflags) *(.pdr) *(.mdebug*) *(.comment) } }\n" % (base, ro_addr))
            r = subprocess.run(["mips-linux-gnu-ld", "-EB", "-T", script, "-e", "0", "--no-check-sections",
                                "-z", "muldefs", "-o", out, obj] + defs, capture_output=True, text=True)
        if r.returncode: return None
        with open(out, "rb") as fh:
            e = ELFFile(fh); t = e.get_section_by_name(".text"); rs = e.get_section_by_name(".rodata")
            vals = {}
            for x in e.get_section_by_name(".symtab").iter_symbols():
                if x.name and x.name not in vals: vals[x.name] = (x["st_value"],)
            _linked.clear()
            _linked[key] = (vals, t["sh_addr"], t.data(), (rs.data() if rs is not None else b""))
        if name not in vals: return None
        return (vals[name][0], t["sh_addr"], _linked[key][2], _linked[key][3])
    # The function's own address doesn't affect its bytes (branches are PC-relative, and jal / %hi / %lo
    # targets are absolute), so link near vram and just read it back by its symbol.
    got = link(base if base is not None else vram & ~0xF)   # base: where the object's .text really starts
    if not got: return None
    v, addr, data, rodata_bytes = got
    if want_file: return data, rodata_bytes
    n = size or len(data) - (v - addr)
    if want_rodata: return data[v - addr:v - addr + n], rodata_bytes
    return data[v - addr:v - addr + n]

def rodata_matches(mine, img, vram_to_off, start):
    """The object's linked .rodata must equal the original's at `start` (IDO's trailing zero padding ignored)."""
    while mine.endswith(b"\0"): mine = mine[:-1]
    o = vram_to_off(start)
    return mine == img[o:o + len(mine)]

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

def aligned(mine, orig):
    """Similarity of two instruction sequences after diffing them (difflib), in [0, 1]: one inserted or missing
    instruction costs one instruction, not everything after it. Immediates and jump targets are masked (relocated or
    not), so opcodes and registers decide."""
    import difflib
    def toks(b):
        out = []
        for i in range(0, len(b) - 3, 4):
            w = int.from_bytes(b[i:i + 4], "big"); op = w >> 26
            out.append(w & 0xFC000000 if op in (2, 3) else w & 0xFFFF0000 if op not in (0, 1, 0x10, 0x11) else w)
        return out
    return difflib.SequenceMatcher(None, toks(mine), toks(orig), autojunk=False).ratio()

def main():
    ap = argparse.ArgumentParser(); ap.add_argument("func"); ap.add_argument("src")
    ap.add_argument("--cc", default="7.1"); ap.add_argument("--opt", default="-O2"); ap.add_argument("-v", action="store_true")
    ap.add_argument("--asm", help="the function's .s file (exact target)"); ap.add_argument("--seg", help="segment, e.g. file020")
    ap.add_argument("--aligned-out", help="also write the aligned similarity (0-1000, 1000 = MATCH) to this file")
    ap.add_argument("--diagnose", action="store_true", help="after a non-match, print an aligned verdict and frame map (tools/hh/diagnose.py)")
    a = ap.parse_args()
    r = _main(a)
    if a.diagnose and r != 0 and _LAST:
        import diagnose
        for line in diagnose.diagnose(_LAST[0], _LAST[1], _LAST[2] if len(_LAST) > 2 else 0): print(line)
    if a.aligned_out and _LAST: open(a.aligned_out, "w").write("%d\n" % (1000 if r == 0 else min(999, int(1000 * aligned(*_LAST[:2])))))
    return r

_LAST = []
def _main(a):
    off, size, vram, asm = find_func(a.func, a.asm, a.seg)
    img = open(IMG, "rb").read(); orig = img[off:off + size]
    ro_start = asm_rodata_start(asm); ro_ok = True
    with tempfile.TemporaryDirectory() as td:
        o = os.path.join(td, "f.o"); compile_c(a.src, a.cc, a.opt, o)
        mine, rel = func_bytes(o, a.func)
        if obj_rodata_size(o) and ro_start is not None:
            got = linked_func_bytes(o, a.func, vram, rodata=ro_start, want_rodata=True)
            exact = None
            if got:
                exact, ro_mine = got
                ro_ok = rodata_matches(ro_mine, img, lambda v: off + (v - vram), ro_start)
        else:
            exact = linked_func_bytes(o, a.func, vram)
    # IDO pads functions to 8 bytes with nops; ignore trailing padding differences
    while len(mine) > len(orig) and mine[-4:] == b"\0\0\0\0": mine = mine[:-4]
    _LAST[:] = [mine, orig, vram]
    good, n, diffs = compare(mine, rel, orig)
    if not diffs and exact is None and UNRESOLVED:
        print("score %d/%d: refers to %s, which isn't a real symbol (address-named like func_XXXXXXXX / D_XXXXXXXX, or "
              "listed in symbol_addrs.txt): use the real name" % (good, n, ", ".join(sorted(set(UNRESOLVED)))))
        return 1
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
    if not diffs and not ro_ok:
        print("score %d/%d: code matches but the function's .rodata (jump table / float constants / strings) differs" % (good, n))
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
