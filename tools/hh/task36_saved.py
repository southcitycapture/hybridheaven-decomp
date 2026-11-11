"""Audit the eight saved matches after removing artificial stack/BSS pads."""
import csv
import json
from pathlib import Path
import re
import subprocess
import sys

import srcbuild as S
import wall
import workdir

OUT = Path('queue/task36')


if __name__ == '__main__':
    results = []
    for row in csv.DictReader(open('sol_ref/task36/INVENTORY.tsv'), delimiter='\t'):
        seg, name = row['segment'], row['func']
        assert (seg, name) not in S.link_blocked()
        directory = OUT / 'saved' / (seg + '-' + name)
        directory.mkdir(parents=True, exist_ok=True)
        source = Path('sol_ref/task36') / seg / (name + '.c')
        original = source.read_text()
        text = original
        text = re.sub(r'^typedef (?:signed|unsigned|float|double)[^\n]*\n', '', text, flags=re.M)
        text = re.sub(r'^\s*u8\s+\w+_bss_prefix\[[^]]+\];\s*$', '', text, flags=re.M)
        text = re.sub(r'^u64 (D_[0-9A-F]{8});$', r'extern u64 \1;', text, flags=re.M)
        definition = re.search(r'^\w[^\n;]*\b' + name + r'\([^;]*?\)\s*\{', text, re.M)
        if definition:
            at = definition.end()
            text = text[:at] + re.sub(r'^\s*(?:u8|s8|u16|s16|u32|s32|f32|f64)\s+pad\w*\[[^]]+\];\s*$', '', text[at:], flags=re.M)
        text = re.sub(r'\b(\w+)\s*=\s*\1\s*\*\s*1\s*;', '', text)
        if '#include' not in text:
            text = '#include "common.h"\n' + text
        (directory / 'attempt.c').write_text(text)
        previous = workdir.attempt(row['batch'], name, seg)
        header = Path(previous).parent / 'context.h' if previous else None
        context = header.read_text() if header and header.exists() else S.context_for(seg, name)
        (directory / 'context.h').write_text(context)
        (directory / 'known.h').write_text('')
        result = dict(seg=seg, func=name, source=str(source), cleaned=str(directory / 'attempt.c'),
                      removed_artificial_material=text != original)
        try:
            result['standalone'] = wall.check_source(dict(seg=seg, func=name), str(directory / 'attempt.c'))
        except (Exception, SystemExit) as exc:
            result['standalone_error'] = str(exc)
        run = subprocess.run([sys.executable, 'tools/hh/srcbuild.py', 'infile', seg, name, str(directory / 'attempt.c')],
                             capture_output=True, text=True)
        result['infile'] = run.stdout + run.stderr
        result['accepted'] = run.returncode == 0
        results.append(result)
        (OUT / 'saved-audit.json').write_text(json.dumps(results, indent=2) + '\n')
        print(seg, name, result['infile'][:300], flush=True)
    subprocess.run([sys.executable, 'tools/hh/gen_blocks.py'], check=True)
