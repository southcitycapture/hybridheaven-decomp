"""Audit saved symbol walls through the frozen-file integration gate.

Refresh progress.py and wall.py first. Includes still-unmatched historical
symbol walls even if a newer saved attempt has a different classification.
Dry runs save verified source/registry proposals under build/symfix; apply only
after reviewing them and checking the complete ROM.
"""
import argparse
import collections
import json
from multiprocessing import Pool
from pathlib import Path
import tempfile
import subprocess

import inmatch as I
import wall as W

S, R, U = I.S, I.R, I.U


def inventory(report, historical, refreshed, blocked):
    missing = {(r['seg'], r['func']) for r in W.inventory(report)}
    current = {(r['seg'], r['func']): r for r in refreshed}
    targets = {(r['seg'], r['func']): r for r in historical + refreshed
               if r['class'] == 'symbols' and (r['seg'], r['func']) in missing
               and (r['seg'], r['func']) not in blocked}
    return [dict(row, fresh_class=current.get(key, row)['class'])
            for key, row in sorted(targets.items())]


def bucket(row, reason):
    refs = row['details'].get('relocations', {})
    if row['details'].get('rodata_equal') is False or 'rodata' in reason:
        return 'a'
    if ': does not match:' not in reason and 'compile error' in reason:
        return 'b'
    if refs:
        return 'c'
    return 'd'


def apply_proposals(seg, log_prefix='task16'):
    """Verify the saved whole-file proposals, register them, and ROM-gate the segment."""
    backups = {}
    accepted = []
    try:
        for outdir in sorted((Path('build/symfix') / seg).iterdir()):
            source = outdir / 'source.c'
            if not source.exists():
                continue
            cf = outdir.name
            path = Path('src') / seg / (cf + '.c')
            old = path.read_text()
            text = source.read_text()
            before = S.defined_functions(old) & {e[0] for e in S.entries(seg, cf)}
            after = S.defined_functions(text) & {e[0] for e in S.entries(seg, cf)}
            if not before <= after:
                # A stale proposal cannot overwrite later verified work.
                continue
            new = after - before
            if not new:
                continue
            if any((seg, n) in S.link_blocked() for n in new):
                raise RuntimeError('proposal includes a blocked function')
            with tempfile.TemporaryDirectory(dir='build') as td:
                ok, why = R.verify(seg, cf, text, after, td)
                if not ok:
                    print(str(path) + ': stale proposal refused: ' + why, flush=True)
                    continue
            backups[path] = old
            path.write_text(text)
            for n in sorted(new):
                snippet = outdir / (n + '.c')
                registry = Path('matched') / seg / (n + '.c')
                backups[registry] = registry.read_text() if registry.exists() else None
                registry.write_text(snippet.read_text())
                accepted.append(n)
        log = Path('build/' + log_prefix + '_make_' + seg + '.log')
        with log.open('w') as fh:
            subprocess.run(['make', '-j8'], stdout=fh, stderr=subprocess.STDOUT, check=True)
        print(seg, 'ROM OK;', len(accepted), 'functions registered:', ', '.join(accepted), flush=True)
    except BaseException:
        for path, text in backups.items():
            if text is None:
                path.unlink()
            else:
                path.write_text(text)
        raise


def replay(job):
    seg, cf, rows = job
    path = Path('src') / seg / (cf + '.c')
    text = path.read_text()
    present = S.defined_functions(text) & {e[0] for e in S.entries(seg, cf)}
    outdir = Path('build/symfix') / seg / cf
    outdir.mkdir(parents=True, exist_ok=True)
    results = []
    with tempfile.TemporaryDirectory(dir='build') as td:
        ok, why = R.verify(seg, cf, text, present, td)
        if not ok:
            raise RuntimeError(str(path) + ': baseline: ' + why)
        for row in rows:
            name = row['func']
            source = row['attempt_source']
            snippet = U.read_saved(seg, name, source)
            with (outdir / (name + '.log')).open('w') as log:
                trial, acc, rej = R.integrate(seg, cf, text, {name: snippet}, td,
                                            log=lambda line: log.write(line + '\n'))
                first_reason = rej.get(name, '')
                if name not in acc:
                    import symfix_literals
                    corrected = symfix_literals.corrected(S, seg, name, source, snippet)
                    if corrected:
                        fixed, changes = corrected
                        log.write('Literal-value proposal: ' + repr(changes) + '\n')
                        trial, acc, rej = R.integrate(seg, cf, text, {name: fixed}, td,
                                                    log=lambda line: log.write(line + '\n'))
                        if name in acc:
                            snippet = fixed
            reason = rej.get(name, '')
            result = dict(func=name, seg=seg, file=cf, source=source,
                          fresh_class=row['fresh_class'], bucket=bucket(row, reason),
                          result='verified_proposal' if name in acc else 'open',
                          note=I.rejection_summary(reason), initial_check=I.rejection_summary(first_reason),
                          log=str(outdir / (name + '.log')))
            if name in acc:
                ok, why = R.verify(seg, cf, trial, present | {name}, td)
                assert ok, why
                assert present <= S.defined_functions(trial)
                text = trial
                present.add(name)
                (outdir / (name + '.c')).write_text(snippet)
                (outdir / 'source.c').write_text(text)
                result['note'] = acc[name] + '; entire linked file verified; no evictions'
            (outdir / (name + '.json')).write_text(json.dumps(result, indent=2) + '\n')
            print(seg, name, result['bucket'], result['result'], result['note'][:160], flush=True)
            results.append(result)
    return results


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--walls', default='build/task16_walls.jsonl')
    ap.add_argument('--jobs', type=int, default=8)
    ap.add_argument('--seg', action='append', default=[])
    ap.add_argument('--apply-seg', help='apply reviewed build/symfix proposals and require make/ROM success')
    ap.add_argument('--log-prefix', default='task16', help='build log basename prefix for segment application')
    args = ap.parse_args()
    if args.apply_seg:
        apply_proposals(args.apply_seg, args.log_prefix)
        return
    load = lambda p: [json.loads(l) for l in Path(p).read_text().splitlines()]
    rows = inventory(json.loads(Path('build/progress/report.json').read_text()),
                     load('queue/walls.jsonl'), load(args.walls), S.link_blocked())
    # The compressed-slot rejection is audited alongside the symbol walls.
    missing_cab = 'func_801CCAB0' not in S.defined_functions(Path('src/file025/801CC210.c').read_text())
    if missing_cab and (not args.seg or 'file025' in args.seg) and not any(r['seg'] == 'file025' and r['func'] == 'func_801CCAB0' for r in rows):
        key = 'file025', 'func_801CCAB0'
        sources = W.attempt_index([dict(seg=key[0], func=key[1])])[key]
        row = W.check_row((dict(seg=key[0], func=key[1]), sources))
        rows.append(dict(row, fresh_class=row['class']))
    byfile = collections.defaultdict(list)
    for row in rows:
        if args.seg and row['seg'] not in args.seg:
            continue
        byfile[row['seg'], S.file_of(row['seg'], row['func'])].append(row)
    print(len(rows), 'targets;', len(byfile), 'selected files', flush=True)
    results = []
    with Pool(args.jobs) as pool:
        for group in pool.imap_unordered(replay, [(s, c, rs) for (s, c), rs in sorted(byfile.items())]):
            results.extend(group)
    Path('queue/symfix_sol.jsonl').write_text(''.join(json.dumps(r, sort_keys=True) + '\n'
        for r in sorted(results, key=lambda r: (r['seg'], r['func']))))


if __name__ == '__main__':
    main()
