"""Local, model-free libultra compiler sweep. Masked results are diagnostic only.

Run under nice -n 19. Objects live in TemporaryDirectory inside build and are
deleted even on compilation failure; small JSON evidence is kept in queue/task36.
"""
import argparse
from concurrent.futures import ProcessPoolExecutor
import json
from pathlib import Path
import re
import subprocess
import tempfile

from elftools.elf.elffile import ELFFile
import srcbuild as S

ROOT = Path(S.HH)
OUT = ROOT / 'queue/task36'
ULTRA = ROOT / 'tools/ultralib'
MASK = {2: 0, 4: 0xFC000000, 5: 0xFFFF0000, 6: 0xFFFF0000}
# Internal names absent from the imported public-name map, identified from the
# SDK source / unit order. These are hints, never acceptance substitutions.
HINTS = {
    0x80027BF8: '__osMakeMotorData', 0x800284C0: '__osPackReadData',
    0x80028DB8: 'createSpeedParam', 0x80029280: 'sinf',
    0x800294D0: '__osSiRawStartDma', 0x800296B0: '__osPfsGetNextPage',
    0x8002B410: '__osSumcalc', 0x8002DEC0: 'alEnvmixerPull',
    0x80030C60: '__osEPiRawReadIo', 0x80031070: 'bcmp',
    0x80031220: '__osTimerServicesInit', 0x800326F0: 'osPiGetCmdQueue',
    0x800337F8: 'corrupted_init', 0x80033AC4: 'corrupted',
    0x80034060: '__osContRamRead',
}
SOURCE_HINTS = {
    '80027A90': ['src/io/motor.c', 'src/io/siacs.c', 'src/io/controller.c'],
    '80028B10': ['src/os/initialize.c'],
    '80029280': ['src/gu/sinf.c', 'src/io/sprawdma.c'],
    '8002B410': ['src/io/contpfs.c'],
    '8002FC20': ['src/gu/sqrtf.s'],
    '8002FC50': ['src/gu/lookathil.c'],
    '80030C60': ['src/io/epirawread.c', 'src/io/viswapbuf.c'],
    '80030FF0': ['src/io/sptaskyielded.c', 'src/io/contramread.c'],
    '80031FF0': ['src/io/motor.c', 'src/io/vi.c'],
    '800332C0': ['src/io/pfschecker.c', 'src/io/aigetlen.c'],
    '80034060': ['src/io/contramread.c'],
}


def inventory():
    report = json.loads((ROOT / 'build/progress/report.json').read_text())
    names = {int(a, 16): n for n, a in re.findall(r'^(\w+) = 0x([0-9A-F]+);',
              (ROOT / 'tools/hh/libultra_names.txt').read_text(), re.M)}
    names.update(HINTS)
    sources = {str(p.relative_to(ULTRA)): p.read_text(errors='replace') for p in (ULTRA / 'src').rglob('*')
               if p.suffix in ('.c', '.s')}
    rows = []
    for unit in report['units']:
        if not re.fullmatch(r'main/[0-9A-F]{8}', unit['name']) or int(unit['name'].split('/')[1], 16) < 0x80026300:
            continue
        funcs = [f for f in unit['functions'] if f.get('fuzzy_match_percent', 0) != 100]
        if not funcs:
            continue
        cf = unit['name'].split('/')[1]
        if any(('main', f['name']) in S.link_blocked() for f in funcs):
            rows.append(dict(unit=unit['name'], blocked=True, functions=funcs))
            continue
        fs = [dict(func=f['name'], name=names.get(int(f['name'][5:], 16), '?'), size=int(f['size'])) for f in funcs]
        candidates = {}
        for f in fs:
            if f['name'] == '?':
                continue
            for path, text in sources.items():
                if re.search(r'\b' + re.escape(f['name']) + r'\s*\([^;{}]*\)\s*\{', text) or re.search(r'\b(?:LEAF|NESTED)\s*\(\s*' + re.escape(f['name']) + r'\b', text):
                    candidates[path] = candidates.get(path, 0) + 1
        for src in SOURCE_HINTS.get(cf, []):
            candidates[src] = 10
        lib = json.loads((ROOT / 'tools/hh/libultra.json').read_text())
        if unit['name'] in lib:
            candidates[lib[unit['name']]['src']] = 10
        ranked = sorted(candidates, key=lambda p: (-candidates[p], p))
        rows.append(dict(unit=unit['name'], functions=fs, candidates=ranked,
                         span=list(S.file_span('main', cf))))
    OUT.mkdir(exist_ok=True)
    (OUT / 'baseline.json').write_text(json.dumps(report['measures'], indent=2) + '\n')
    (OUT / 'library-inventory.json').write_text(json.dumps(rows, indent=2) + '\n')
    for row in rows:
        print(row['unit'], 'BLOCKED' if row.get('blocked') else ', '.join(f['name'] for f in row['functions']),
              '=>', ', '.join(row.get('candidates', [])[:6]))
    return rows


