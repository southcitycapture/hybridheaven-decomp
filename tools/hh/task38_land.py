"""Land audited Task 38 candidates individually through the frozen-file gate."""
import json
import os
from pathlib import Path
import subprocess
import sys
import tempfile

import reconcile_frozen as R
import srcbuild as S

OUT = Path('queue/task38')


def run(args, log=None):
    if log:
        with log.open('w') as fh:
            subprocess.run(args, stdout=fh, stderr=subprocess.STDOUT, check=True)
    else:
        subprocess.run(args, check=True)


if __name__ == '__main__':
    os.nice(19)
    assert subprocess.check_output(['git', 'branch', '--show-current'], text=True).strip() == 'sol-place'
    rows = json.loads((OUT / 'audit.json').read_text())
    for row in rows:
        seg, func = row['seg'], row['func']
        if not row['accepted'] or (len(sys.argv) > 1 and func not in sys.argv[1:]): continue
        if S.source_has_function(seg, func) and subprocess.run(
                ['git', 'diff', '--quiet', 'HEAD', '--', 'src/%s/%s.c' % (seg, S.file_of(seg, func))]).returncode == 0: continue
        assert (seg, func) not in S.link_blocked()
        cf = S.file_of(seg, func)
        source = Path('src') / seg / (cf + '.c')
        matched = Path('matched') / seg / (func + '.c')
        snippet = R.read_attempt(seg, func, row['attempt_source'])
        original = source.read_text()
        with tempfile.TemporaryDirectory(dir='build', prefix='task38-land-') as td:
            text, accepted, rejected = R.integrate(seg, cf, original, {func: snippet}, td)
        if func not in accepted: raise RuntimeError(str(rejected))
        source.write_text(text)
        matched.write_text(snippet)
        run(['make', '-j8'], OUT / (seg + '-' + func + '-make.log'))
        run(['git', 'status', '--short', '--untracked-files=no'])
        run(['git', 'diff', '--', str(source), str(matched)], OUT / (seg + '-' + func + '-diff.log'))
        run(['git', 'diff', '--check'])
        run(['git', 'log', '--oneline', '-10'])
        run(['git', 'add', str(source)])
        run(['git', 'add', '-f', str(matched)])
        run(['git', 'diff', '--cached', '--check'])
        run(['git', 'commit', '-m', 'Task 38: land %s %s preserving C neighbours' % (seg, func)])
        print('LANDED', seg, func, accepted[func], flush=True)
