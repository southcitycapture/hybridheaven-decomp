"""Release compiler-owned late pools from frozen readonly byte storage.

The regular prefix remains C data. The suffix borrows later ASM instruction
budgets in source order and carries reproducible original-image recipes. A
caller must verify the complete linked file before accepting this proposal.
"""
import hashlib
import json
import re
import struct
import tempfile
import difflib

import kept_blocks

POOL = re.compile(r'^/\* hh-owned-pool (func_[0-9A-F]{8}) ([0-9A-F]+) ([0-9A-F]+) \*/$', re.M)
PRAGMA = re.compile(r'^#pragma GLOBAL_ASM\("([^"]+)"\)', re.M)


def place_frozen(S, seg, cfile, text, name, log=None):
    """Place newly compiled pools in a unit's explicit readonly storage.

    The surviving explicit objects retain their own bytes. Use the original
    relocation operands to identify the newly compiled entries, and preserve
    the order of the remaining input (legacy pools and migrated ASM). Only
    alignment zeros may be inserted or removed. The caller still verifies
    the entire linked unit.
    """
    import addrfix
    import rodata_layout as layout
    from elftools.elf.elffile import ELFFile

    base = S.FILE_RODATA.get((seg, cfile))
    if base is None:
        return None
    objects = re.compile(r'^static const unsigned char (rodata_%s(?:_([0-9A-F]{8}))?)\[\] = \{([^}]+)\};\n?' % cfile, re.M)
    storage = [(int(m[2], 16) if m[2] else base,
                bytes.fromhex(''.join(re.findall(r'\b0x([0-9A-Fa-f]{2})\b', m[3]))))
               for m in objects.finditer(text)]
    size = S.file_rodata_size(seg, cfile)
    off = S.file_span(seg, cfile)[0] + base - int(cfile, 16)
    want = S.IMG[off:off + size]
    if any(a < base or a + len(b) > base + size or want[a-base:a-base+len(b)] != b for a, b in storage):
        return None
    text = layout.LAYOUT.sub('', text)
    path, vram = next((e[1], e[4]) for e in S.entries(seg, cfile) if e[0] == name)
    target = addrfix.target_refs(path, vram)
    items = kept_blocks.catalog(S, seg, cfile)

    def extent(label):
        if label not in items:
            return None
        lines = '\n'.join(items[label][1])
        words = [(int(a, 16), len(bits) // 2) for a, bits in re.findall(
            r'/\* [0-9A-F]+ ([0-9A-F]{8}) ([0-9A-F]+) \*/\s*\.(?:word|float|double)\b', lines)]
        address = addrfix.addr(label)
        if words and address is not None and min(a for a, _ in words) == address:
            return address, max(a + n for a, n in words)
        return None

    def emitted(obj, functions):
        found = {}
        for fn, refs in addrfix.mine_refs_many(obj, functions).items():
            orig = functions[fn]
            for pos, (kind, sym, add) in (refs or {}).items():
                if sym != '<section .rodata>' or kind not in ('hi', 'lo') or pos not in orig:
                    continue
                original_kind, label, delta = orig[pos]
                if original_kind != kind:
                    continue
                key = extent(label)
                if key is None:
                    continue
                if key in found and found[key] != add - delta:
                    raise ValueError('multiple emitters for %#x' % key[0])
                found[key] = add - delta
        return found

    def raw_block(match):
        path = match[1]
        block = S._rd(path)
        raw = kept_blocks.BYTE_RANGE.search(block)
        if raw:
            return block, tuple(int(v, 16) for v in raw.groups())
        return None

    with tempfile.TemporaryDirectory(dir='build') as td:
        obj, _ = S.compile_file(text, td)
        if obj is None:
            return None
        try:
            new = emitted(obj, {name: target})
        except ValueError:
            return None
        if not new and not re.search(r'GLOBAL_ASM\("[^\n]*_ro_regular_', text):
            return None
        # Keep track of earlier placements when adding another C function.
        picked = set(re.findall(r'^/\* hh-placed-function (func_[0-9A-F]{8}) \*/$', text, re.M))
        picked.add(name)
        functions = {n: addrfix.target_refs(p, v) for n, p, _, _, v in S.entries(seg, cfile) if n in picked}
        chunks = []
        for address, raw in storage:
            cursor = address
            for lo, hi in sorted(k for k in new if address <= k[0] < address + len(raw)):
                if lo < cursor or hi > address + len(raw):
                    return None
                if lo > cursor:
                    chunks.append((cursor, raw[cursor-address:lo-address]))
                cursor = hi
            if cursor < address + len(raw):
                chunks.append((cursor, raw[cursor-address:]))
        declarations = []
        for address, raw in chunks:
            declarations.append('static const unsigned char rodata_%s_%08X[] = {\n%s\n};' % (cfile, address,
                '\n'.join('    ' + ', '.join('0x%02X' % b for b in raw[i:i+16]) + ','
                          for i in range(0, len(raw), 16))))
        def trim(match):
            data = raw_block(match)
            if not data:
                return match[0]
            block, (address, offset, length) = data
            spans = sorted((a, b) for a, b in new if a < address + length and b > address)
            if not spans:
                return match[0]
            cursor, end = address, address + length
            out = []
            # Don't let a range header swallow other readonly items that were
            # appended when the original instruction donors were merged.
            if not kept_blocks.exact_raw_range(S, block, address, offset, length):
                return match[0]
            for lo, hi in spans + [(end, end)]:
                lo = min(lo, end)
                if lo > cursor:
                    recipe = dict(functions=[], rodata=[], rodata_section='.rodata',
                                  rodata_bytes=[cursor, offset + cursor - address, lo-cursor])
                    key = hashlib.sha1(json.dumps(recipe, sort_keys=True).encode()).hexdigest()[:16]
                    path = f'asm/nonmatchings/{seg}/{cfile}/_ro_regular_{key}.s'
                    kept_blocks.rebuild(S, seg, cfile, path, recipe)
                    out.append('#pragma GLOBAL_ASM("%s")' % path)
                cursor = max(cursor, hi)
            functions = re.findall(r'^glabel (func_[0-9A-F]{8})$', block, re.M)
            if functions:
                recipe = dict(functions=functions, rodata=[])
                key = hashlib.sha1(json.dumps(recipe, sort_keys=True).encode()).hexdigest()[:16]
                path = f'asm/nonmatchings/{seg}/{cfile}/_mrg_keep_text_{key}.s'
                kept_blocks.rebuild(S, seg, cfile, path, recipe)
                out.append('#pragma GLOBAL_ASM("%s")' % path)
            return '\n'.join(out)

        changed = PRAGMA.sub(trim, text)
        if storage:
            changed = objects.sub('', changed) + '\n' + '\n'.join(declarations) + '\n'
        if changed != text:
            text = changed
            obj, _ = S.compile_file(text, td)
            if obj is None:
                return None
        try:
            ranges = [(src, a-base, b-a) for (a, b), src in emitted(obj, functions).items()
                      if base <= a < b <= base + size and not any(lo <= a < lo + len(raw) for lo, raw in chunks)]
        except ValueError:
            return None
        with open(obj, 'rb') as f:
            elf = ELFFile(f)
            symbols = elf.get_section_by_name('.symtab')
            srcs = {sym.name: sym['st_value'] for sym in symbols.iter_symbols()}
            section = elf.get_section_by_name('.rodata')
            ro = section.data()
            ro_index = elf.get_section_index('.rodata')
            raw_ranges = []
            for pragma in PRAGMA.finditer(text):
                data = raw_block(pragma)
                if not data:
                    continue
                block, (address, _, length) = data
                if '.section .late_rodata' in block:
                    continue
                label = re.search(r'^dlabel (\w+)', block, re.M)
                if label and label[1] in srcs:
                    ranges.append((srcs[label[1]], address-base, length))
                    raw_ranges.append((address, address+length))
            for sym in symbols.iter_symbols():
                if sym['st_shndx'] != ro_index:
                    continue
                span = extent(sym.name.removesuffix('__rodata'))
                if span and base <= span[0] < span[1] <= base + size:
                    a, b = span
                    if any(lo <= a < hi for lo, hi in raw_ranges):
                        continue
                    candidate = (sym['st_value'], a-base, b-a)
                    if candidate not in ranges:
                        ranges.append(candidate)
            for address, raw in chunks:
                start = srcs.get('rodata_%s_%08X' % (cfile, address))
                if start is None or ro[start:start+len(raw)] != raw:
                    return None
                ranges.append((start, address-base, len(raw)))
        first = min(S.entries(seg, cfile), key=lambda e: e[2])
        linked = S.try_func.linked_func_bytes(obj, first[0], first[4], int(cfile, 16), base,
                                             want_file=True, bss=S.file_bss(seg, cfile))
        if linked is None:
            return None
        _, have = linked
        # ld may round up its output section. Those bytes have no input
        # offsets in the object and cannot participate in a placement span.
        have = have[:len(ro)]
        if any(have[a:a+n] != want[b:b+n] for a, b, n in ranges):
            if log: log('readonly entries do not match the original values')
            return None
        if any(x % 4 for span in ranges for x in span):
            return None

        def residual(data, axis):
            taken = {i for span in ranges for i in range(span[axis], span[axis] + span[2], 4)}
            if len(taken) * 4 != sum(span[2] for span in ranges):
                raise ValueError('overlapping readonly owners')
            indices = [i for i in range(0, len(data), 4) if i not in taken]
            return indices, [data[i:i+4] for i in indices]

        try:
            hi, hw = residual(have, 0)
            wi, ww = residual(want, 1)
        except ValueError:
            return None
        for op, a, b, c, d in difflib.SequenceMatcher(None, hw, ww, autojunk=False).get_opcodes():
            if op == 'equal':
                ranges.extend((hi[i], wi[j], 4) for i, j in zip(range(a, b), range(c, d)))
            elif any(w != b'\0'*4 for w in hw[a:b] + ww[c:d]):
                if log: log('unaccounted readonly data at input +%#x / output +%#x' % (
                    hi[a] if a < len(hi) else len(have), wi[c] if c < len(wi) else len(want)))
                return None
        merged = []
        for a, b, n in sorted(ranges):
            if merged and merged[-1][0] + merged[-1][2] == a and merged[-1][1] + merged[-1][2] == b:
                merged[-1][2] += n
            else:
                merged.append([a, b, n])
        text = re.sub(r'^/\* hh-placed-function .* \*/\n', '', text, flags=re.M)
        text = layout.UNIT.sub('', text)
        if not layout.PRAGMA.search(text) and layout.FROZEN_BLOB.search(text):
            text += f'/* hh-layout-unit {seg}/{cfile} */\n'
        text += ''.join('/* hh-placed-function %s */\n' % n for n in sorted(picked))
        return text + '/* hh-rodata-layout %s */\n' % json.dumps([size, merged], separators=(',', ':'))

