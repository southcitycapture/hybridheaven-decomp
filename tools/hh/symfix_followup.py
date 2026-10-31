"""Replay an explicit rejected inventory or refreshed near-match wall classes.

Writes small receipts and reviewed proposals using symfix's existing registry /
whole-file / ROM application path. Blocked overlay identities are never tried.
"""
import argparse
from collections import Counter, defaultdict
import json
from multiprocessing import Pool
from pathlib import Path
import tempfile

import symfix as F
import symfix_literals as L

S, R, U = F.S, F.R, F.U


def replay(job):
    seg, cf, rows, prefix = job
    if seg + '/' + cf in json.loads(Path('tools/hh/libultra.json').read_text()):
        return F.I.replay((seg, cf, rows, {}, set(), False))
    text = Path('src/%s/%s.c' % (seg, cf)).read_text()
    present = S.defined_functions(text) & {e[0] for e in S.entries(seg, cf)}
    with tempfile.TemporaryDirectory(dir='build') as td:
        ok, why = R.verify(seg, cf, text, present, td)
        if not ok:
            raise RuntimeError('%s/%s baseline: %s' % (seg, cf, why))
        for row in rows:
            name = row['func']
            row['baseline_whole_file_verified'] = True
            row.pop('whole_file_verified', None)
            if name in present:
                row.update(result='landed', whole_file_verified=True)
                continue
            source = row.get('source') or row['attempt_source']
            row['source'] = source
            snippet = U.read_saved(seg, name, source)
            corrected = L.corrected(S, seg, name, source, snippet)
            candidates = [('saved', snippet)]
            if corrected:
                candidates.append(('literal-values', corrected[0]))
                row['literal_corrections'] = corrected[1]
            logpath = Path('build/%s_%s_%s.log' % (prefix, seg, name))
            failures = []
            with logpath.open('w') as log:
                for how, candidate in candidates:
                    trial, acc, rej = R.integrate(seg, cf, text, {name: candidate}, td,
                                                log=lambda line: log.write(line + '\n'))
                    if name not in acc:
                        failures.append(how + ': ' + F.I.rejection_summary(rej.get(name, 'not accepted')))
                        continue
                    assert R.verify(seg, cf, trial, present | {name}, td)[0]
                    assert present <= S.defined_functions(trial)
                    dest = Path('build/symfix') / seg / cf
                    dest.mkdir(parents=True, exist_ok=True)
                    (dest / 'source.c').write_text(trial)
                    (dest / (name + '.c')).write_text(candidate)
                    text, present = trial, present | {name}
                    row.update(result='verified_proposal', note=how + '; ' + acc[name], whole_file_verified=True)
                    break
                else:
                    row.update(result='open', note=' | '.join(failures))
            row['log'] = str(logpath)
            print(seg, name, row['result'], row['note'][:180], flush=True)
    return rows


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--inventory', help='explicit JSONL, including already landed identities')
    ap.add_argument('--walls', help='refreshed wall.py JSONL')
    ap.add_argument('--classes', nargs='+', default=['match', 'symbols', 'does_not_compile'])
    ap.add_argument('--exclude', help='exclude identities in an earlier JSONL inventory')
    ap.add_argument('--output', required=True)
    ap.add_argument('--log-prefix', default='symfix_followup')
    ap.add_argument('--jobs', type=int, default=6)
    args = ap.parse_args()
    if bool(args.inventory) == bool(args.walls):
        ap.error('choose --inventory or --walls')
    load = lambda p: [json.loads(l) for l in Path(p).read_text().splitlines()]
    rows = load(args.inventory or args.walls)
    excluded = {(r['seg'], r['func']) for r in load(args.exclude)} if args.exclude else set()
    blocked = S.link_blocked()
    rows = [r for r in rows if (r['seg'], r['func']) not in blocked | excluded
            and (args.inventory or r['class'] in args.classes and r['attempt_source'])]
    byfile = defaultdict(list)
    for row in rows:
        row['file'] = S.file_of(row['seg'], row['func'])
        byfile[row['seg'], row['file']].append(row)
    results = []
    with Pool(args.jobs) as pool:
        for group in pool.imap_unordered(replay, [(s, c, rs, args.log_prefix) for (s, c), rs in sorted(byfile.items())]):
            results.extend(group)
    Path(args.output).write_text(''.join(json.dumps(r, sort_keys=True) + '\n'
        for r in sorted(results, key=lambda r: (r['seg'], r['func']))))
    print(dict(Counter(r['result'] for r in results)), flush=True)


if __name__ == '__main__':
    main()
