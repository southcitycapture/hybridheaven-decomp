"""Reproduce the Task 37 inventory locally, with at most six low-priority jobs."""
import csv
import json
import os
from pathlib import Path
import subprocess
import sys
from concurrent.futures import ProcessPoolExecutor, as_completed

sys.path.insert(0, str(Path(__file__).resolve().parent))
import wall
import workdir
import srcbuild as S

ROOT = Path(S.HH)
OUT = ROOT / 'queue/task37'


def inspect(row):
    seg, name = row['segment'], row['func']
    saved = ROOT / 'sol_ref/task37' / seg / name / 'attempt.c'
    original = workdir.attempt(row['batch'], name, seg)
    source = original or (str(saved) if saved.exists() else None)
    exact_source = source is not None
    if source is None:
        alternatives = sorted((ROOT / 'queue').glob('*/work/' + name + '/attempt.c'))
        alternatives += sorted((ROOT / 'queue').glob('*/work/' + name + '@' + seg + '/attempt.c'))
        source = str(max(alternatives, key=lambda p: p.stat().st_mtime)) if alternatives else None
    result = wall.check_row((dict(seg=seg, func=name, file=S.file_of(seg, name)), [source] if source else []))
    result.update(inventory_source_available=exact_source, claim=row['claim'], batch=row['batch'])
    if source:
        try:
            run = subprocess.run([sys.executable, 'tools/hh/srcbuild.py', 'infile', seg, name, source],
                                 capture_output=True, text=True, timeout=900)
            result.update(accepted=run.returncode == 0, infile=(run.stdout + run.stderr).strip())
        except subprocess.TimeoutExpired:
            result.update(accepted=False, infile='in-file check exceeded 900 seconds')
    print(seg, name, result['class'], result.get('accepted'), flush=True)
    return result


if __name__ == '__main__':
    os.nice(19)
    OUT.mkdir(exist_ok=True)
    if '--summarize' in sys.argv:
        rows = json.loads((OUT / 'audit.json').read_text())
        replacements = {(r['seg'], r['func']): r for r in json.loads((OUT / 'audit-saved.json').read_text())}
        rows = [replacements.get((r['seg'], r['func']), r) for r in rows]
        for row in rows:
            # Repeated variants can produce tens of kilobytes of identical
            # failures. Retain the exact first rejection and distinct causes.
            message = row.pop('infile', '')
            row['infile_first'] = message.split('; ')[0]
            row['infile_causes'] = sorted(set(part.split(': ', 1)[-1] for part in message.split('; ')))
            if row['seg'] == 'file050' and row['func'] == 'func_801E3450':
                row['landing'] = 'a4f01b8ee8: cases C2/C9 corrected to BE/C3; whole file and ROM exact'
        (OUT / 'dispositions.json').write_text(json.dumps(rows, indent=2) + '\n')
        print(len(rows), 'dispositions;', sum(r['inventory_source_available'] for r in rows), 'inventory workdirs available')
        sys.exit(0)
    rows = list(csv.DictReader(open(ROOT / 'sol_ref/task37/INVENTORY.tsv'), delimiter='\t'))
    if '--saved-only' in sys.argv:
        rows = [r for r in rows if (ROOT / 'sol_ref/task37' / r['segment'] / r['func'] / 'attempt.c').exists()]
    blocked = S.link_blocked()
    assert not any((r['segment'], r['func']) in blocked for r in rows)
    previous = json.loads((OUT / 'audit.json').read_text()) if '--resume' in sys.argv and (OUT / 'audit.json').exists() else []
    # Older snapshots have no context.h next to them; prefer the original
    # workdir when it still exists so both compilers see its real declarations.
    previous = [r for r in previous if not ((r.get('attempt_source') or '').startswith('sol_ref/task37/')
                and workdir.attempt(r['batch'], r['func'], r['seg']))]
    done = {(r['seg'], r['func']) for r in previous}
    rows = [r for r in rows if (r['segment'], r['func']) not in done]
    results = list(previous)
    with ProcessPoolExecutor(max_workers=4 if '--saved-only' in sys.argv else 6) as pool:
        for future in as_completed([pool.submit(inspect, row) for row in rows]):
            result = future.result()
            results.append(result)
            (OUT / ('audit-saved.json' if '--saved-only' in sys.argv else 'audit.json')).write_text(json.dumps(results, indent=2) + '\n')