def release_tail(S, seg, cfile, text, name, snippet=None, companions=()):
    pattern = (r'(?m)^static const unsigned char rodata_%s\[\] = \{([^}]+)\};' % re.escape(cfile))
    owned = re.search(pattern, text)
    if not owned or (seg, cfile) not in S.FILE_RODATA:
        return None
    raw = bytes(int(x, 16) for x in re.findall(r'\b0x([0-9A-Fa-f]{2})\b', owned[1]))
    base = S.FILE_RODATA[seg, cfile]
    pools = [(n, int(lo, 16), int(hi, 16)) for n, lo, hi in POOL.findall(text)]
    if not pools and len(raw) != S.file_rodata_size(seg, cfile):
        return None  # Already released pools require a separate ownership plan.
    path = next(e[1] for e in S.entries(seg, cfile) if e[0] == name)
    own = [item for item in S._ro_items(S._rd(path)) if item[0] == '.late_rodata']
    if not own:
        return None
    lo = min(addr for _, addr, _ in own)
    all_items = [addr for _, lines in kept_blocks.catalog(S, seg, cfile).values()
                 for addr in [next((int(m[1], 16) for l in lines for m in [S.RO_LINE.search(l)] if m), None)]
                 if addr is not None]
    end = base + S.file_rodata_size(seg, cfile)
    hi = min([addr for addr in all_items if addr > max(addr for _, addr, _ in own)] + [end])
    if snippet is not None:
        emitted = emitted_range(S, path, name, snippet)
        if emitted is not None:
            lo, hi = emitted
    if not base <= lo < hi <= end:
        return None
    pools.append((name, lo, hi))
    pools += [p for p in companions if p[0] not in {n for n, _, _ in pools}]
    pools.sort(key=lambda p: p[1])
    if len({p[0] for p in pools}) != len(pools):
        return None
    start, _ = S.file_span(seg, cfile)
    prefix_end = min(p[1] for p in pools)
    if raw != S.IMG[start + base - int(cfile, 16):start + base - int(cfile, 16) + len(raw)]:
        return None
    prefix = raw[:prefix_end-base]
    declaration = ('static const unsigned char rodata_%s[] = {\n%s\n};' % (cfile,
                   '\n'.join('    ' + ', '.join('0x%02X' % x for x in prefix[i:i+16]) + ','
                             for i in range(0, len(prefix), 16)))) if prefix else ''
    text = text[:owned.start()] + declaration + text[owned.end():]
    # Return earlier raw-tail donors to text-only form before repartitioning
    # the retained gaps around all compiler-owned pools.
    for m in list(kept_blocks.RECIPE.finditer(text)):
        recipe = json.loads(m[2])
        if 'rodata_bytes' not in recipe:
            continue
        recipe.pop('rodata_bytes')
        key = hashlib.sha1(json.dumps(recipe, sort_keys=True).encode()).hexdigest()[:16]
        out = 'asm/nonmatchings/%s/%s/_mrg_keep_tail_%s.s' % (seg, cfile, key)
        kept_blocks.rebuild(S, seg, cfile, out, recipe)
        text = text.replace('#pragma GLOBAL_ASM("%s")' % m[1], '#pragma GLOBAL_ASM("%s")' % out)
    text = kept_blocks.RECIPE.sub('', POOL.sub('', text))
    lines = text.splitlines()
    positions = []
    for n, _, _ in pools:
        def owns(line):
            m = re.match(r'^#pragma GLOBAL_ASM\("([^"]+)"\)', line)
            return m and re.search(r'^glabel %s$' % n, S._rd(m[1]), re.M)
        at = next((i for i, line in enumerate(lines) if
                   owns(line) or
                   ((m := S.DEFN.match(line)) and m[1] == n)), None)
        if at is None:
            return None
        positions.append(at)
    if positions != sorted(positions):
        return None
    for k, (_, _, hi) in enumerate(pools):
        cursor = hi
        stop = pools[k + 1][1] if k + 1 < len(pools) else end
        limit = positions[k + 1] if k + 1 < len(pools) else len(lines)
        padding = stop - cursor
        image_offset = start + cursor - int(cfile, 16)
        if 0 <= padding < (16 if stop == end else 8) and not any(S.IMG[image_offset:image_offset + padding]):
            continue  # Let compiler alignment supply this gap; exact verification is still required.
        for i in range(positions[k] + 1, limit):
            cursor = _donate(S, seg, cfile, lines, i, cursor, stop, start)
            if cursor is None:
                return None
        if cursor != stop:
            return None
    lines += ['/* hh-owned-pool %s %X %X */' % p for p in pools]
    return kept_blocks.annotate(S, seg, cfile, '\n'.join(lines) + '\n')


