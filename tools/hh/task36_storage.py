"""Land exact SDK objects together with their relocation-proven writable spans."""
import json
from pathlib import Path
import re
import subprocess
import sys

from task36_landlib import run

OUT = Path('queue/task36')
CONFIG = Path('tools/hh/libultra.json')


if __name__ == '__main__':
    assert subprocess.check_output(['git', 'branch', '--show-current'], text=True).strip() == 'sol-lib'
    lib = json.loads(CONFIG.read_text())
    results = [json.loads(line) for line in (OUT / 'library-sweep-storage.jsonl').read_text().splitlines()]
    for row in results:
        unit = row['unit']
        if unit in lib or row.get('unit_diffs') != 0:
            continue
        storage = {}
        for section in ('.data', '.bss'):
            if row['sections'][section]:
                addresses = row.get('storage_bases', {}).get(section, [])
                if len(addresses) != 1:
                    break
                storage[section] = ['0x%08X' % addresses[0], '0x%X' % row['sections'][section]]
        else:
            if not storage:
                continue
            entry = dict(mips='-mips2 -o32', opt=row['opt'], src=row['src'], storage=storage)
            if row['extra']:
                entry['flags'] = ' '.join(row['extra'])
            lib[unit] = entry
            CONFIG.write_text(json.dumps(dict(sorted(lib.items())), indent=1) + '\n')
            key = unit.replace('/', '-') + '-storage'
            run(['make', 'setup', 'BASEROM=build/hybridheaven.z64'], OUT / (key + '-setup.log'))
            run([sys.executable, 'tools/hh/gen_libultra.py', '--stubs'])
            run([sys.executable, 'tools/hh/gen_blocks.py'])
            run([sys.executable, 'tools/hh/data_to_c.py', 'main'], OUT / (key + '-data.log'))
            run([sys.executable, 'tools/hh/gen_extern_syms.py'])
            run(['make', '-j8'], OUT / (key + '-make.log'))
            source = 'src/' + unit + '.c'
            generated = re.findall(r'\.data, (data/main/\w+)\]', Path('hybridheaven.yaml').read_text())
            paths = [str(CONFIG), source, 'hybridheaven.yaml', 'undefined_funcs_auto.txt'] + ['src/' + p + '.c' for p in generated]
            run(['git', 'status', '--short', '--untracked-files=no'])
            run(['git', 'diff', '--stat'])
            run(['git', 'diff', '--'] + paths, OUT / (key + '-diff.log'))
            run(['git', 'diff', '--check'])
            run(['git', 'log', '--oneline', '-10'])
            run(['git', 'add'] + paths)
            run(['git', 'diff', '--cached', '--check'])
            run(['git', 'commit', '-m', 'Task 36: place %s SDK code and writable storage' % unit])
            print('LANDED', unit, storage, flush=True)
