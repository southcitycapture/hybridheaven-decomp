"""Apply an explicit placement plan to an IDO/asm-processor readonly section.

The plan contains section-relative spans, never linked addresses or replacement
instructions. Jump table relocations travel with their entries. Only addends
of relocations against the .rodata section symbol can change in code.
"""
import json
from pathlib import Path
import re
import sys

LAYOUT = re.compile(r'^/\* hh-rodata-layout (.*) \*/\n?', re.M)


def mapping(raw, size, spans):
    """Return placed bytes and a map of each retained byte's two coordinates."""
    placed = bytearray(size)
    offsets, used = {}, set()
    for src, dst, size_span in spans:
        if (min(src, dst) < 0 or size_span <= 0 or src + size_span > len(raw)
                or dst + size_span > size):
            raise ValueError('readonly span out of bounds')
        a, b = range(src, src + size_span), range(dst, dst + size_span)
        if not offsets.keys().isdisjoint(a) or not used.isdisjoint(b):
            raise ValueError('overlapping readonly ownership')
        offsets.update(zip(a, b))
        used.update(b)
        placed[dst:dst + size_span] = raw[src:src + size_span]
    if any(value and i not in offsets for i, value in enumerate(raw)):
        raise ValueError('layout would drop nonzero readonly bytes')
    return placed, offsets


FROZEN_BLOB = re.compile(r'^static const unsigned char (rodata_([0-9A-F]+)(?:_([0-9A-F]{8}))?)\[\] = \{([^}]+)\};', re.M)
HH_BLOCK = re.compile(r'^/\* hh-block (\S+) (\{.*\}) \*/$', re.M)
PRAGMA = re.compile(r'^#pragma GLOBAL_ASM\("asm/nonmatchings/([^/"]+)/([0-9A-F]+)/[^"]*"\)', re.M)


def frozen_units(text, base, symbols, ro_index):
    """Frozen readonly units (11-18, Fable review): raw byte blobs and GLOBAL_ASM block data. Each must land at the
    offset its name/metadata states. Returns [(raw_offset, length, wanted_offset, label)]."""
    byname = {s.name: s.st_value for s in symbols if s.st_shndx == ro_index}
    out = []
    for m in FROZEN_BLOB.finditer(text):
        n = len(re.findall(r'\b0x[0-9A-Fa-f]{2}\b', m[4]))
        if m[1] not in byname:
            raise ValueError('frozen blob %s has no symbol in the object' % m[1])
        out.append((byname[m[1]], n, (int(m[3], 16) if m[3] else base) - base, m[1]))
    for m in HH_BLOCK.finditer(text):
        meta = json.loads(m[2]); rb = meta.get('rodata_bytes') or []
        if rb and not isinstance(rb[0], list): rb = [rb]
        if rb and meta.get('rodata_section', '.rodata') != '.rodata': continue
        for addr, _rom, n in rb:
            suffix = '_%08X' % addr      # D_, jtbl_, ... : the asm block's first data label at that address
            hits = {v for k, v in byname.items() if k.endswith(suffix)}
            if len(hits) != 1:
                raise ValueError('asm block data at %08X (%s): %d candidate symbols in the object' % (addr, m[1], len(hits)))
            out.append((hits.pop(), n, addr - base, 'data@%08X' % addr))
    return out


def readonly_refs(elf, ro, symbols, SHT_REL):
    """Offsets in .rodata that code or data reference through the .rodata section symbol, plus starts of relocation
    runs inside .rodata (jump tables)."""
    section_syms = {i for i, s in enumerate(symbols) if s.st_shndx == ro.index and s.st_type == 3}
    refs, runs = set(), set()
    for relsec in elf.sections:
        if not relsec.is_rel():
            continue
        dst = elf.sections[relsec.sh_info]; data = dst.data; pending = {}
        if dst is ro:
            offs = sorted(r.r_offset for r in relsec.relocations)
            runs.update(o for i, o in enumerate(offs) if i == 0 or offs[i - 1] != o - 4)
        for rel in relsec.relocations:
            if rel.sym_index not in section_syms:
                continue
            word = int.from_bytes(data[rel.r_offset:rel.r_offset + 4], 'big')
            if rel.rel_type == 5:
                pending.setdefault(rel.sym_index, []).append(word)
            elif rel.rel_type == 6:
                lo = (word & 0xffff) - (0x10000 if word & 0x8000 else 0)
                for hi in pending.pop(rel.sym_index, ()):
                    refs.add(((hi & 0xffff) << 16) + lo)
            elif rel.rel_type == 2:
                refs.add(word)
    return refs, runs