def emitted_range(S, path, name, snippet):
    """Only release objects actually emitted by C; named scalar loads keep storage."""
    import addrfix
    with tempfile.TemporaryDirectory(dir='build') as td:
        obj, _ = S.compile_file(snippet, td)
        if obj is None:
            return None
        refs = addrfix.mine_refs(obj, name) or {}
        target = addrfix.target_refs(path, int(name[-8:], 16))
        spans = []
        items = S._ro_items(S._rd(path))
        for offset, (_, symbol, _) in refs.items():
            original = target.get(offset)
            if symbol != '<section .rodata>' or not original:
                continue
            label = original[1]
            for section, address, lines in items:
                if section != '.late_rodata' or not re.search(r'\bdlabel %s\b' % label, '\n'.join(lines)):
                    continue
                scalar = S.LATE_ITEM.search('\n'.join(lines))
                if scalar:
                    size = 4 if scalar[3] == 'float' else 8
                else:
                    size = 4 * sum('.word ' in line for line in lines)
                if size:
                    spans.append((address, address + size))
        if spans:
            return min(a for a, _ in spans), max(b for _, b in spans)
    return None


def literal_companions(S, seg, cfile, text, name, snippet):
    """Let frozen C neighbours emit their own named constants to close donor gaps.

    This is a source proposal, not permission to change neighbour instructions.
    integrate's whole-file verifier must still prove every original byte.
    """
    if 'static const unsigned char rodata_' not in text:
        return None
    entries = S.entries(seg, cfile)
    target = next(e[1] for e in entries if e[0] == name)
    late = [address for section, address, _ in S._ro_items(S._rd(target)) if section == '.late_rodata']
    if not late:
        return None
    cutoff = min(late + [int(lo, 16) for _, lo, _ in POOL.findall(text)])
    companions = []
    blocked = S.link_blocked()
    for fn, path, *_ in entries:
        if (seg, fn) in blocked:
            continue
        constants = S.LATE_ITEM.findall(S._rd(path))
        if not constants or min(int(n[-8:], 16) for n, _, _ in constants) < cutoff:
            continue
        lines = text.splitlines(True)
        for i, line in enumerate(lines):
            m = S.DEFN.match(line) or S.KR_DEFN.match(line)
            if not m or m[1] != fn:
                continue
            depth, opened = 0, False
            for j in range(i, len(lines)):
                depth += lines[j].count('{') - lines[j].count('}')
                opened |= '{' in lines[j]
                if opened and depth == 0:
                    body = ''.join(lines[i:j + 1])
                    changed, spans = body, []
                    for n, bits, kind in constants:
                        value = struct.unpack('>f' if kind == 'float' else '>d', bytes.fromhex(bits))[0]
                        literal = repr(value) + ('f' if kind == 'float' else '')
                        changed = re.sub(r'\b' + n + r'(?:__\w+)?\b', '(' + literal + ')', changed)
                        addr = int(n[-8:], 16)
                        spans.append((addr, addr + (4 if kind == 'float' else 8)))
                    if changed != body:
                        text = text.replace(body, changed, 1)
                        companions.append((fn, min(a for a, _ in spans), max(b for _, b in spans)))
                    break
            break
    return release_tail(S, seg, cfile, text, name, snippet, companions) if companions else None


