#!/usr/bin/env python3
"""Beam search over chains of conservative C register-allocation perturbations.

  source env.sh
  python tools/hh/regsearch.py FUNC --seg SEG --source attempt.c --save best.c --json result.json
  python tools/hh/regsearch.py --walls queue/walls.jsonl --out queue/task29_regsearch --seconds 90

Keep neutral/worse stepping stones as well as improvements (unlike regsweep).
Every full match still needs srcbuild infile/add and the ROM/no-eviction gate.
Only a small, recognized C subset is transformed; memory/call reordering and
unproved narrowing are deliberately excluded. This is not a general C parser.
"""
import argparse
from concurrent.futures import ThreadPoolExecutor
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tempfile
import time

sys.path.insert(0, str(Path(__file__).resolve().parent))
import debug_strings as D
import regsweep as S

HH = S.HH
TYPES = {'s32': (-2**31, 2**31 - 1), 'u32': (0, 2**32 - 1),
         's16': (-32768, 32767), 'u16': (0, 65535), 's8': (-128, 127), 'u8': (0, 255)}


def mask(text):
    return D.TOKEN.sub(lambda m: ''.join('\n' if c == '\n' else ' ' for c in m[0]), text)


def variants(text, func, context=''):
    """Single-step moves; all offsets are obtained from comment/string-masked C.

    Narrower widths require constant-only definitions in range; 32-bit sign
    changes preserve IDO's two's-complement bits. Both cast reads back to their
    old type, preserving expression signedness/promotions. Swaps require pure
    scalar assignments or explicitly distinct nonvolatile external objects.
    """
    span = S.body_span(mask(text), func, top_level=True)
    if span is None:
        return []
    a, b = span
    body = text[a + 1:b]
    lines, clean = body.split('\n'), mask(body).split('\n')
    decls = S.declarations(clean)
    if any(typ.split()[0] == 'typedef' for _, typ, _, _, _ in decls):
        return []  # local type scopes are outside this small declaration parser
    after = decls[-1][0] + 1 if decls else 0
    out = []
    seen = {text}
    def emit(label, ls):
        new = text[:a + 1] + '\n'.join(ls) + text[b:]
        if new not in seen:
            out.append((label, new)); seen.add(new)
    # Scalar locals whose identity cannot be observed through an address.
    locals_ = {}
    for i, typ, ns, init, single in decls:
        m = S.DECL.match(clean[i])
        pointer = '*' in m.group(3)
        if (typ not in TYPES and typ not in ('f32', 'f64') and not pointer) or not single or '[' in m.group(4) or set(typ.split()) & {'static', 'volatile', 'const'}:
            continue
        n = ns[0]
        if re.search(r'&\s*\b%s\b|\bsizeof\s*(?:\(\s*)?%s\b' % (n, n), mask(body)):
            continue
        # A member/label with the same spelling makes textual renaming unsafe.
        if re.search(r'(?:\.|->)\s*%s\b|\b%s\s*:' % (n, n), mask(body)):
            continue
        locals_[n] = (i, typ + (' ' + '*' * m.group(3).count('*') if pointer else ''), init)
    # Declaration ordering never reorders initializers (which may have effects).
    plain = [(i, ns) for i, _, ns, init, _ in decls if not init and not clean[i].lstrip().startswith('static')]
    for (i, ns), (j, ms) in zip(plain, plain[1:]):
        if any(d[3] for d in decls if i < d[0] < j):
            continue
        nl = lines[:]; nl[i], nl[j] = lines[j], lines[i]
        emit('swap decl %s/%s' % (','.join(ns), ','.join(ms)), nl)
    for i, ns in plain[2:]:
        j = plain[0][0]
        if any(d[3] for d in decls if j < d[0] < i):
            continue
        nl = lines[:]; nl.insert(j, nl.pop(i)); emit('decl %s first' % ','.join(ns), nl)
    for i, typ, ns, init, single in decls:
        if not single and not init and (typ in TYPES or typ in ('f32', 'f64')):
            m = S.DECL.match(clean[i]); parts = S.split_top(m.group(3).strip() + m.group(4))
            nl = lines[:]; nl[i] = m.group(1) + typ + ' ' + ', '.join(p.strip() for p in reversed(parts)) + ';'
            emit('reverse declarators ' + ','.join(ns), nl)
            nl = lines[:]; nl[i] = '\n'.join(m.group(1) + typ + ' ' + p.strip() + ';' for p in parts)
            emit('split declaration ' + ','.join(ns), nl)
        if init and single and (typ in TYPES or typ in ('f32', 'f64')) and clean[i] == lines[i]:
            m = re.fullmatch(r'(\s*)(.*?)\s*=\s*(.*);\s*', clean[i])
            # Move initialization only across declarations without initializers.
            later_names = [n for d in decls if d[0] > i for n in d[2]]
            if m and not any(d[3] for d in decls if d[0] > i) and not any(re.search(r'\b' + n + r'\b', m[3]) for n in later_names):
                nl = lines[:]; nl[i] = m[1] + m[2] + ';'
                nl.insert(after, m[1] + ns[0] + ' = ' + m[3] + ';')
                emit('split init ' + ns[0], nl)
    # Parameters are initialized on entry. Empty tests add allocator references
    # without touching values; exclude aggregate parameters and address escapes.
    for n in S.params_of(mask(text), func, a):
        if re.search(r'\b(?:s32|u32|s16|u16|s8|u8|f32|f64)\s+\b' + n + r'\b', mask(text[:a])):
            nl = lines[:]; nl.insert(after, '    if (%s) {}' % n); emit('ref parameter ' + n, nl)
    assignment = re.compile(r'^(\s*)([A-Za-z_]\w*)\s*=\s*([^;{}]+);\s*$')
    def pure(expr):
        # No calls, memory reads, increments, assignment, division or macros.
        return bool(re.fullmatch(r'[\w\s+\-~^|()<>!&]+', expr)) and not re.search(r'\+\+|--|\w\s*\(', expr) and all(
            n in locals_ or n in TYPES or re.fullmatch(r'0[xX][\da-fA-F]+|\d+[uUlL]*', n)
            for n in re.findall(r'0[xX][\da-fA-F]+|\d+[uUlL]*|[A-Za-z_]\w*', expr))
    environment = mask(text + '\n' + context)
    includes = re.findall(r'^\s*#\s*include\s*[<"]([^>"]+)', text + '\n' + context, re.M)
    readable = set(locals_) | set(S.params_of(mask(text), func, a)) | set(TYPES) | {'f32', 'f64', 'NULL'}
    for declaration in re.findall(r'\bextern\s+[^;()]+;', environment):
        readable.update(re.findall(r'\bD_[0-9A-F]{8}\b', declaration))
    macros = set(re.findall(r'^\s*#\s*define\s+(\w+)', environment, re.M)) - {'NULL'}
    ordinary_memory = not re.search(r'\bvolatile\b', environment) and all(
        h in ('common.h', 'context.h', 'known.h', 'functions.h') for h in includes)
    def pure_read(expr):
        # Reading memory cannot interfere with another read. With complete
        # ordinary (nonvolatile) declarations and no macro/call, two independent
        # local assignments may swap even if their read addresses alias.
        if pure(expr):
            return True
        if not ordinary_memory or re.search(r'\+\+|--|(?<![=!<>])=(?!=)|\w\s*\(|\)\s*\(', expr):
            return False
        if not re.fullmatch(r'[\w\s.\[\]()+*/%<>&|^~!?:\-]+', expr):
            return False
        stripped = re.sub(r'(?:\.|->)\s*[A-Za-z_]\w*', '', expr)
        ids = set(re.findall(r'\b[A-Za-z_]\w*\b', stripped))
        return not ids & macros and ids <= readable
    def statement_boundary(k):
        previous = next((clean[j].strip() for j in range(k - 1, -1, -1) if clean[j].strip()), '')
        return not previous or previous.endswith((';', '{', '}', ':'))
    assigns = {k: assignment.fullmatch(l) for k, l in enumerate(clean)
               if k >= after and l == lines[k] and statement_boundary(k)}
    # Reads for casts/liveness must have a definition on every path: restrict
    # insertion to an initialized declaration or an unconditional top-level set.
    depth = 0
    top = set()
    for k, l in enumerate(clean):
        if depth == 0:
            top.add(k)
        depth += l.count('{') - l.count('}')
    for n, (i, typ, init) in locals_.items():
        if not init:
            nl = lines[:]; nl[i] = re.sub(r'^(\s*)', r'\1register ', nl[i], count=1)
            emit('register ' + n, nl)
        first = next((k for k in range(after, len(lines)) if assigns.get(k) and assigns[k][2] == n and k in top), None)
        pos = after if init else (first + 1 if first is not None else None)
        # No goto can jump over a putative reaching definition.
        if pos is not None and not re.search(r'\bgoto\b', mask(body)):
            nl = lines[:]; nl.insert(pos, '    if (%s) {}' % n); emit('ref ' + n, nl)
        # Immediately after a braced-block assignment the value is defined even
        # when the block is conditional. Reject unbraced/multiline controllers.
        refs = 0
        for k, m in assigns.items():
            if not m or m[2] != n or k in top:
                continue
            prev = next((clean[j].strip() for j in range(k - 1, after - 1, -1) if clean[j].strip()), '')
            if prev.endswith(('{', ';', '}', ':')):
                nl = lines[:]; nl.insert(k + 1, m[1] + 'if (%s) {}' % n)
                emit('ref %s after %d' % (n, k), nl); refs += 1
                if refs == 3:
                    break
        # Identity casts at scalar reads; keep writes, sizeof and address uses out.
        for k in range(after, len(clean)):
            m = assigns.get(k)
            if m and m[2] != n and re.search(r'\b' + n + r'\b', m[3]) and pure(m[3]):
                nl = lines[:]
                nl[k] = m[1] + m[2] + ' = ' + re.sub(r'\b' + n + r'\b', '(' + typ + ')' + n, m[3]) + ';'
                emit('cast %s at %d' % (n, k), nl)
                break
        for k in range(after, len(clean)):
            if clean[k] != lines[k] or not re.match(r'\s*(?:if\s*\(|return\s|[A-Za-z_]\w*\s*\()', clean[k]):
                continue
            if re.search(r'\b' + n + r'\b', clean[k]) and not re.search(r'\b' + n + r'\s*(?:\+\+|--|[+*/&|^-]?=(?!=))', clean[k]):
                nl = lines[:]; nl[k] = re.sub(r'\b' + n + r'\b', '((' + typ + ')' + n + ')', lines[k])
                emit('cast read %s at %d' % (n, k), nl); break
        # IDO/MIPS has two's-complement 32-bit conversion. Change storage
        # signedness, casting EVERY read back to the original type; this keeps
        # the bits and expression semantics even without a value-range proof.
        if typ in ('s32', 'u32'):
            dst = 'u32' if typ == 's32' else 's32'
            nl, valid_sign = lines[:], True
            for k in range(after, len(clean)):
                occurrences = list(re.finditer(r'\b' + n + r'\b', clean[k]))
                if not occurrences:
                    continue
                m = assigns.get(k)
                dk = S.DECL.match(clean[k])
                shadow = dk and dk[2].split()[0] not in S.KEYWORDS and re.match(r'\s*\**\s*' + n + r'\b', dk[4])
                if re.search(r'(?:\+\+|--)\s*\b' + n + r'\b|\b' + n + r'\s*(?:\+\+|--|[-+*/%&|^]=|<<=|>>=)', clean[k]) or shadow:
                    valid_sign = False; break
                # Assignment expression values have their own type; only
                # complete assignment statements can change storage type here.
                if re.search(r'\b' + n + r'\s*=(?!=)', clean[k]) and not (m and m[2] == n):
                    valid_sign = False; break
                if clean[k] != lines[k]:
                    valid_sign = False; break
                for occurrence in reversed(occurrences):
                    if m and m[2] == n and occurrence.start() == len(m[1]):
                        continue
                    nl[k] = nl[k][:occurrence.start()] + '((' + typ + ')' + n + ')' + nl[k][occurrence.end():]
            if valid_sign:
                nl[i] = re.sub(r'\b' + typ + r'\b', dst, nl[i], count=1)
                emit('sign %s -> %s %s (bit-preserving reads)' % (typ, dst, n), nl)
        # Narrowing/sign changes: every occurrence after declarations must be
        # either a constant assignment or a read in a pure scalar assignment.
        values, reads, valid = [], [], True
        decl = S.DECL.match(clean[i])
        if init:
            rhs = decl.group(4).split('=', 1)[1].strip()
            try: values.append(int(rhs, 0))
            except ValueError: valid = False
        for k in range(after, len(clean)):
            if not re.search(r'\b' + n + r'\b', clean[k]):
                continue
            m = assigns.get(k)
            if not m:
                valid = False; break
            if m[2] == n:
                try: values.append(int(m[3].strip(), 0))
                except ValueError: valid = False; break
            elif pure(m[3]):
                reads.append(k)
            else:
                valid = False; break
        if typ in TYPES and valid and values:
            for dst in ('s32', 'u32', 's16', 'u8'):
                if dst == typ or not all(TYPES[dst][0] <= v <= TYPES[dst][1] for v in values):
                    continue
                nl = lines[:]; nl[i] = re.sub(r'\b' + typ + r'\b', dst, nl[i], count=1)
                for k in reads:
                    m = assigns[k]
                    nl[k] = m[1] + m[2] + ' = ' + re.sub(r'\b' + n + r'\b', '(' + typ + ')' + n, m[3]) + ';'
                emit('%s -> %s %s (range proved)' % (typ, dst, n), nl)
    for k, m in assigns.items():
        if not m or m[2] not in locals_:
            continue
        n = m[2]; i, typ, _ = locals_[n]
        other = assigns.get(k + 1)
        if pure_read(m[3]) and other and other[2] in locals_ and pure_read(other[3]) and m[1] == other[1] and n != other[2]:
            if not re.search(r'\b' + n + r'\b', other[3]) and not re.search(r'\b' + other[2] + r'\b', m[3]):
                nl = lines[:]; nl[k], nl[k + 1] = nl[k + 1], nl[k]
                emit('swap stmts %d/%d' % (k, k + 1), nl)
        # Add a temporary: same conversion point, RHS evaluated exactly once.
        tmp = 'rs_tmp'
        while re.search(r'\b' + tmp + r'\b', mask(text)):
            tmp += '_'
        nl = lines[:]; nl[k] = m[1] + tmp + ' = ' + m[3] + ';\n' + m[1] + n + ' = ' + tmp + ';'
        nl.insert(after, '    %s %s;' % (typ, tmp)); emit('add temporary at %d' % k, nl)
        # Remove/merge a copy temporary with exactly one definition and one read.
        if other and other[3].strip() == n and other[2] in locals_ and locals_[other[2]][1] == typ:
            uses = sum(len(re.findall(r'\b' + n + r'\b', l)) for l in clean[after:])
            if uses == 2 and not locals_[n][2]:
                nl = lines[:]; nl[i] = ''; nl[k] = m[1] + other[2] + ' = ' + m[3] + ';'; nl[k + 1] = ''
                emit('merge temporary ' + n, nl)
        # Split a local at an unconditional redefinition: old and new lifetimes
        # cannot overlap, and no loop/goto can bring the suffix back to the prefix.
        if k in top and not re.search(r'\b(?:goto|for|while|do)\b', mask(body)) and not re.search(r'\b' + n + r'\b', m[3]):
            earlier = any(assigns.get(j) and assigns[j][2] == n for j in range(after, k))
            if earlier:
                nl = lines[:]
                for j in range(k, len(lines)):
                    # Only edit token-bearing lines without comments/literals.
                    if clean[j] != lines[j]:
                        break
                    nl[j] = re.sub(r'\b' + n + r'\b', tmp, lines[j])
                else:
                    nl.insert(after, '    %s %s;' % (typ, tmp)); emit('split lifetime ' + n, nl)
    # Named external objects cannot alias each other in C. Restrict reordering
    # stores to explicitly nonvolatile declarations, with pure scalar indices
    # and RHSs; pointer-based stores and memory reads are never guessed disjoint.
    globals_ = set(re.findall(r'(?m)^extern\s+(?![^;]*\bvolatile\b)[^;()]*\b(D_[0-9A-F]{8})\s*(?:\[[^;]*\])?\s*;', mask(text)))
    store = re.compile(r'^(\s*)(D_[0-9A-F]{8})(\[([^\]]+)\])?\s*=\s*([^;{}]+);\s*$')
    for k in range(after, len(clean) - 1):
        x, y = store.fullmatch(clean[k]), store.fullmatch(clean[k + 1])
        if x and y and statement_boundary(k) and x[1] == y[1] and x[2] != y[2] and {x[2], y[2]} <= globals_:
            # Parameters may appear only in an index; no parameter is written.
            indices = (x[4], y[4])
            params = set(S.params_of(mask(text), func, a))
            if all(not idx or re.fullmatch(r'\w+', idx.strip()) and idx.strip() in set(locals_) | params for idx in indices) and pure(x[5]) and pure(y[5]):
                nl = lines[:]; nl[k], nl[k + 1] = nl[k + 1], nl[k]; emit('swap independent objects %d/%d' % (k, k + 1), nl)
    # for(init; cond; step) <-> init; while(cond) { body; step; }
    # No continue/goto (which would change the increment or enter the scope).
    masked = mask(body)
    for m in re.finditer(r'\bfor\s*\(([^;{}]*);([^;{}]*);([^;{}]*)\)\s*\{', masked):
        if body[m.start():m.end()] != masked[m.start():m.end()]:
            continue
        prefix = masked[:m.start()].rstrip()
        if prefix and prefix[-1] not in '{;}:':
            continue  # expanding an unbraced if/else body would change its scope
        depth, end = 1, m.end()
        while end < len(masked) and depth:
            depth += (masked[end] == '{') - (masked[end] == '}'); end += 1
        inner = body[m.end():end - 1]
        if depth or re.search(r'\b(?:continue|goto)\b', mask(inner)) or re.search(r'\bgoto\b', masked):
            continue
        init, cond, step = (x.strip() for x in m.groups())
        if not re.fullmatch(r'\w+\s*=\s*[^;]+', init):
            continue  # declarations would change scope
        new = body[:m.start()] + init + ';\n    while (' + (cond or '1') + ') {' + inner + '\n        ' + step + ';\n    }' + body[end:]
        emit('for -> while at %d' % m.start(), new.split('\n'))
    return out


