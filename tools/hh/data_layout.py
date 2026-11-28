"""Explicit source-owned .data spans of code-segment C units, shared by splat (gen_splat.py), the linker script and
the in-file checks (srcbuild.func_ok, reconcile_frozen.verify). The .data analogue of bss_layout.py.

A C unit whose functions define initialized storage the original linked inside a segment's data blob (function
statics, file-scope objects) owns that span: tools/hh/data_splits.json maps "SEG/FILE" to
{"span": ["0xVRAM", "0xSIZE"], "function": "func_X"} (or just the span). `function` is the one whose C definition
brings the storage: while it is still GLOBAL_ASM the unit's .data must be empty (the span is declared but not
taken yet, so the checks of the unit as it stands before the landing still pass; the ROM links only after it).
gen_splat.py splits the segment's generic `[rom, data]` subsegment around it, so the unit's own .data links at
VRAM between two generic data units (tools/hh/data_to_c.py generates both). Every span is 16-aligned at both ends:
IDO gives .data 16-byte alignment and rounds the section size up to it.

A unit whose span is shared by several of its functions (file-scope objects that more than one function reads or
writes) names a storage file instead of one function: {"span": [...], "storage": "tools/hh/data_storage/SEG/FILE.c"}.
That file holds the span's C definitions (initialized file-scope objects, in address order); srcbuild renders it at the
top of the unit, right after `#include "common.h"`, so every function of the unit, C or still GLOBAL_ASM, references
the same defined storage, and IDO compiles each C function against a definition rather than an `extern` (u64 stores
share one %hi, for instance). The span is taken from the start (asm functions link against the C symbols by name),
and the unit's source must contain the storage block verbatim (storage_problem).

The checks never trust the C: the unit's .data must have exactly SIZE bytes and, linked at VRAM, equal the original
image byte for byte (relocated pointers included); the linker script asserts the start and end addresses.
"""
import json
import os
from pathlib import Path

SPLITS = 'tools/hh/data_splits.json'


def placements(path=SPLITS):
    return json.loads(Path(path).read_text()) if os.path.exists(path) else {}


def owners(path=SPLITS):
    """{(seg, cfile): (vram, size)}"""
    out = {}
    for key, value in placements(path).items():
        address, size = (int(v, 16) for v in (value['span'] if isinstance(value, dict) else value))
        if address % 16 or size % 16 or size <= 0:
            raise ValueError('source-owned .data must be 16-aligned at both ends: ' + key)
        out[tuple(key.split('/'))] = (address, size)
    return out


def claimants(path=SPLITS):
    """{(seg, cfile): function} for the spans that name the function bringing their storage."""
    return {tuple(key.split('/')): value['function'] for key, value in placements(path).items()
            if isinstance(value, dict) and value.get('function')}


def storage(path=SPLITS):
    """{(seg, cfile): storage file} for the spans whose definitions are unit-level (shared by several functions)."""
    out = {}
    for key, value in placements(path).items():
        if isinstance(value, dict) and value.get('storage'):
            if value.get('function'):
                raise ValueError('a .data span names either its function or its storage file, not both: ' + key)
            out[tuple(key.split('/'))] = value['storage']
    return out


def storage_blocks(path=SPLITS, root='.'):
    """{(seg, cfile): the storage definitions' text (stripped)}."""
    return {unit: (Path(root) / f).read_text().strip() for unit, f in storage(path).items()}


def storage_lines(block):
    """The storage block as source lines, wrapped in markers so a frozen source can be checked for it."""
    return ['/* hh-data-storage begin (tools/hh/data_splits.json) */'] + block.splitlines() + ['/* hh-data-storage end */']


def storage_problem(text, block):
    """None if `text` (a unit's source) holds the storage block verbatim, once, before its first function."""
    want = '\n'.join(storage_lines(block))
    if text.count(want) != 1:
        return "source lacks the unit's .data storage block (tools/hh/data_splits.json)"
    return None


def subsegments(segment, start_rom, vram, data_rom, layout):
    """splat lines for a code segment's data blob starting at ROM data_rom: generic `data` spans around each unit's
    own `.data` span (in address order). A blob with no owner stays one generic line."""
    rom = lambda address: start_rom + address - vram
    spans = sorted((a, n, cf) for (seg, cf), (a, n) in layout.items() if seg == segment)
    out, cursor = [], data_rom
    for address, size, cf in spans:
        if rom(address) < cursor:
            raise ValueError('invalid/overlapping .data ownership in ' + segment)
        if cursor < rom(address):
            out.append('      - [0x%X, data]' % cursor)
        out.append('      - [0x%X, .data, %s/%s]' % (rom(address), segment, cf))
        cursor = rom(address + size)
    out.append('      - [0x%X, data]' % cursor)
    return out


def linker_layout(text, layout):
    """Assert each source-owned .data input section's start and end address in the generated linker script."""
    for unit in sorted(layout):
        address, size = layout[unit]
        name = '/'.join(unit)
        line = f'        build/src/{name}.o(.data);'
        if text.count(line) != 1:
            raise ValueError('missing .data input section for ' + name)
        text = text.replace(line, '\n'.join([
            f'        ASSERT(ABSOLUTE(.) == 0x{address:X}, "{name}: wrong .data start");',
            line,
            f'        ASSERT(ABSOLUTE(.) == 0x{address + size:X}, "{name}: wrong .data end");',
        ]))
    return text


def asm_inputs(layout=None):
    """splat's dump of each owned span (asm/data/SEG/FILE.data.s): a comparison input, never a linked definition."""
    return {'asm/data/%s/%s.data.s' % unit for unit in (owners() if layout is None else layout)}


def check_section(elf, span):
    """The unit's .data section has exactly the owned size (the bytes are compared after linking)."""
    sec = elf.get_section_by_name('.data')
    got = sec['sh_size'] if sec is not None else 0
    if got != span[1]:
        raise ValueError('source-owned .data is 0x%X bytes, its span 0x%X' % (got, span[1]))


if __name__ == '__main__':
    import sys
    args = sys.argv[1:]
    if args == ['--linker']:
        path = Path('hybridheaven.ld')
        path.write_text(linker_layout(path.read_text(), owners()))
    else:
        sys.exit('expected --linker')
