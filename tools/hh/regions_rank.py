#!/usr/bin/env python3
"""Rank current >=2 KiB leftovers' saved candidates by independent region scores."""
import argparse
from concurrent.futures import ProcessPoolExecutor
import json
from pathlib import Path

import regions as R
import srcbuild as S
import wall as W


def check(job):
    row, sources = job
    best, errors = None, []
    for source in sources:
        try:
            report = R.check_source(row['func'], row['seg'], source)
            rs = report['regions']
            matched = sum(r['status'] == 'matched' for r in rs)
            quality = sum(r['matching_instructions'] for r in rs) / sum(
                r['instructions'] + r['extra_instructions'] for r in rs)
            result = dict(row, source=source, matched=matched, total=len(rs),
                          quality=round(quality, 6), scores=[r['score'] for r in rs],
                          statuses=[r['status'] for r in rs])
            key = (matched / len(rs), quality)
            if best is None or key > best[0]:
                best = key, result
        except (Exception, SystemExit) as exc:
            errors.append(dict(source=source, error=str(exc)[-500:]))
    return best[1] if best else dict(row, errors=errors)


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--output', default='queue/task18_regions.jsonl')
    ap.add_argument('--jobs', type=int, default=4)
    a = ap.parse_args()
    rows = {}
    # Current source bodies, rather than a stale fuzzy-progress percentage,
    # decide whether an identity is still a leftover.
    for path in ('queue/walls.jsonl', 'build/task17_walls_after.jsonl'):
        for r in W.records(Path(path)):
            if r['size'] < 2048 or (r['seg'], r['func']) in S.link_blocked():
                continue
            cf = S.file_of(r['seg'], r['func'])
            if r['func'] in S.defined_functions(Path('src', r['seg'], cf+'.c').read_text()):
                continue
            rows[r['seg'], r['func']] = {k: r[k] for k in ('seg', 'func', 'size')}
    sources = W.attempt_index(list(rows.values()))
    for path in ('queue/walls.jsonl', 'build/task17_walls_after.jsonl'):
        for r in W.records(Path(path)):
            key = r['seg'], r['func']
            source = r.get('attempt_source')
            if key in rows and source and Path(source).exists():
                sources[key] = sorted(set(sources.get(key, []) + [source]))
    with ProcessPoolExecutor(max_workers=a.jobs) as pool:
        results = list(pool.map(check, [(r, sources.get(k, [])) for k, r in sorted(rows.items())]))
    results.sort(key=lambda r: (r.get('matched', 0)/max(1, r.get('total', 0)), r.get('quality', -1)), reverse=True)
    Path(a.output).write_text(''.join(json.dumps(r, sort_keys=True)+'\n' for r in results))
    for r in results:
        print(r['seg'], r['func'], r['size'], '%s/%s' % (r.get('matched', '-'), r.get('total', '-')),
              r.get('quality', 'ERROR'), r.get('source', ''))


if __name__ == '__main__':
    main()