def rank(row):
    if not row.get('ok'):
        return (-1,)
    regions = row.get('regions', [])
    total = sum(t for _, _, t in regions) or row.get('total', 1)
    good = sum(g for _, g, _ in regions) if regions else row.get('good', 0)
    # Primary region coverage; register distance distinguishes equal coverage.
    return (bool(row.get('match')), good / total, -(row.get('mismatched') if row.get('mismatched') is not None else 10**9),
            row.get('good', 0) / row.get('total', 1), sum(g == t for _, g, t in regions))


def select_beam(candidates, width):
    """Top K by score, round-robin move families only within exact score ties.

    Otherwise dozens of codegen-neutral declaration swaps crowd every liveness
    or temporary stepping stone out of the frontier before depth two.
    """
    groups = {}
    for row in sorted(candidates, key=rank, reverse=True):
        groups.setdefault(rank(row), {}).setdefault(' '.join(row['chain'][-1].split()[:2]), []).append(row)
    out = []
    for families in groups.values():
        for family in families.values():
            family.sort(key=lambda r: hashlib.sha256(r['text'].encode()).hexdigest())
        while any(families.values()):
            for family in families.values():
                if family:
                    out.append(family.pop(0))
                    if len(out) == width:
                        return out
    return out


def beam(text, evaluate, moves=variants, func='', width=8, depth=4, deadline=float('inf'), log=lambda _: None):
    """Pure search core; hash cache covers diamonds, cycles and failed compiles."""
    cache = {}
    base = evaluate([(text, ())])[0] or dict(ok=False, verdict='timeout')
    base.update(text=text, chain=[])
    cache[hashlib.sha256(text.encode()).hexdigest()] = base
    best, frontier, history = base, [base], []
    for d in (range(1, depth + 1) if base.get('ok') else ()):
        if best.get('match') or time.monotonic() >= deadline:
            break
        pending = {}
        hits = 0
        for parent in frontier:
            for label, variant in moves(parent['text'], func):
                key = hashlib.sha256(variant.encode()).hexdigest()
                if key in cache or key in pending:
                    hits += 1; continue
                pending[key] = (variant, parent['chain'] + [label])
        if not pending:
            break
        results = evaluate(list(pending.values()))
        candidates = []
        for (key, (variant, chain)), result in zip(pending.items(), results):
            if result is None:
                continue  # deadline: unsubmitted candidates were not compiled
            result.update(text=variant, chain=chain)
            cache[key] = result
            if result.get('ok'):
                candidates.append(result)
                if rank(result) > rank(best):
                    best = result
        frontier = select_beam(candidates, width)
        history.append(dict(depth=d, compiled=len(results) - results.count(None), cache_hits=hits,
                            beam=[{k: r.get(k) for k in ('chain', 'verdict', 'mismatched', 'regions')} for r in frontier]))
        log('depth %d: %d compiled, %d cache hits; best %s %s' %
            (d, history[-1]['compiled'], hits, best.get('verdict'), best['chain']))
        if not frontier:
            break
    return dict(match=bool(best.get('match')), improved=rank(best) > rank(base), text=best['text'],
                chain=best['chain'], base={k: v for k, v in base.items() if k != 'text'},
                best={k: v for k, v in best.items() if k != 'text'}, history=history, cache_entries=len(cache))


