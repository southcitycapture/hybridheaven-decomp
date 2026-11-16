"""Record every frozen-file trial for one Task 38 candidate."""
import json
import os
from pathlib import Path
import sys
import tempfile

import reconcile_frozen as R
import srcbuild as S
import wall

if __name__ == '__main__':
    os.nice(19)
    seg, func, path = sys.argv[1:4]
    assert (seg, func) not in S.link_blocked()
    cf = S.file_of(seg, func)
    out = Path('queue/task38')
    result = wall.check_row((dict(seg=seg, func=func, file=cf), [path]))
    with tempfile.TemporaryDirectory(dir='build', prefix='task38-probe-') as td:
        if '--best' in sys.argv:
            original = Path('src/%s/%s.c' % (seg, cf)).read_text()
            best = None
            for how, candidate in R.insert_variants(seg, cf, original, func, R.read_attempt(seg, func, path)):
                ok, why = R.verify(seg, cf, candidate, S.defined_functions(original) | {func}, td)
                if not why.startswith('does not match:'): continue
                bad = why.split(': ', 1)[1].split(', ')
                if best is None or len(bad) < len(best[0]): best = bad, candidate, how
            if best:
                bad, candidate, how = best
                (out / (seg + '-' + func + '-best.c')).write_text(candidate)
                obj, _ = S.compile_file(candidate, td)
                for name, _, off, size, vram in S.entries(seg, cf):
                    if name not in bad: continue
                    exact = S.try_func.linked_func_bytes(obj, name, vram, int(cf, 16), S.FILE_RODATA.get((seg, cf)))
                    print(how, name, wall.first_difference(wall.words(exact), wall.words(S.IMG[off:off+size]), vram))
            sys.exit(0)
        with (out / (seg + '-' + func + '-trials.log')).open('w') as log:
            text, acc, rej = R.integrate(seg, cf, Path('src/%s/%s.c' % (seg, cf)).read_text(),
                                        {func: R.read_attempt(seg, func, path)}, td,
                                        log=lambda line: log.write(line + '\n'))
    result.update(accepted=func in acc, infile_first=acc.get(func) or rej.get(func, '').split('; ')[0])
    if func in acc:
        (out / (seg + '-' + func + '-proposal.c')).write_text(text)
    (out / (seg + '-' + func + '-probe.json')).write_text(json.dumps(result, indent=2) + '\n')
    print(func, result['class'], result['accepted'], result['infile_first'])
