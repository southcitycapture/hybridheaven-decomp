"""Probe as1's final flags without modifying its binasm input or output."""
import json
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import shutil

sys.path.insert(0, str(Path(__file__).resolve().parent))
import idoflags
import try_func as T
import wall
import workdir


if __name__ == '__main__':
    import argparse
    import csv
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--output', type=Path, default=Path('queue/task37/as1.json'))
    ap.add_argument('--driver-variants', action='store_true', help='vary flags upstream of as1')
    args = ap.parse_args()
    os.nice(19)
    results = []
    names = {'func_80242A90', 'func_8010DD4C', 'func_80368374', 'func_801D7798'}
    for row in csv.DictReader(open('sol_ref/task37/INVENTORY.tsv'), delimiter='\t'):
        seg, name = row['segment'], row['func']
        if name not in names: continue
        source = workdir.attempt(row['batch'], name, seg)
        if not source:
            restored = Path('sol_ref/task38/restored') / seg / (name + '.' + row['batch'] + '.c')
            if not restored.is_file():
                print(name, 'no source', flush=True)
                continue
            source = str(restored)
        off, size, vram, asm = T.find_func(name, seg=seg)
        target = Path(T.IMG).read_bytes()[off:off+size]
        for version in (('7.1',) if args.driver_variants else ('7.1', '5.3')):
            ido = Path(T.HH) / 'tools/ido' / version
            with tempfile.TemporaryDirectory(dir=Path(T.HH) / 'build', prefix='task37-as1-') as td:
                path = Path(td)
                staged = wall.stage(Path(T.HH) / source, td, dict(seg=seg, func=name))
                if not (path / 'context.h').exists():
                    import srcbuild
                    (path / 'context.h').write_text(srcbuild.context_for(seg, name))
                if not (path / 'known.h').exists():
                    (path / 'known.h').write_text('')
                for tool in ido.iterdir():
                    if tool.name == 'cc': shutil.copy2(tool, path / tool.name)
                    elif tool.name != 'as1': (path / tool.name).symlink_to(tool)
                wrapper = path / 'as1'
                wrapper.write_text('#!' + sys.executable + '\n'
                    'import os,sys,json\n'
                    'from pathlib import Path\n'
                    'Path(' + repr(str(path / 'args.json')) + ').write_text(json.dumps(sys.argv[1:]))\n'
                    'args=[a for a in sys.argv[1:] if a not in ("-O0","-O1","-O2","-O3")]\n'
                    'args += os.environ["TASK37_AS1_FLAGS"].split()\n'
                    'os.execv(' + repr(str(ido / 'as1')) + ', ["as1"] + args)\n')
                wrapper.chmod(0o755)
                variants = [('-O2', opt.split()) for opt in ('', '-g', '-g3', '-G 8', '-O3', '-O3 -g3', '-O2 -Wab,-O0')] if args.driver_variants else [
                    (flags, []) for flags in ('-O2', '-O0', '-O1', '-O3', '-O2 -mips3')]
                for flags, extra in variants:
                    obj = str(path / 'probe.o')
                    command = [str(path / 'cc'), '-c'] + idoflags.CFLAGS + extra + ['-o', obj, staged]
                    (path / 'args.json').unlink(missing_ok=True)
                    run = subprocess.run(command, env=dict(os.environ, TASK37_AS1_FLAGS=flags), capture_output=True, text=True)
                    result = dict(seg=seg, func=name, version=version, flags=flags, extra=extra,
                                  wrapper_used=(path / 'args.json').exists())
                    if run.returncode or not result['wrapper_used']:
                        result.update(error=run.stderr[-2000:], command=command)
                    else:
                        result['driver_args'] = json.loads((path / 'args.json').read_text())
                        code, rel = T.func_bytes(obj, name)
                        good, total, diffs = T.compare(code, rel, target)
                        result.update(good=good, total=total, aligned=T.aligned(code,target),
                                      differences=[dict(offset=4*k, attempt=a, target=b) for k,a,b in diffs[:8]])
                    results.append(result)
                    print(name, version, flags, extra, result.get('good'), result['wrapper_used'], flush=True)
        args.output.write_text(json.dumps(results, indent=2) + '\n')
