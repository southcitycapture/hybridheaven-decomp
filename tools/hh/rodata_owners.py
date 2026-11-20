"""Readonly owner map of a text unit (method M2 of the Fable 5.2 wall study, 11-19).

Each readonly item of the target unit (a splat data label) becomes an interval with a kind and the functions whose
original instructions reference it:

    jtbl    a jump table: its relocated `.word .Lxxxx` entries only. Trailing zero words splat attached to the label
            are padding, owned by nobody.
    f32/f64 a compiler literal (late rodata `.float`/`.double`): the value only, not the zero word padding it.
    string  an `.asciz` string: its bytes, the NUL and the zero padding up to the next 4-byte boundary.
    named   anything else: every data line of the item (named objects own their zeros).

The planner pairs a new function's compiler pool entries with these intervals by relocation site (the original
instruction at the same offset names the label), splits frozen blobs and raw byte-range blocks at interval edges
only, and keeps every other byte as a frozen piece pinned at its address. Guardrail: an interval is released to a
function only when that function is its only user (no other function, data item or C source references it).
"""
import re
from collections import namedtuple

Interval = namedtuple('Interval', 'lo hi kind users')

DATA = re.compile(r'/\* [0-9A-F]+ ([0-9A-F]{8})(?: ([0-9A-F]+))? \*/\s*\.(word|float|double|asciz|ascii|byte|short|half)\b\s*(.*)$')
OPERAND = re.compile(r'%(?:hi|lo)\(\s*((?:D|jtbl)_[0-9A-F]{8})\b|\.word\s+((?:D|jtbl)_[0-9A-F]{8})\b')


def _image(S, seg, cfile, lo, hi):
    start, _ = S.file_span(seg, cfile)
    return S.IMG[start + lo - int(cfile, 16):start + hi - int(cfile, 16)]


def interval(S, seg, cfile, section, lines, address):
    """(lo, hi, kind) of one splat item, or None when its lines carry no data."""
    rows = [m for m in (DATA.search(l) for l in lines) if m]
    if not rows or int(rows[0][1], 16) != address:
        return None
    width = {'word': 4, 'float': 4, 'double': 8, 'byte': 1, 'short': 2, 'half': 2}
    text = '\n'.join(lines)
    label = re.search(r'\bdlabel (\w+)', text)
    label = label[1] if label else ''
    if label.startswith('jtbl_') or (rows[0][3] == 'word' and rows[0][4].startswith('.L')):
        n = 0
        for m in rows:
            if m[3] != 'word' or not m[4].startswith('.L') or int(m[1], 16) != address + 4 * n:
                break
            n += 1
        if n:
            return address, address + 4 * n, 'jtbl'
    if section == '.late_rodata' and rows[0][3] in ('float', 'double'):
        size = width[rows[0][3]]
        rest = _image(S, seg, cfile, address + size, max(int(m[1], 16) + width.get(m[3], 4) for m in rows))
        if not any(rest):
            return address, address + size, 'f32' if size == 4 else 'f64'
    if rows[0][3] == 'asciz' and len(rows) == 1:
        # the hex comment line after an .asciz spells its bytes, including the padding splat attached
        raw = re.search(r'^\s*/\* ([0-9A-F]+) \*/\s*$', text, re.M)
        if raw:
            data = bytes.fromhex(raw[1])
            if _image(S, seg, cfile, address, address + len(data)) == data and 0 in data:
                end = data.index(0) + 1
                padded = -(-end // 4) * 4
                if padded <= len(data) and not any(data[end:padded]):
                    end = padded
                return address, address + end, 'string'
    hi = 0
    for m in rows:
        if m[3] in width:
            hi = max(hi, int(m[1], 16) + (len(m[2]) // 2 if m[2] else width[m[3]]))
        elif m[2]:
            hi = max(hi, int(m[1], 16) + len(m[2]) // 2)
    if hi <= address:
        return None
    return address, hi, 'named'


def owner_map(S, seg, cfile):
    """{label: Interval} for the unit's readonly items, with the functions (and 'data') that reference each."""
    import kept_blocks
    items = kept_blocks.catalog(S, seg, cfile)
    sections = {}
    for p in [e[1] for e in S.entries(seg, cfile)] + [p for _, p in S.rodata_blocks(seg, cfile)]:
        for section, address, lines in S._ro_items(S._rd(p)):
            for n in re.findall(r'dlabel (\w+)', '\n'.join(lines)):
                sections[n] = (section, address)
    users = {}
    for name, path, *_ in S.entries(seg, cfile):
        section = '.text'
        for line in S._rd(path).splitlines():
            if line.startswith('.section'):
                section = line.split()[1]
                continue
            for m in OPERAND.finditer(line):
                users.setdefault(m[1] or m[2], set()).add(name if section == '.text' else 'data')
    for _, path in S.rodata_blocks(seg, cfile):
        for m in OPERAND.finditer(S._rd(path)):
            users.setdefault(m[1] or m[2], set()).add('data')
    out = {}
    for label, (path, lines) in items.items():
        if label not in sections:
            continue
        section, address = sections[label]
        span = interval(S, seg, cfile, section, lines, address)
        if span:
            out[label] = Interval(span[0], span[1], span[2], frozenset(users.get(label, ())))
    return out


def releasable(owners, label, name, text=None):
    """The guardrail: label's interval may move from frozen storage to `name`'s compiler output only when `name` is
    its only user. A C neighbour that still names the label (an extern read of frozen bytes) is a user too; the new
    function's own definition, comments and GLOBAL_ASM lines are not."""
    iv = owners.get(label)
    if iv is None or iv.users != {name}:
        return False
    if text is not None and re.search(r'\b%s\b' % re.escape(label), _c_outside(text, name)):
        return False
    return True


DEFINITION = re.compile(r'^(?!extern\b)[A-Za-z_][\w\s\*]*?\b(func_[0-9A-F]{8})\s*\(')


def _c_outside(text, name):
    """C text without comments, preprocessor lines, one-line extern declarations and the definition of `name`."""
    text = re.sub(r'/\*.*?\*/', ' ', text, flags=re.S)
    out, lines, i = [], text.splitlines(), 0
    while i < len(lines):
        line = lines[i]
        m = DEFINITION.match(line)
        if m and m[1] == name and ';' not in line.split('{')[0]:
            depth, opened = 0, False
            while i < len(lines):
                depth += lines[i].count('{') - lines[i].count('}')
                opened |= '{' in lines[i]
                i += 1
                if opened and depth <= 0:
                    break
            continue
        if not line.lstrip().startswith('#') and not re.match(r'\s*extern\b[^;{}]*;\s*$', line):
            out.append(line)    # a file-scope extern declaration reads nothing; a body or initializer does
        i += 1
    return '\n'.join(out)
