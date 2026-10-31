"""Recipes for kept late-rodata blocks: src carries references to original asm, never generated asm bytes.

An asm neighbour supplies asm-processor's instruction budget for named late constants. Recipes let make setup
recreate these mixed blocks even when the neighbour is later split or another repaired function becomes C.
"""
import json, os, re

BYTE_RANGE = re.compile(r'^# hh-rodata-range ([0-9A-F]+) ([0-9A-F]+) ([0-9A-F]+)$', re.M)

RECIPE = re.compile(r'^/\* hh-block (\S+) (.*) \*/\n?', re.M)

def custom(path):
    name = os.path.basename(path)
    return name.startswith(('_ro_', '_lr_')) or '_mrg_keep_' in name

def catalog(S, seg, cfile):
    out = {}
    paths = [e[1] for e in S.entries(seg, cfile)] + [p for _, p in S.rodata_blocks(seg, cfile)]
    for p in paths:
        for _, _, lines in S._ro_items(S._rd(p)):
            for n in re.findall(r'dlabel (\w+)', '\n'.join(lines)): out[n] = (p, lines)
    return out

def annotate(S, seg, cfile, text):
    text = RECIPE.sub('', text)
    items = None
    def one(m):
        nonlocal items
        path = m.group(1)
        if not custom(path): return m.group()
        if items is None: items = catalog(S, seg, cfile)
        with open(path) as fh: block = fh.read()
        raw = BYTE_RANGE.search(block)
        ro = []
        for section, _, lines in ([] if raw else S._ro_items(block)):
            label = re.search(r'dlabel (\w+)', '\n'.join(lines)).group(1)
            ro.append([section, items[label][0], label])
        recipe = dict(functions=re.findall(r'^glabel (func_[0-9A-F]{8})', block, re.M), rodata=ro)
        if raw: recipe['rodata_bytes'] = [int(x, 16) for x in raw.groups()]
        return '/* hh-block %s %s */\n%s' % (path, json.dumps(recipe, separators=(',', ':')), m.group())
    return re.sub(r'^#pragma GLOBAL_ASM\("([^"]+)"\)', one, text, flags=re.M)

def rebuild(S, seg, cfile, path, recipe):
    out = []
    if 'rodata_bytes' in recipe:
        address, offset, size = recipe['rodata_bytes']
        # Original readonly bytes, never instruction bytes. The recipe survives
        # fresh splat and records both image and VRAM coordinates explicitly.
        base = S.FILE_RODATA[(seg, cfile)]
        start, _ = S.file_span(seg, cfile)
        assert offset == start + address - int(cfile, 16)
        assert base <= address and address + size <= base + S.file_rodata_size(seg, cfile)
        assert size % 4 == 0
        out += ['# hh-rodata-range %X %X %X' % (address, offset, size),
                '.section .late_rodata', '.late_rodata_alignment %d' % (4 if address % 8 else 8)]
        labels = {int(n.rsplit('_', 1)[-1], 16): n for n in catalog(S, seg, cfile)
                  if re.match(r'^(D|jtbl)_[0-9A-F]{8}$', n)}
        for i in range(0, size, 4):
            addr = address + i
            if i == 0 or addr in labels:
                label = labels.get(addr, 'D_%08X' % addr)
                out += ['nonmatching ' + label, 'dlabel ' + label]
            bits = S.IMG[offset + i:offset + i + 4].hex().upper()
            out += ['/* %X %08X %s */ .word 0x%s' % (offset + i, addr, bits, bits)]
    for section, source, label in recipe['rodata']:
        try:
            lines = next(ls for _, _, ls in S._ro_items(S._rd(source)) if re.search(r'\bdlabel %s\b' % label, '\n'.join(ls)))
        except (FileNotFoundError, StopIteration):
            # A fresh splat may migrate a formerly standalone readonly object
            # into its sole function user. Recipes identify original labels;
            # resolve that label in this exact text unit, never another overlay.
            current = catalog(S, seg, cfile)
            if label not in current:
                raise ValueError('cannot find readonly recipe label %s in %s/%s' % (label, seg, cfile))
            _, lines = current[label]
        out += ['.section ' + section] + lines
    out += ['.section .text']
    for n in recipe['functions']:
        section = '.text'
        for l in S._rd('asm/nonmatchings/%s/%s/%s.s' % (seg, cfile, n)).splitlines():
            if l.startswith('.section'): section = l.split()[1]; continue
            if section == '.text': out.append(l)
    text = '\n'.join(out) + '\n'
    old = None
    if os.path.exists(path):
        with open(path) as fh: old = fh.read()
    if old != text:
        os.makedirs(os.path.dirname(path) or '.', exist_ok=True)
        with open(path, 'w') as fh: fh.write(text)
