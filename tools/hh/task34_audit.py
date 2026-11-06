"""Task 34 inventory audit; logs only, never changes frozen source or registry."""
import csv
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys
import tempfile
from concurrent.futures import ThreadPoolExecutor

ROOT = Path(__file__).resolve().parents[2]
os.chdir(ROOT)
OUT = ROOT / 'queue/task34'


def contextual(seg, func, attempt):
    sys.path.insert(0, str(ROOT / 'tools/hh'))
    import srcbuild as S
    import reconcile_frozen as R
    if (seg, func) in S.link_blocked():
        raise ValueError('blocked function')
    cf = S.file_of(seg, func)
    original = Path('src', seg, cf + '.c').read_text()
    snippet = R.read_attempt(seg, func, attempt)
    failures = []
    with tempfile.TemporaryDirectory(prefix='task34-', dir=ROOT / 'build') as td:
        for how, text in R.insert_variants(seg, cf, original, func, snippet):
            obj, err = S.compile_file(text, td)
            if obj is None:
                failures.append({'variant': how, 'error': err[-1200:]})
                continue
            size, length, vram, _ = S.try_func.find_func(func, seg=seg)
            mine, rel = S.try_func.func_bytes(obj, func)
            target = S.IMG[size:size + length]
            good, total, _ = S.try_func.compare(mine, rel, target)
            saved = OUT / 'contextual' / (seg + '-' + func + '.c')
            saved.parent.mkdir(parents=True, exist_ok=True)
            saved.write_text(text)
            return dict(variant=how, compiled=True, good=good, total=total,
                        aligned=S.try_func.aligned(mine, target),
                        size=len(mine), target_size=length, source=str(saved.relative_to(ROOT)), failures=failures)
    return dict(compiled=False, failures=failures)


def audit(row):
    seg, func = row['segment'], row['func']
    wall = next((r for r in WALLS if r['seg'] == seg and r['func'] == func), None)
    attempt = ROOT / 'sol_ref/task34' / row['attempt'] if row['attempt'] else None
    if attempt is None:
        if wall:
            attempt = ROOT / wall['attempt_source']
    for directory in ('attempts', 'drafts'):
        prepared = OUT / directory / (seg + '-' + func + '.c')
        if prepared.is_file() and (directory == 'attempts' or attempt is None or not attempt.is_file()):
            attempt = prepared
            break
    result = dict(row)
    result['source'] = str(attempt.relative_to(ROOT)) if attempt is not None else None
    if attempt is None or not attempt.is_file():
        result['status'] = 'no saved attempt'
        return result
    previous = OUT / (seg + '-' + func + '.json')
    frozen = ROOT / 'src' / seg / (wall['file'] + '.c') if wall else None
    fingerprint = hashlib.sha256(attempt.read_bytes() + (ROOT / 'tools/hh/reconcile_frozen.py').read_bytes()
                                 + (frozen.read_bytes() if frozen and frozen.exists() else b'')).hexdigest()
    if previous.is_file():
        cached = json.loads(previous.read_text())
        if cached.get('fingerprint') == fingerprint:
            return cached
    result['fingerprint'] = fingerprint
    result['placeholder'] = len(attempt.read_text().splitlines()) <= 6
    for tool, args in (
        ('try_func', [func, str(attempt), '--seg', seg, '--diagnose']),
        ('srcbuild', ['infile', seg, func, str(attempt)]),
    ):
        run = subprocess.run([sys.executable, 'tools/hh/' + tool + '.py', *args],
                             capture_output=True, text=True)
        log = OUT / (seg + '-' + func + '-' + tool + '.log')
        log.write_text(run.stdout + run.stderr)
        result[tool] = (run.stdout + run.stderr).strip()
    run = subprocess.run([sys.executable, __file__, '--context', seg, func, str(attempt)],
                         capture_output=True, text=True)
    result['contextual'] = json.loads(run.stdout) if run.returncode == 0 else {'error': run.stderr}
    print(seg, func, result['try_func'].splitlines()[0], flush=True)
    (OUT / (seg + '-' + func + '.json')).write_text(json.dumps(result, indent=2) + '\n')
    return result


