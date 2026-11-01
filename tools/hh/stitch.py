#!/usr/bin/env python3
"""Stitch the best-scoring region of each saved attempt into one candidate (model-free).

  stitch.py FUNC SEG [--budget 60] [-v]        one function; prints per-region before/after
  stitch.py --all [--jobs 4]                   every eligible >= 2 KiB leftover

Every saved attempt of FUNC (queue/*/work/FUNC[@SEG]/{attempt.c,*.c,.attempts/*.c} in this checkout and in
the --roots, deduplicated by content) is compiled through the in-file compiler path and scored region by
region with regions.py. The best attempt overall is the base. For each region (or run of consecutive
regions) where another attempt scores higher, its C statements for those regions replace the base's:

  - regions -> C statements: the attempt is also compiled with IDO `-O2 -g3` (same block structure, slightly
    different scheduling; its .mdebug line table is read with objdump -l). Instructions of the -O2 object are
    mapped to the -g3 object by opcode alignment, so each region's candidate blocks give line weights; the
    smallest statement range (at some nesting level) holding >= 90% of that weight is the region's C.
  - declarations: the base's are kept; the donor's locals, file-scope items and #defines that the transplanted
    statements use and the base lacks are added (union, deduplicated, base preferred on a name clash).

Each splice is compiled and rescored as a whole: IDO allocates registers globally, so a seam can change other
regions, and that is what is measured. A splice is kept only if (matched regions, instruction quality)
improves. The stitched result is written only if it beats the best single attempt.

Results: queue/stitch1.jsonl (one row per function) and queue/stitch1/<seg>/<func>.c (kept candidates; they
#include "context.h" from `base` row's directory). Regions are a diagnostic; a full match must still pass
srcbuild.infile_check and the ROM build before landing.
"""
import argparse
import bisect
import collections
from concurrent.futures import ProcessPoolExecutor
from dataclasses import dataclass, field
from difflib import SequenceMatcher
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tempfile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import try_func as T
HH = Path(T.HH)
LIVE = Path('/home/claude/work/hybrid-heaven-decomp')

# ----------------------------------------------------------------------------- C statement structure

IDENT = re.compile(r'[A-Za-z_]\w*')
WORD = re.compile(r'\b[A-Za-z_]\w*\b')
KEYWORDS = {'return', 'goto', 'break', 'continue', 'case', 'default', 'if', 'else', 'for', 'while', 'do',
            'switch', 'sizeof'}


@dataclass
class Stmt:
    start: int                          # character offsets into the text, [start, end)
    end: int
    kind: str                           # block if for while do switch label decl simple
    children: list = field(default_factory=list)   # lists of Stmt (bodies)
    l0: int = 0                         # 1-based first/last line
    l1: int = 0


def skip_ws(t, i, b):
    """Skip whitespace, comments and preprocessor lines."""
    while i < b:
        c = t[i]
        if c.isspace():
            i += 1
        elif t.startswith('/*', i):
            j = t.find('*/', i + 2)
            i = b if j < 0 else j + 2
        elif t.startswith('//', i):
            j = t.find('\n', i)
            i = b if j < 0 else j + 1
        elif c == '#' and t[t.rfind('\n', 0, i) + 1:i].strip() == '':
            while i < b:
                j = t.find('\n', i)
                if j < 0:
                    return b
                if t[j - 1] != '\\':
                    i = j + 1
                    break
                i = j + 1
        else:
            break
    return i


def scan_to(t, i, b, stops):
    """Index of the first char in `stops` at bracket depth 0 (skipping strings/comments), or b."""
    depth = 0
    while i < b:
        c = t[i]
        if c in '"\'':
            q = c
            i += 1
            while i < b and t[i] != q:
                i += 2 if t[i] == '\\' else 1
        elif t.startswith('/*', i):
            j = t.find('*/', i + 2)
            i = b if j < 0 else j + 1
        elif t.startswith('//', i):
            j = t.find('\n', i)
            i = b if j < 0 else j
        elif c == '#' and t[t.rfind('\n', 0, i) + 1:i].strip() == '':
            j = t.find('\n', i)
            i = b if j < 0 else j
        elif c in '([{':
            if depth == 0 and c in stops:
                return i
            depth += 1
        elif c in ')]}':
            if depth == 0 and c in stops:
                return i
            depth -= 1
        elif depth == 0 and c in stops:
            return i
        i += 1
    return b


