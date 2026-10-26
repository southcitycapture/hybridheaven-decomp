"""Replay saved rejected C against frozen files in the current layout.

unreject.py [--master REV] [--apply] [--jobs N]
The inventory comes from Git, not mutable worker rejection summaries. Every
historical identity is accounted for, including ones already recovered in C.
Acceptance requires the complete linked file (text and rodata) to match, with
all existing C identities retained. The caller must also build/check the ROM.
"""
import argparse
import collections
import glob
import hashlib
import json
import os
import re
import subprocess
import tempfile
from multiprocessing import Pool
from pathlib import Path

import merge_rodata as M

S, R = M.S, M.R


def read_saved(seg, name, path):
    """An archived attempt shares its worker's context, not .attempts/context.h."""
    snippet = R.normalize(Path(path).read_text())
    parent = Path(path).parent
    if parent.name == '.attempts':
        parent = parent.parent
    context = parent / 'context.h'
    if context.exists():
        snippet = R.context_dependencies(seg, S.file_of(seg, name), name, snippet,
                                         R.Scan(''), 0, context.read_text())
        snippet = '#include "common.h"\n' + snippet.replace('#include "context.h"', '')
    # Some workers put local typedefs on their definition line. Split that
    # line so the shared function scanner sees the definition.
    return re.sub(r'(?m)^([^;\n{}]*\b' + name +
                  r'\([^;\n{}]*\)\s*\{)(?=[^\n])', r'\1\n', snippet)


def git_files(ref, roots):
    return subprocess.check_output(
        ['git', 'ls-tree', '-r', '--name-only', ref, '--'] + roots,
        text=True).splitlines()


def blobs(ref, paths):
    out = {}
    with subprocess.Popen(['git', 'cat-file', '--batch'], stdin=subprocess.PIPE,
                          stdout=subprocess.PIPE) as proc:
        for path in paths:
            proc.stdin.write((ref + ':' + path + '\n').encode())
            proc.stdin.flush()
            header = proc.stdout.readline().split()
            if header[-1] == b'missing':
                continue
            out[path] = proc.stdout.read(int(header[2])).decode()
            proc.stdout.read(1)
        proc.stdin.close()
    return out


def inventory(ref):
    paths = git_files(ref, ['queue', 'matched_rejected'])
    relevant = [p for p in paths if p.endswith('rejected.jsonl') or 'blocklist' in p]
    reasons, origins = collections.defaultdict(list), collections.defaultdict(set)
    for path, text in blobs(ref, relevant).items():
        for line in text.splitlines():
            if not line.strip() or line.startswith('#'):
                continue
            if path.endswith('.jsonl'):
                try:
                    row = json.loads(line)
                    key = row.get('segment', row.get('seg')), row['func']
                except (ValueError, KeyError, TypeError):
                    continue
                why = row.get('why', row.get('reason', 'saved rejection'))
            else:
                fields = line.split()
                if len(fields) < 2:
                    continue
                key = tuple(fields[:2])
                why = 'link blocklist' + (': ' + line.split('#', 1)[1].strip() if '#' in line else '')
            if not key[0]:
                continue
            if why not in reasons[key]:
                reasons[key].append(why)
            origins[key].add(path)
    for path in paths:
        if path.startswith('matched_rejected/') and path.endswith('.c'):
            _, seg, fn = path.split('/')
            key = seg, fn[:-2]
            if not reasons[key]:
                reasons[key].append('saved in matched_rejected')
            origins[key].add(path)
    return reasons, origins


