"""Local-only readonly-wall evidence and in-file checks for Task 35."""
import json
import os
from pathlib import Path
import subprocess
import sys
import tempfile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import wall
import try_func as T
import srcbuild as S
import addrfix
from elftools.elf.elffile import ELFFile

ROOT = Path(T.HH)
OUT = ROOT / 'queue/task35'


def inspect(row, previous=None):
    seg, name = row['seg'], row['func']
    result = dict(seg=seg, func=name, file=row['file'], source=row['attempt_source'], wall=row['class'])
    off, size, vram, asm = T.find_func(name, seg=seg)
    target = S.IMG[off:off+size]
    ro = T.asm_rodata_start(asm)
    with tempfile.TemporaryDirectory(dir=ROOT / 'build', prefix='task35-') as td:
        source = wall.stage(ROOT / row['attempt_source'], td, row)
        obj = str(Path(td) / 'attempt.o')
        T.compile_c(source, '7.1', '-O2', obj)
        result['rodata_size'] = T.obj_rodata_size(obj)
        result['original_pool'] = '%08X' % ro if ro is not None else None
        refs = addrfix.mine_refs(obj, name) or {}
        target_refs = addrfix.target_refs(asm, vram)
        got = T.linked_func_bytes(obj, name, vram, rodata=ro, want_rodata=True)
        result['unresolved'] = list(T.UNRESOLVED)
        result['addresses'] = []
        if got:
            code, data = got
            with open(obj + '.linked', 'rb') as fh:
                section = ELFFile(fh).get_section_by_name('.rodata')
                base = section['sh_addr'] if section else None
                result['input_alignment'] = None
            with open(obj, 'rb') as fh:
                section = ELFFile(fh).get_section_by_name('.rodata')
                result['input_alignment'] = section['sh_addralign'] if section else None
            for pos, (kind, symbol, addend) in refs.items():
                if symbol != '<section .rodata>' or kind != 'lo':
                    continue
                original = target_refs.get(pos)
                expected = (wall.symbol_address(original[1]) + original[2]) if original and wall.symbol_address(original[1]) is not None else None
                # A default-script output section may start at the requested
                # address yet contain leading input-alignment padding. Decode
                # the actual relocated HI/LO pair, not sh_addr + input offset.
                highs = [p for p, ref in refs.items() if p < pos and ref == ('hi', symbol, addend)]
                actual = None
                if highs:
                    high = int.from_bytes(code[max(highs):max(highs)+4], 'big') & 0xffff
                    low = int.from_bytes(code[pos:pos+4], 'big') & 0xffff
                    actual = ((high << 16) + (low - 0x10000 if low & 0x8000 else low)) & 0xffffffff
                entry = dict(offset=pos, symbol=original[1] if original else None, target=expected, attempt=actual,
                             delta=actual-expected if actual is not None and expected is not None else None)
                if entry['symbol'] and entry['symbol'].startswith('jtbl_') and actual is not None and base is not None:
                    i = actual - base
                    entry['first_destination'] = int.from_bytes(data[i:i+4], 'big')
                    i = off + expected - vram
                    entry['target_destination'] = int.from_bytes(S.IMG[i:i+4], 'big')
                result['addresses'].append(entry)
            result['code_diffs'] = [dict(offset=k*4, attempt=a, target=b) for k, a, b in T.compare(code[:size], {}, target)[2]]
            if ro is not None:
                at = off + ro - vram
                result['rodata_equal'] = T.rodata_matches(data, S.IMG, lambda v: off+v-vram, ro)
                result['first_rodata_difference'] = next((i for i, (a,b) in enumerate(zip(data, S.IMG[at:at+len(data)])) if a != b), None)
    if previous is not None and 'infile' in previous:
        result.update(infile=previous['infile'], accepted=previous['accepted'])
    elif result['rodata_size'] and (seg, name) not in S.registry():
        with tempfile.TemporaryDirectory(dir=ROOT / 'build', prefix='task35-gate-') as td:
            run = subprocess.run([sys.executable, 'tools/hh/srcbuild.py', 'infile', seg, name, row['attempt_source']],
                                 capture_output=True, text=True, env=dict(os.environ, TMPDIR=td), timeout=600)
        result['infile'] = (run.stdout + run.stderr).strip()
        result['accepted'] = run.returncode == 0
    else:
        result['infile'] = 'not offered: registered or no compiler readonly objects'
        result['accepted'] = False
    print(seg, name, result['infile'][:250], flush=True)
    return result


if __name__ == '__main__':
    OUT.mkdir(exist_ok=True)
    rows = [json.loads(line) for line in open(ROOT / 'queue/task35-walls-after.jsonl')]
    blocked = set(S.link_blocked())
    results = json.loads((OUT / 'audit.json').read_text()) if (OUT / 'audit.json').exists() else []
    before = '--original-link' in sys.argv or '--wall-original' in sys.argv
    if before:
        original = subprocess.check_output(['git', 'show', '7a02754e92:tools/hh/try_func.py'], text=True)
        namespace = dict(__file__=T.__file__, __name__='task35_original_link')
        exec(compile(original, T.__file__, 'exec'), namespace)
        T.linked_func_bytes = namespace['linked_func_bytes']
    if '--wall-original' in sys.argv:
        from concurrent.futures import ProcessPoolExecutor
        inventory = [{k: r[k] for k in ('seg', 'func', 'file', 'size')} for r in rows]
        with ProcessPoolExecutor(max_workers=6) as pool:
            original_rows = list(pool.map(wall.check_row, [(r, [str(ROOT / saved['attempt_source'])] if saved['attempt_source'] else [])
                                                          for r, saved in zip(inventory, rows)]))
        (OUT / 'walls-before.jsonl').write_text(''.join(json.dumps(r)+'\n' for r in original_rows))
        sys.exit(0)
    previous = {(r['seg'], r['func']): r for r in results} if '--refresh' in sys.argv or before else {}
    if previous:
        results = []
    done = {(r['seg'], r['func']) for r in results}
    for row in rows:
        if row['class'] not in ('symbols', 'match') or (row['seg'], row['func']) in blocked:
            continue
        if (row['seg'], row['func']) in done:
            continue
        # Registry entries represented by ASM still need diagnosis, but are
        # never offered as new landings by this audit.
        try:
            result = inspect(row, previous.get((row['seg'], row['func'])))
        except (Exception, SystemExit) as exc:
            result = dict(seg=row['seg'], func=row['func'], error=str(exc))
        results.append(result)
        (OUT / ('audit-before.json' if before else 'audit.json')).write_text(json.dumps(results, indent=2) + '\n')
    subprocess.run([sys.executable, 'tools/hh/gen_blocks.py'], check=True)