def _donate(S, seg, cfile, lines, i, cursor, end, start):
    m = re.match(r'^#pragma GLOBAL_ASM\("([^"]+)"\)', lines[i])
    if not m or cursor == end:
        return cursor
    p = m[1]
    block = S._rd(p)
    if S._ro_items(block):
        return None  # Only split text-only donors; no hidden data ownership.
    count = S.asm_weights(p)[0]
    capacity = max(0, (count - 8) // 3 * 4)
    size = min(capacity, end - cursor)
    if not size:
        return cursor
    recipe = dict(functions=re.findall(r'^glabel (func_[0-9A-F]{8})', block, re.M), rodata=[],
                  rodata_bytes=[cursor, start + cursor - int(cfile, 16), size])
    key = hashlib.sha1(json.dumps(recipe, sort_keys=True).encode()).hexdigest()[:16]
    out = 'asm/nonmatchings/%s/%s/_mrg_keep_tail_%s.s' % (seg, cfile, key)
    kept_blocks.rebuild(S, seg, cfile, out, recipe)
    lines[i] = '#pragma GLOBAL_ASM("%s")' % out
    return cursor + size


def repartition(S, seg, cfile, text, log=None):
    """Propose a complete readonly layout around the C pools actually emitted.

    Unlike release_tail this also handles mixed legacy ASM pools. Retained bytes
    get text-only ASM donors; donorless gaps can use a neighbour's own literals.
    The caller must prove the complete linked file, including rewritten bodies.
    """
    import addrfix
    original = text
    names = S.defined_functions(text)
    pools = []
    # Shared scalar pools may remain in standalone splat objects rather than
    # migrating into their user's function assembly. They are still candidates
    # for compiler ownership when a frozen neighbour emits its original literal.
    shared = {}
    for label, (_, lines) in kept_blocks.catalog(S, seg, cfile).items():
        scalar = S.LATE_ITEM.search('\n'.join(lines))
        if scalar:
            address = int(label[-8:], 16)
            shared[label] = (address, address + (4 if scalar[3] == 'float' else 8))
    with tempfile.TemporaryDirectory(dir='build') as td:
        obj, _ = S.compile_file(text, td)
        if obj is None:
            return None
        all_refs = addrfix.mine_refs_many(obj, names)
        for name, path, _offset, _size, vram in S.entries(seg, cfile):
            if name not in names:
                continue
            items = S._ro_items(S._rd(path))
            constants = dict(shared)
            for section, address, lines in items:
                if section != '.late_rodata':
                    continue
                scalar = S.LATE_ITEM.search('\n'.join(lines))
                size = (4 if scalar[3] == 'float' else 8) if scalar else 4 * sum('.word ' in l for l in lines)
                for label in re.findall(r'\bdlabel (\w+)', '\n'.join(lines)):
                    constants[label] = (address, address + size)
            refs = all_refs.get(name) or {}
            target = addrfix.target_refs(path, vram)
            spans = [constants[target[pos][1]] for pos, (_, symbol, _) in refs.items()
                     if symbol == '<section .rodata>' and pos in target and target[pos][1] in constants]
            if spans:
                pools.append((name, min(a for a, _ in spans), max(b for _, b in spans)))
    if not pools:
        if log: log('no compiler-owned late pools')
        return None
    base = S.FILE_RODATA.get((seg, cfile))
    if base is None:
        return None
    end = base + S.file_rodata_size(seg, cfile)
    if any(not base <= lo < hi <= end for _, lo, hi in pools):
        if log: log('pool outside readonly extent')
        return None
    if pools != sorted(pools, key=lambda p: p[1]) or any(a[2] > b[1] for a, b in zip(pools, pools[1:])):
        if log: log('overlapping or out-of-order compiler pools: ' + repr(pools))
        return None
    text = kept_blocks.RECIPE.sub('', POOL.sub('', text))
    text = re.sub(r'(?m)^static const unsigned char rodata_%s\[\] = \{[^}]+\};\n?' % re.escape(cfile), '', text)
    text = re.sub(r'(?m)^static const \w+ (?:D|jtbl)_[0-9A-F]{8}__rodata\[\] = .*;\n?', '', text)
    def strip(match):
        path = match[1]
        block = S._rd(path)
        if not S._ro_items(block):
            return match[0]
        functions = re.findall(r'^glabel (func_[0-9A-F]{8})', block, re.M)
        if not functions:
            return ''
        recipe = dict(functions=functions, rodata=[])
        key = hashlib.sha1(json.dumps(recipe, sort_keys=True).encode()).hexdigest()[:16]
        out = 'asm/nonmatchings/%s/%s/_mrg_keep_text_%s.s' % (seg, cfile, key)
        kept_blocks.rebuild(S, seg, cfile, out, recipe)
        return '#pragma GLOBAL_ASM("%s")' % out
    text = re.sub(r'^#pragma GLOBAL_ASM\("([^"]+)"\)', strip, text, flags=re.M)
    start, _ = S.file_span(seg, cfile)
    offset = start + base - int(cfile, 16)
    prefix = S.IMG[offset:offset + pools[0][1] - base]
    if prefix:
        text += '\nstatic const unsigned char rodata_%s[] = {\n%s\n};\n' % (cfile,
            '\n'.join('    ' + ', '.join('0x%02X' % x for x in prefix[i:i+16]) + ','
                      for i in range(0, len(prefix), 16)))
    lines = text.splitlines()
    positions = [next(i for i, l in enumerate(lines) if
                     ((m := S.DEFN.match(l) or S.KR_DEFN.match(l)) and m[1] == n)) for n, _, _ in pools]
    for k, (_, _, hi) in enumerate(pools):
        stop = pools[k+1][1] if k+1 < len(pools) else end
        limit = positions[k+1] if k+1 < len(pools) else len(lines)
        cursor = hi
        padding = stop - cursor
        image_offset = start + cursor - int(cfile, 16)
        if 0 <= padding < (16 if stop == end else 8) and not any(S.IMG[image_offset:image_offset+padding]):
            continue
        for i in range(positions[k]+1, limit):
            cursor = _donate(S, seg, cfile, lines, i, cursor, stop, start)
            if cursor is None:
                return None
        if cursor != stop:
            # A frozen C neighbour can own a named scalar in this donorless gap.
            # Try its original literal without altering any other function; the
            # final whole-file gate, not this proposal, decides codegen safety.
            filled = fill_named_gap(S, seg, cfile, original, cursor, stop)
            if filled is None:
                if log: log('no donor or literal companion for readonly gap [%X,%X)' % (cursor, stop))
                return None
            changed, functions = filled
            if log: log('literal companions for [%X,%X): %s' % (cursor, stop, ', '.join(functions)))
            return repartition(S, seg, cfile, changed, log)
    lines += ['/* hh-owned-pool %s %X %X */' % p for p in pools]
    return kept_blocks.annotate(S, seg, cfile, '\n'.join(lines) + '\n')


def fill_named_gap(S, seg, cfile, text, lo, hi):
    changed = []
    blocked = S.link_blocked()
    shared = [scalar for _, lines in kept_blocks.catalog(S, seg, cfile).values()
              for scalar in S.LATE_ITEM.findall('\n'.join(lines))
              if lo <= int(scalar[0][-8:], 16) < hi]
    for name, path, *_ in S.entries(seg, cfile):
        if (seg, name) in blocked:
            continue
        constants = list(dict.fromkeys(shared + [
            (n, bits, kind) for n, bits, kind in S.LATE_ITEM.findall(S._rd(path))
            if lo <= int(n[-8:], 16) < hi]))
        if not constants:
            continue
        lines = text.splitlines(True)
        for i, line in enumerate(lines):
            match = S.DEFN.match(line) or S.KR_DEFN.match(line)
            if not match or match[1] != name:
                continue
            depth, opened = 0, False
            for j in range(i, len(lines)):
                depth += lines[j].count('{') - lines[j].count('}')
                opened |= '{' in lines[j]
                if opened and depth == 0:
                    body = ''.join(lines[i:j+1])
                    new = body
                    for n, bits, kind in constants:
                        value = struct.unpack('>f' if kind == 'float' else '>d', bytes.fromhex(bits))[0]
                        if value != value or abs(value) == float('inf'):
                            continue
                        literal = '(' + repr(value) + ('f' if kind == 'float' else '') + ')'
                        new = re.sub(r'\b' + n + r'(?:__\w+)?\b', literal, new)
                    if new != body:
                        text = text.replace(body, new, 1)
                        changed.append(name)
                    break
            break
    return (text, changed) if changed else None
