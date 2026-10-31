#!/usr/bin/env python3
"""Fixed target regions and independent, delay-slot-aware MIPS block comparisons.

  regions.py FUNC SEG --source attempt.c [--region 3] [--json report.json]
  regions.py FUNC SEG                         # target map, without compiling

Each target region is aligned separately against candidate basic blocks. There
is no whole-function diff, shared alignment cursor, or function-sized score
denominator. Branch layout is normalized; registers, ordinary immediates and
resolved external addresses are not. This is a debugging aid, not the linked
whole-file/ROM acceptance gate. See docs/REGIONS.md for limitations.
"""
import argparse
import functools
import os
from bisect import bisect_right
from dataclasses import dataclass
from difflib import SequenceMatcher
import json
from pathlib import Path
import re
import sys
import tempfile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import diagnose
import try_func as T
import wall as W


@dataclass(frozen=True)
class Block:
    start: int                     # instruction indices, not byte offsets
    end: int
    kind: str
    dest: int | None


def destination(w, i, vram):
    kind = W.transfer(w)
    if kind in ('conditional', 'branch_jump'):
        return i + 1 + W.signed(w & 0xffff)
    if kind == 'jump':
        return ((((vram + 4*i + 4) & 0xf0000000) | ((w & 0x3ffffff) << 2)) - vram) // 4
    return None


def blocks(ws, vram=0, table_targets=()):
    """Split on branch targets, transfer+delay, calls+delay and switch entries.

    Calls are useful extended-basic-block boundaries even though they return.
    A target that is a delay slot is not a legal cut: retain the transfer+slot.
    """
    leaders = {0, len(ws)}
    leaders.update(t for t in table_targets if 0 <= t < len(ws))
    slots = set()
    for i, w in enumerate(ws):
        if W.transfer(w):
            slots.add(i + 1)
            leaders.add(min(len(ws), i + 2))
            dest = destination(w, i, vram)
            if dest is not None and 0 <= dest < len(ws):
                leaders.add(dest)
    ordered = sorted(leaders - (slots - {len(ws)}))
    out = []
    for a, b in zip(ordered, ordered[1:]):
        i = b - 2
        kind = W.transfer(ws[i]) if i >= a else None
        out.append(Block(a, b, kind or 'run', destination(ws[i], i, vram) if kind else None))
    return out


def split_regions(bs, table_targets=(), minimum=40, maximum=150):
    """Pack complete blocks, favouring loop headers/exits and case boundaries.

    A single unsplittable basic block may exceed maximum; a final tail may be
    smaller than minimum. Region IDs and boundaries depend ONLY on the target.
    """
    if not bs:
        return []
    structural = set(table_targets)
    for b in bs:
        if b.dest is not None and b.dest <= b.start:
            structural.update((b.dest, b.end))
        if b.kind in ('indirect_jump', 'return'):
            structural.add(b.end)
    regions, first = [], 0
    while first < len(bs):
        start = bs[first].start
        choices = []
        for last in range(first, len(bs)):
            count = bs[last].end - start
            if count > maximum and last > first:
                break
            # ~80 instructions, with a strong preference for source boundaries.
            if count >= minimum or last == len(bs) - 1 or count > maximum:
                priority = abs(count - 80) - (35 if bs[last].end in structural else 0)
                choices.append((priority, last + 1))
            if count > maximum:
                break
        end = min(choices)[1] if choices else first + 1
        regions.append(list(range(first, end)))
        first = end
    return regions


def layout_word(w):
    """Only PC-relative branches and internal j have layout-dependent fields."""
    kind = W.transfer(w)
    if kind in ('conditional', 'branch_jump'):
        return w & 0xffff0000
    if kind == 'jump':
        return w & 0xfc000000
    return w


def shape_word(w):
    # Fuzzy alignment tolerates registers/immediates, but comparison does not.
    return W.opcode(w)


def similarity(a, b):
    exact = SequenceMatcher(None, a, b, autojunk=False).ratio()
    shape = SequenceMatcher(None, [shape_word(w) for w in a],
                            [shape_word(w) for w in b], autojunk=False).ratio()
    return 0.65 * exact + 0.35 * shape


