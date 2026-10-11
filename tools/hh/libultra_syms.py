"""Addresses for the named symbols libultra objects refer to (__osCurrentTime, osSendMesg, ...), read back from the
original ROM: at every relocation in a library object, the original instruction holds the resolved address.

  libultra_syms.py  -> build/libultra_syms.ld  (name = 0xADDR; for every symbol referenced but not defined there)
"""
import json, os, re, glob, sys
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../..")); os.chdir(HH)
def _segs():
    """segment -> (expanded-image start, vram) from hybridheaven.yaml"""
    out, cur = {}, None
    for l in open("hybridheaven.yaml"):
        m = re.match(r"  - name: (\w+)", l)
        if m: cur = m.group(1); continue
        m = re.match(r"    (start|vram): (0x[0-9A-F]+)", l)
        if m and cur: out.setdefault(cur, {})[m.group(1)] = int(m.group(2), 16)
    return {k: (v["start"], v["vram"]) for k, v in out.items() if "start" in v and "vram" in v}
SEGS = _segs()
IMG = open("build/expanded.bin", "rb").read()
LIB = json.load(open("tools/hh/libultra.json"))
addr, defined, conflicts = {}, set(), []
for unit in sorted(LIB):
    seg, cf = unit.split("/")
    sv = SEGS[seg]; start = sv[0] + int(cf, 16) - sv[1]   # expanded-image offset of the file's .text
    obj = "build/src/%s.o" % unit
    with open(obj, "rb") as fh:
        e = ELFFile(fh); st = e.get_section_by_name(".symtab"); syms = list(st.iter_symbols())
        defined |= {s.name for s in syms if s["st_shndx"] != "SHN_UNDEF" and s.name}
        text = e.get_section_by_name(".text").data()
        rel = e.get_section_by_name(".rel.text")
        if rel is None: continue
        rs = sorted(((r["r_offset"], r["r_info_type"], syms[r["r_info_sym"]].name) for r in rel.iter_relocations()))
    word = lambda o, img=True: int.from_bytes((IMG[start + o:start + o + 4] if img else text[o:o + 4]), "big")
    vram = lambda o: int(cf, 16) + o
    pend = {}
    for o, t, name in rs:
        if not name: continue
        if t == 4:                                          # R_MIPS_26
            v = (vram(o) & 0xF0000000) | ((word(o) & 0x3FFFFFF) << 2)
        elif t == 5: pend[name] = o; continue               # R_MIPS_HI16: wait for its LO16
        elif t == 6 and name in pend:                       # R_MIPS_LO16
            hi = word(pend[name]) & 0xFFFF; lo = word(o) & 0xFFFF
            ohi = word(pend[name], False) & 0xFFFF; olo = word(o, False) & 0xFFFF
            v = ((hi << 16) + (lo - 0x10000 if lo & 0x8000 else lo)) - ((ohi << 16) + (olo - 0x10000 if olo & 0x8000 else olo))
            v &= 0xFFFFFFFF
        else: continue
        if name in addr and addr[name] != v: conflicts.append((name, hex(addr[name]), hex(v)))
        addr.setdefault(name, v)
need = {n: v for n, v in addr.items() if n not in defined}
open("build/libultra_syms.ld", "w").write("".join("%s = 0x%08X;\n" % kv for kv in sorted(need.items())))
print("libultra_syms: %d names; conflicts: %s" % (len(need), conflicts[:5] or "none"))
