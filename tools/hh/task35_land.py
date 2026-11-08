"""Offer audited Task 35 snippets one at a time; ROM-check and commit each landing."""
import json
import os
from pathlib import Path
import subprocess
import sys

import reconcile_frozen as R
import srcbuild as S

ROOT = Path(S.HH)
OUT = ROOT / 'queue/task35'
EXCLUDE = {'func_80239048', 'func_80378E3C'}


def run(args, log=None):
    if log:
        with open(log, 'w') as fh:
            result = subprocess.run(args, stdout=fh, stderr=subprocess.STDOUT)
        if result.returncode:
            raise RuntimeError('failed: %s (see %s)' % (' '.join(args), log))
    else:
        subprocess.run(args, check=True)


if __name__ == '__main__':
    assert subprocess.check_output(['git', 'branch', '--show-current'], text=True).strip() == 'sol-align'
    rows = json.loads((OUT / 'audit.json').read_text())
    for row in rows:
        seg, name = row['seg'], row['func']
        recheck = OUT / (name + '-after-neighbour-landings.log')
        eligible = row.get('accepted') or (recheck.exists() and recheck.read_text().startswith('IN-FILE MATCH'))
        if not eligible or name in EXCLUDE or (seg, name) in S.registry():
            continue
        if len(sys.argv) > 1 and name not in sys.argv[1:]:
            continue
        assert (seg, name) not in S.link_blocked()
        cf = S.file_of(seg, name)
        snippet = R.read_attempt(seg, name, row['source'])
        directory = OUT / 'work' / (name + '@' + seg)
        directory.mkdir(parents=True, exist_ok=True)
        (directory / 'attempt.c').write_text(snippet)
        (OUT / 'results.jsonl').write_text(json.dumps(dict(segment=seg, func=name, verified='MATCH')) + '\n')
        run([sys.executable, 'tools/hh/srcbuild.py', 'add', 'task35'], OUT / (seg + '-' + name + '-add.log'))
        source = 'src/%s/%s.c' % (seg, cf)
        matched = 'matched/%s/%s.c' % (seg, name)
        if not S.source_has_function(seg, name) or not Path(matched).exists():
            raise RuntimeError('not landed: ' + name)
        run(['make', '-j8'], OUT / (seg + '-' + name + '-make.log'))
        run(['git', 'diff', '--check'])
        run(['git', 'status', '--short', '--untracked-files=no'])
        run(['git', 'diff', '--stat'])
        run(['git', 'diff', '--', source, matched], OUT / (seg + '-' + name + '-diff.log'))
        run(['git', 'log', '--oneline', '-10'])
        run(['git', 'add', source])
        run(['git', 'add', '-f', matched])
        run(['git', 'diff', '--cached', '--check'])
        run(['git', 'commit', '-m', 'Task 35: land %s %s with original readonly ownership' % (seg, name)])
        print('LANDED', seg, name, flush=True)
