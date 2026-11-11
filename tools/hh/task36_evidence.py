"""Save Task 36's progress, baseline-unit outcomes and compact saved-match scores."""
import json
from pathlib import Path
import subprocess
import shutil

OUT = Path('queue/task36')

if __name__ == '__main__':
    before = json.loads((OUT / 'baseline.json').read_text())
    report = json.loads(Path('build/progress/report.json').read_text())
    original_lib = json.loads(subprocess.check_output(['git', 'show', '211423b738:tools/hh/libultra.json'], text=True))
    lib = json.loads(Path('tools/hh/libultra.json').read_text())
    inventory = json.loads((OUT / 'library-inventory.json').read_text())
    functions = {f['name']: f for u in report['units'] if u['name'].startswith('main/') for f in u.get('functions', [])}
    rows = []
    for unit in inventory:
        name = unit['unit']
        owner = 'main/800283B0' if name == 'main/800284C0' else name
        if unit.get('blocked'):
            status = 'blocklisted; not probed'
        elif owner in original_lib:
            status = 'already SDK C at baseline'
        elif owner in lib:
            status = 'landed SDK C'
        else:
            status = 'not landed'
        fs = []
        for f in unit['functions']:
            func = f.get('func', f.get('name'))
            current = functions[func]
            fs.append(dict(func=func, size=int(current['size']), matched=current.get('fuzzy_match_percent') == 100))
        rows.append(dict(unit=name, owner=owner, status=status, build=lib.get(owner), functions=fs))
    saved = []
    for row in json.loads((OUT / 'saved-audit.json').read_text()):
        score = row.get('standalone', {})
        saved.append(dict(seg=row['seg'], func=row['func'], accepted=row['accepted'],
                          score=score.get('positional_score'), category=score.get('class'),
                          standalone_error=row.get('standalone_error'), infile=row['infile']))
    sweep_counts = {p.name: sum(1 for _ in p.open()) for p in sorted(OUT.glob('library-sweep*.jsonl'))}
    audit = dict(before=before, after=report['measures'], baseline_units=len(rows),
                 baseline_functions=sum(len(r['functions']) for r in rows),
                 newly_mapped=sorted(set(lib)-set(original_lib)), library_units_before=len(original_lib),
                 library_units_after=len(lib), baseline_functions_now_matched=sum(f['matched'] for r in rows for f in r['functions']),
                 sweep_counts=sweep_counts, saved=saved, units=rows)
    (OUT / 'final-audit.json').write_text(json.dumps(audit, indent=2) + '\n')
    checks = OUT / 'checks'
    checks.mkdir(exist_ok=True)
    for name in ('final-build', 'final-progress', 'srcbuild-all', 'tests', 'new-tests', 'bnkf-make'):
        source = Path('build/task36-' + name + '.log')
        if source.exists():
            shutil.copyfile(source, checks / (name + '.log'))
    # Terminal carriage-return progress bars and worker trailing spaces are
    # presentation artifacts, not evidence. Keep the archived text diff-clean.
    for path in OUT.rglob('*'):
        if path.suffix in ('.log', '.c', '.h'):
            text = path.read_text()
            clean = '\n'.join(line.rstrip() for line in text.splitlines()).rstrip() + '\n'
            path.write_text(clean)
    print('baseline units/functions:', audit['baseline_units'], audit['baseline_functions'])
    print('new mappings:', len(audit['newly_mapped']), 'baseline leftovers now matched:', audit['baseline_functions_now_matched'])
    print('sweep counts:', sweep_counts, 'total', sum(sweep_counts.values()))
    print('before:', before)
    print('after:', report['measures'])
    for row in saved:
        print(row['seg'], row['func'], row['score'], row['category'], row['accepted'], (row['standalone_error'] or '')[:150])
