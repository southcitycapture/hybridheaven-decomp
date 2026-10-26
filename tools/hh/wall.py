#!/usr/bin/env python3
"""Explain the first wall in a saved decompilation, without a model.

Run with the project toolchain on PATH and the project's Python:
  tools/hh/wall.py FUNC [--seg SEG] [--source attempt.c]
  tools/hh/wall.py --all [--jobs N]

The inventory is the refreshed progress report, not registry membership (some
registered snippets still use asm). Calls precede CFG precedes instructions and
symbols. Size is also recorded independently. `instructions` is an explicit
fallback: differing opcode multisets must never be called register-only.
"""
import argparse
import collections
import contextlib
import glob
import io
import json
import os
from pathlib import Path
import re
import shutil
import sys
import tempfile
from concurrent.futures import ProcessPoolExecutor

sys.path.insert(0, str(Path(__file__).resolve().parent))
import diagnose
import try_func as T
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

HH = Path(T.HH)


def words(data):
    return diagnose._words(data)


def signed(n):
    return n - 0x10000 if n & 0x8000 else n


def symbol_address(name):
    match = T.ADDR_NAME.match(name)
    return int(match.group(1) or match.group(2), 16) if match else T.NAMED.get(name)


def opcode(w):
    # Decode real instructions rather than disassembler aliases (move, b, ...).
    op = w >> 26
    if op == 0:
        return 'SPECIAL:%02x' % (w & 63)
    if op == 1:
        return 'REGIMM:%02x' % ((w >> 16) & 31)
    if op in (0x10, 0x11, 0x12):
        fmt = (w >> 21) & 31
        return '%02x:%02x:%02x' % (op, fmt, (w & 63) if fmt >= 16 else
                                  ((w >> 16) & 3) if fmt == 8 else 0)
    return '%02x' % op


def transfer(w):
    op, fn, rs = w >> 26, w & 63, (w >> 21) & 31
    if op == 3 or (op == 0 and fn == 9):
        return 'call'
    if op == 0 and fn == 8:
        return 'return' if rs == 31 else 'indirect_jump'
    if op == 2:
        return 'jump'
    if op == 4 and (w >> 21) & 31 == (w >> 16) & 31:
        return 'branch_jump'  # unconditional beq, including the assembler's b
    if op in (1, 4, 5, 6, 7, 0x14, 0x15, 0x16, 0x17) or (
            op in (0x10, 0x11, 0x12) and (w >> 21) & 31 == 8):
        return 'conditional'
    return None