def check_plan(text, raw, size, spans, base, symbols, ro_index, refs, runs, align=16):
    """The 11-18 guardrails (Fable 5.2 review of Task 40). A plan may only merge two ordered sequences: frozen units at
    their stated offsets and live compiler output in compiler order, with alignment-only zero padding."""
    # G3: self-expiring scaffolding
    if not PRAGMA.search(text) and not FROZEN_BLOB.search(text):
        raise ValueError('readonly layout plan in a file with no GLOBAL_ASM and no frozen readonly bytes')
    spans = sorted(tuple(x) for x in spans)
    frozen = frozen_units(text, base, symbols, ro_index)
    fz = set()
    for a, n, want, label in frozen:
        sp = [sp for sp in spans if sp[0] <= a and a + n <= sp[0] + sp[2]]
        if not sp:
            raise ValueError('frozen unit %s split or not placed' % label)
        if a - sp[0][0] + sp[0][1] != want:
            raise ValueError('frozen unit %s placed at +%#x, its address says +%#x' % (label, a - sp[0][0] + sp[0][1], want))
        fz.update(range(a, a + n))
    # anchors: span boundaries may only fall on referenced offsets, symbol starts, relocation-run starts, unit edges
    anchors = {0, len(raw)} | {r for r in refs if 0 <= r <= len(raw)} | set(runs)
    anchors |= {s.st_value for s in symbols if s.st_shndx == ro_index and s.st_type != 3}
    anchors |= {a for a, n, _, _ in frozen} | {a + n for a, n, _, _ in frozen}
    srt = sorted(anchors)
    for src, dst, n in spans:
        if src not in anchors:
            raise ValueError('readonly span starts at +%#x, inside a unit (not a referenced/symbol/table/frozen edge)' % src)
        end = src + n
        if end not in anchors:
            nxt = min([x for x in srt if x > end], default=len(raw))
            if nxt - end >= 8 or any(raw[end:nxt]):
                raise ValueError('readonly span ends at +%#x, inside a unit' % end)
    # G2: dropped input bytes are alignment zeros only
    cov = set()
    for src, dst, n in spans: cov.update(range(src, src + n))
    run = 0
    for i in range(len(raw) + 1):
        if i < len(raw) and i not in cov:
            if raw[i] or i in fz: raise ValueError('readonly layout drops input byte +%#x' % i)
            run += 1
        else:
            if run >= 8: raise ValueError('readonly layout drops %d zero bytes before +%#x (more than alignment)' % (run, i))
            run = 0
    # G2: inserted gaps are alignment padding only
    placed = sorted((dst, dst + n) for _, dst, n in spans)
    at = 0
    for a, b in placed:
        gap = a - at
        if gap < 0: raise ValueError('overlapping readonly placement')
        if gap and (gap >= 8 or a % (8 if gap >= 4 else 4)):
            raise ValueError('readonly layout inserts %d bytes before +%#x (not alignment)' % (gap, a))
        at = b
    if size - at >= align or size < at:
        raise ValueError('readonly layout pads %d bytes at the end' % (size - at))
    # order rule: live compiler output keeps compiler order
    last = -1
    for src, dst, n in spans:
        live = [i for i in range(src, src + n) if i not in fz]
        if not live: continue
        lo, hi = live[0] - src + dst, live[-1] - src + dst
        if lo <= last:
            raise ValueError('readonly layout reorders compiler output at input +%#x' % live[0])
        last = hi
    return spans


def plan_base(text):
    m = PRAGMA.search(text)
    if m is None:
        raise ValueError('cannot tell the unit of a readonly layout plan')
    import srcbuild
    base = srcbuild.FILE_RODATA.get((m[1], m[2]))
    if base is None:
        raise ValueError('no readonly base for %s/%s' % (m[1], m[2]))
    return base


