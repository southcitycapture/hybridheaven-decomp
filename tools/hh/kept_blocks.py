"""Recipes for kept late-rodata blocks: src carries references to original asm, never generated asm bytes.

An asm neighbour supplies asm-processor's instruction budget for named late constants. Recipes let make setup
recreate these mixed blocks even when the neighbour is later split or another repaired function becomes C.
"""
import json, os, re

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
        ro = []
        for section, _, lines in S._ro_items(block):
            label = re.search(r'dlabel (\w+)', '\n'.join(lines)).group(1)
            ro.append([section, items[label][0], label])
        recipe = dict(functions=re.findall(r'^glabel (func_[0-9A-F]{8})', block, re.M), rodata=ro)
        return '/* hh-block %s %s */\n%s' % (path, json.dumps(recipe, separators=(',', ':')), m.group())
    return re.sub(r'^#pragma GLOBAL_ASM\("([^"]+)"\)', one, text, flags=re.M)

def rebuild(S, seg, cfile, path, recipe):
    out = []
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
