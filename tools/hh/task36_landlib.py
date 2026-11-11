"""Land whole, unmodified SDK C units discovered by task36_libprobe.

Every candidate must pass the ROM SHA-1 gate before its individual commit.
"""
import json
from pathlib import Path
import subprocess
import sys

import srcbuild as S

OUT = Path('queue/task36')
CONFIG = Path('tools/hh/libultra.json')


def run(args, log=None, check=True):
    if log:
        with log.open('w') as fh:
            result = subprocess.run(args, stdout=fh, stderr=subprocess.STDOUT)
    else:
        result = subprocess.run(args)
    if check:
        result.check_returncode()
    return result.returncode


if __name__ == '__main__':
    assert subprocess.check_output(['git', 'branch', '--show-current'], text=True).strip() == 'sol-lib'
    results = [json.loads(line) for p in sorted(OUT.glob('library-sweep*.jsonl')) for line in p.read_text().splitlines()]
    lib = json.loads(CONFIG.read_text())
    candidates = {}
    for row in results:
        if (row.get('unit_diffs') != 0 or row['unit'] in lib or row['version'] != 'J' or row['cc'] != '5.3'
                or row['isa'] != '-mips2' or any(x != '-DNDEBUG' for x in row['extra'])):
            continue
        candidates.setdefault(row['unit'], row)
    outcomes = []
    for unit, row in sorted(candidates.items()):
        source = Path('src/' + unit + '.c')
        assert not any(('main', e[0]) in S.link_blocked() for e in S.entries('main', unit.split('/')[1]))
        old_config, old_source = CONFIG.read_bytes(), source.read_bytes()
        lib[unit] = dict(mips='-mips2 -o32', opt=row['opt'], src=row['src'])
        if row['extra']:
            lib[unit]['flags'] = ' '.join(row['extra'])
        CONFIG.write_text(json.dumps(dict(sorted(lib.items())), indent=1) + '\n')
        run([sys.executable, 'tools/hh/gen_libultra.py', '--stubs'])
        log = OUT / (unit.replace('/', '-') + '-make.log')
        status = run(['make', '-j8'], log, check=False)
        if status:
            CONFIG.write_bytes(old_config)
            source.write_bytes(old_source)
            del lib[unit]
            run([sys.executable, 'tools/hh/gen_libultra.py'])
            run(['make', '-j8'], OUT / (unit.replace('/', '-') + '-restore.log'))
            outcomes.append(dict(unit=unit, status='ROM gate failed', log=str(log)))
            print('REJECTED', unit, flush=True)
        else:
            run(['git', 'status', '--short', '--untracked-files=no'])
            run(['git', 'diff', '--', str(CONFIG), str(source)], OUT / (unit.replace('/', '-') + '-diff.log'))
            run(['git', 'diff', '--stat'])
            run(['git', 'diff', '--check'])
            run(['git', 'log', '--oneline', '-10'])
            run(['git', 'add', str(CONFIG), str(source)])
            run(['git', 'diff', '--cached', '--check'])
            run(['git', 'commit', '-m', 'Task 36: build %s from libultra C at %s' % (unit, row['opt'])])
            outcomes.append(dict(unit=unit, status='landed', build=row, log=str(log)))
        (OUT / 'library-landings.json').write_text(json.dumps(outcomes, indent=2) + '\n')
