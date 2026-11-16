"""Reproduce saved Task 38 attempts with four low-priority workers."""
import csv
import json
import os
import sys
from concurrent.futures import ProcessPoolExecutor, as_completed
from pathlib import Path

import srcbuild as S
import wall
import reconcile_frozen as R

OUT = Path('queue/task38')


def inspect(row):
    seg, func = row['segment'], row['func']
    source = (Path(row['path']) if 'path' in row else
              Path('sol_ref/task38') / row['part'] / seg / (func + '.' + row['source'] + '.c'))
    cf = S.file_of(seg, func)
    snippet = R.read_attempt(seg, func, str(source))
    snippet = R.context_dependencies(seg, cf, func, snippet, R.Scan(''), 0, S.context_for(seg, func))
    snippet = '#include "common.h"\n' + snippet.replace('#include "context.h"', '')
    prepared = OUT / 'work' / (func + '@' + seg + '-' + row['part'])
    prepared.mkdir(parents=True, exist_ok=True)
    path = prepared / 'attempt.c'
    path.write_text(snippet)
    result = wall.check_row((dict(seg=seg, func=func, file=cf), [str(path)]))
    try:
        ok, message = S.infile_check(seg, func, str(path))
    except Exception as exc:
        ok, message = False, 'integration exception: ' + repr(exc)
    result['source'] = str(source)
    result.update(part=row['part'], accepted=ok, infile_first=message.split('; ')[0],
                  infile_causes=sorted(set(p.split(': ', 1)[-1] for p in message.split('; '))))
    print(seg, func, result['class'], ok, flush=True)
    return result


if __name__ == '__main__':
    os.nice(19)
    OUT.mkdir(exist_ok=True)
    rows = list(csv.DictReader(open('sol_ref/task38/INVENTORY.tsv'), delimiter='\t'))
    rows.append(dict(part='place', segment='file022', func='func_80245B04',
                     path='queue/unify_loop0324/work/func_80245B04/attempt.c'))
    assert not any((r['segment'], r['func']) in S.link_blocked() for r in rows)
    results = json.loads((OUT / 'audit.json').read_text()) if (OUT / 'audit.json').exists() else []
    results = [r for r in results if 'source' in r]
    selected = {arg for arg in sys.argv[1:] if arg.startswith('func_')}
    if selected:
        results = [r for r in results if r['func'] not in selected]
        rows = [r for r in rows if r['func'] in selected]
    if '--retry-placement' in sys.argv:
        results = [r for r in results if r['part'] != 'place' and r['class'] not in ('match', 'symbols')]
    done = {(r['part'], r['seg'], r['func']) for r in results}
    rows = [r for r in rows if (r['part'], r['segment'], r['func']) not in done]
    with ProcessPoolExecutor(max_workers=4) as pool:
        for future in as_completed([pool.submit(inspect, row) for row in rows]):
            results.append(future.result())
            (OUT / 'audit.json').write_text(json.dumps(results, indent=2) + '\n')
