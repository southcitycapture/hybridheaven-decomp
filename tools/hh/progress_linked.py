"""Resolve objdiff's unlinked relocation discrepancies using the matching ROM link."""
import hashlib
from pathlib import Path
import re

from elftools.elf.elffile import ELFFile


def text_symbols(path):
    with open(path, 'rb') as fh:
        elf = ELFFile(fh)
        index = elf.get_section_index('.text')
        return {s.name: (s['st_value'], s['st_size']) for s in elf.get_section_by_name('.symtab').iter_symbols()
                if s['st_shndx'] == index and s['st_info']['type'] == 'STT_FUNC'}


def same_function(original, linked, expected, actual, placement, reported_size):
    off, size, vram = expected
    at, emitted = actual
    base, extent = placement
    return (size == reported_size and base + at == vram and 0 <= at < extent
            and size <= emitted <= extent - at and 0 <= off <= len(linked) - emitted
            and linked[off:off + size] == original[off:off + size]
            and not any(linked[off + size:off + emitted]))


def corrections(report, inputs, sources):
    import srcbuild as S

    build = Path('build')
    # A raw objdiff report is still useful after an unsuccessful build. Only a
    # checked ROM and its matching expanded output can overrule it.
    rom = build / 'hybridheaven.z64'
    sha = re.search(r'^SHA1\s*:=\s*([0-9a-f]{40})$', Path('Makefile').read_text(), re.M)[1]
    expanded, link_map = build / 'expanded.out.bin', build / 'hybridheaven.map'
    if not all(p.exists() for p in (rom, expanded, link_map)) or hashlib.sha1(rom.read_bytes()).hexdigest() != sha:
        return {}
    linked = expanded.read_bytes()
    placements = {name: (int(vram, 16), int(size, 16)) for vram, size, name in re.findall(
        r'^\s*\.text\s+0x([0-9a-f]+)\s+0x([0-9a-f]+)\s+build/src/(\S+)\.o$',
        link_map.read_text(), re.M)}
    blocked = S.link_blocked()
    changes = {}
    for unit in report['units']:
        key = unit['name']
        seg, cf = key.split('/')
        if key not in placements or key not in inputs:
            continue
        lib = (seg, cf) in S.LIBFILES
        # Require provenance in BOTH the C-only compile and the actual mixed
        # object. Libultra units are built exclusively from C; their objdiff
        # object is the actual object with verified address-based renames.
        c_names = S.defined_functions(sources[key]) if not lib else set()
        candidates = [f for f in unit['functions'] if (seg, f['name']) not in blocked
                      and f.get('fuzzy_match_percent', 0) < 100
                      and (f['name'] in c_names or (lib and f.get('fuzzy_match_percent', 0) > 0))]
        if not candidates:
            continue
        c_syms = text_symbols(inputs[key])
        obj = build / 'src' / (key + '.o')
        # library units are compiled from the SDK's own source (their src/ file is a placeholder), so their object's age
        # says nothing against src/; the ROM SHA check and the exact linked-byte comparison below still apply (11-22)
        if not lib and (not obj.exists() or obj.stat().st_mtime_ns < Path('src', key + '.c').stat().st_mtime_ns):
            continue
        built_syms = c_syms if lib else text_symbols(obj)
        origin = {n: (off, size, vram) for n, _, off, size, vram in S.entries(seg, cf)}
        for f in candidates:
            n = f['name']
            if n not in c_syms or n not in built_syms or n not in origin:
                continue
            off, size, _ = origin[n]
            at, emitted = built_syms[n]
            if lib and not emitted:  # lib_base adds a size-less alias for IDO static functions
                emitted = size
            if not same_function(S.IMG, linked, origin[n], (at, emitted), placements[key], int(f['size'])):
                continue
            changes[key, n] = {'unit': key, 'function': n, 'size': size, 'expanded_offset': hex(off),
                               'raw_objdiff_percent': f.get('fuzzy_match_percent', 0)}
    return changes


def apply(report, changes):
    """Update exact code measures; retain raw objdiff fuzzy totals as diagnostics."""
    categories = {c['id']: c['measures'] for c in report['categories']}
    for unit in report['units']:
        for f in unit['functions']:
            proof = changes.get((unit['name'], f['name']))
            if proof is None:
                continue
            f['fuzzy_match_percent'] = 100.0
            groups = [unit['measures'], report['measures']]
            groups += [categories[c] for c in unit['metadata'].get('progress_categories', [])]
            for m in groups:
                m['matched_code'] = str(int(m.get('matched_code', 0)) + proof['size'])
                m['matched_functions'] = m.get('matched_functions', 0) + 1
                m['matched_code_percent'] = 100 * int(m['matched_code']) / int(m['total_code'])
                m['matched_functions_percent'] = 100 * m['matched_functions'] / m['total_functions']
