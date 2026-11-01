#!/usr/bin/env python3
"""Already-matched look-alikes of a big leftover, with their C mapped onto it (model-free).

  siblings.py FUNC SEG [--n 3]          print the top siblings, write skeletons, score them with regions.py
  siblings.py --all [--jobs 4]          every eligible >= 2 KiB leftover (stitch.leftovers)

Shape = the target's real opcode sequence (wall.opcode: registers, immediates and symbols dropped) and its
basic-block structure (regions.blocks: block kind and length). Every registered function (matched/<seg>/*.c)
of 0.5-2x the size is a candidate: an opcode 3-gram Jaccard prefilter, then

  similarity = 0.5 * opcode-sequence ratio + 0.25 * block-structure ratio + 0.25 * similar.py token ratio

(similar.py tokens keep small immediates and callee names, so near-copies rank above mere same-shape code).

Mapping: the sibling's and the target's assembly are aligned by opcode; inside aligned runs each relocated
symbol operand (func_/D_/jtbl_) votes for its counterpart, and the majority wins (propagate.py does the same
for exact copies, where every vote agrees). Aligned addiu/ori/slti immediates that differ map constants only
when all votes agree. The skeleton is propagate.self_contained (the sibling plus the declarations it relied on
from its own file), renamed with propagate.translate / with_consts, including "context.h" (the leftover's file
context, srcbuild.context_for). It is scored with regions.py in that context.

Output: queue/siblings1.jsonl and queue/siblings1/<seg>/<func>.c (best-scoring skeleton), <func>.<k>.c for
each of the top siblings, and context.h-free: give a worker its own context.h. Skeletons are starting points:
they rarely compile cleanly into another function's context and are a diagnostic, not a match.
"""
import argparse
import collections
import csv
from concurrent.futures import ProcessPoolExecutor
from difflib import SequenceMatcher
import json
from pathlib import Path
import re
import shutil
import sys
import tempfile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import stitch as ST
HH = ST.HH

SYM = re.compile(r'\b((?:func|D|jtbl|jlabel)_[0-9A-Fa-f]{8}\w*)\b')
INSN = re.compile(r'^\s*/\* [0-9A-F]+ [0-9A-F]+ [0-9A-F]{8} \*/\s+(\S+)\s*(.*)$')

_rows = None
_img = None


def rows():
    global _rows
    if _rows is None:
        _rows = {(r['segment'], r['func']): r for r in csv.DictReader(open(HH / 'queue' / 'functions.csv'))}
    return _rows


def words(seg, func):
    global _img
    import wall as W
    if _img is None:
        _img = (HH / 'build' / 'expanded.bin').read_bytes()
    r = rows()[seg, func]
    off, size = int(r['rom_exp'], 16), int(r['size'])
    return W.words(_img[off:off + size])


def asm_path(seg, func):
    import srcbuild as S
    cf = S.file_of(seg, func)
    p = cf and HH / 'asm' / 'nonmatchings' / seg / cf / (func + '.s')
    return p if p and p.exists() else None


def asm_insns(path, n):
    """[(mnemonic, (symbols...), immediates)] for the first n instruction lines."""
    out = []
    for line in open(path):
        if line.startswith('endlabel') and out:
            break
        m = INSN.match(line)
        if not m or m.group(1).startswith('.'):
            continue
        args = m.group(2)
        syms = tuple(s for s in SYM.findall(args))
        imm = re.findall(r'(?<![\w%])(-?0x[0-9A-Fa-f]+|-?\d+)(?![\w(])', re.sub(r'%\w+\([^)]*\)', '', args))
        out.append((m.group(1), syms, imm[-1] if imm else None))
        if len(out) >= n:
            break
    return out


class Shape:
    def __init__(self, seg, func):
        import regions as R
        import wall as W
        self.seg, self.func = seg, func
        self.ws = words(seg, func)
        self.ops = [W.opcode(w) for w in self.ws]
        self.blocks = [(b.kind, min(b.end - b.start, 40)) for b in R.blocks(self.ws)]
        self.grams = {tuple(self.ops[i:i + 3]) for i in range(max(1, len(self.ops) - 2))}


def similar_tokens(seg, func):
    import similar
    p = asm_path(seg, func)
    return similar.tokens(str(p)) if p else []


def ratio(a, b):
    return SequenceMatcher(None, a, b, autojunk=False).ratio()


_index = None


def candidates():
    """Registered (matched/) functions with ROM bytes and assembly."""
    global _index
    if _index is None:
        import srcbuild as S
        reg = S.registry()
        _index = [k for k in reg if k in rows() and int(rows()[k]['size']) >= 64]
    return _index