if __name__ == '__main__':
    OUT.mkdir(parents=True, exist_ok=True)
    if sys.argv[1:2] == ['--clean']:
        scratch = ROOT / 'queue/task34_permute'
        if scratch.is_symlink():
            sys.exit('refusing a symlink scratch directory')
        size = sum(p.stat().st_size for p in scratch.rglob('*') if p.is_file()) if scratch.exists() else 0
        if scratch.exists():
            shutil.rmtree(scratch)
        message = 'Removed queue/task34_permute (%d file bytes); no other directories touched.\n' % size
        (OUT / 'cleanup.log').write_text(message)
        print(message, end='')
        sys.exit(0)
    if sys.argv[1:2] == ['--context']:
        print(json.dumps(contextual(*sys.argv[2:])))
        sys.exit(0)
    if sys.argv[1:2] == ['--permute']:
        sys.path.insert(0, str(ROOT / 'tools/hh'))
        import srcbuild as S
        sys.path.insert(0, str(ROOT / 'tools/swarm'))
        import permute as P
        P.NATURAL = True
        P.BATCH = 'task34_permute'
        seg, func, source = sys.argv[2:]
        if (seg, func) in S.link_blocked():
            sys.exit('blocked function')
        result = P.run_one((None, func, seg, source, 3, 2, 0))
        (OUT / (seg + '-' + func + '-permuter.json')).write_text(json.dumps(result, indent=2) + '\n')
        print(json.dumps(result))
        sys.exit(0)
    if sys.argv[1:2] == ['--offer']:
        sys.path.insert(0, str(ROOT / 'tools/hh'))
        import srcbuild as S
        import workdir
        seg, func, source = sys.argv[2:]
        if (seg, func) in S.link_blocked():
            sys.exit('blocked function')
        ok, why = S.infile_check(seg, func, source)
        print(why)
        if not ok:
            sys.exit(1)
        directory = ROOT / workdir.path('task34', func, seg)
        directory.mkdir(parents=True, exist_ok=True)
        (directory / 'attempt.c').write_text(Path(source).read_text())
        with (OUT / 'results.jsonl').open('a') as fh:
            fh.write(json.dumps(dict(segment=seg, func=func, verified='MATCH')) + '\n')
        sys.exit(0)
    if sys.argv[1:2] == ['--drafts']:
        sys.path.insert(0, str(ROOT / 'tools/hh'))
        import srcbuild as S
        out = OUT / 'drafts'
        out.mkdir(parents=True, exist_ok=True)
        for row in csv.DictReader(open('sol_ref/task34/INVENTORY.tsv'), delimiter='\t'):
            if row['attempt']:
                continue
            seg, func = row['segment'], row['func']
            destination = out / (seg + '-' + func + '.c')
            if destination.exists() or (seg, func) in S.link_blocked():
                continue
            asm = S.try_func.find_func(func, seg=seg)[3]
            run = subprocess.run([sys.executable, 'tools/m2c/m2c.py', asm, '--valid-syntax'],
                                 capture_output=True, text=True)
            destination.write_text('#include "common.h"\n' + run.stdout)
        sys.exit(0)
    if (OUT / 'audit.json').is_file() and not (OUT / 'baseline-audit.json').exists():
        (OUT / 'baseline-audit.json').write_text((OUT / 'audit.json').read_text())
    rows = list(csv.DictReader(open('sol_ref/task34/INVENTORY.tsv'), delimiter='\t'))
    WALLS = [json.loads(line) for line in open('queue/walls.jsonl')]
    with ThreadPoolExecutor(max_workers=4) as pool:
        results = list(pool.map(audit, rows))
    (OUT / 'audit.json').write_text(json.dumps(results, indent=2) + '\n')
    columns = ('class', 'segment', 'func', 'source', 'variant', 'compiled', 'good', 'total', 'size', 'target_size', 'aligned')
    with (OUT / 'results.tsv').open('w') as fh:
        writer = csv.DictWriter(fh, fieldnames=columns, delimiter='\t', lineterminator='\n', extrasaction='ignore')
        writer.writeheader()
        for row in results:
            context = dict(row.get('contextual', {}))
            context.pop('source', None)
            writer.writerow(dict(row, **context))