def calls(ws, refs, vram):
    """Direct callees by address; indirect loads by provenance, not allocator GPR.

    Unknown indirect destinations stay explicitly unknown. This is a static
    classifier; it cannot prove the runtime value of an arbitrary function ptr.
    """
    out, values = collections.Counter(), {r: 'input:$%d' % r for r in range(32)}
    values[0] = '0'
    for i, w in enumerate(ws):
        off = 4 * i
        op, rs, rt, rd = w >> 26, (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31
        kind = transfer(w)
        if kind == 'call':
            if op == 3:
                ref = refs.get(off)
                if ref:
                    _, name, addend = ref
                    addr = symbol_address(name)
                    callee = '0x%08X' % ((addr + addend) & 0xffffffff) if addr is not None else name + ('%+#x' % addend if addend else '')
                else:
                    callee = '0x%08X' % (((vram + off + 4) & 0xf0000000) | ((w & 0x3ffffff) << 2))
            else:
                callee = 'jalr:' + values.get(rs, 'unknown')
            out[callee] += 1
        ref = refs.get(off)
        if ref and op != 3:
            _, name, addend = ref
            addr = symbol_address(name)
            value = '0x%08X' % ((addr + addend) & 0xffffffff) if addr is not None else '%s%+#x' % (name, addend)
            values[rt] = ('load:' if op in (0x20, 0x21, 0x23, 0x24, 0x25, 0x37) else '') + value
        elif op == 0 and (w & 63) in (0x21, 0x25) and (rs == 0 or rt == 0):
            values[rd] = values.get(rt if rs == 0 else rs, 'unknown')
        elif op in (9, 0xd):
            values[rt] = '%s%+#x' % (values.get(rs, 'unknown'), signed(w & 0xffff) if op == 9 else w & 0xffff)
        elif op == 0xf:
            values[rt] = '0x%08X' % ((w & 0xffff) << 16)
        elif op in (0x20, 0x21, 0x23, 0x24, 0x25, 0x37):
            values[rt] = 'load:(%s%+#x)' % (values.get(rs, 'unknown'), signed(w & 0xffff))
        else:
            _, defs = diagnose._uses_defs(w)
            for reg in defs:
                if reg != 0:
                    values[reg] = 'unknown'
    return out


def cfg(ws, vram, table_entries=0, table_targets=()):
    """Static delay-slot-aware blocks and edges; calls don't terminate a block."""
    leaders, edges = {0} if ws else set(), []
    leaders.update(i for i in table_targets if 0 <= i < len(ws))
    counts = dict(blocks=0, conditional_branches=0, jumps=0, returns=0,
                  jump_table_entries=table_entries)
    for i, w in enumerate(ws):
        kind = transfer(w)
        if kind is None or kind == 'call':
            continue
        after = i + 2  # the next instruction is the delay slot, including likely branches
        if after < len(ws):
            leaders.add(after)
        dest = None
        if kind in ('conditional', 'branch_jump'):
            dest = i + 1 + signed(w & 0xffff)
        elif kind == 'jump':
            dest = ((((vram + 4*i + 4) & 0xf0000000) | ((w & 0x3ffffff) << 2)) - vram) // 4
        if dest is not None and 0 <= dest < len(ws):
            leaders.add(dest)
        if kind == 'conditional':
            counts['conditional_branches'] += 1
        elif kind == 'return':
            counts['returns'] += 1
        else:
            counts['jumps'] += 1
        edges.append((i, kind, dest, after if kind == 'conditional' else None))
    ordered = sorted(leaders)
    counts['blocks'] = len(ordered)
    def block(i):
        if i is None:
            return None
        if i < 0 or i >= len(ws):
            return 'external'
        return sum(x <= i for x in ordered) - 1
    # Block-index topology tolerates extra instructions and changed register allocation.
    structure = [(block(i), k, block(d), block(a)) for i, k, d, a in edges]
    if table_targets:
        structure.append(('jump_table', tuple(block(i) for i in table_targets)))
    return counts, structure


def first_difference(mine, target, vram):
    for i in range(max(len(mine), len(target))):
        a = mine[i] if i < len(mine) else None
        b = target[i] if i < len(target) else None
        if a != b:
            return dict(offset=4*i, attempt=diagnose._dis(a, vram+4*i) if a is not None else '<end>',
                        target=diagnose._dis(b, vram+4*i) if b is not None else '<end>')
    return None


def counter_delta(a, b):
    return {k: dict(target=b[k], attempt=a[k]) for k in sorted(a.keys() | b.keys()) if a[k] != b[k]}


def classify(mine, target, rel=None, mine_refs=None, target_refs=None, vram=0,
             exact=None, mine_tables=0, target_tables=0, rodata_equal=True,
             mine_table_targets=(), target_table_targets=()):
    """Pure comparison core, also used by the known-case tests."""
    rel, mine_refs, target_refs = rel or {}, mine_refs or {}, target_refs or {}
    # Match try_func's permitted extra trailing IDO alignment, never trim target instructions.
    while len(mine) > len(target) and mine[-4:] == b'\0'*4:
        mine = mine[:-4]
    if exact is not None:
        exact = exact[:len(mine)]
    a, b = words(mine), words(target)
    good, total, diffs = T.compare(mine, rel, target)
    details = dict(first_divergence=first_difference(words(exact) if exact is not None else a, b, vram),
                   size_mismatch=len(mine) != len(target), attempt_size=len(mine), target_size=len(target),
                   matching_words=good, total_words=total)
    ca, cb = calls(a, mine_refs, vram), calls(b, target_refs, vram)
    details['calls'] = dict(target=dict(cb), attempt=dict(ca))
    delta = counter_delta(ca, cb)
    if delta:
        details['differing_calls'] = delta
        note = 'calls differ: ' + '; '.join('target calls %s %d time(s), attempt %d' % (k, v['target'], v['attempt']) for k, v in delta.items())
        return 'calls', details, dict(tool='model', note=note)
    fa, sa = cfg(a, vram, mine_tables, mine_table_targets)
    fb, sb = cfg(b, vram, target_tables, target_table_targets)
    details['control_flow'] = dict(target=fb, attempt=fa)
    if fa != fb or sa != sb:
        delta = {k: dict(target=fb[k], attempt=fa[k]) for k in fb if fa[k] != fb[k]}
        details['differing_counts'] = delta
        if sa != sb:
            details['branch_structure'] = dict(target=sb, attempt=sa)
        note = 'control flow differs: ' + ('; '.join('%s target %d, attempt %d' % (k, v['target'], v['attempt']) for k, v in delta.items()) or 'block-edge topology differs')
        return 'control_flow', details, dict(tool='model', note=note)
    if not diffs:
        ref_delta = {str(o): dict(target=target_refs.get(o), attempt=r)
                     for o, r in mine_refs.items() if r != target_refs.get(o)}
        if exact is None or exact != target or not rodata_equal:
            details['relocations'] = ref_delta
            details['link_resolved'] = exact is not None
            details['rodata_equal'] = rodata_equal
            return 'symbols', details, dict(tool='addrfix.py', note='instructions match with relocation fields masked; check symbols/addends and file-local rodata placement')
        details['first_divergence'] = None
        return 'match', details, dict(tool='srcbuild.py', note='exact standalone match; verify and integrate in file context')
    oa, ob = collections.Counter(map(opcode, a)), collections.Counter(map(opcode, b))
    if oa == ob:
        details['frame'] = dict(target=diagnose.frame(b), attempt=diagnose.frame(a))
        changes = []
        visible = words(exact) if exact is not None else a
        for i, (x, y) in enumerate(zip(a, b)):
            if ((x ^ y) & T.MASK.get(rel.get(4*i), 0xffffffff)) == 0:
                continue
            gx, fx = diagnose._fields(x)
            gy, fy = diagnose._fields(y)
            changes.append(dict(offset=4*i, attempt=diagnose._dis(visible[i], vram+4*i), target=diagnose._dis(y, vram+4*i),
                                attempt_gprs=[r for _, r in gx], target_gprs=[r for _, r in gy],
                                attempt_fprs=[r for _, r in fx], target_fprs=[r for _, r in fy]))
            if len(changes) == 8:
                break
        details['instruction_differences'] = changes
        # Same opcodes alone do NOT establish a register/schedule-only wall: an
        # integer constant or non-relocated field may encode different logic.
        # Use real relocations, not the broad heuristic that masks every lui:
        # an in-register floating-point constant isn't a symbol/address.
        ma = [T.MASK.get(rel.get(4*i), 0xffffffff) for i in range(len(a))]
        mb = [0xffff0000 if target_refs.get(4*i, (None,))[0] in ('hi', 'lo')
              else 0xfc000000 if target_refs.get(4*i, (None,))[0] == 'jal'
              else 0xffffffff for i in range(len(b))]
        def operand_shape(ws, masks):
            result = []
            for w, mask in zip(ws, masks):
                for shift, _ in sum((list(x) for x in diagnose._fields(w)), []):
                    mask &= ~(31 << shift)
                if transfer(w) in ('conditional', 'branch_jump'):
                    mask &= 0xffff0000  # CFG already compared above
                if ((w >> 21) & 31) == 29 and w >> 26 not in (0, 2, 3):
                    mask &= 0xffff0000  # frame/stack slot differences are permuter work
                result.append(w & mask)
            return collections.Counter(result)
        if operand_shape(a, ma) == operand_shape(b, mb):
            return 'registers_schedule', details, dict(tool='permute.py', note='same opcode multiset and branch structure; register/operand order, schedule or stack frame differs')
    details['differing_opcodes'] = counter_delta(oa, ob)
    if details['size_mismatch']:
        return 'size_mismatch', details, dict(tool='model', note='same calls/CFG but instruction count differs; see size and opcode deltas')
    return 'instructions', details, dict(tool='model', note='same calls/CFG but opcode or non-address operand differs; see first divergence')


def inventory(report):
    out = []
    for u in report['units']:
        if not u.get('functions'):
            continue
        seg, cfile = u['name'].split('/', 1)
        for f in u['functions']:
            if f.get('fuzzy_match_percent') != 100.0:
                out.append(dict(func=f['name'], seg=seg, size=int(f['size']), file=cfile))
    return sorted(out, key=lambda r: (r['seg'], r['func']))


def records(path):
    if not path.exists():
        return
    with path.open() as fh:
        for line in fh:
            try:
                yield json.loads(line)
            except ValueError:
                continue


def attempt_index(rows):
    """FROM=best's highest (ali, path), plus final MATCHes and rejected C.

    Unscored final attempts are fallbacks when no .ali survives. Old FUNC-only
    directories are accepted only if the batch unambiguously names the segment.
    Rejected snippets lack .ali, so compile them and compare to the saved best.
    """
    want = {(r['seg'], r['func']) for r in rows}
    best, fallback, extra = {}, collections.defaultdict(list), collections.defaultdict(list)
    for batch in sorted((HH / 'queue').iterdir()):
        if not (batch / 'work').is_dir():
            continue
        ran, matches = collections.defaultdict(set), set()
        for r in records(batch / 'results.jsonl'):
            seg = r.get('segment', r.get('seg'))
            ran[r.get('func')].add(seg)
            if r.get('verified') == 'MATCH':
                matches.add((seg, r.get('func')))
        for d in sorted((batch / 'work').iterdir()):
            if not d.is_dir():
                continue
            if '@' in d.name:
                func, seg = d.name.split('@', 1)
            else:
                func = d.name
                segs = ran.get(func, set())
                if len(segs) != 1:
                    continue
                seg = next(iter(segs))
            key = seg, func
            if key not in want:
                continue
            final = d / 'attempt.c'
            if final.exists():
                fallback[key].append(str(final))
                if key in matches:
                    extra[key].append(str(final))
            for ali in (d / '.attempts').glob('*.ali'):
                try:
                    value = int(ali.read_text().split()[0])
                except (OSError, ValueError, IndexError):
                    continue
                c = ali.with_suffix('.c')
                if c.exists():
                    best[key] = max(best.get(key, (-1, '')), (value, str(c)))
    out = {}
    for key in want:
        seg, func = key
        paths = ([best[key][1]] if key in best else sorted(fallback[key], key=os.path.getmtime, reverse=True)[:1])
        rejected = HH / 'matched_rejected' / seg / (func + '.c')
        if rejected.exists():
            paths.append(str(rejected))
        paths += extra[key]
        out[key] = sorted(set(paths))
    return out


def stage(source, directory, row=None):
    parent = Path(source).parent
    if parent.name == '.attempts':
        parent = parent.parent
    for header in parent.glob('*.h'):
        shutil.copy(header, directory)
    if row and 'matched_rejected' in Path(source).parts:
        # Registry snippets deliberately don't retain their worker's headers.
        # Reconstruct the real declarations rather than reporting a missing
        # context.h as a source/compiler wall.
        import srcbuild
        (Path(directory) / 'context.h').write_text(srcbuild.context_for(row['seg'], row['func']))
        (Path(directory) / 'known.h').write_text('')
    path = Path(directory) / 'attempt.c'
    shutil.copy(source, path)
    return str(path)


def object_info(obj, func):
    # addrfix already implements correct MIPS HI16/LO16 pairing and REL addends.
    import addrfix
    refs = addrfix.mine_refs(obj, func) or {}
    table_targets = []
    with open(obj, 'rb') as fh:
        elf = ELFFile(fh)
        symtab = elf.get_section_by_name('.symtab')
        fs = next(s for s in symtab.iter_symbols() if s.name == func)
        for section in elf.iter_sections():
            if not isinstance(section, RelocationSection) or 'rodata' not in section.name:
                continue
            data = elf.get_section(section['sh_info']).data()
            for relocation in section.iter_relocations():
                sym = symtab.get_symbol(relocation['r_info_sym'])
                off = relocation['r_offset']
                addend = int.from_bytes(data[off:off+4], 'big')
                if (relocation['r_info_type'] == 2 and sym['st_shndx'] == fs['st_shndx']
                        and fs['st_value'] <= sym['st_value'] + addend < fs['st_value'] + fs['st_size']):
                    table_targets.append((sym['st_value'] + addend - fs['st_value']) // 4)
    return refs, table_targets


def target_table_targets(asm_text, off, size, vram):
    """Read named tables even in overlays whose rodata splat didn't migrate.

    Their entries are consecutive original-ROM pointers into this function;
    padding and following data end the table. Duplicate destinations still count.
    """
    targets = []
    names = sorted(set(re.findall(r'\bjtbl_[0-9A-F]{8}\b', asm_text)))
    with open(T.IMG, 'rb') as fh:
        for name in names:
            addr = symbol_address(name)
            start = off + addr - vram
            if start < 0:
                continue
            fh.seek(start)
            while True:
                entry = fh.read(4)
                if len(entry) != 4:
                    break
                dest = int.from_bytes(entry, 'big')
                if not (vram <= dest < vram+size and dest % 4 == 0):
                    break
                targets.append((dest-vram)//4)
    return targets


def check_source(row, source):
    import addrfix
    func, seg = row['func'], row['seg']
    off, size, vram, asm = T.find_func(func, seg=seg)
    with open(T.IMG, 'rb') as fh:
        fh.seek(off)
        target = fh.read(size)
    cache = HH / 'build' / 'wall'
    cache.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(dir=cache) as td:
        path = stage(source, td, row)
        obj = str(Path(td) / 'attempt.o')
        T.compile_c(path, '7.1', '-O2', obj)
        mine, rel = T.func_bytes(obj, func)
        refs, table_targets = object_info(obj, func)
        target_refs = addrfix.target_refs(asm, vram)
        ro = T.asm_rodata_start(asm)
        got = T.linked_func_bytes(obj, func, vram, rodata=ro, want_rodata=True)
        exact, ro_mine = got if got else (None, b'')
        ro_equal = True
        if ro is not None and ro_mine:
            with open(T.IMG, 'rb') as fh:
                image = fh.read()
            ro_equal = T.rodata_matches(ro_mine, image, lambda v: off+v-vram, ro)
        asm_text = Path(asm).read_text()
        target_targets = target_table_targets(asm_text, off, size, vram)
        cls, details, route = classify(mine, target, rel, refs, target_refs, vram, exact,
                                      len(table_targets), len(target_targets), ro_equal, table_targets, target_targets)
        if exact is None:
            details['unresolved_symbols'] = list(T.UNRESOLVED)
        score = T.aligned(mine[:len(target)] if len(mine) > len(target) and not any(mine[len(target):]) else mine, target)
        return dict(row, size=size, **{'class': cls}, details=details, route=route,
                    attempt_source=os.path.relpath(source, HH), diff_score=round(score, 6),
                    positional_score=round(details['matching_words']/max(1, details['total_words']), 6))


def check_row(job):
    row, sources = job
    if not sources:
        return dict(row, **{'class': 'no_attempt'}, details=dict(reason='no unambiguous saved queue/matched_rejected C attempt'),
                    attempt_source=None, diff_score=None, route=dict(tool='model', note='create the first saved attempt'))
    results, errors = [], []
    for source in sources:
        try:
            results.append(check_source(row, source))
        except (SystemExit, Exception) as exc:
            errors.append(dict(source=os.path.relpath(source, HH), error=str(exc)[-2000:]))
    if not results:
        return dict(row, **{'class': 'does_not_compile'}, details=dict(errors=errors),
                    attempt_source=os.path.relpath(sources[0], HH), diff_score=None,
                    route=dict(tool='model', note='repair the saved attempt build first'))
    best = max(results, key=lambda r: (r['class'] == 'match', r['diff_score'], r['positional_score'], r['attempt_source']))
    best['details']['sources_checked'] = len(sources)
    if errors:
        best['details']['other_source_errors'] = errors
    return best


def annotate_integration(results):
    """A standalone match is not an accepted match: expose known file blockers."""
    rejected = {}
    for r in records(HH / 'queue/rejected.jsonl'):
        rejected[r.get('segment'), r.get('func')] = r.get('why')
    for r in results:
        key = r['seg'], r['func']
        r['registered'] = (HH / 'matched' / r['seg'] / (r['func']+'.c')).exists()
        if rejected.get(key):
            r['details']['last_infile_rejection'] = rejected[key]
            if r['class'] == 'match':
                r['route']['note'] += '; last recorded in-file blocker: ' + rejected[key]
    return results


def human(r):
    d = r['details']
    lines = ['%s %s (%d bytes): %s' % (r['seg'], r['func'], r['size'], r['class']),
             'attempt: %s' % (r['attempt_source'] or '<none>'),
             'aligned score: %s; positional score: %s' % (r['diff_score'], r.get('positional_score', '-'))]
    first = d.get('first_divergence')
    if first:
        lines += ['first divergence +0x%X:' % first['offset'],
                  '  target:  '+first['target'], '  attempt: '+first['attempt']]
    elif r['class'] == 'match':
        lines.append('first divergence: none in standalone code')
    if 'attempt_size' in d:
        lines.append('size: target 0x%X, attempt 0x%X%s' % (d['target_size'], d['attempt_size'],
                     ' (SIZE MISMATCH)' if d['size_mismatch'] else ''))
    for callee, delta in d.get('differing_calls', {}).items():
        lines.append('call %s: target %d, attempt %d' % (callee, delta['target'], delta['attempt']))
    for key, delta in d.get('differing_counts', {}).items():
        lines.append('%s: target %d, attempt %d' % (key, delta['target'], delta['attempt']))
    if 'control_flow' in d and not d.get('differing_counts'):
        lines.append('control-flow counts: ' + ', '.join('%s=%s' % p for p in d['control_flow']['target'].items()))
    if 'branch_structure' in d:
        lines.append('block-edge topology differs (full edges in --all JSONL)')
    if 'frame' in d:
        lines.append('stack frame: target 0x%X, attempt 0x%X' % (d['frame']['target'][0], d['frame']['attempt'][0]))
    for change in d.get('instruction_differences', []):
        lines.append('  +0x%X target %-36s attempt %s' % (change['offset'], change['target'], change['attempt']))
    for off, delta in list(d.get('relocations', {}).items())[:8]:
        lines.append('  relocation +0x%X: target %s; attempt %s' % (int(off), delta['target'], delta['attempt']))
    for op, delta in d.get('differing_opcodes', {}).items():
        lines.append('opcode %s: target %d, attempt %d' % (op, delta['target'], delta['attempt']))
    if d.get('unresolved_symbols'):
        lines.append('unresolved symbols: '+', '.join(d['unresolved_symbols']))
    for error in d.get('errors', []):
        lines.append(error['source']+': '+error['error'])
    if d.get('reason'):
        lines.append(d['reason'])
    if d.get('last_infile_rejection'):
        lines.append('last in-file rejection: '+d['last_infile_rejection'])
    lines.append('route: %s — %s' % (r['route']['tool'], r['route']['note']))
    return '\n'.join(lines)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('func', nargs='?')
    ap.add_argument('--all', action='store_true')
    ap.add_argument('--seg')
    ap.add_argument('--source', help='override saved-attempt selection')
    ap.add_argument('--report', default=str(HH / 'build/progress/report.json'))
    ap.add_argument('--output', default=str(HH / 'queue/walls.jsonl'))
    ap.add_argument('--jobs', type=int, default=min(8, max(1, (os.cpu_count() or 2)//2)))
    a = ap.parse_args()
    if a.all == bool(a.func) or a.jobs < 1 or (a.source and a.all):
        ap.error('choose FUNC or --all; --jobs must be positive; --source is single-function only')
    os.chdir(HH)
    rows = inventory(json.loads(Path(a.report).read_text()))
    if a.func:
        rows = [r for r in rows if r['func'] == a.func and (a.seg is None or r['seg'] == a.seg)]
        if not rows:
            # Permit diagnosis of an already-matched function, useful as a control.
            off, size, _, asm = T.find_func(a.func, seg=a.seg)
            rows = [dict(func=a.func, seg=Path(asm).parts[-3], file=Path(asm).parts[-2], size=size)]
        if len(rows) != 1:
            ap.error('name occurs in multiple segments: pass --seg (' + ', '.join(r['seg'] for r in rows) + ')')
    index = attempt_index(rows) if not a.source else {(rows[0]['seg'], rows[0]['func']): [str(Path(a.source).resolve())]}
    jobs = [(r, index.get((r['seg'], r['func']), [])) for r in rows]
    if a.all:
        with ProcessPoolExecutor(max_workers=a.jobs) as pool:
            results = annotate_integration(list(pool.map(check_row, jobs, chunksize=1)))
        with open(a.output, 'w') as fh:
            for r in results:
                fh.write(json.dumps(r, sort_keys=True) + '\n')
        for cls, count in sorted(collections.Counter(r['class'] for r in results).items()):
            print('%-22s %5d functions %9d bytes' % (cls, count, sum(r['size'] for r in results if r['class'] == cls)))
        print('wrote %s (%d functions)' % (a.output, len(results)))
    else:
        r = annotate_integration([check_row(jobs[0])])[0]
        print(human(r))


if __name__ == '__main__':
    main()