def find(seg, func, n=3, pre=30):
    t = Shape(seg, func)
    size = len(t.ws)
    cache = {}
    scored = []
    for k in candidates():
        if k == (seg, func):
            continue
        cs = int(rows()[k]['size']) // 4
        if not 0.5 <= cs / max(1, size) <= 2.0:
            continue
        c = cache[k] = Shape(*k)
        scored.append((len(t.grams & c.grams) / max(1, len(t.grams | c.grams)), k))
    scored.sort(reverse=True)
    out = []
    ttok = similar_tokens(seg, func)
    for j, k in scored[:pre]:
        c = cache[k]
        op = ratio(t.ops, c.ops)
        bl = ratio(t.blocks, c.blocks)
        tk = ratio(ttok, similar_tokens(*k))
        out.append(dict(seg=k[0], func=k[1], size=4 * len(c.ws), jaccard=round(j, 4), opcode_ratio=round(op, 4),
                        block_ratio=round(bl, 4), token_ratio=round(tk, 4),
                        similarity=round(0.5 * op + 0.25 * bl + 0.25 * tk, 4)))
    out.sort(key=lambda r: -r['similarity'])
    return out[:n]


def mapping(src, dst):
    """(symbol map, constant map, fraction of instructions aligned) from opcode alignment of src onto dst."""
    import wall as W
    a_ws, b_ws = words(*src), words(*dst)
    a, b = asm_insns(asm_path(*src), len(a_ws)), asm_insns(asm_path(*dst), len(b_ws))
    oa, ob = [W.opcode(w) for w in a_ws[:len(a)]], [W.opcode(w) for w in b_ws[:len(b)]]
    votes, cvotes = collections.defaultdict(collections.Counter), collections.defaultdict(collections.Counter)
    aligned = 0
    for blk in SequenceMatcher(None, oa, ob, autojunk=False).get_matching_blocks():
        aligned += blk.size
        for k in range(blk.size):
            x, y = a[blk.a + k], b[blk.b + k]
            if len(x[1]) == len(y[1]):
                for s, d in zip(x[1], y[1]):
                    votes[s][d] += 1
            if x[0] in ('addiu', 'ori', 'slti', 'sltiu', 'li') and not x[1] and not y[1] and x[2] and y[2] \
                    and x[2] != y[2]:
                cvotes[int(x[2], 0)][int(y[2], 0)] += 1
            elif x[0] in ('addiu', 'ori', 'slti', 'sltiu', 'li') and x[2] and y[2] and x[2] == y[2]:
                cvotes[int(x[2], 0)][int(y[2], 0)] += 1
    m = {src[1]: dst[1]}
    taken = {dst[1]}
    for s, c in sorted(votes.items(), key=lambda kv: -sum(kv[1].values())):
        if s in m:
            continue
        d, _ = c.most_common(1)[0]
        if d not in taken:
            m[s] = d
            taken.add(d)
    cm = {}
    for v, c in cvotes.items():
        if len(c) == 1:
            (w, _), = c.items()
            if w != v and abs(v) >= 2:
                cm[v] = w
    return m, cm, aligned / max(1, len(oa), len(ob))


def skeleton(src, dst):
    import propagate as P
    import srcbuild as S
    m, cm, frac = mapping(src, dst)
    ctx = S.context_for(*dst)
    text = P.translate(P.self_contained(src[0], src[1], ctx, m), m)
    text = P.with_consts(text, cm)
    # the sibling's file may declare/alias the sibling's own name (now FUNC); FUNC's definition is the declaration
    own = re.escape(dst[1])
    text = re.sub(r'^(?:extern [^\n;{]*\b%s\b[^\n;{]*;|#(?:define|undef)\s+%s\b[^\n]*)\n' % (own, own), '', text,
                  flags=re.M)
    text = text.replace('#include "common.h"', '#include "context.h"')
    if '#include "context.h"' not in text:
        text = '#include "context.h"\n' + text
    head = ('/* sibling skeleton: %s (%s) mapped onto %s (%s); %d symbols and %d constants mapped,\n'
            '   %.0f%% of instructions aligned by opcode. A starting point, not a match. */\n'
            % (src[1], src[0], dst[1], dst[0], len(m) - 1, len(cm), 100 * frac))
    return head + text, ctx, dict(symbols_mapped=len(m) - 1, constants_mapped=len(cm), aligned=round(frac, 4))


def shield(text, func, ctx):
    """Hide context.h's declarations of FUNC and of functions the skeleton declares itself (the workers'
    `#define NAME NAME_ctx` / `#include` / `#undef` idiom), so the skeleton's own prototypes win."""
    own = {func} | set(re.findall(r'^[^#\n]*?\b(func_[0-9A-F]{8})\s*\([^;{]*\)\s*;', text, re.M))
    own &= set(re.findall(r'\bfunc_[0-9A-F]{8}\b', ctx))
    if not own or '#include "context.h"' not in text:
        return None
    pre = ''.join('#define %s %s_ctx\n' % (n, n) for n in sorted(own))
    post = ''.join('#undef %s\n' % n for n in sorted(own))
    return text.replace('#include "context.h"\n', pre + '#include "context.h"\n' + post, 1)