def match(t, i, b):
    """i at an opening bracket: index just past its partner."""
    close = {'(': ')', '[': ']', '{': '}'}[t[i]]
    j = scan_to(t, i + 1, b, close)
    return min(b, j + 1)


DECL = re.compile(r'^(?:(?:static|const|volatile|register|extern|unsigned|signed|struct|union|enum)\s+)*'
                  r'[A-Za-z_]\w*(?:\s*\*+\s*|\s+)\**\s*\(?\s*\*?\s*[A-Za-z_]\w*\s*\)?\s*(?:\[|=|,|;|\()')


def is_decl(text):
    s = text.strip()
    m = IDENT.match(s)
    if not m or m.group(0) in KEYWORDS:
        return False
    return bool(DECL.match(s))


def parse_stmt(t, i, b):
    i = skip_ws(t, i, b)
    if i >= b:
        return None, b
    m = IDENT.match(t, i)
    word = m.group(0) if m else None
    if t[i] == '{':
        j = match(t, i, b)
        return Stmt(i, j, 'block', [parse_list(t, i + 1, j - 1)]), j
    if word in ('if', 'for', 'while', 'switch'):
        p = skip_ws(t, m.end(), b)
        if p < b and t[p] == '(':
            p = match(t, p, b)
            body, j = parse_stmt(t, p, b)
            kids = [[body] if body else []]
            if word == 'if':
                k = skip_ws(t, j, b)
                if t.startswith('else', k) and not (k + 4 < b and (t[k + 4].isalnum() or t[k + 4] == '_')):
                    other, j = parse_stmt(t, k + 4, b)
                    kids.append([other] if other else [])
            return Stmt(i, j, word, kids), j
    if word == 'do':
        body, j = parse_stmt(t, m.end(), b)
        k = scan_to(t, j, b, ';')
        return Stmt(i, min(b, k + 1), 'do', [[body] if body else []]), min(b, k + 1)
    if word in ('case', 'default'):
        k = scan_to(t, m.end(), b, ':;{')
        return Stmt(i, min(b, k + 1), 'label'), min(b, k + 1)
    if word and word not in KEYWORDS:
        k = skip_ws(t, m.end(), b)
        if k < b and t[k] == ':' and not t.startswith('::', k):
            return Stmt(i, k + 1, 'label'), k + 1
    k = scan_to(t, i, b, ';}')
    if k < b and t[k] == '}':      # stray close (malformed): stop the list
        return None, b
    j = min(b, k + 1)
    return Stmt(i, j, 'decl' if is_decl(t[i:j]) else 'simple'), j


def parse_list(t, a, b):
    out = []
    i = a
    while True:
        s, j = parse_stmt(t, i, b)
        if s is None or j <= i:
            break
        out.append(s)
        i = j
    return out


def number(stmts, starts):
    for s in stmts:
        s.l0 = bisect.bisect_right(starts, s.start)
        s.l1 = bisect.bisect_right(starts, max(s.start, s.end - 1))
        for kid in s.children:
            number(kid, starts)


def find_function(t, func):
    """(body_open, body_close) character offsets of FUNC's definition braces, or None."""
    for m in re.finditer(r'\b%s\s*\(' % re.escape(func), t):
        # must be at file scope: no unclosed brace before it
        p = match(t, t.index('(', m.start()), len(t))
        k = skip_ws(t, p, len(t))
        for _ in range(16):         # K&R parameter declarations: `s32 arg0;` ... before the brace
            if k >= len(t) or t[k] == '{' or not IDENT.match(t, k):
                break
            e = scan_to(t, k, len(t), ';{}')
            if e >= len(t) or t[e] != ';' or '(' in t[k:e].replace('(*', ''):
                break
            k = skip_ws(t, e + 1, len(t))
        if k < len(t) and t[k] == '{':
            pre = re.sub(r'/\*.*?\*/|//[^\n]*|"(?:\\.|[^"\\])*"', '', t[:m.start()], flags=re.S)
            if pre.count('{') == pre.count('}'):
                return k, match(t, k, len(t))
    return None


@dataclass
class Parsed:
    text: str
    func: str
    head: int            # start of the function's definition line
    open: int
    close: int
    decls: list          # top-level local declarations (Stmt)
    body: list           # top-level statements after the declarations
    starts: list


