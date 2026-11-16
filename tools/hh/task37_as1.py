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
    import csv
    os.nice(19)
    results = []
    names = {'func_80242A90', 'func_8010DD4C', 'func_80368374', 'func_801D7798'}
    for row in csv.DictReader(open('sol_ref/task37/INVENTORY.tsv'), delimiter='\t'):
        seg, name = row['segment'], row['func']
        if name not in names: continue
        source = workdir.attempt(row['batch'], name, seg)
        if not source: continue
        off, size, vram, asm = T.find_func(name, seg=seg)
        target = Path(T.IMG).read_bytes()[off:off+size]
        for version in ('7.1', '5.3'):
            ido = Path(T.HH) / 'tools/ido' / version
            with tempfile.TemporaryDirectory(dir=Path(T.HH) / 'build', prefix='task37-as1-') as td:
                path = Path(td)
                staged = wall.stage(Path(T.HH) / source, td, dict(seg=seg, func=name))
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
                for flags in ('-O2', '-O0', '-O1', '-O3', '-O2 -mips3'):
                    obj = str(path / 'probe.o')
                    command = [str(path / 'cc'), '-c'] + idoflags.CFLAGS + ['-o', obj, staged]
                    run = subprocess.run(command, env=dict(os.environ, TASK37_AS1_FLAGS=flags), capture_output=True, text=True)
                    result = dict(seg=seg, func=name, version=version, flags=flags, wrapper_used=(path / 'args.json').exists())
                    if run.returncode or not result['wrapper_used']:
                        result.update(error=run.stderr[-2000:], command=command)
                    else:
                        result['driver_args'] = json.loads((path / 'args.json').read_text())
                        code, rel = T.func_bytes(obj, name)
                        good, total, diffs = T.compare(code, rel, target)
                        result.update(good=good, total=total, aligned=T.aligned(code,target),
                                      differences=[dict(offset=4*k, attempt=a, target=b) for k,a,b in diffs[:8]])
                    results.append(result)
                    print(name, version, flags, result.get('good'), result['wrapper_used'], flush=True)
        Path('queue/task37/as1.json').write_text(json.dumps(results, indent=2) + '\n')