def align_region(indices, target_blocks, candidate_blocks, target, mine):
    """Semi-global block alignment: free prefix/suffix, local region denominator.

    Each call starts from scratch. A deleted region cannot consume blocks that
    would otherwise align a later region. Weak block pairs are left missing.
    """
    ts = [[layout_word(w) for w in target[target_blocks[i].start:target_blocks[i].end]] for i in indices]
    cs = [[layout_word(w) for w in mine[b.start:b.end]] for b in candidate_blocks]
    n, m = len(ts), len(cs)
    dp = [[0.0] * (m + 1) for _ in range(n + 1)]
    back = {}
    for i in range(1, n + 1):
        dp[i][0] = dp[i-1][0] - len(ts[i-1]) * 0.6
        back[i, 0] = 'missing'
        for j in range(1, m + 1):
            sim = similarity(ts[i-1], cs[j-1])
            tb, cb = target_blocks[indices[i-1]], candidate_blocks[j-1]
            # Distinguish a call ending from a branch/return, without forcing
            # equal block counts when a worker still has the wrong skeleton.
            if tb.kind != cb.kind:
                sim *= 0.7
            options = [(dp[i-1][j] - len(ts[i-1]) * 0.6, 'missing'),
                       (dp[i][j-1] - len(cs[j-1]) * 0.35, 'insert')]
            if sim >= 0.45:
                reward = min(len(ts[i-1]), len(cs[j-1])) * (2 * sim - 0.7)
                reward -= abs(len(ts[i-1]) - len(cs[j-1])) * 0.35
                options.append((dp[i-1][j-1] + reward, 'pair'))
            dp[i][j], back[i, j] = max(options, key=lambda p: p[0])
    # Earliest tied end is deterministic; no positional whole-function bias.
    j = max(range(m + 1), key=lambda k: dp[n][k])
    i, pairs, inserted = n, {}, []
    while i:
        step = back[i, j]
        if step == 'pair':
            pairs[indices[i-1]] = j - 1
            i, j = i - 1, j - 1
        elif step == 'missing':
            i -= 1
        else:
            inserted.append(j - 1)
            j -= 1
    return pairs, sorted(inserted)


def edge_token(b, own, peer, mapping, reverse=False):
    """Compare internal edges by corresponding block, external edges by direction.

    External destination identity is deliberately not a regional match claim.
    It is checked by the whole-file verifier, not inferred from byte offsets.
    """
    if b.dest is None:
        return None
    starts = [x.start for x in own]
    k = bisect_right(starts, b.dest) - 1
    if k < 0 or b.dest >= own[-1].end:
        return ('outside_function', b.dest)
    lookup = {v: t for t, v in mapping.items()} if reverse else mapping
    if k in lookup:
        # Both sides use target-block identities.
        return ('internal', lookup[k] if reverse else k, b.dest - own[k].start)
    return ('external', 'back' if b.dest <= b.start else 'forward')