def saved_candidates(ref, keys):
    candidates = collections.defaultdict(list)
    paths = git_files(ref, ['matched', 'matched_rejected'])
    selected = [p for p in paths if p.endswith('.c') and
                tuple([p.split('/')[1], os.path.basename(p)[:-2]]) in keys]
    for path, text in blobs(ref, selected).items():
        key = path.split('/')[1], os.path.basename(path)[:-2]
        candidates[key].append((ref + ':' + path, M.with_context(*key, text)))
    reg = S.registry()
    for key in sorted(keys):
        if key in reg:
            candidates[key].insert(0, ('matched/%s/%s.c' % key, M.with_context(*key, reg[key])))
        seg, name = key
        local = glob.glob('matched_rejected/%s/%s.c' % key)
        local += sorted(glob.glob('queue/*/work/%s/attempt.c' % name) +
                        glob.glob('queue/*/work/%s@%s/attempt.c' % (name, seg)))
        cf = S.file_of(*key)
        missing = cf and name not in S.defined_functions(Path('src/%s/%s.c' % (seg, cf)).read_text())
        if missing:
            for directory in sorted(glob.glob('queue/*/work/%s' % name) +
                                    glob.glob('queue/*/work/%s@%s' % (name, seg))):
                for alternative in ('draft.c', 'previous.c', 'base.c', 'start.c'):
                    path = os.path.join(directory, alternative)
                    if os.path.exists(path):
                        local.append(path)
                ranked = []
                for result in glob.glob(directory + '/.attempts/*.res'):
                    summary = Path(result).read_text().splitlines()
                    first = summary[0] if summary else ''
                    score = re.search(r'score (\d+)/(\d+)', first)
                    rank = 1 if first.startswith('MATCH') else (
                        int(score[1]) / max(1, int(score[2])) if score else -1)
                    path = result[:-4] + '.c'
                    if rank >= 0 and os.path.exists(path):
                        ranked.append((rank, path))
                if ranked:
                    best = max(r[0] for r in ranked)
                    local += [p for rank, p in ranked if rank == best]
        # Unqualified workdirs are disambiguated by the batch assignment, target
        # path, or results; overlay addresses alone are not unique identities.
        for path in local:
            if '/work/' in path and '@' not in path:
                batch = path.split('/')[1]
                assignments = 'queue/%s/functions.txt' % batch
                if os.path.exists(assignments):
                    pairs = [l.split()[:2] for l in Path(assignments).read_text().splitlines() if len(l.split()) >= 2]
                    if [name, seg] not in pairs:
                        continue
                else:
                    check = os.path.join(os.path.dirname(path), 'check')
                    if not os.path.exists(check) or seg not in Path(check).read_text():
                        continue
            candidates[key].append((path, read_saved(*key, path)))
    for key, values in candidates.items():
        seen, unique = set(), []
        for path, text in values:
            digest = hashlib.sha256(R.normalize(text).encode()).hexdigest()
            if digest not in seen and S.fn_body(text, key[1]) is not None:
                unique.append((path, text))
                seen.add(digest)
        candidates[key] = unique
    return candidates


