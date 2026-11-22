"""Explicit source-owned BSS spans, shared by splat and the in-file linker."""
import json
import os
from pathlib import Path
import re


def placements():
    return json.loads(Path('tools/hh/bss_splits.json').read_text())


def owners():
    layout = {tuple(key.split('/')): tuple(int(v, 16) for v in (value['span'] if isinstance(value, dict) else value))
              for key, value in placements().items()}
    if not os.path.exists('tools/hh/libultra.json'):
        return layout  # isolated layouts can have no library build configured
    for unit, entry in json.load(open('tools/hh/libultra.json')).items():
        span = entry.get('storage', {}).get('.bss')
        if span:
            layout[tuple(unit.split('/'))] = tuple(int(v, 16) for v in span)
    return layout


def explicit_owners():
    """Opt-in list of genuine compiler objects, keyed by their original address names."""
    return {tuple(unit.split('/')): {name: int(size, 16) for name, size in entry['symbols'].items()}
            for unit, entry in placements().items() if isinstance(entry, dict)}


def packed_segments(layout, explicit):
    packed = {unit[0] for unit, (addr, size) in layout.items() if addr % 16 or size % 16}
    for unit, (addr, size) in layout.items():
        if (addr % 16 or size % 16) and (unit not in explicit or addr % 8 or size % 8):
            raise ValueError('unaligned BSS owner without a valid symbol map: ' + '/'.join(unit))
    return packed


def subsegments(segment, start, end, layout):
    spans = sorted((addr, size, cf) for (seg, cf), (addr, size) in layout.items() if seg == segment)
    if not spans:
        return ['      - { type: bss, vram: 0x%08X }' % start]
    align = 8 if segment in packed_segments(layout, explicit_owners()) else 16
    out, cursor = [], start
    for address, size, cf in spans:
        if not start <= cursor <= address < address + size <= end or address % align or size % align:
            raise ValueError('invalid/overlapping BSS ownership in ' + segment)
        if cursor < address:
            # Reuse the old generic name for the head, avoiding a stale assembly
            # input when regenerating an existing checkout without deleting asm/.
            if cursor == start:
                out.append('      - { type: bss, vram: 0x%08X }' % cursor)
            else:
                out.append('      - { type: bss, vram: 0x%08X, name: %s_bss_%08X }' % (cursor, segment, cursor))
        out.append('      - { type: .bss, vram: 0x%08X, name: %s/%s }' % (address, segment, cf))
        cursor = address + size
    if cursor < end:
        out.append('      - { type: bss, vram: 0x%08X, name: %s_bss_%08X }' % (cursor, segment, cursor))
    return out


def check_symbols(elf, span, expected):
    """Reject missing, shifted, overlapping and unlisted objects (including C padding objects)."""
    start, size = span
    idx = elf.get_section_index('.bss')
    if idx is None or elf.get_section(idx)['sh_size'] != size:
        raise ValueError('source-owned .bss size differs')
    syms = elf.get_section_by_name('.symtab')
    if any(s['st_shndx'] == 'SHN_COMMON' for s in syms.iter_symbols()):
        raise ValueError('source-owned .bss has unplaced common storage')
    objects = {s.name: (s['st_value'], s['st_size']) for s in syms.iter_symbols()
               if s['st_shndx'] == idx and s['st_info']['type'] == 'STT_OBJECT'}
    if set(objects) != set(expected):
        raise ValueError('source-owned .bss objects differ: ' + ', '.join(sorted(set(objects) ^ set(expected))))
    cursor = start
    for name, length in sorted(expected.items(), key=lambda item: item[0][2:]):
        m = re.fullmatch(r'[DB]_([0-9A-F]{8})', name)
        addr = int(m[1], 16) if m else -1
        if not cursor <= addr < addr + length <= start + size or objects[name] != (addr - start, length):
            raise ValueError('source-owned .bss object is misplaced: ' + name)
        cursor = addr + length


def check_object(unit, path):
    from elftools.elf.elffile import ELFFile
    with open(path, 'rb') as f:
        check_symbols(ELFFile(f), owners()[unit], explicit_owners()[unit])


def linker_layout(text, layout, explicit):
    """Allow natural 8-byte BSS boundaries without changing text/data alignment."""
    for seg in sorted(packed_segments(layout, explicit)):
        marker = f'.{seg}_bss (NOLOAD) : SUBALIGN(16)'
        if text.count(marker) != 1:
            raise ValueError('missing BSS output section for ' + seg)
        text = text.replace(marker, marker.replace('(16)', '(8)'))
    for unit in sorted(explicit):
        address, size = layout[unit]
        name = '/'.join(unit)
        line = f'        build/src/{name}.o(.bss);'
        if text.count(line) != 1:
            raise ValueError('missing BSS input section for ' + name)
        text = text.replace(line, '\n'.join([
            f'        ASSERT(ABSOLUTE(.) == 0x{address:X}, "{name}: wrong BSS start");',
            line,
            f'        ASSERT(ABSOLUTE(.) == 0x{address + size:X}, "{name}: wrong BSS end");',
        ]))
    return text


if __name__ == '__main__':
    import sys
    args = sys.argv[1:]
    if args == ['--linker']:
        path = Path('hybridheaven.ld')
        path.write_text(linker_layout(path.read_text(), owners(), explicit_owners()))
    elif args == ['--packed-segments']:
        print(' '.join(sorted(packed_segments(owners(), explicit_owners()))))
    elif args == ['--explicit-units']:
        print(' '.join('/'.join(unit) for unit in sorted(explicit_owners())))
    elif len(args) == 3 and args[0] == '--verify':
        check_object(tuple(args[1].split('/')), args[2])
    else:
        sys.exit('expected --linker, --packed-segments, --explicit-units, or --verify SEG/FILE OBJ')