def parse(text, func):
    span = find_function(text, func)
    if not span:
        return None
    o, c = span
    starts = [0] + [m.end() for m in re.finditer('\n', text)]
    items = parse_list(text, o + 1, c - 1)
    number(items, starts)
    k = 0
    while k < len(items) and items[k].kind == 'decl':
        k += 1
    m = None
    for m in re.finditer(r'\b%s\s*\(' % re.escape(func), text[:o]):
        pass
    head = text.rfind('\n', 0, m.start()) + 1 if m else o
    return Parsed(text, func, head, o, c, items[:k], items[k:], starts)


def decl_names(text):
    """Names declared by one declaration statement."""
    s = re.sub(r'/\*.*?\*/|//[^\n]*', '', text, flags=re.S).strip().rstrip(';')
    parts, depth, cur = [], 0, ''
    for ch in s:
        if ch in '([{':
            depth += 1
        elif ch in ')]}':
            depth -= 1
        if ch == ',' and depth == 0:
            parts.append(cur)
            cur = ''
        else:
            cur += ch
    parts.append(cur)
    names = []
    for k, p in enumerate(parts):
        p = p.split('=')[0] if '=' in p else p
        fp = re.search(r'\(\s*\*+\s*(\w+)\s*\)', p)
        if fp:
            names.append(fp.group(1))
            continue
        p = re.sub(r'\[[^\]]*\]', '', p)
        ids = IDENT.findall(p)
        if ids:
            names.append(ids[-1])
    return names


def weight_of(s, w):
    return sum(v for line, v in w.items() if s.l0 <= line <= s.l1)


def spans(stmts, w, frac=0.9):
    """Candidate statement ranges for line weights w, outermost first: [(start, end, depth)]."""
    out = []
    depth = 0
    while stmts:
        ws = [weight_of(s, w) for s in stmts]
        total = sum(ws)
        if total == 0:
            break
        nz = [k for k, x in enumerate(ws) if x]
        i, j = nz[0], nz[-1]
        while i < j and sum(ws[i + 1:j + 1]) >= frac * total:
            i += 1
            while i < j and ws[i] == 0:
                i += 1
        while i < j and sum(ws[i:j]) >= frac * total:
            j -= 1
            while j > i and ws[j] == 0:
                j -= 1
        out.append((stmts[i].start, stmts[j].end, depth))
        if i != j or not stmts[i].children:
            break
        kids = stmts[i].children
        kw = [sum(weight_of(s, w) for s in kid) for kid in kids]
        best = max(range(len(kids)), key=lambda k: kw[k])
        if kw[best] < frac * ws[i]:
            break
        stmts = kids[best]
        if len(stmts) == 1 and stmts[0].kind == 'block':
            stmts = stmts[0].children[0]
        depth += 1
    return out


def preamble_items(text):
    import unify
    return unify.top_items(text)


def defines(text):
    return {m.group(1): m.group(0) for m in re.finditer(r'^[ \t]*#define[ \t]+(\w+).*$', text, re.M)}


def swap_decls(base, donor):
    """The base with the donor's local declarations (order and types) first, then the base's other locals.
    IDO's register allocation follows declaration order, so a region can differ only through these."""
    if not base.decls or not donor.decls:
        return None
    t = base.text
    got = [donor.text[d.start:d.end] for d in donor.decls]
    names = set()
    for x in got:
        names.update(decl_names(x))
    used = set(WORD.findall(t[base.decls[-1].end:base.close]))
    got = [x for x in got if set(decl_names(x)) & used]
    for d in base.decls:
        x = t[d.start:d.end]
        if not set(decl_names(x)) & names:
            got.append(x)
    return t[:base.decls[0].start] + '\n    '.join(x.strip() for x in got) + t[base.decls[-1].end:]