def apply(text, obj, _unchecked=False):
    plans = LAYOUT.findall(text)
    if not plans:
        return
    if len(plans) != 1:
        raise ValueError('expected exactly one hh-rodata-layout')
    size, spans = json.loads(plans[0])
    sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'asm-processor'))
    try:
        from asm_processor import ElfFile, SHT_REL
    finally:
        sys.path.pop(0)
    path = Path(obj)
    elf = ElfFile(path.read_bytes())
    ro = elf.find_section('.rodata')
    if ro is None or size <= 0 or size % ro.sh_addralign:
        raise ValueError('invalid section or readonly size')
    symbols = elf.symbol_entries
    if not _unchecked:      # _unchecked: synthetic unit tests only; every build path runs the guardrails
        refs, runs = readonly_refs(elf, ro, symbols, SHT_REL)
        check_plan(text, ro.data, size, spans, plan_base(text), symbols, ro.index, refs, runs, max(16, ro.sh_addralign))
    placed, offsets = mapping(ro.data, size, spans)

    def unit_move(old):
        """remap a referenced offset by the span (unit) that contains it; a reference outside every span is refused"""
        for src, dst, n in spans:
            if src <= old < src + n:
                return old - src + dst
        raise ValueError('readonly reference +%#x points outside every placed unit' % old)

    def move(old, length=1):
        new = offsets.get(old)
        if new is None or any(offsets.get(old + i) != new + i for i in range(length)):
            raise ValueError('split or missing readonly relocation/symbol at %#x' % old)
        return new

    section_syms = {i for i, s in enumerate(symbols) if s.st_shndx == ro.index and s.st_type == 3}
    for i, s in enumerate(symbols):
        if s.st_shndx == ro.index and i not in section_syms:
            s.st_value = move(s.st_value, max(1, s.st_size))
    for relsec in elf.sections:
        if not relsec.is_rel():
            continue
        dst = elf.sections[relsec.sh_info]
        contents = placed if dst is ro else bytearray(dst.data)
        pending = {}
        for rel in relsec.relocations:
            if dst is ro:
                rel.r_offset = move(rel.r_offset, 4)
            if rel.sym_index not in section_syms:
                continue
            at, kind = rel.r_offset, rel.rel_type
            if relsec.sh_type != SHT_REL:
                raise ValueError('unsupported RELA against .rodata')
            word = int.from_bytes(contents[at:at + 4], 'big')
            if kind == 5:  # R_MIPS_HI16 (can have multiple pending HI16s)
                pending.setdefault(rel.sym_index, []).append((at, word))
            elif kind == 6:
                lows = set()
                lo = (word & 0xffff) - (0x10000 if word & 0x8000 else 0)
                his = pending.pop(rel.sym_index, ())
                if not his:
                    raise ValueError('unpaired readonly LO16')
                for ha, hi in his:
                    new = unit_move(((hi & 0xffff) << 16) + lo)
                    lows.add(new & 0xffff)
                    val = (hi & 0xffff0000) | ((new + 0x8000) >> 16)
                    contents[ha:ha + 4] = val.to_bytes(4, 'big')
                if len(lows) != 1:
                    raise ValueError('inconsistent readonly HI16/LO16 group')
                contents[at:at + 4] = ((word & 0xffff0000) | lows.pop()).to_bytes(4, 'big')
            elif kind == 2:  # R_MIPS_32
                contents[at:at + 4] = unit_move(word).to_bytes(4, 'big')
            else:
                raise ValueError('unsupported readonly relocation type %d' % kind)
        if pending:
            raise ValueError('unpaired readonly HI16')
        if dst is not ro:
            dst.data = bytes(contents)
        relsec.data = b''.join(r.to_bin() for r in relsec.relocations)
    ro.data = bytes(placed)
    elf.symtab.data = b''.join(s.to_bin() for s in symbols)
    elf.write(str(path))


def audit(paths):
    """--audit: compile every src file that carries a plan to its pre-layout object and run the guardrails."""
    import subprocess, tempfile
    import srcbuild
    bad = 0
    for p in paths:
        text = Path(p).read_text()
        if not LAYOUT.search(text): continue
        with tempfile.TemporaryDirectory() as td:
            c = Path(td) / 'f.c'; c.write_text(text); o = str(Path(td) / 'f.o')
            r = subprocess.run([sys.executable, 'tools/asm-processor/build.py', '--input-enc', 'utf-8', '--output-enc', 'euc-jp',
                                srcbuild.IDO, '--', 'mips-linux-gnu-as'] + srcbuild.ASFLAGS + ['--', '-c'] + srcbuild.CFLAGS + ['-o', o, str(c)],
                               capture_output=True, text=True)
            if r.returncode:
                print('FAIL %s: compile' % p); bad += 1; continue
            try:
                apply(text, o); print('ok   %s' % p)
            except ValueError as e:
                print('FAIL %s: %s' % (p, e)); bad += 1
    return bad


if __name__ == '__main__':
    if sys.argv[1] == '--audit':
        import glob
        sys.exit(1 if audit(sorted(glob.glob('src/*/*.c'))) else 0)
    apply(Path(sys.argv[1]).read_text(), sys.argv[2])
