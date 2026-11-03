"""Mine original ROM data for debug/source structure; no build inputs are modified.

Run from the repository root: python tools/hh/debug_strings.py
The binary is authoritative (including data now represented by C integer arrays).
Addresses are segment-qualified: overlays reuse virtual addresses. Only direct
references are attributed to functions; data-pointer tables are not call graphs.
"""
import argparse
from collections import Counter, defaultdict
import json
from pathlib import Path
import re
import unicodedata


TOKEN = re.compile(r'/\*.*?\*/|//[^\n]*|"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'', re.S)
SOURCE = re.compile(r'(?:[A-Za-z]:)?[/\\]?(?:[A-Za-z0-9_.\-]+[/\\])*[A-Za-z_][A-Za-z0-9_.\-]*\.(?:c|h|cpp|cc|s)\b')
INSN = re.compile(r'/\* ([0-9A-F]+) ([0-9A-F]{8}) ([0-9A-F]{8}) \*/[ \t]*(\w+)[ \t]*(.*)')
LABEL = re.compile(r'^\s*(?:dlabel|glabel|jlabel)\s+(\w+)', re.M)
RELOC = re.compile(r'%(hi|lo)\((\w+)(?:\s*\+\s*(0x[\dA-Fa-f]+|\d+))?\)')
SYMBOL = re.compile(r'\bD_([0-9A-Fa-f]{8})(?:\s*\+\s*(0x[\dA-Fa-f]+|\d+))?')
DIRECTIVE = re.compile(r'/\* ([\dA-F]+) ([\dA-F]{8})(?: [\dA-F]+)? \*/\s*\.(\w+)')


def uncomment(text):
    return TOKEN.sub(lambda m: ' ' * len(m[0]) if m[0].startswith('/') else m[0], text)


def segments(text):
    """Read the deliberately simple generated YAML, without importing srcbuild.

    This is the same subsegment ownership used by srcbuild.file_of, but avoids
    that module's compiler/dependency imports and import-time chdir.
    """
    result = []
    current = None
    for line in text.splitlines():
        m = re.match(r'  - name: (\w+)', line)
        if m:
            current = dict(name=m[1], subs=[])
            result.append(current)
        m = re.match(r'    (type|start|vram|bss_size): (\S+)', line)
        if m and current is not None:
            current[m[1]] = int(m[2], 0) if m[1] != 'type' else m[2]
        m = re.match(r'      - \[(0x[\dA-Fa-f]+), ([.\w]+)(?:, ([\w/]+))?\]', line)
        if m and current is not None:
            current['subs'].append((int(m[1], 16), m[2], m[3]))
    # The next segment may use the one-line YAML notation (main's end does).
    starts = [int(x, 16) for x in re.findall(r'^(?:    start: |  - \[)(0x[\dA-Fa-f]+)', text, re.M)]
    for seg in result:
        if seg.get('type') != 'code' or 'vram' not in seg:
            continue
        seg['end'] = min(x for x in starts if x > seg['start'])
        seg['ranges'] = []
        for i, (start, kind, owner) in enumerate(seg['subs']):
            if kind.lstrip('.') in ('data', 'rodata', 'late_rodata'):
                end = seg['subs'][i + 1][0] if i + 1 < len(seg['subs']) else seg['end']
                seg['ranges'].append((start, end, kind, owner))
    return [s for s in result if 'ranges' in s]


def target_segment(segs, seg, address):
    """Local BSS wins over another overlay's initialized image; foreign BSS is ambiguous."""
    if address is None:
        return None
    def covers(s):
        return s['vram'] <= address < s['vram'] + s['end'] - s['start'] + s.get('bss_size', 0)
    local = next((s for s in segs if s['name'] == seg), None)
    if local and covers(local):
        return seg
    owners = [s for s in segs if covers(s)]
    if len(owners) == 1 and address < owners[0]['vram'] + owners[0]['end'] - owners[0]['start']:
        return owners[0]['name']
    return None


def decodings(raw):
    """Strict ASCII/EUC-JP only: SJIS-only byte runs were unconfirmed numeric noise."""
    out = []
    for enc in ('ascii', 'euc_jp'):
        try:
            text = raw.decode(enc)
        except UnicodeDecodeError:
            continue
        if any(unicodedata.category(c).startswith('C') and c not in '\t\r\n\b\f\v\a\x1b' for c in text):
            continue
        if enc != 'ascii' and all(ord(c) < 128 for c in text):
            continue
        out.append(dict(encoding=enc, text=text))
    return out


def extract(data, start, end, anchors=(), asm_starts=(), limit=None, preferred=()):
    """NUL-terminated printable candidates, including short anchored strings.

    Scan maximal runs as well as labels/reference targets, so a string following
    non-string binary bytes without intervening NUL is still recoverable. Retain
    unreferenced candidates rather than silently treating tables as certain text.
    """
    limit = end if limit is None else limit
    starts = set(anchors)
    starts.update(start + m.start() for m in re.finditer(rb'[\x08\x09\x0a\x0d\x1b\x20-\xff]+(?=\x00)', data[start:limit])
                  if start + m.start() < end)
    found = {}
    for off in sorted(starts):
        if not start <= off < end:
            continue
        stop = data.find(b'\0', off, limit)
        if stop < 0:
            continue
        raw = data[off:stop]
        if off not in preferred and any(off < a < stop for a in preferred):
            continue  # a binary prefix must not swallow a labelled string
        choices = decodings(raw)
        if not choices and off in asm_starts:
            # Preserve even a spimdisasm "string" that is actually binary or
            # has invalid Japanese bytes; never silently drop explicit data.
            choices = [dict(encoding='raw', text=raw.decode('ascii', errors='backslashreplace'))]
        if not choices or (not raw and off not in asm_starts):
            continue
        text = choices[0]['text']
        if off not in anchors and (len(text.strip()) < 4 or not any(c.isalpha() for c in text)):
            continue
        found[off] = (raw, choices)
    return found


def instructions(text):
    return [(int(m[2], 16), int(m[3], 16), m[4], m[5].strip())
            for m in INSN.finditer(text)]


def asm_references(text):
    """Symbol relocation evidence, only address-forming hi/lo pairs.

    A %lo on lw/lwc1 is a value load, not a pointer to a string.
    """
    hi = {}
    out = []
    for pc, word, op, args in instructions(text):
        m = RELOC.search(args)
        if not m:
            continue
        key = (m[2], int(m[3] or '0', 0))
        if m[1] == 'hi' and op == 'lui':
            hi[(word >> 16) & 31] = (key[0], (word & 0xffff) << 16)
        elif m[1] == 'lo' and op in ('addiu', 'ori') and hi.get((word >> 21) & 31, (None,))[0] == key[0]:
            address = re.fullmatch(r'D_([0-9A-Fa-f]{8})', key[0])
            if address:
                immediate = word & 0xffff
                actual = (hi[(word >> 21) & 31][1] + (immediate if immediate < 0x8000 else immediate - 0x10000)) & 0xffffffff
                if op == 'ori':
                    actual = hi[(word >> 21) & 31][1] | immediate
                if actual == int(address[1], 16) + key[1]:
                    out.append((actual, pc))
    return out


def c_functions(text):
    """Balanced C function bodies; declarations and GLOBAL_ASM aren't uses."""
    masked = TOKEN.sub(lambda m: ' ' * len(m[0]) if m[0][0] in '\"\'' or m[0].startswith('/') else m[0], text)
    pattern = re.compile(r'^\s*(?!extern\b|typedef\b)[\w*\s]+?\b(\w+)\s*\([^;{}]*\)\s*\{', re.M)
    candidates = [(m.start(), m.end(), m[1]) for m in pattern.finditer(masked)]
    kr = re.compile(r'^\s*(?!extern\b|typedef\b)[\w*\s]+?\b(\w+)\s*\('
                    r'\s*([A-Za-z_]\w*(?:\s*,\s*[A-Za-z_]\w*)*)\s*\)', re.M)
    for m in kr.finditer(masked):
        if m[2].strip() == 'void':
            continue
        pos, declarations = m.end(), 0
        # Scan declarations explicitly; nested repetition of whitespace and
        # declaration regexes causes catastrophic backtracking on large C files.
        for _ in range(64):
            while pos < len(masked) and masked[pos].isspace():
                pos += 1
            if pos < len(masked) and masked[pos] == '{':
                if declarations:
                    candidates.append((m.start(), pos + 1, m[1]))
                break
            decl = re.match(r'[A-Za-z_][^;{}()]*;', masked[pos:])
            if not decl:
                break
            declarations += 1
            pos += decl.end()
    end = 0
    for start, opening, name in sorted(candidates):
        if start < end:
            continue
        depth, end = 1, opening
        while end < len(masked) and depth:
            depth += (masked[end] == '{') - (masked[end] == '}')
            end += 1
        yield name, text[opening:end - 1], masked[opening:end - 1]


def c_bytes(literal):
    """C literal bytes for the encodings used in the ROM (including octal)."""
    chunks = re.findall(r'\\(?:[0-7]{1,3}|x[\da-fA-F]+|.)|[^\\]+', literal)
    for enc in ('euc_jp', 'shift_jis', 'utf-8'):
        out = bytearray()
        try:
            for chunk in chunks:
                if not chunk.startswith('\\'):
                    out.extend(chunk.encode(enc))
                elif re.fullmatch(r'\\[0-7]{1,3}', chunk):
                    out.append(int(chunk[1:], 8))
                elif chunk.startswith('\\x'):
                    out.append(int(chunk[2:], 16))
                else:
                    out.extend({'n': b'\n', 'r': b'\r', 't': b'\t', 'b': b'\b', 'a': b'\a',
                                '\\': b'\\', '"': b'"', "'": b"'", '?': b'?'}.get(chunk[1:], b''))
        except (UnicodeEncodeError, ValueError):
            continue
        yield bytes(out)


def call_arguments(insns):
    """Conservative local MIPS constant propagation, with branch/call barriers.

    Includes the jal delay slot and o32 stack args. Unknown writes kill values;
    no path merging is attempted. Candidates are *not* asserted source lines.
    """
    regs, stack, pending = {0: 0}, {}, None
    joins = set()
    for pc, word, _, _ in insns:
        opcode, rs = word >> 26, (word >> 21) & 31
        if opcode in (1, 4, 5, 6, 7, 20, 21, 22, 23) or (opcode == 17 and rs == 8):
            imm = word & 0xffff
            joins.add(pc + 4 + (imm if imm < 0x8000 else imm - 0x10000) * 4)
        elif opcode == 2:
            joins.add(((pc + 4) & 0xf0000000) | ((word & 0x3ffffff) << 2))
    for pc, word, op, args in insns:
        if pc in joins:
            regs, stack = {0: 0}, {}
        opcode, rs, rt, rd = word >> 26, (word >> 21) & 31, (word >> 16) & 31, (word >> 11) & 31
        imm = word & 0xffff
        signed = imm if imm < 0x8000 else imm - 0x10000
        value = None
        dest = None
        if opcode == 15:  # lui
            dest, value = rt, imm << 16
        elif opcode in (9, 13):  # addiu / ori
            dest = rt
            if rs in regs:
                value = ((regs[rs] + signed) if opcode == 9 else (regs[rs] | imm)) & 0xffffffff
        elif opcode == 0 and word & 63 in (0x21, 0x25):
            dest = rd
            if rs in regs and rt in regs:
                value = ((regs[rs] + regs[rt]) if word & 63 == 0x21 else (regs[rs] | regs[rt])) & 0xffffffff
        elif opcode == 43 and rs == 29:  # sw ..., n(sp)
            stack[signed] = regs.get(rt)
        elif opcode in (40, 41, 42, 46, 57, 61) and rs == 29:
            # A partial/floating store invalidates overlapping integer args.
            for off in range(signed & ~3, (signed & ~3) + (8 if opcode == 61 else 4), 4):
                stack.pop(off, None)
        elif opcode in (16, 17) and rs in (0, 1, 2):  # mfc/cfc/dmfc
            dest = rt
        elif opcode == 0 and word & 63 not in (8, 9, 12, 13, 16, 17, 18, 19, 24, 25, 26, 27):
            dest = rd
        elif opcode not in (0, 1, 2, 3, 4, 5, 6, 7, 16, 17, 20, 21, 22, 23, 40, 41, 42, 43, 46, 49, 53, 57, 61):
            dest = rt
        if dest == 29:
            stack = {}
        if dest and value is None:
            regs.pop(dest, None)
        elif dest:
            regs[dest] = value
        if pending is not None:
            yield pending, {**{i: regs.get(i + 4) for i in range(4)},
                            **{i // 4: v for i, v in stack.items() if 16 <= i < 64}}
            regs = {k: v for k, v in regs.items() if k == 0 or 16 <= k <= 23 or k in (29, 30)}
            stack = {}
            pending = None
        if opcode == 3 or (opcode == 0 and word & 63 == 9):
            pending = pc
        elif opcode in (1, 2, 4, 5, 6, 7, 20, 21, 22, 23) or (opcode == 17 and rs == 8):
            regs, stack = {0: 0}, {}


def debug_call_arguments(insns, entries=()):
    """Backward argument slice, stopping at calls on each control-flow path.

    Delay-slot-aware predecessors avoid mixing alternate arms of a switch.
    At joins accept only unanimous constants; loops/unknown writes stay unknown.
    """
    pred = defaultdict(set)
    call_slots = set()
    edges = {i: {i + 1} for i in range(len(insns) - 1)}
    for i, (pc, w, _, _) in enumerate(insns):
        op, rs, fn = w >> 26, (w >> 21) & 31, w & 63
        if op == 3 or (op == 0 and fn == 9):
            call_slots.add(i + 1)
        conditional = op in (1, 4, 5, 6, 7, 20, 21, 22, 23) or (op == 17 and rs == 8)
        if conditional or op == 2 or (op == 0 and fn == 8):
            imm = w & 0xffff
            target = i + 1 + (imm if imm < 0x8000 else imm - 0x10000)
            if op == 2:
                target = ((((pc + 4) & 0xf0000000) | ((w & 0x3ffffff) << 2)) - insns[0][0]) // 4
            if op == 0:
                edges[i + 1] = set()
            else:
                unconditional = op == 2 or (op == 4 and (w >> 21) & 31 == (w >> 16) & 31)
                likely = op in (20, 21, 22, 23) or (op == 17 and rs == 8 and (w >> 17) & 1)
                edges[i + 1] = {target} | ({i + 2} if conditional and not unconditional and not likely else set())
                if likely:
                    edges[i] = {i + 1, i + 2}
    for i, dests in edges.items():
        for j in dests:
            if 0 <= j < len(insns):
                pred[j].add(i)
    # IDO leaves unreachable instructions just before branch targets. An
    # unlabelled instruction with no predecessor is not an incoming path.
    # Labelled blocks remain possible indirect-switch entries.
    for i in range(1, len(insns) - 1):
        if not pred[i] and i in pred[i + 1] and len(pred[i + 1]) > 1 and insns[i][0] not in entries:
            pred[i + 1].remove(i)
    for call, defaults in call_arguments(insns):
        word = next(x[1] for x in insns if x[0] == call)
        if word >> 26 != 3 or (((call + 4) & 0xf0000000) | ((word & 0x3ffffff) << 2)) != 0x8011AAF4:
            continue
        root = next(i for i, x in enumerate(insns) if x[0] == call) + 1
        memo, active = {}, set()
        def after(i, reg):
            if reg == 0:
                return 0
            key = i, reg
            if key in memo:
                return memo[key]
            if key in active or len(active) > 300 or i < 0 or i >= len(insns):
                return None
            if i in call_slots and i != root:
                return None
            active.add(key)
            def before(r):
                values = [after(p, r) for p in pred[i]]
                return values[0] if values and all(v == values[0] for v in values) else (0 if r == 0 else None)
            w = insns[i][1]
            op, rs, rt, rd, fn = w >> 26, (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31, w & 63
            imm = w & 0xffff
            signed = imm if imm < 0x8000 else imm - 0x10000
            dest = (rd if op == 0 and fn not in (8, 12, 13, 17, 19, 24, 25, 26, 27) else
                    rt if op in (8, 9, 10, 11, 12, 13, 14, 15, 32, 33, 34, 35, 36, 37, 38, 39, 48, 52, 55)
                    or (op in (16, 17) and rs in (0, 1, 2)) else None)
            value = None
            if dest != reg:
                value = before(reg)
            elif op == 15:
                value = imm << 16
            elif op in (9, 13):
                x = before(rs)
                if x is not None:
                    value = ((x + signed) if op == 9 else x | imm) & 0xffffffff
            elif op == 0 and fn in (0x21, 0x25):
                x, y = before(rs), before(rt)
                if x is not None and y is not None:
                    value = ((x + y) if fn == 0x21 else x | y) & 0xffffffff
            active.remove(key)
            memo[key] = value
            return value
        yield call, {**defaults, **{n: defaults.get(n) if defaults.get(n) is not None else after(root, n + 4)
                                   for n in (0, 1)}}


def mine(root):
    segs = segments((root / 'hybridheaven.yaml').read_text())
    image = (root / 'build/expanded.bin').read_bytes()
    # Function ownership from the canonical asm tree, identical to file_of().
    functions, symbols, asm_data = {}, defaultdict(list), defaultdict(list)
    string_starts, numeric_bytes = defaultdict(set), defaultdict(set)

    def data_evidence(seg, text, path):
        for m in DIRECTIVE.finditer(text):
            off, address, kind = int(m[1], 16), int(m[2], 16), m[3]
            if kind in ('ascii', 'asciz', 'asciiz', 'string'):
                string_starts[seg].add(address)
                symbols[(seg, address)].append(str(path.relative_to(root)))
            elif kind in ('float', 'double'):
                numeric_bytes[seg].update(range(address, address + (8 if kind == 'double' else 4)))

    for path in sorted((root / 'asm/nonmatchings').glob('*/*/*.s')):
        if path.name.startswith('_'):
            continue  # generated merge/late-rodata twins duplicate canonical files
        text = path.read_text()
        seg, owner = path.parts[-3:-1]
        data_evidence(seg, text, path)
        insns = instructions(text)
        isfunc = bool(insns and re.search(r'^nonmatching \w+, 0x', text, re.M))
        if isfunc:
            name = re.search(r'^nonmatching (\w+),', text, re.M)[1]
            functions[(seg, name)] = dict(name=name, address=insns[0][0], segment=seg,
                                         source_file=f'src/{seg}/{owner}.c', asm=str(path.relative_to(root)),
                                          insns=insns, targets=asm_references(text),
                                          entries={int(x, 16) for x in re.findall(r'^\s*\.L([0-9A-F]{8}):', text, re.M)})
        for label in LABEL.findall(text):
            m = re.fullmatch(r'D_([\dA-Fa-f]{8})', label)
            if m:
                symbols[(seg, int(m[1], 16))].append(str(path.relative_to(root)))
    for path in sorted((root / 'asm/data').rglob('*.s')):
        if '.bss.' in path.name:
            continue
        text = path.read_text()
        m = re.search(r'/\* ([\dA-F]+) ([\dA-F]{8}) ', text)
        if m:
            off = int(m[1], 16)
            for seg in segs:
                if seg['start'] <= off < seg['end']:
                    asm_data[seg['name']].append((str(path.relative_to(root)), text))
                    data_evidence(seg['name'], text, path)
    # C data definitions are another useful anchor/provenance source, even when
    # represented as integer initializers rather than C string literals.
    for path in sorted((root / 'src/data').rglob('*.c')):
        seg = path.parts[-2]
        text = uncomment(path.read_text())
        for m in re.finditer(r'^\s*(?!extern\b)\w+\s+D_([\dA-F]{8})\s*\[', text, re.M):
            symbols[(seg, int(m[1], 16))].append(str(path.relative_to(root)))
    resolve = lambda seg, address: target_segment(segs, seg, address)

    target_anchors = defaultdict(set)
    for (seg, _), fn in functions.items():
        for address, _ in fn['targets']:
            owner = resolve(seg, address)
            if owner:
                target_anchors[owner].add(address)
        for _, args in debug_call_arguments(fn['insns'], fn['entries']):
            owner = resolve(seg, args.get(0))
            if owner:
                target_anchors[owner].add(args[0])
    records = {}
    for seg in segs:
        name, delta = seg['name'], seg['vram'] - seg['start']
        anchors = {a - delta for (s, a) in symbols if s == name}
        anchors.update(a - delta for a in target_anchors[name])
        preferred = {a - delta for a in target_anchors[name]}
        for _, text in asm_data[name]:
            anchors.update(int(m[1], 16) - delta for m in re.finditer(r'\bD_([\dA-F]{8})', text))
        covered_until = -1
        for start, end, kind, owner in seg['ranges']:
            previous_end = covered_until
            asm_starts = {a - delta for a in string_starts[name]}
            for off, (raw, choices) in extract(image, start, end, anchors, asm_starts, seg['end'], preferred).items():
                # A cut inside a recovered string must not create a fake tail.
                if off < previous_end and off not in preferred:
                    continue
                covered_until = max(covered_until, off + len(raw) + 1)
                addr = off + delta
                records[(name, addr)] = dict(address=f'0x{addr:08X}', rom_offset=f'0x{off:X}',
                    segment=name, section=kind.lstrip('.'), text=choices[0]['text'], encoding=choices[0]['encoding'],
                    decoding_alternatives=choices[1:], bytes_hex=raw.hex(),
                    data_owner=owner, straddles_subsegment=off + len(raw) >= end,
                    definitions=sorted(set(symbols.get((name, addr), []))), references=[])
                records[(name, addr)]['string_evidence'] = (
                    'asm_string' if addr in string_starts[name] else
                    'numeric_candidate' if addr in numeric_bytes[name] else 'printable_candidate')
    def lookup(seg, address):
        return records.get((resolve(seg, address), address))
    for (seg, _), fn in functions.items():
        for address, pc in fn['targets']:
            row = lookup(seg, address)
            if row:
                row['references'].append(dict(function=fn['name'], segment=seg, source_file=fn['source_file'],
                    kind='asm_hi_lo', file=fn['asm'], instruction=f'0x{pc:08X}'))
    # Index literal bytes, resolving duplicates with canonical asm evidence.
    literal_index = defaultdict(list)
    for row in records.values():
        literal_index[bytes.fromhex(row['bytes_hex'])].append(row)
    for base in ('src', 'matched'):
        for path in sorted((root / base).rglob('*.c')):
            if path.parts[len(root.parts) + 1] == 'data':
                continue
            seg = path.parts[len(root.parts) + 1]
            text = path.read_text(errors='replace')
            for name, body, masked in c_functions(text):
                fn = functions.get((seg, name))
                if fn is None:
                    continue
                hits = []
                for m in SYMBOL.finditer(masked):
                    row = lookup(seg, int(m[1], 16) + int(m[2] or '0', 0))
                    if row:
                        hits.append((row, 'c_symbol'))
                for m in re.finditer(r'"(?:\\.|[^"\\])*"(?:\s*"(?:\\.|[^"\\])*")*', uncomment(body)):
                    literal = ''.join(re.findall(r'"((?:\\.|[^"\\])*)"', m[0]))
                    for raw in set(c_bytes(literal)):
                        candidates = literal_index[raw]
                        direct = [r for r in candidates if any(x['function'] == name and x['segment'] == seg for x in r['references'])]
                        local = [r for r in candidates if r['segment'] in (seg, 'main')]
                        for row in direct or (local if len(local) == 1 else []):
                            hits.append((row, 'c_literal'))
                for row, kind in hits:
                    if any(r['function'] == name and r['segment'] == seg and r['kind'] == kind
                           for r in row['references']):
                        continue  # src and registry copies are one logical use
                    ref = dict(function=name, segment=seg, source_file=fn['source_file'], kind=kind,
                               file=str(path.relative_to(root)))
                    if ref not in row['references']:
                        row['references'].append(ref)
    for row in records.values():
        row['references'].sort(key=lambda r: (r['segment'], r['function'], r['kind'], r.get('instruction', ''), r['file']))
        row['source_paths'] = sorted(set(SOURCE.findall(row['text']))) if row['string_evidence'] != 'numeric_candidate' else []
        row['classification'] = ('numeric_candidate' if row['string_evidence'] == 'numeric_candidate' else
                                 'string' if row['string_evidence'] == 'asm_string' else 'unconfirmed_candidate')
        row['line_candidates'] = []
    for seg in segs:
        seg['unextracted_asm_strings'] = []
        for a in sorted(string_starts[seg['name']]):
            if (seg['name'], a) not in records:
                off = a - seg['vram'] + seg['start']
                if any(r['segment'] == seg['name'] and int(r['rom_offset'], 16) < off <
                       int(r['rom_offset'], 16) + len(r['bytes_hex']) // 2 + 1 for r in records.values()):
                    continue  # asm directive is a tail of a straddling string
                stop = image.find(b'\0', off, seg['end'])
                seg['unextracted_asm_strings'].append(dict(address=f'0x{a:08X}',
                    bytes_hex=image[off:stop if stop >= 0 else seg['end']].hex(),
                    definitions=symbols[(seg['name'], a)]))
    # Only a file/path pointer immediately followed by a small constant argument
    # to the *same call* is considered line-like. Never use nearby arbitrary li's.
    for (seg, name), fn in functions.items():
        calls = {pc: word for pc, word, _, _ in fn['insns']}
        recovered = dict(debug_call_arguments(fn['insns'], fn['entries']))
        fn['debug_calls'] = []
        for pc, args in call_arguments(fn['insns']):
            target = ((pc + 4) & 0xf0000000) | ((calls[pc] & 0x3ffffff) << 2) if calls[pc] >> 26 == 3 else None
            if target == 0x8011AAF4:
                args = recovered.get(pc, args)
                row = lookup(seg, args.get(0))
                if row and row['source_paths'] and not any(r['segment'] == seg and r['function'] == name
                                                          and r['kind'].startswith('asm_') for r in row['references']):
                    row['references'].append(dict(function=name, segment=seg, source_file=fn['source_file'],
                        kind='asm_call_argument', file=fn['asm'], instruction=f'0x{pc:08X}'))
                fn['debug_calls'].append(dict(call=f'0x{pc:08X}', path=bool(row and row['source_paths']),
                    line=bool(row and row['source_paths'] and args.get(1) and 0 < args[1] < 20000)))
            for index, address in args.items():
                row = lookup(seg, address)
                line = args.get(index + 1)
                if row and row['source_paths'] and line is not None and 0 < line < 20000:
                    row['line_candidates'].append(dict(function=name, segment=seg, source_file=fn['source_file'],
                        call=f'0x{pc:08X}', file_argument=index, line_argument=index + 1, line=line,
                        call_target=(f'0x{((pc + 4) & 0xf0000000) | ((calls[pc] & 0x3ffffff) << 2):08X}'
                                     if calls[pc] >> 26 == 3 else 'indirect'),
                         confidence=('audited file/line API' if target == 0x8011AAF4 else
                                     'candidate: adjacent call arguments, not proven __LINE__')))
    for row in records.values():
        row['references'].sort(key=lambda r: (r['segment'], r['function'], r['kind'], r.get('instruction', ''), r['file']))
    return sorted(records.values(), key=lambda r: int(r['rom_offset'], 16)), segs, functions


def md(text, limit=None):
    text = text.replace('\n', r'\n').replace('\r', r'\r').replace('\t', r'\t').replace('|', r'\|')
    for char in '\x1b\b\f\v\a':
        text = text.replace(char, f'\\x{ord(char):02x}')
    text = text.replace('`', '&#96;')
    return text if limit is None or len(text) <= limit else text[:limit] + '…'


# Human-readable, deliberately conservative interpretation of this ROM's strings.
# The per-overlay evidence table below includes the exact addresses behind these.
OVERLAYS = {
    'entry': 'Boot entry; no initialized data/rodata strings.',
    'main': 'Resident engine: ROM transfer/decompression (trans.c), font/graphics diagnostics.',
    'file008': 'Core game systems: camera operation/manager/change, ground doors, base/auto model and texture loading.',
    'file009': 'Player/demo support: demo cameras and helpers, ground door demos, player p1.',
    'file010': 'Player movement and devices/enemies: jump/fall diagnostics, kugutu, wanderer.',
    'file011': 'Battle/hit and drawing diagnostics (HIT L/R; picture parameter formats); exact module names absent.',
    'file012': 'CPU/demo-play controls (CPU_STEP, DEMO PLAY).',
    'file013': 'Alarm device and camera-return behaviour (device/alarm.c; camera modosu2).',
    'file014': 'Area 2 demos, bridge/chase device and enemy e_40.',
    'file015': 'Area 3 scene demos: capsule, elevators, bridge, control room, showdown.',
    'file016': 'Area 4 demos and elevator scene.',
    'file017': 'Area 5 scene demos, beam shields and elemental/navigation/transport demos.',
    'file018': 'Enemy e_f40/e_n40, wall/door behaviour.',
    'file020': 'Area 8 demos (a08demo, a08_s02demo).',
    'file021': 'Area 9 elevator demo and capsule glass colour.',
    'file022': 'Area 10 explosion demos and object creation.',
    'file024': 'Title/menu and expansion RAM handling (titlescreen.c, expansionram.c).',
    'file025': 'Demo task/talk/timer support (DEMOTIMER/DEMOTALK waiting and task/thread diagnostics).',
    'file026': 'Narrative/location presentation: WASHINGTON D.C., NEW YORK, December 2000; not source file names.',
    'file027': 'A D_WARU_X1 diagnostic; insufficient evidence for an overlay role.',
    'file044': 'Vector/position format (%f,%f,%f); insufficient evidence for an overlay role.',
    'file054': 'Area 6-to-8 transition demo (area6to8demo.c); isolated mo.c has no direct user.',
    'file056': 'Player damage/demo/save points and messenger device; inventory/full-box and offence-up UI.',
    'file057': 'Battle motion camera and combat UI: rolls, combos, Keep this combo?.',
    'file099': 'Stage-select/debug menu (STAGE SELECT).',
    'file100': 'Demo camera controller (democamera.c), fades and demo sound.',
}


def overview(rows, segs):
    paths = {p for row in rows for p in row['source_paths']}
    evidence = [x for row in rows for x in row['line_candidates']]
    return dict(strings=len(rows), referenced=sum(bool(r['references']) for r in rows),
                encodings=dict(Counter(r['encoding'] for r in rows)),
                classifications=dict(Counter(r['classification'] for r in rows)),
                referenced_strings=sum(bool(r['references']) and r['classification'] == 'string' for r in rows),
                source_paths=len(paths), absolute_source_paths=sum(p.startswith('/') for p in paths),
                line_candidates=len(evidence), line_functions=len({(x['segment'], x['function']) for x in evidence}),
                line_source_paths=len({p for row in rows if row['line_candidates'] for p in row['source_paths']}),
                line_targets=dict(Counter(x['call_target'] for x in evidence)),
                reference_kinds=dict(Counter(x['kind'] for row in rows for x in row['references'])), segments=len(segs),
                 unextracted_asm_strings={s['name']: s['unextracted_asm_strings'] for s in segs if s['unextracted_asm_strings']})


def ownership_mismatches(rows):
    """Actual rodata owner versus canonical user; group evidence by file pair."""
    pairs = defaultdict(list)
    for row in rows:
        if row['section'] not in ('rodata', 'late_rodata') or not row['data_owner']:
            continue
        owner = 'src/' + row['data_owner'] + '.c'
        for user in sorted({r['source_file'] for r in row['references']}):
            if user != owner:
                pairs[owner, user].append(row)
    return pairs


def source_map(rows, segs, functions):
    original = defaultdict(list)
    our_files = defaultdict(set)
    for row in rows:
        for path in row['source_paths']:
            original[path].append(row)
            for ref in row['references']:
                our_files[ref['source_file']].add(path)
    split = {p: rs for p, rs in original.items() if len({r['source_file'] for x in rs for r in x['references']}) > 1}
    mixed = {p: paths for p, paths in our_files.items() if len(paths) > 1}
    lines = ['# Debug strings and original source structure', '',
        'Generated by `python tools/hh/debug_strings.py`; see `queue/strings.jsonl` for full text, raw bytes, encoding alternatives, addresses, references and call-site evidence.', '',
        '## Reviewed Task 28 findings', '',
        'These observations describe the Task 28 split snapshot; the inventories and evidence tables below are regenerated from the current inputs.', '',
        '- **Investigate file017 first.** `a05demo.c` has callers on both sides of the current `0x802414B0` split, with recovered line arguments 216 → 238 → 382 → 451. The latter current file also contains `a05_s02demo.c` callers. This suggests a displaced boundary, rather than a simple whole-file merge. Review brackets the new text start after `0x80241784` and by `func_80241A60`, which uses s02 late rodata and shares BSS with `func_80241C34`.',
        '- **file017/80246290.c likely merges two original units.** `a05_s05demo.c` is used by `func_80246C0C` (line 436), while `a05_s06demo.c` is used by `func_80247530` / `func_802476F0` (lines 334 / 370). Their string runs and line reset agree with a missing boundary, bracketed by those evidenced functions.',
        '- **file021 has a displaced boundary.** `a09elevatordemo.c` spans `func_80240968` / `func_80240BA0` (lines 153 → 212), but TU1 late rodata ends before TU2 rodata at ROM `0x68DA00` (`burosu2 init come`), used by `func_80240CF8`. Move the text boundary after `func_80240BA0`, rather than merging the whole files.',
        '- **file017 s07 rodata needs its own split at ROM `0x651D40`.** `80247A00.c` uses s07 late rodata `D_8025CABC/CAC0`, while s06 begins inside `80246290.c`. These are structural leads; no YAML/split changes are made here.',
        '- **Camera identities are directly recoverable.** `camera/cam_manager.c` → `src/file008/80119C20.c` / `func_8011B7A0` (line 275); `camera/cam_operation.c` → `src/file008/80117610.c`, with line/address order 230 → 251 → 429 → 523 → 565 → 580 → 621 → 784. `player/battle_motion_camera.c` belongs to file057, and `democamera.c` to file100.',
        '- The retained source/line pairs are not all asserts or printf calls: `func_8011AAF4` is a camera operation API whose callers preserve source/line metadata. The assembly saves its first two arguments at `0x8011AB10` / `0x8011AB14`. Treat the numbers as source-line evidence, without inventing an assertion failure path.',
        '- Japanese examples decode as EUC-JP: `圧縮転送開始` = start compressed transfer (`trans.c`); `モデル転送中` = model transfer in progress (`auto_sub.c`); `ビームシールドの数` = beam shield count (file017). Full strings and alternate decodes remain in the JSONL.', '',
        '## Method and limits', '',
        '- Scan every initialized data/rodata subsegment of every YAML code segment in `build/expanded.bin`. This covers `asm/data/`, migrated/standalone `asm/nonmatchings/**/D_*.s` and `src/data/**` without depending on how the bytes are currently expressed.',
        '- Canonical function ownership is `asm/nonmatchings/<segment>/<file>/<function>.s`, the same mapping as `srcbuild.file_of`. Generated `_mrg_`/`_lr_` twins are excluded. Segment + address is the identity; overlay VRAMs overlap.',
        '- Direct `lui` + address-forming `%lo` (`addiu`/`ori`) references and C body symbol/literal uses in `src/` and `matched/` are recorded (one logical use per function/kind). Declarations are not uses. Local BSS belongs to the local overlay, and foreign BSS participates in overlap ambiguity; cross-segment string targets need unique initialized ownership. Duplicate literals require asm disambiguation; indirect pointer-table consumers are not attributed.',
        '- Strict ASCII and EUC-JP (the game encoding) are tried; SJIS-only numeric/unconfirmed noise is excluded. An explicit asm string with invalid bytes is retained as `encoding=raw` with escaped bytes. `classification=string` means an asm string directive supports the interpretation (splat can also guess wrong); `numeric_candidate` means a float/double happens to decode; other printable runs are `unconfirmed_candidate`. Even a referenced address can be a numeric table. Strings may cross a subsegment cut, bounded by the initialized segment end; the full string is retained and the misleading tail is suppressed. NUL-terminated strings only; embedded-NUL objects become separate runs. Short strings need a symbol/reference anchor.',
        '- A filename in an error can name an asset or included header. Shared diagnostic helpers can receive another file\'s path. Boundary findings are leads for subsequent object/rodata checks, not proof of a translation unit. No splits or YAML were changed.', '',
        '## Inventory', '',
        f'- {len(segs)} code segments; {sum(len(s["ranges"]) for s in segs)} initialized data/rodata ranges; {len(functions)} canonical functions.',
        f'- {len(rows)} string candidates; {sum(bool(r["references"]) for r in rows)} directly referenced; {sum(r["encoding"] != "ascii" for r in rows)} non-ASCII; {len(original)} distinct source-name/path tokens.',
        '- Candidate classifications: ' + ', '.join(f'{k}={v}' for k, v in sorted(Counter(r['classification'] for r in rows).items())) + '.',
        f'- {sum(r["classification"] == "string" and bool(r["references"]) for r in rows)} asm-marked strings have direct users; {sum(not r["bytes_hex"] for r in rows)} empty asm-marked strings/padding entries are retained. All asm string-directive starts were audited; {sum(len(s["unextracted_asm_strings"]) for s in segs)} were not extracted.',
        f'- {len(split)} original path tokens used across multiple current C files; {len(mixed)} current C files with multiple original path tokens.', '',
        '## Boundary leads: one original path, multiple current files', '']
    for path, rs in sorted(split.items()):
        lines += [f'### `{path}`', '']
        for source in sorted({r['source_file'] for x in rs for r in x['references']}):
            users = sorted({r['function'] for x in rs for r in x['references'] if r['source_file'] == source})
            addresses = sorted({x['address'] for x in rs if any(r['source_file'] == source for r in x['references'])})
            lines += [f'- `{source}`: {", ".join(f"`{u}`" for u in users)}; string(s) {", ".join(addresses)}.']
        lines += ['']
    lines += ['## Boundary leads: one current file, multiple original paths', '']
    for source, paths in sorted(mixed.items()):
        lines += [f'### `{source}`', '']
        for path in sorted(paths):
            users = sorted({r['function'] for x in original[path] for r in x['references'] if r['source_file'] == source})
            lines += [f'- `{path}`: {", ".join(f"`{u}`" for u in users)}.']
        lines += ['']
    lines += ['## Rodata owner versus referencing C file', '',
        'String storage ownership and text ownership are independent evidence. A mismatch suggests a displaced/absent TU boundary or shared data; inspect data order and BSS before changing splits.', '',
        '| Rodata owner | Referencing file | Strings | Path / address examples |', '|---|---|---:|---|']
    for (owner, user), rs in sorted(ownership_mismatches(rows).items()):
        examples = sorted(rs, key=lambda r: (not bool(r['source_paths']), int(r['address'], 16)))[:3]
        lines += [f'| `{owner}` | `{user}` | {len(rs)} | ' + '; '.join(
            f'{r["segment"]}:{r["address"]} `{md(", ".join(r["source_paths"]) or r["text"], 100)}`' for r in examples) + ' |']
    lines += ['', '## Path strings in data and subsegment-straddling strings (YAML errors)', '',
        'The current .data/.rodata cut can split a string. Full bytes are recovered without editing YAML; these cuts need a later layout review.', '',
        '| Segment / address | Current section / owner | Crosses cut | Text |', '|---|---|---|---|']
    for row in rows:
        if row['straddles_subsegment'] or (row['section'] == 'data' and row['source_paths']):
            lines += [f'| {row["segment"]}:{row["address"]} | {row["section"]} / {row["data_owner"] or "unassigned"} | '
                      f'{"yes" if row["straddles_subsegment"] else "no"} | `{md(row["text"], 160)}` |']
    calls = [c for fn in functions.values() for c in fn.get('debug_calls', [])]
    paths = [c for c in calls if c['path']]
    lines += ['## Line-number evidence and address order', '',
        f'Audited `func_8011AAF4` calls: **{len(calls)} total; {len(paths)} path-carrying; {sum(c["line"] for c in paths)} with a recovered line; {sum(not c["line"] for c in paths)} path-carrying calls without a line**. '
        'For that API a per-call backward register slice stops at the previous call on each incoming control-flow path, includes branch/call delay slots and kills unknown writes. At joins constants must agree; alternate switch arms are not scanned as if sequential. Other calls retain conservative control-flow barriers. Only adjacent pointer/constant arguments at the same call are listed.', '']
    for path, rs in sorted(original.items()):
        evidence = {(x['segment'], x['function'], x['line'], x['call'], x['source_file'])
                    for row in rs for x in row['line_candidates']}
        if not evidence:
            continue
        ordered = sorted(evidence, key=lambda x: (x[0], functions[(x[0], x[1])]['address'], x[2]))
        lines += [f'### `{path}`', '', '| Segment / function (address order) | Current file | Candidate line | Call |', '|---|---|---:|---|']
        for seg, fn, number, call, source in ordered:
            lines += [f'| {seg} / `{fn}` | `{source}` | {number} | {call} |']
        by_line = sorted(evidence, key=lambda x: (x[0], x[2], functions[(x[0], x[1])]['address']))
        lines += ['', 'Line-number order: ' + ', '.join(f'{s}/`{f}`:{n}' for s, f, n, _, _ in by_line) + '.', '']
        inversions = []
        for left, right in zip(ordered, ordered[1:]):
            if left[0] == right[0] and left[1] != right[1] and left[2] > right[2]:
                inversions.append(f'{left[1]}:{left[2]} → {right[1]}:{right[2]}')
        lines += [('Address/line inversions (review): ' + '; '.join(inversions) + '.') if inversions else 'No adjacent cross-function address/line inversion among recovered candidates.', '']
    if not any(r['line_candidates'] for r in rows):
        lines += ['No defensible adjacent-argument line candidates recovered.', '']
    lines += ['## Complete source-name/path index', '', 'Each address is qualified by segment; all direct users are listed, including paths without users.', '']
    for path, rs in sorted(original.items()):
        lines += [f'### `{path}`', '']
        for row in rs:
            users = sorted({(r['source_file'], r['function']) for r in row['references']})
            lines += [f'- {row["segment"]}:{row["address"]} ({row["encoding"]}): `{md(row["text"] )}`']
            lines += [f'  - `{s}`: `{f}`' for s, f in users] or ['  - No direct user recovered.']
        lines += ['']
    lines += ['## Overlay catalogue', '',
        'Descriptions are string-derived, not recovered overlay names. Source basenames are strongest evidence; quoted diagnostics can describe a subsystem inside a larger overlay. Asset-only and silent overlays remain unidentified.', '',
        '| Segment | String-derived role | VRAM | Candidates / referenced | Source-name evidence | Diagnostic examples |', '|---|---|---|---:|---|---|']
    for seg in segs:
        rs = [r for r in rows if r['segment'] == seg['name']]
        paths = sorted({p for r in rs for p in r['source_paths']})
        examples = [r for r in rs if r['classification'] == 'string' and not r['source_paths'] and len(r['text'].strip()) >= 8
                    and (re.search(r'[A-Za-z]{3}', r['text']) or re.search(r'[\u3040-\u30ff\u4e00-\u9fff]{3}', r['text']))
                    and len(set(r['text'])) > 6]
        examples.sort(key=lambda r: (not bool(r['references']), not bool(re.search(r'error|ERROR|%[sdx]|失敗|エラー', r['text'])), int(r['address'], 16)))
        role = OVERLAYS.get(seg['name'], 'Unidentified from strings; printable/numeric or asset-like data alone is insufficient.')
        lines += [f'| {seg["name"]} | {role} | 0x{seg["vram"]:08X} | {len(rs)} / {sum(bool(r["references"]) for r in rs)} | '
                  + ('; '.join(f'`{p}`' for p in paths) or 'No source path') + ' | '
                  + ('; '.join(f'{r["address"]} `{md(r["text"], 100)}`' for r in examples[:3]) or 'No confirmed diagnostic string') + ' |']
    return '\n'.join(lines) + '\n'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[2])
    parser.add_argument('--output', default='queue/strings.jsonl')
    parser.add_argument('--report', default='docs/SOURCE_MAP.md')
    args = parser.parse_args()
    rows, segs, functions = mine(args.root)
    (args.root / args.output).write_text(''.join(json.dumps(r, ensure_ascii=False, sort_keys=True) + '\n' for r in rows))
    (args.root / args.report).write_text(source_map(rows, segs, functions))
    print(json.dumps(overview(rows, segs), sort_keys=True))


if __name__ == '__main__':
    main()