def job(args):
    seg, cf, items, apply = args
    path = 'src/%s/%s.c' % (seg, cf)
    text = Path(path).read_text()
    identities = S.defined_functions(text) & {e[0] for e in S.entries(seg, cf)}
    rows, snippets = [], {}
    with tempfile.TemporaryDirectory(dir='build') as td:
        ok, msg = R.verify(seg, cf, text, identities, td)
        if not ok:
            raise RuntimeError(path + ': baseline: ' + msg)
        logpath = 'build/unreject_%s_%s.log' % (seg, cf)
        with open(logpath, 'w') as log:
            for row, candidates in items:
                name = row['func']
                row['cfile'], row['log'] = cf, logpath
                row['saved_variants'] = len(candidates)
                if name in identities:
                    row['new_result'] = 'already C; whole linked file verified'
                elif not candidates:
                    row['new_result'] = 'no saved C found'
                else:
                    failures = []
                    for source, snippet in candidates:
                        log.write('\nSOURCE ' + source + '\n')
                        candidate, accepted, rejected = R.integrate(
                            seg, cf, text, {name: snippet}, td,
                            log=lambda line: log.write(line + '\n'))
                        if name in accepted:
                            ok, msg = R.verify(seg, cf, candidate, identities | {name}, td)
                            if not ok or not identities <= S.defined_functions(candidate):
                                raise RuntimeError(path + ': final verification: ' + msg)
                            text = candidate
                            identities.add(name)
                            snippets[name] = snippet
                            row.update(new_result='landed' if apply else 'matches (dry run)',
                                       source=source, method=accepted[name])
                            break
                        reason = rejected.get(name, 'not accepted')
                        failures.append(dict(source=source, reason=reason))
                    else:
                        row['new_result'] = 'still rejected'
                        row['failures'] = failures
                rows.append(row)
                print('%s/%s: %s (%d saved variants)' %
                      (seg, name, row['new_result'], len(candidates)), flush=True)
        if apply and snippets:
            with open(path, 'w') as fh:
                fh.write(text)
            for name, snippet in snippets.items():
                os.makedirs('matched/' + seg, exist_ok=True)
                with open('matched/%s/%s.c' % (seg, name), 'w') as fh:
                    fh.write(snippet)
    return rows


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--master', default='master')
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--inventory-only', action='store_true')
    parser.add_argument('--jobs', type=int, default=8)
    parser.add_argument('--resume', action='store_true', help='resume completed file jobs from build checkpoint')
    args = parser.parse_args()
    ref = subprocess.check_output(['git', 'rev-parse', args.master], text=True).strip()
    reasons, origins = inventory(ref)
    candidates = saved_candidates(ref, set(reasons))
    byfile, out = collections.defaultdict(list), []
    if args.resume:
        out = json.loads(Path('build/unreject_checkpoint.json').read_text())
        if any(r['master_ref'] != ref for r in out):
            raise RuntimeError('master differs from checkpoint')
        out = [r for r in out if r['new_result'] not in ('no saved C found', 'still rejected')]
    done = {(r['seg'], r['func']) for r in out}
    for key in sorted(reasons):
        if key in done:
            continue
        seg, name = key
        row = dict(seg=seg, func=name, old_reason=reasons[key],
                   old_sources=sorted(origins[key]), master_ref=ref)
        cf = S.file_of(*key)
        if cf is None:
            row['new_result'] = 'no unique function/file in current layout'
            out.append(row)
        else:
            byfile[(seg, cf)].append((row, candidates[key]))
    print('%d historical identities; %d with saved C; %d current files' %
          (len(reasons), sum(bool(candidates[k]) for k in reasons), len(byfile)), flush=True)
    if args.inventory_only:
        for (seg, cf), items in sorted(byfile.items()):
            text = Path('src/%s/%s.c' % (seg, cf)).read_text()
            missing = [(r['func'], len(c)) for r, c in items if r['func'] not in S.defined_functions(text)]
            if missing:
                print(seg, cf, missing, flush=True)
        return
    with Pool(args.jobs) as pool:
        for rows in pool.imap_unordered(job, [(s, c, items, args.apply)
                                              for (s, c), items in sorted(byfile.items())]):
            out.extend(rows)
            with open('build/unreject_checkpoint.json', 'w') as fh:
                json.dump(out, fh, indent=2)
    with open('queue/unreject.jsonl', 'w') as fh:
        for row in sorted(out, key=lambda r: (r['seg'], r['func'])):
            fh.write(json.dumps(row, sort_keys=True) + '\n')
    if args.apply:
        recovered = {(r['seg'], r['func']) for r in out if r['new_result'] == 'landed'}
        if os.path.exists(S.LINK_BLOCKLIST):
            lines = Path(S.LINK_BLOCKLIST).read_text().splitlines(True)
            with open(S.LINK_BLOCKLIST, 'w') as fh:
                fh.writelines(l for l in lines if tuple(l.split()[:2]) not in recovered)
    print(dict(collections.Counter(r['new_result'] for r in out)), flush=True)


if __name__ == '__main__':
    main()