def score(func, seg, text, ctx):
    """regions.py report of text in the leftover's file context (also tries without clashing type defs)."""
    import propagate as P
    import regions as R
    import reconcile
    tries = [text]
    d = P.drop_known_types(text, ctx)
    if d:
        tries.append(d)
    for t in list(tries):
        w = shield(t, func, ctx)
        if w and w not in tries:
            tries.append(w)
    for t in list(tries):     # the leftover's own declarations win over the sibling's (as propagate does)
        try:
            w = reconcile.with_context_decls(t, ctx, func)
        except Exception:
            w = None
        if w and w not in tries:
            tries.append(w)
    err = ''
    for t in tries:
        with tempfile.TemporaryDirectory(prefix='siblings-', dir=str(HH / 'build')) as td:
            (Path(td) / 'context.h').write_text(ctx)
            (Path(td) / 'known.h').write_text('')
            p = Path(td) / 'attempt.c'
            p.write_text(t)
            try:
                rep = R.check_source(func, seg, str(p))
            except (Exception, SystemExit) as exc:
                msg = str(exc)
                errs = [l.strip() for l in msg.splitlines() if 'rror' in l and 'cc -c' not in l]
                err = (errs[0] if errs else msg.strip().splitlines()[-1] if msg.strip() else 'compile failed')[:200]
                continue
        rs = rep['regions']
        return t, dict(compiles=True, matched=sum(r['status'] == 'matched' for r in rs), regions=len(rs),
                       quality=round(sum(r['matching_instructions'] for r in rs) /
                                     max(1, sum(r['instructions'] + r['extra_instructions'] for r in rs)), 6),
                       scores=[r['score'] for r in rs])
    return text, dict(compiles=False, error=err or 'compile failed')


def run(func, seg, n=3, out_dir=None):
    row = dict(func=func, seg=seg, siblings=[])
    sibs = find(seg, func, n)
    best = None
    for k, s in enumerate(sibs, 1):
        try:
            text, ctx, info = skeleton((s['seg'], s['func']), (seg, func))
        except Exception as exc:
            s.update(error='mapping failed: %s' % exc)
            row['siblings'].append(s)
            continue
        text, sc = score(func, seg, text, ctx)
        s.update(info, **sc)
        if out_dir:
            p = Path(out_dir) / seg / ('%s.%d.c' % (func, k))
            p.parent.mkdir(parents=True, exist_ok=True)
            p.write_text(text)
            s['path'] = str(p.relative_to(HH))
        key = (sc.get('compiles', False), sc.get('matched', 0), sc.get('quality', 0), s['similarity'])
        if best is None or key > best[0]:
            best = key, k, text
        row['siblings'].append(s)
    if best and out_dir:
        p = Path(out_dir) / seg / (func + '.c')
        p.write_text(best[2])
        row['output'] = str(p.relative_to(HH))
        row['best'] = best[1]
        b = row['siblings'][best[1] - 1]
        row.update(best_similarity=b['similarity'], best_matched=b.get('matched'), best_quality=b.get('quality'),
                   regions=b.get('regions'), full_match=bool(b.get('regions')) and b.get('matched') == b.get('regions'))
    return row


def job(args):
    r, n, out_dir = args
    try:
        res = run(r['func'], r['seg'], n, out_dir)
    except Exception:
        import traceback
        res = dict(func=r['func'], seg=r['seg'], error=traceback.format_exc()[-600:])
    res['size'] = r['size']
    return res


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('func', nargs='?')
    ap.add_argument('seg', nargs='?')
    ap.add_argument('--all', action='store_true')
    ap.add_argument('--n', type=int, default=3)
    ap.add_argument('--jobs', type=int, default=4)
    ap.add_argument('--out', default='queue/siblings1')
    ap.add_argument('--jsonl', default='queue/siblings1.jsonl')
    a = ap.parse_args()
    out_dir = HH / a.out
    if a.all:
        todo = ST.leftovers()
        print(len(todo), 'eligible leftovers', flush=True)
        results = []
        with ProcessPoolExecutor(max_workers=a.jobs) as pool:
            for res in pool.map(job, [(r, a.n, out_dir) for r in todo]):
                results.append(res)
                print(res['seg'], res['func'], res.get('best_similarity'), res.get('best_matched'), '/',
                      res.get('regions'), res.get('best_quality'), res.get('error', '')[:80], flush=True)
        (HH / a.jsonl).write_text(''.join(json.dumps(r, sort_keys=True) + '\n' for r in results))
        return 0
    if not (a.func and a.seg):
        ap.error('FUNC SEG or --all')
    res = job((dict(func=a.func, seg=a.seg, size=None), a.n, out_dir))
    for s in res.get('siblings', []):
        print('%.3f  %s %s (%d bytes)  opcode %.2f blocks %.2f tokens %.2f  -> %s' % (
            s['similarity'], s['seg'], s['func'], s['size'], s['opcode_ratio'], s['block_ratio'], s['token_ratio'],
            ('%s/%s regions, quality %.3f' % (s['matched'], s['regions'], s['quality'])) if s.get('compiles')
            else 'does not compile: %s' % s.get('error')))
    print('output', res.get('output'), res.get('error', ''))
    return 0


if __name__ == '__main__':
    sys.exit(main())