def compare_object(obj, row):
    with open(obj, 'rb') as fh:
        elf = ELFFile(fh)
        section = elf.get_section_by_name('.text')
        text = section.data() if section else b''
        symbols = elf.get_section_by_name('.symtab')
        funcs = {s.name: (s['st_value'], s['st_size']) for s in symbols.iter_symbols()
                 if s['st_info']['type'] == 'STT_FUNC' and s['st_shndx'] != 'SHN_UNDEF'}
        relsec = elf.get_section_by_name('.rel.text')
        rel = {r['r_offset']: r['r_info_type'] for r in relsec.iter_relocations()} if relsec else {}
        bases, pending = {}, {}
        if relsec:
            for r in sorted(relsec.iter_relocations(), key=lambda r: r['r_offset']):
                at, kind = r['r_offset'], r['r_info_type']
                sym = symbols.get_symbol(r['r_info_sym'])
                if not isinstance(sym['st_shndx'], int):
                    continue
                sec = elf.get_section(sym['st_shndx']).name
                if sec not in ('.data', '.bss', '.rodata'):
                    continue
                if kind == 5:
                    pending[r['r_info_sym']] = at
                if kind == 6 and r['r_info_sym'] in pending:
                    hi = pending[r['r_info_sym']]
                    start = row['span'][0]
                    word = lambda blob, off: int.from_bytes(blob[off:off+4], 'big')
                    address = lambda blob, offhi, offlo: (((word(blob, offhi) & 0xffff) << 16) +
                              ((word(blob, offlo) & 0x7fff) - (word(blob, offlo) & 0x8000))) & 0xffffffff
                    base = (address(S.IMG, start+hi, start+at) - address(text, hi, at) - sym['st_value']) & 0xffffffff
                    bases.setdefault(sec, set()).add(base)
        sections = {name: elf.get_section_by_name(name)['sh_size'] if elf.get_section_by_name(name) else 0
                    for name in ('.text', '.rodata', '.data', '.bss')}
    start, end = row['span']
    orig = S.IMG[start:end]
    def diffs(a, b, offset=0):
        return sum((int.from_bytes(a[i:i+4], 'big') & MASK.get(rel.get(offset+i), 0xFFFFFFFF)) !=
                   (int.from_bytes(b[i:i+4], 'big') & MASK.get(rel.get(offset+i), 0xFFFFFFFF)) or
                   i >= min(len(a), len(b)) for i in range(0, max(len(a), len(b)), 4))
    result = dict(sections=sections, storage_bases={k: sorted(v) for k, v in bases.items()},
                  unit_diffs=diffs(text, orig), functions=[])
    base = int(row['unit'].split('/')[1], 16)
    for f in row['functions']:
        offset = int(f['func'][5:], 16) - base
        expected = orig[offset:offset+f['size']]
        # IDO leaves static functions out of .symtab: try original offset too.
        at, size = funcs.get(f['name'], (offset, f['size']))
        actual = text[at:at+size]
        result['functions'].append(dict(func=f['func'], name=f['name'], offset=at,
                                        size=size, identity='symbol' if f['name'] in funcs else 'original-offset hypothesis',
                                        diffs=diffs(actual, expected, at)))
    return result


def probe(job):
    row, src, cc, version, opt, isa, extra = job
    result = dict(unit=row['unit'], src=src, cc=cc, version=version, opt=opt, isa=isa, extra=extra)
    with tempfile.TemporaryDirectory(prefix='task36-lib-', dir=ROOT / 'build') as td:
        source = ULTRA / src
        obj = Path(td) / 'probe.o'
        flags = ['-c', '-Wab,-r4300_mul', '-G', '0', '-nostdinc', '-Xcpluscomm', '-woff', '516,649,838,712',
                 '-D_MIPS_SZLONG=32', '-DF3DEX_GBI_2', '-DBUILD_VERSION=VERSION_' + version,
                 '-DBUILD_VERSION_STRING="2.0' + version + '"', '-non_shared', '-D_FINALROM',
                 isa, '-32' if isa == '-mips3' else '-o32', opt] + extra
        inc = [x for p in ('include', 'include/compiler/ido', 'include/PR') for x in ('-I', str(ULTRA / p))]
        run = subprocess.run([str(ROOT / 'tools/ido' / cc / 'cc')] + flags + [source.name] + inc + ['-o', str(obj)],
                             cwd=source.parent, capture_output=True, text=True)
        if run.returncode:
            result['error'] = run.stderr[-1500:]
        else:
            result.update(compare_object(obj, row))
    return result