def compile_one(job):
    """Separate process group: enforce a wall-clock bound on compilers and tracer."""
    func, seg, path, seconds = job
    import signal
    p = subprocess.Popen([sys.executable, str(Path(__file__).resolve()), '--score', func, seg, path],
                         cwd=HH, env={**os.environ, 'TMPDIR': str(Path(path).parent)},
                         stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, start_new_session=True)
    try:
        stdout, stderr = p.communicate(timeout=max(.01, seconds))
        if p.returncode:
            return dict(ok=False, verdict='score failed', error=stderr[-1200:])
        return json.loads(stdout)
    except subprocess.TimeoutExpired:
        os.killpg(p.pid, signal.SIGKILL)
        p.communicate()
        return dict(ok=False, verdict='timeout')


def stage_seed(source, directory, seg, func):
    """Task 24's improved C needs its original worker's snapshot headers."""
    source = Path(source)
    origin = source
    if source.parent.name == 'improved' and source.parent.parent.name == 'task24_regsweep':
        for line in (HH / 'queue/task24_regsweep/improved.jsonl').read_text().splitlines():
            row = json.loads(line)
            if row['func'] == func and row['seg'] == seg and (HH / row['source']).exists():
                origin = HH / row['source']; break
    dst = S.R.stage(origin, directory, seg, func)
    dst.write_text(source.read_text())
    return dst