def transplant(base, donor, bspan, dspan):
    """Replace base[bspan] with donor[dspan], adding the donor declarations that the new code needs."""
    piece = donor.text[dspan[0]:dspan[1]]
    t = base.text
    new = t[:bspan[0]] + piece + t[bspan[1]:]
    used = set(WORD.findall(piece))
    have_locals = set()
    for d in base.decls:
        have_locals.update(decl_names(t[d.start:d.end]))
    params = set(WORD.findall(t[base.head:base.open]))
    add_locals = []
    for d in donor.decls:
        names = decl_names(donor.text[d.start:d.end])
        if set(names) & used and not set(names) & (have_locals | params):
            add_locals.append(donor.text[d.start:d.end])
            have_locals.update(names)
    # file scope: donor items before its function, missing in the base, used (transitively) by the new code
    base_pre, donor_pre = t[:base.head], donor.text[:donor.head]
    have = set()
    for names, _ in preamble_items(base_pre):
        have |= names
    need = set(used)
    for loc in add_locals:
        need |= set(WORD.findall(loc))
    items, picked, changed = preamble_items(donor_pre), [], True
    while changed:
        changed = False
        for k, (names, it) in enumerate(items):
            if k in picked or not names & need or names & have:
                continue
            picked.append(k)
            need |= set(WORD.findall(it))
            changed = True
    bdef, ddef = defines(base_pre), defines(donor_pre)
    macros = [ddef[n] for n in ddef if n not in bdef and n in need]
    extra_top = macros + [items[k][1] for k in sorted(picked)]
    # declarations go after the base's last local declaration (or straight after the brace)
    at = base.decls[-1].end if base.decls else base.open + 1
    if bspan[0] < at:       # cannot happen (spans exclude declarations), guard anyway
        return None
    new = new[:at] + ''.join('\n    ' + x.strip() for x in add_locals) + new[at:]
    if extra_top:
        new = new[:base.head] + '\n'.join(extra_top) + '\n' + new[base.head:]
    return new


# ----------------------------------------------------------------------------- attempts and scoring

def attempt_dirs(func, seg, roots):
    """Directories holding saved attempts for (seg, func)."""
    out = []
    for root in roots:
        q = Path(root) / 'queue'
        if not q.is_dir():
            continue
        for batch in sorted(q.iterdir()):
            work = batch / 'work'
            if not work.is_dir():
                continue
            d = work / ('%s@%s' % (func, seg))
            if d.is_dir():
                out.append(d)
                continue
            d = work / func
            if d.is_dir():
                segs = set()
                res = batch / 'results.jsonl'
                if res.exists():
                    for line in open(res, errors='replace'):
                        if func in line:
                            try:
                                r = json.loads(line)
                            except ValueError:
                                continue
                            if r.get('func') == func:
                                segs.add(r.get('segment', r.get('seg')))
                if segs == {seg}:
                    out.append(d)
    return out


def collect(func, seg, roots):
    """[(path, header_dir)] of distinct saved attempt sources that define FUNC."""
    seen, out = set(), []
    for d in attempt_dirs(func, seg, roots):
        files = sorted(d.glob('*.c')) + sorted((d / '.attempts').glob('*.c'))
        for p in files:
            try:
                text = p.read_text(errors='replace')
            except OSError:
                continue
            if not re.search(r'\b%s\s*\(' % re.escape(func), text):
                continue
            h = hashlib.sha1(text.encode()).hexdigest()
            if h in seen:
                continue
            seen.add(h)
            out.append((str(p), str(d)))
    return out


@dataclass
class Eval:
    text: str
    headers: str
    regions: list
    matched: int
    quality: float
    lines: dict = None          # region number -> {line: weight}
    parsed: Parsed = None
    source: str = ''

    @property
    def key(self):
        return (self.matched, round(self.quality, 6))

    def scores(self):
        return [r['score'] for r in self.regions]