def compare_region(number, indices, tb, cb, target, mine, lines, vram=0):
    pairs, inserted = align_region(indices, tb, cb, target, mine)
    first, last = tb[indices[0]].start, tb[indices[-1]].end
    good, extra, difference = 0, sum(cb[i].end - cb[i].start for i in inserted), None
    block_reports = []
    def diff(ti, ci, reason='instruction'):
        return dict(offset=ti*4, candidate_offset=ci*4 if ci is not None else None,
                    target=diagnose._dis(target[ti], vram+ti*4) if ti < len(target) else '<end>',
                    attempt=diagnose._dis(mine[ci], vram+ci*4) if ci is not None and ci < len(mine) else '<missing>',
                    reason=reason)
    for k in indices:
        b = tb[k]
        if k not in pairs:
            difference = difference or diff(b.start, None, 'missing block')
            block_reports.append(dict(target_offset=b.start*4, candidate_offset=None, status='missing'))
            continue
        c = cb[pairs[k]]
        a = [layout_word(w) for w in target[b.start:b.end]]
        d = [layout_word(w) for w in mine[c.start:c.end]]
        bgood = sum(x == y for x, y in zip(a, d))
        edge_differs = edge_token(b, tb, cb, pairs) != edge_token(c, cb, tb, pairs, True)
        if edge_differs and len(a) == len(d) and len(a) >= 2 and a[-2] == d[-2]:
            # A branch to the wrong local block is a real regional difference,
            # even when only its normalized displacement changed.
            bgood = max(0, bgood - 1)
        good += bgood
        extra += max(0, len(d) - len(a))
        for j in range(max(len(a), len(d))):
            if j >= len(a) or j >= len(d) or a[j] != d[j]:
                difference = difference or diff(min(b.start+j, b.end-1), c.start+j if j < len(d) else None)
                break
        if edge_differs:
            difference = difference or diff(b.end-2, c.end-2, 'branch destination')
        block_reports.append(dict(target_offset=b.start*4, candidate_offset=c.start*4,
                                  candidate_end=c.end*4,
                                  status='matched' if bgood == len(a) == len(d) else 'differs'))
    if inserted and difference is None:
        difference = diff(last-1, cb[inserted[0]].start, 'inserted block')
    count = last - first
    score = good / (count + extra) if count else 0.0
    status = 'missing' if not pairs else 'matched' if good == count and extra == 0 else 'differs'
    loop = any(tb[k].dest is not None and first <= tb[k].dest <= tb[k].start for k in indices)
    kind = 'loop' if loop else 'switch cases' if any(tb[k].kind == 'indirect_jump' for k in indices) else 'if/else arms' if any(tb[k].kind == 'conditional' for k in indices) else 'straight-line/calls'
    return dict(region=number, start=4*first, end=4*last,
                lines=[lines.get(first, first+1), lines.get(last-1, last)],
                kind=kind, instructions=count, status=status,
                matching_instructions=good, extra_instructions=extra,
                score=round(score, 6), first_difference=difference, blocks=block_reports)


def compare(target, mine, vram=0, lines=None, target_tables=(), candidate_tables=(), minimum=40, maximum=150):
    target, mine = W.words(target), W.words(mine)
    while len(mine) > len(target) and mine[-1] == 0:
        mine.pop()
    tb, cb = blocks(target, vram, target_tables), blocks(mine, vram, candidate_tables)
    rs = split_regions(tb, target_tables, minimum, maximum)
    return [compare_region(i+1, indices, tb, cb, target, mine, lines or {}, vram)
            for i, indices in enumerate(rs)]