def search_moves(text, func, context='', natural=False):
    """Optional source-quality restriction shared by single and batch searches."""
    return [(label, source) for label, source in variants(text, func, context)
            if not natural or not label.startswith('ref ')]


def search(func, seg, source, width=8, depth=4, seconds=90, jobs=8, log=print, alternative_source=None, natural=False):
    started = time.monotonic()
    deadline = started + seconds
    jobs = min(jobs, max(1, (os.cpu_count() or 2) // 2))
    with tempfile.TemporaryDirectory(prefix='regsearch-', dir=HH / 'build') as td:
        work = Path(td)
        staged = work / 'base'
        stage_seed(source, staged, seg, func)
        seed_scores = []
        initial = None
        if alternative_source and Path(alternative_source).resolve() != Path(source).resolve():
            alternate = work / 'alternate'
            stage_seed(alternative_source, alternate, seg, func)
            for seed, directory in ((source, staged), (alternative_source, alternate)):
                score = compile_one((func, seg, str(directory / 'attempt.c'), min(30, deadline - time.monotonic())))
                seed_scores.append(dict(source=str(seed), **score))
            winner = max(range(2), key=lambda i: rank(seed_scores[i]))
            if winner:
                source, staged = alternative_source, alternate
                log('refreshed wall seed beats Task 24 seed under current flags')
            initial = {k: v for k, v in seed_scores[winner].items() if k != 'source'}
        headers = list(staged.glob('*.h'))
        context = '\n'.join(h.read_text() for h in headers)
        serial = 0
        with ThreadPoolExecutor(max_workers=jobs) as pool:
            def evaluate(candidates):
                nonlocal serial, initial
                if initial is not None and len(candidates) == 1 and candidates[0][0] == (staged / 'attempt.c').read_text():
                    score, initial = initial, None
                    return [score]
                results = []
                # Submit at most one CPU-sized chunk at a time, not the whole
                # depth: the deadline never leaves thousands of queued jobs.
                for off in range(0, len(candidates), jobs):
                    if time.monotonic() >= deadline:
                        results.extend([None] * (len(candidates) - off)); break
                    paths, futures = [], []
                    for text, _ in candidates[off:off + jobs]:
                        d = work / str(serial); serial += 1; d.mkdir()
                        for h in headers:
                            shutil.copy(h, d)
                        path = d / 'attempt.c'; path.write_text(text)
                        paths.append(d)
                        futures.append(pool.submit(compile_one, (func, seg, str(path), min(30, deadline - time.monotonic()))))
                    chunk = [f.result() for f in futures]
                    results.extend(chunk)
                    for d in paths:
                        shutil.rmtree(d)
                    if any(r.get('match') for r in chunk):
                        results.extend([None] * (len(candidates) - len(results))); break
                return results
            res = beam(staged.joinpath('attempt.c').read_text(), evaluate,
                       moves=lambda text, name: search_moves(text, name, context, natural),
                       func=func, width=width, depth=depth,
                       deadline=deadline, log=log)
        res.update(func=func, seg=seg, source=str(source), seconds=round(time.monotonic() - started, 3), jobs=jobs,
                   width=width, max_depth=depth, seed_scores=seed_scores)
        return res


def batch(args):
    import srcbuild
    rows = [json.loads(l) for l in Path(args.walls).read_text().splitlines()]
    rows = sorted((r for r in rows if r['class'] == 'registers_schedule'),
                  key=lambda r: (-r['diff_score'], r['size'], r['seg'], r['func']))
    out = Path(args.out); out.mkdir(parents=True, exist_ok=True)
    end = time.monotonic() + args.total_seconds
    for row in rows:
        if time.monotonic() >= end:
            break
        func, seg = row['func'], row['seg']
        # Refreshed wall may include functions already landed since its snapshot.
        source_file = HH / 'src' / seg / (row['file'] + '.c')
        if func in srcbuild.defined_functions(source_file.read_text()):
            continue
        preferred = HH / 'queue/task24_regsweep/improved' / (func + '@' + seg + '.c')
        source = preferred if preferred.exists() else HH / row['attempt_source']
        name = func + '@' + seg
        result_path = out / (name + '.json')
        if result_path.exists():
            continue
        log = lambda s: print(name + ': ' + s, flush=True)
        log('source ' + str(source.relative_to(HH)))
        res = search(func, seg, source, args.width, args.depth, min(args.seconds, end - time.monotonic()), args.jobs, log,
                     alternative_source=HH / row['attempt_source'] if preferred.exists() else None, natural=args.natural)
        source = Path(res['source'])
        # Save a standalone workdir with the original headers for replay/infile.
        saved = out / 'work' / name
        stage_seed(source, saved, seg, func)
        (saved / 'attempt.c').write_text(res.pop('text'))
        res['saved'] = str(saved / 'attempt.c')
        result_path.write_text(json.dumps(res, indent=1) + '\n')
        with (out / 'summary.jsonl').open('a') as fh:
            fh.write(json.dumps({k: res[k] for k in ('func', 'seg', 'source', 'saved', 'match', 'improved', 'chain', 'base', 'best', 'seconds', 'cache_entries')}) + '\n')
        log('%s; improved=%s; %s' % (res['best'].get('verdict'), res['improved'], res['chain']))


def main():
    if len(sys.argv) > 1 and sys.argv[1] == '--score':
        print(json.dumps(S.score_file(tuple(sys.argv[2:5]), trace_keep=Path(sys.argv[4]).parent / 'trace'))); return 0
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('func', nargs='?'); ap.add_argument('--seg'); ap.add_argument('--source')
    ap.add_argument('--width', type=int, default=8); ap.add_argument('--depth', type=int, default=4)
    ap.add_argument('--jobs', type=int, default=min(8, max(1, (os.cpu_count() or 2) // 2)))
    ap.add_argument('--seconds', type=float, default=90); ap.add_argument('--total-seconds', type=float, default=10800)
    ap.add_argument('--save'); ap.add_argument('--json'); ap.add_argument('--walls'); ap.add_argument('--out')
    ap.add_argument('--natural', action='store_true', help='exclude artificial dead-reference mutations')
    a = ap.parse_args()
    if min(a.width, a.depth, a.jobs, a.seconds, a.total_seconds) <= 0:
        ap.error('width/depth/jobs/time limits must be positive')
    if a.walls:
        if not a.out or a.func:
            ap.error('--walls requires --out and no FUNC')
        batch(a); return 0
    if not (a.func and a.seg and a.source):
        ap.error('FUNC, --seg and --source are required')
    res = search(a.func, a.seg, a.source, a.width, a.depth, a.seconds, a.jobs, natural=a.natural)
    if a.save:
        Path(a.save).write_text(res['text'])
    if a.json:
        Path(a.json).write_text(json.dumps({k: v for k, v in res.items() if k != 'text'}, indent=1) + '\n')
    print(res['best'].get('verdict'), res['chain'])
    return 0 if res['match'] else 1


if __name__ == '__main__':
    sys.exit(main())