def objdump_lines(obj, func):
    """{instruction index within func: line} from IDO -g3 .mdebug line info."""
    env = dict(os.environ)
    r = subprocess.run(['mips-linux-gnu-objdump', '-l', '-d', '-j', '.text', obj], capture_output=True,
                       text=True, env=env)
    _, syms, _, _ = T._parsed(obj)
    if func not in syms:
        return {}
    start, size = syms[func]
    out, line = {}, None
    for l in r.stdout.splitlines():
        m = re.match(r'^\S.*:(\d+)(?: \(discriminator \d+\))?$', l)
        if m and not l.endswith('>:'):
            line = int(m.group(1))
            continue
        m = re.match(r'^\s+([0-9a-f]+):\s+[0-9a-f]{8}\s', l)
        if m and line is not None:
            a = int(m.group(1), 16)
            if start <= a < start + (size or 1 << 30):
                out[(a - start) // 4] = line
    return out


def index_map(a, b):
    """Map instruction indices of word list a onto b by opcode alignment (nearest aligned neighbour)."""
    import wall as W
    oa, ob = [W.opcode(w) for w in a], [W.opcode(w) for w in b]
    pairs = {}
    for blk in SequenceMatcher(None, oa, ob, autojunk=False).get_matching_blocks():
        for k in range(blk.size):
            pairs[blk.a + k] = blk.b + k
    if not pairs:
        return {i: min(i, len(b) - 1) for i in range(len(a))} if b else {}
    keys = sorted(pairs)
    out = {}
    for i in range(len(a)):
        k = bisect.bisect_left(keys, i)
        near = min((keys[x] for x in (k - 1, k) if 0 <= x < len(keys)), key=lambda q: abs(q - i))
        out[i] = pairs[near] if near == i else min(len(b) - 1, max(0, pairs[near] + (i - near)))
    return out


def evaluate(func, seg, text, headers, want_lines=True, source=''):
    """Compile text (with headers/*.h) on the in-file path, score regions; optionally region line weights."""
    import regions as R
    import srcbuild
    import wall as W
    with tempfile.TemporaryDirectory(prefix='stitch-', dir=str(HH / 'build')) as td:
        for h in Path(headers).glob('*.h'):
            shutil.copy(h, td)
        obj, err = srcbuild.compile_file(text, td)
        if obj is None:
            return None
        try:
            rep = R.check_source(func, seg, obj=obj)
        except (Exception, SystemExit):
            return None
        rs = rep['regions']
        ev = Eval(text, headers, rs, sum(r['status'] == 'matched' for r in rs),
                  sum(r['matching_instructions'] for r in rs) / max(1, sum(r['instructions'] + r['extra_instructions'] for r in rs)),
                  source=source)
        if not want_lines:
            return ev
        g3 = os.path.join(td, 'g3.o')
        r = subprocess.run([str(HH / srcbuild.IDO), '-c'] + srcbuild.CFLAGS + ['-g3', '-o', g3, os.path.join(td, 'f.c')],
                           capture_output=True, text=True, cwd=str(HH))
        ev.lines = {}
        if r.returncode == 0:
            try:
                mine = W.words(T.func_bytes(obj, func)[0])
                dbg = W.words(T.func_bytes(g3, func)[0])
                lines = objdump_lines(g3, func)
                imap = index_map(mine, dbg)
                for reg in rs:
                    w = collections.Counter()
                    for b in reg['blocks']:
                        if b.get('candidate_offset') is None:
                            continue
                        for i in range(b['candidate_offset'] // 4, b['candidate_end'] // 4):
                            ln = lines.get(imap.get(i, -1))
                            if ln:
                                w[ln] += 1
                    ev.lines[reg['region']] = dict(w)
            except (Exception, StopIteration):
                pass
        ev.parsed = parse(text, func)
        return ev


def better(a, b):
    return a.key > b.key


def runs(donor, cur, eps=1e-9):
    """Maximal runs of consecutive regions where donor scores higher than cur."""
    out, run = [], []
    for k, (d, c) in enumerate(zip(donor.regions, cur.regions)):
        if d['score'] is not None and d['score'] > c['score'] + eps:
            run.append(k + 1)
        else:
            if run:
                out.append(run)
            run = []
    if run:
        out.append(run)
    return out


def gain_of(donor, cur, r):
    """Region r's score difference in instructions (extra candidate instructions count against a score)."""
    d, c = donor.regions[r - 1], cur.regions[r - 1]
    return (d['score'] - c['score']) * d['instructions']


def merged(ev, regs):
    w = collections.Counter()
    for r in regs:
        w.update(ev.lines.get(r, {}))
    return w


def body_weights(ev, w):
    """Drop weight on declaration lines (initialisers) and outside the function body."""
    p = ev.parsed
    lo = bisect.bisect_right(p.starts, p.open)
    hi = bisect.bisect_right(p.starts, p.close)
    dl = set()
    for d in p.decls:
        dl.update(range(d.l0, d.l1 + 1))
    return {k: v for k, v in w.items() if lo <= k <= hi and k not in dl}


def climb(func, seg, start, evs, budget, log=print, donors=None):
    """Greedy region splices into `start` (an Eval with lines); returns (cur, accepted, history, tries)."""
    cur = start
    donors = donors if donors is not None else {}
    tries, accepted, history = 0, [], []
    failed = set()
    while tries < budget:
        moves = []
        for e in evs[1:]:
            for run in runs(e, cur):
                gain = sum(gain_of(e, cur, r) for r in run)
                if gain > 0:
                    moves.append((gain, e.source, run))
                    if len(run) > 1:
                        for r in run:
                            g = gain_of(e, cur, r)
                            if g > 0:
                                moves.append((g - 0.5, e.source, [r]))
        moves.sort(key=lambda m: -m[0])
        improved = False
        for gain, src, run in moves:
            sig = (src, tuple(run), hashlib.sha1(cur.text.encode()).hexdigest())
            if sig in failed:
                continue
            failed.add(sig)
            if src not in donors:
                e = next(x for x in evs if x.source == src)
                donors[src] = evaluate(func, seg, e.text, e.headers, source=src)
            d = donors[src]
            if not d or not d.parsed or not d.lines:
                continue
            bw = body_weights(cur, merged(cur, run))
            dw = body_weights(d, merged(d, run))
            bs, ds = spans(cur.parsed.body, bw), spans(d.parsed.body, dw)
            if not bs or not ds:
                continue
            options = [(bs[-1], ds[-1]), (bs[0], ds[0])]
            options += [(b, x) for b in bs for x in ds if b[2] == x[2]]
            options.append('decls')
            seen = set()
            for opt in options:
                if opt in seen:
                    continue
                seen.add(opt)
                if tries >= budget:
                    break
                if opt == 'decls':
                    new = swap_decls(cur.parsed, d.parsed)
                    if (src, 'decls', hashlib.sha1(cur.text.encode()).hexdigest()) in failed:
                        continue
                    failed.add((src, 'decls', hashlib.sha1(cur.text.encode()).hexdigest()))
                else:
                    new = transplant(cur.parsed, d.parsed, opt[0][:2], opt[1][:2])
                if not new or new == cur.text:
                    continue
                tries += 1
                ev = evaluate(func, seg, new, cur.headers, source='stitched')
                if ev is None or ev.parsed is None:
                    history.append(dict(donor=src, regions=run, result='compile/parse failed'))
                    continue
                if better(ev, cur):
                    history.append(dict(donor=src, regions=run, result='kept', matched=ev.matched,
                                        quality=round(ev.quality, 6)))
                    log('  + %s regions %s from %s: %d matched, %.4f' % (func, run, src, ev.matched, ev.quality))
                    accepted.append((src, run))
                    cur = ev
                    improved = True
                    break
                history.append(dict(donor=src, regions=run, result='worse', matched=ev.matched,
                                    quality=round(ev.quality, 6)))
            if improved or tries >= budget:
                break
        if not improved:
            break
    return cur, accepted, history, tries


def stitch(func, seg, roots, budget=40, log=print, max_attempts=400, bases_n=3):
    cands = collect(func, seg, roots)
    row = dict(func=func, seg=seg, attempts=len(cands))
    evs = []
    for path, hd in cands[:max_attempts]:
        try:
            text = Path(path).read_text(errors='replace')
        except OSError:
            continue
        ev = evaluate(func, seg, text, hd, want_lines=False, source=path)
        if ev:
            evs.append(ev)
    row['compiled'] = len(evs)
    if not evs:
        row['error'] = 'no saved attempt compiles'
        return row, None
    evs.sort(key=lambda e: e.key, reverse=True)
    best = evs[0]
    nreg = len(best.regions)
    ceiling = [max(e.regions[k]['score'] for e in evs) for k in range(nreg)]
    row.update(regions=nreg, best_single=best.source, best_single_score=round(best.quality, 6),
               best_single_matched=best.matched,
               oracle_matched=sum(any(e.regions[k]['status'] == 'matched' for e in evs) for k in range(nreg)),
               oracle_score_by_region=ceiling)
    tries, accepted, history, cur, base_used = 0, [], [], None, None
    donors = {}
    bases = 0
    for start in evs[:bases_n]:
        st = evaluate(func, seg, start.text, start.headers, source=start.source)
        if not st or st.parsed is None or not st.lines:
            continue
        bases += 1
        donors[start.source] = st
        c, acc, hist, n = climb(func, seg, st, [e for e in evs if e is not start], budget, log, donors)
        tries += n
        history += [dict(h, base=start.source) for h in hist]
        if cur is None or better(c, cur):
            cur, accepted, base_used = c, acc, start
    if cur is None:
        row['error'] = 'no base can be parsed/line-mapped'
        return row, None
    row.update(tries=tries, bases_tried=bases, base=base_used.source,
               splices=[dict(donor=s, regions=r) for s, r in accepted],
               stitched_score=round(cur.quality, 6), stitched_matched=cur.matched,
               regions_matched_before=[r['region'] for r in best.regions if r['status'] == 'matched'],
               regions_matched_after=[r['region'] for r in cur.regions if r['status'] == 'matched'],
               scores_before=best.scores(), scores_after=cur.scores(),
               insns_before=sum(r['matching_instructions'] for r in best.regions),
               insns_after=sum(r['matching_instructions'] for r in cur.regions),
               kept=better(cur, best), full_match=cur.matched == nreg,
               rejected_splices=sum(1 for h in history if h['result'] != 'kept'), history=history[-80:])
    return row, (cur.text if better(cur, best) else None)


# ----------------------------------------------------------------------------- driver

def leftovers(min_size=2048):
    """Current >= 2 KiB functions without C in src/, minus link_blocklist (same selection as regions_rank)."""
    import srcbuild as S
    import wall as W
    rows = {}
    for path in ('queue/walls.jsonl', 'build/task17_walls_after.jsonl', 'queue/task18_regions.jsonl'):
        p = HH / path
        if not p.exists():
            continue
        for r in W.records(p):
            if r.get('size', 0) < min_size or (r['seg'], r['func']) in S.link_blocked():
                continue
            cf = S.file_of(r['seg'], r['func'])
            if not cf or r['func'] in S.defined_functions((HH / 'src' / r['seg'] / (cf + '.c')).read_text()):
                continue
            rows[r['seg'], r['func']] = dict(seg=r['seg'], func=r['func'], size=r['size'])
    return [rows[k] for k in sorted(rows)]


def job(args):
    row, roots, budget, out_dir, bases = (args + (3,))[:5]
    try:
        res, text = stitch(row["func"], row["seg"], roots, budget, log=lambda *a: None, bases_n=bases)
    except Exception as exc:     # one bad attempt set must not stop the sweep
        import traceback
        res, text = dict(func=row['func'], seg=row['seg'], error=traceback.format_exc()[-800:]), None
    res['size'] = row['size']
    if text:
        p = Path(out_dir) / row['seg'] / (row['func'] + '.c')
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_text(text)
        res['output'] = str(p.relative_to(HH))
        res['headers_from'] = str(Path(res['base']).parent).replace('/.attempts', '')
    return res


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('func', nargs='?')
    ap.add_argument('seg', nargs='?')
    ap.add_argument('--all', action='store_true')
    ap.add_argument('--roots', nargs='*', default=[str(HH), str(LIVE)])
    ap.add_argument('--budget', type=int, default=40, help='spliced compiles per base attempt')
    ap.add_argument('--bases', type=int, default=3, help='climb from this many of the best attempts')
    ap.add_argument('--jobs', type=int, default=4)
    ap.add_argument('--out', default='queue/stitch1')
    ap.add_argument('--jsonl', default='queue/stitch1.jsonl')
    a = ap.parse_args()
    out_dir = HH / a.out
    if a.all:
        rows = leftovers()
        print(len(rows), 'eligible leftovers', flush=True)
        results = []
        with ProcessPoolExecutor(max_workers=a.jobs) as pool:
            for res in pool.map(job, [(r, a.roots, a.budget, out_dir, a.bases) for r in rows]):
                results.append(res)
                print(res['seg'], res['func'], res.get('attempts'), res.get('best_single_matched'), '->',
                      res.get('stitched_matched'), '/', res.get('regions'), res.get('best_single_score'), '->',
                      res.get('stitched_score'), 'KEPT' if res.get('kept') else '', res.get('error', '')[:80],
                      flush=True)
        (HH / a.jsonl).write_text(''.join(json.dumps(r, sort_keys=True) + '\n' for r in results))
        return 0
    if not (a.func and a.seg):
        ap.error('FUNC SEG or --all')
    res = job((dict(func=a.func, seg=a.seg, size=0), a.roots, a.budget, out_dir, a.bases))
    for k in ('attempts', 'compiled', 'best_single', 'best_single_matched', 'stitched_matched', 'regions',
              'best_single_score', 'stitched_score', 'oracle_matched', 'kept', 'output', 'error'):
        print('%-20s %s' % (k, res.get(k)))
    for h in res.get('history', []):
        print('  splice', h)
    for k, (b, s) in enumerate(zip(res.get('scores_before', []), res.get('scores_after', [])), 1):
        print('  region %2d  %6.1f%% -> %6.1f%%  (best any attempt %.1f%%)' % (
            k, 100 * b, 100 * s, 100 * res['oracle_score_by_region'][k - 1]))
    return 0


if __name__ == '__main__':
    sys.exit(main())