def target_lines(text, vram, size):
    out = {}
    for line, s in enumerate(text.splitlines(), 1):
        m = re.search(r'/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/', s)
        if m:
            off = int(m[1], 16) - vram
            if 0 <= off < size:
                out[off//4] = line
    return out


def preserve_cwd(fn):
    @functools.wraps(fn)
    def call(*args, **kwargs):
        cwd = os.getcwd()
        try:
            return fn(*args, **kwargs)
        finally:
            os.chdir(cwd)
    return call


@preserve_cwd
def check_source(func, seg, source=None, obj=None, minimum=40, maximum=150):
    off, size, vram, asm = T.find_func(func, seg=seg)
    text = Path(asm).read_text()
    with open(T.IMG, 'rb') as fh:
        fh.seek(off)
        target = fh.read(size)
    tables = W.target_table_targets(text, off, size, vram)
    lines = target_lines(text, vram, size)
    meta = dict(func=func, seg=seg, target=asm, size=size, source=str(source) if source else None,
                normalization='local branch layout; outgoing external edges by direction only',
                acceptance='diagnostic only; require try_func, in-file and ROM checks')
    if source is None and obj is None:
        rows = compare(target, b'', vram, lines, tables, minimum=minimum, maximum=maximum)
        for row in rows:
            row.update(status='target', score=None, first_difference=None)
        return dict(meta, regions=rows)
    # Scratch remains in this checkout and is removed on success AND failure.
    with tempfile.TemporaryDirectory(prefix='regions-', dir=Path(T.HH)/'build') as td:
        if obj is None:
            path = W.stage(str(Path(source).resolve()), td, dict(seg=seg, func=func))
            obj = str(Path(td)/'attempt.o')
            # Use the actual in-file compiler entry point, including asmproc's
            # UTF-8 -> EUC-JP conversion and the shared VR4300 multiply fix.
            import srcbuild
            obj, errors = srcbuild.compile_file(Path(path).read_text(), td)
            if obj is None:
                raise SystemExit('compile failed:\n' + errors)
        mine, rel = T.func_bytes(obj, func)
        _, candidate_tables = W.object_info(obj, func)
        symbol_offset = T._parsed(obj)[1][func][0]
        got = T.linked_func_bytes(obj, func, vram, base=vram-symbol_offset,
                                  rodata=T.asm_rodata_start(asm))
        meta['link_resolved'] = got is not None
        meta['unresolved_symbols'] = list(T.UNRESOLVED)
        if got is not None:
            mine = got
        else:
            # Do not silently call relocation-masked instructions matched.
            meta['relocation_offsets'] = sorted(rel)
        rows = compare(target, mine, vram, lines, tables, candidate_tables, minimum, maximum)
        if got is None:
            for row in rows:
                unresolved = [r for r in rel if any(b['candidate_offset'] is not None and
                    b['candidate_offset'] <= r < b['candidate_end'] for b in row['blocks'])]
                if unresolved:
                    if row['status'] == 'matched':
                        row['status'] = 'differs'
                        row['first_difference'] = dict(offset=row['start'], candidate_offset=None,
                            target='<resolved address>', attempt='<unresolved relocation>', reason='unresolved link')
    return dict(meta, regions=rows)


def human(report, selected=None):
    rows = [r for r in report['regions'] if selected is None or r['region'] == selected]
    out = ['%s %s: regions (layout-normalized; whole-file check required)' % (report['seg'], report['func']),
           ' ID  target range       lines       insns  score    status']
    for r in rows:
        score = '-' if r['score'] is None else '%.1f%%' % (100*r['score'])
        out.append('%3d  +%04X–+%04X  %5d–%-5d %5d  %7s  %s' % (
            r['region'], r['start'], r['end'], *r['lines'], r['instructions'], score, r['status']))
        detail = 'region %d (lines %d-%d of target.s, %s at +0x%X): %s' % (
            r['region'], *r['lines'], r['kind'], r['start'], r['status'])
        d = r['first_difference']
        if d:
            detail += ' at +0x%X: target %s vs yours %s (%s)' % (d['offset'], d['target'], d['attempt'], d['reason'])
        out.append(detail)
    if report.get('unresolved_symbols'):
        out.append('unresolved: ' + ', '.join(report['unresolved_symbols']))
    return '\n'.join(out)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('func')
    ap.add_argument('seg')
    group = ap.add_mutually_exclusive_group()
    group.add_argument('--source')
    group.add_argument('--object', help='reuse an object from the actual in-file compiler path')
    ap.add_argument('--region', type=int, help='show just this 1-based target region')
    ap.add_argument('--json', nargs='?', const='-', help='write JSON (or stdout instead of the table)')
    ap.add_argument('--min-instructions', type=int, default=40)
    ap.add_argument('--max-instructions', type=int, default=150)
    a = ap.parse_args()
    # addrfix/srcbuild imports used by object_info may chdir to the checkout.
    # Resolve caller-owned paths before invoking any of those helpers.
    if a.json and a.json != '-':
        a.json = str(Path(a.json).resolve())
    if a.object:
        a.object = str(Path(a.object).resolve())
    if not 1 <= a.min_instructions <= a.max_instructions:
        ap.error('require 1 <= min-instructions <= max-instructions')
    try:
        report = check_source(a.func, a.seg, a.source, a.object, a.min_instructions, a.max_instructions)
    except (Exception, SystemExit) as exc:
        print('regions: ' + str(exc), file=sys.stderr)
        return 2
    if a.region is not None and not any(r['region'] == a.region for r in report['regions']):
        ap.error('region does not exist')
    if a.json:
        data = json.dumps(report, indent=2) + '\n'
        if a.json == '-':
            print(data, end='')
        else:
            Path(a.json).write_text(data)
    if a.json != '-':
        print(human(report, a.region))
    return 0


if __name__ == '__main__':
    sys.exit(main())
