"""Write docs/RODATA_STATUS.md from the linked layout and frozen source inventory."""
import argparse
import glob
import json
import re
import subprocess
from pathlib import Path

import yaml
import srcbuild as S


def placements(text):
    result, segment = {}, {}
    for line in text.splitlines():
        if re.match(r'  - name:', line):
            segment = {}
        m = re.match(r'    (start|vram): (0x[0-9A-F]+)', line)
        if m:
            segment[m[1]] = int(m[2], 16)
        m = re.match(r'\s+- \[0x([0-9A-F]+), \.rodata, (\w+)/(\w+)\]', line)
        if m:
            result[m[2], m[3]] = segment['vram'] + int(m[1], 16) - segment['start']
    return result


def report(before):
    old = placements(subprocess.check_output(['git', 'show', before + ':hybridheaven.yaml'], text=True))
    current = S.FILE_RODATA
    config = json.load(open('tools/hh/rodata_splits.json'))
    sources = sorted(glob.glob('src/*/*.c'))
    by_segment = {}
    for path in sources:
        by_segment.setdefault(path.split('/')[1], []).append(path)
    layout = yaml.safe_load(Path('hybridheaven.yaml').read_text())
    lines = ['# Per-file readonly placement status', '',
             'Generated with `python tools/hh/rodata_status.py` after sourcing `env.sh`.', '',
             'Placement means an actual `.rodata, SEG/FILE` subsegment in `hybridheaven.yaml`,',
             'the source of `srcbuild.FILE_RODATA`; an entry in the split JSON alone is insufficient.', '',
             '## Counts', '', '| Measure | Task 9 before | Current |', '|---|---:|---:|',
             '| Segments with linked per-file rodata | %d | %d |' % (len({s for s, _ in old}), len({s for s, _ in current})),
             '| Source files with linked per-file rodata | %d | %d |' % (len(old), len(current)),
             '| Source files without a local placement | %d | %d |' % (len(sources)-len(old), len(sources)-len(current)), '',
             'Before is `%s`. All source-file boundaries were preserved.' % before, '',
             '## Meaning and remaining blockers', '',
             '- **Linked**: local readonly placement is active; switches and literal pools can be checked in that layout.',
             '- **No owned pool**: this text unit has no local pool in the reviewed split map. Its named references may',
             '  use writable data or readonly objects owned elsewhere. A new local pool needs an evidenced boundary;',
             '  absence is not evidence that the file can emit arbitrary new readonly bytes.',
             '- **No boundary inferred**: the segment has no inferred local literal/table tail after writable data.',
             '  Its unsplit data remains legacy; identify a real readonly boundary before enabling generated pools.',
             '- **Binary**: no C source or `FILE_RODATA` applies.', '',
             'All 25 segments with newly identified/previously disabled pools were converted in Task 9.',
             'No remaining code segment has a literal/table tail recognized by the corrected inference tool.',
             'In particular, all five previously disabled layouts (`file012`, `file024`, `file048`,',
             '`file056`, `file057`) are now active. Files with no owned pool are listed individually below.', '',
             'For interleaved pools, frozen source retains explicit readonly C byte objects and text-only ASM',
             'recipes, instead of changing existing C function boundaries. These are readonly data, including',
             'original jump-table addresses; instruction bytes are never patched. Every converted segment passed',
             'whole-file text/rodata verification and a ROM build. Explicit storage must be adjusted when a future',
             'function starts emitting its original tables/literals; placement alone does not make that candidate match.', '',
             '## Every linked segment', '',
             '| Segment | Kind | C files | Local pools | Status / blocker |', '|---|---|---:|---:|---|']
    for segment in layout['segments']:
        if isinstance(segment, dict):
            name, kind = segment['name'], segment['type']
            paths = by_segment.get(name, [])
            count = sum(s == name for s, _ in current)
            status = ('Linked; files without an owned pool are detailed below.' if count else
                      'No boundary inferred; data remains legacy.' if paths else
                      'No C source; no FILE_RODATA applies.')
        else:
            if len(segment) < 2:
                continue
            name = segment[2] if len(segment) > 2 else 'offset 0x%X' % segment[0]
            kind, paths, count, status = segment[1], [], 0, 'Binary; no C source.'
        lines.append('| `%s` | %s | %d | %d | %s |' % (name, kind, len(paths), count, status))
    lines += ['', '## Every C source file', '',
              '| Source | Before | Linked local rodata | Blocker / status |', '|---|---|---|---|']
    for path in sources:
        _, seg, filename = path.split('/')
        cf = filename[:-2]
        key = seg, cf
        address = '`0x%08X`' % current[key] if key in current else 'No'
        status = ('Linked.' if key in current else 'No owned pool; identify a local readonly extent.'
                  if seg in config else 'No boundary inferred; segment data is still unsplit.')
        lines.append('| `%s` | %s | %s | %s |' % (path, 'Yes' if key in old else 'No', address, status))
    lines += ['', '## One-short queue', '',
              '| Segment / function | Local pool | Result / remaining blocker |', '|---|---|---|']
    for row in map(json.loads, open('queue/finish1.jsonl')):
        seg, fn = row['segment'], row['func']
        cf = S.file_of(seg, fn)
        if row['result'] == 'landed':
            reason = 'Landed; source has no GLOBAL_ASM.'
        elif (seg, cf) not in current:
            reason = 'No original local pool (uses writable globals/immediates); saved C still differs in instructions.'
        else:
            reason = 'Instruction/register/scheduling mismatch; explicit retained data also needs ownership adjustment when emitting new pools.'
        lines.append('| `%s/%s` | %s | %s |' % (seg, fn, 'Yes' if (seg, cf) in current else 'No', reason))
    Path('docs/RODATA_STATUS.md').write_text('\n'.join(lines) + '\n')
    print('wrote docs/RODATA_STATUS.md: %d segments, %d local pools, %d C sources' %
          (len({s for s, _ in current}), len(current), len(sources)))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--before', default='bbb432b58b')
    report(parser.parse_args().before)
