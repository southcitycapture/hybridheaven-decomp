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

import kept_blocks

POOL = re.compile(r'^/\* hh-owned-pool (func_[0-9A-F]{8}) ([0-9A-F]+) ([0-9A-F]+) \*/$', re.M)

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
    for fn, path, *_ in entries:
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
    with tempfile.TemporaryDirectory(dir='build') as td:
        obj, _ = S.compile_file(text, td)
        if obj is None:
            return None
        all_refs = addrfix.mine_refs_many(obj, names)
        for name, path, *_ in S.entries(seg, cfile):
            if name not in names:
                continue
            items = S._ro_items(S._rd(path))
            constants = {}
            for section, address, lines in items:
                if section != '.late_rodata':
                    continue
                scalar = S.LATE_ITEM.search('\n'.join(lines))
                size = (4 if scalar[3] == 'float' else 8) if scalar else 4 * sum('.word ' in l for l in lines)
                for label in re.findall(r'\bdlabel (\w+)', '\n'.join(lines)):
                    constants[label] = (address, address + size)
            refs = all_refs.get(name) or {}
            target = addrfix.target_refs(path, int(name[-8:], 16))
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
    for name, path, *_ in S.entries(seg, cfile):
        constants = [(n, bits, kind) for n, bits, kind in S.LATE_ITEM.findall(S._rd(path))
                     if lo <= int(n[-8:], 16) < hi]
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