def summarize():
    rows = json.loads((OUT / 'library-inventory.json').read_text())
    results = [json.loads(line) for path in sorted(OUT.glob('library-sweep*.jsonl')) for line in path.read_text().splitlines()]
    summary = []
    for row in rows:
        choices = [r for r in results if r['unit'] == row['unit'] and 'error' not in r]
        errors = [r['error'] for r in results if r['unit'] == row['unit'] and 'error' in r]
        best = min(choices, key=lambda r: r['unit_diffs']) if choices else None
        perfunc = []
        for f in row['functions']:
            candidates = [(r, x) for r in choices for x in r['functions'] if x['func'] == f.get('func', f.get('name'))]
            if candidates:
                r, x = min(candidates, key=lambda pair: pair[1]['diffs'])
                perfunc.append(dict(function=x, build={k: r[k] for k in ('src', 'cc', 'version', 'opt', 'isa', 'extra')}))
        summary.append(dict(inventory=row, best=best, per_function=perfunc))
        print(row['unit'], 'BLOCKED' if row.get('blocked') else '',
              ('%s IDO%s %s %s %s: %s unit words differ' % (best['src'], best['cc'], best['version'], best['opt'], best['isa'], best['unit_diffs'])) if best else 'no C result',
              errors[0][:500] if not best and errors else '')
        for f in perfunc:
            print(' ', f['function']['func'], f['function']['name'], f['function']['diffs'], f['build'])
        if best:
            print(' extent', best['sections'], 'target', hex(row['span'][1] - row['span'][0]))
        storage = next((r for r in choices if r.get('storage_bases') and r['unit_diffs'] == 0), None)
        if storage:
            print(' storage', {k: [hex(v) for v in vs] for k, vs in storage['storage_bases'].items()}, storage['sections'])
        elif best:
            storage = next((r for r in choices if r.get('storage_bases') and r['src'] == best['src'] and
                            r['cc'] == best['cc'] and r['opt'] == best['opt'] and r['version'] == best['version']), None)
            if storage:
                print(' partial storage', {k: [hex(v) for v in vs] for k, vs in storage['storage_bases'].items()}, storage['sections'])
    (OUT / 'library-summary.json').write_text(json.dumps(summary, indent=2) + '\n')


if __name__ == '__main__':
    ap = argparse.ArgumentParser()
    ap.add_argument('--inventory', action='store_true')
    ap.add_argument('--summary', action='store_true')
    ap.add_argument('--versions', default='I,J,K,L')
    ap.add_argument('--cc', default='5.3,7.1')
    ap.add_argument('--opts', default='-O1,-O2,-O3')
    ap.add_argument('--isas', default='-mips2,-mips3')
    ap.add_argument('--debug', action='store_true')
    ap.add_argument('--ndebug', action='store_true')
    ap.add_argument('--jobs', type=int, default=6)
    ap.add_argument('--unit', action='append')
    ap.add_argument('--output', default='library-sweep.jsonl')
    args = ap.parse_args()
    if args.summary:
        summarize()
    elif args.inventory:
        inventory()
    else:
        assert 1 <= args.jobs <= 6
        rows = json.loads((OUT / 'library-inventory.json').read_text())
        jobs = []
        for row in rows:
            if row.get('blocked') or (args.unit and row['unit'] not in args.unit):
                continue
            # Rank by all unit functions, then sweep every C candidate containing
            # one of their names (headers and call-only candidates are harmless).
            for src in row['candidates']:
                if not src.endswith('.c'):
                    continue
                for cc in args.cc.split(','):
                    for version in args.versions.split(','):
                        for opt in args.opts.split(','):
                            for isa in args.isas.split(','):
                                extra = (['-g'] if args.debug else []) + (['-DNDEBUG'] if args.ndebug else [])
                                jobs.append((row, src, cc, version, opt, isa, extra))
        print('compilations:', len(jobs), flush=True)
        with (OUT / args.output).open('w') as log, ProcessPoolExecutor(max_workers=args.jobs) as pool:
            for result in pool.map(probe, jobs, chunksize=1):
                log.write(json.dumps(result) + '\n')
                log.flush()
                if result.get('unit_diffs') == 0 or any(f['diffs'] == 0 for f in result.get('functions', [])):
                    print(json.dumps(result), flush=True)
