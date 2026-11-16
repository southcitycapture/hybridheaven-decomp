"""Inventory surviving worker headers that declare their own function as data."""
import json
import re
import sys
from pathlib import Path

import srcbuild as S
import wall


if __name__ == '__main__':
    affected, checked = [], 0
    for header in sorted(Path('queue').glob('*/work/*/context.h')):
        match = re.match(r'(func_[0-9A-F]{8})(?:@([^/]+))?$', header.parent.name)
        if not match:
            continue
        checked += 1
        func = match[1]
        text = header.read_text()
        clean = S.without_self_data(text, func)
        removed = [l for l in text.splitlines() if l not in clean.splitlines()]
        if removed:
            affected.append(dict(header=str(header), func=func, declarations=removed))
    leftovers = wall.inventory(json.loads(Path('build/progress/report.json').read_text()))
    current = []
    sanitizer = S.without_self_data
    for row in leftovers:
        if not S.file_of(row['seg'], row['func']): continue
        S.without_self_data = lambda text, func: text
        try:
            text = S.context_for(row['seg'], row['func'])
        finally:
            S.without_self_data = sanitizer
        clean = sanitizer(text, row['func'])
        removed = [l for l in text.splitlines() if l not in clean.splitlines()]
        if removed: current.append(dict(seg=row['seg'], func=row['func'], declarations=removed))
        assert sanitizer(clean, row['func']) == clean
    out = Path('queue/task38/context-audit-after.json' if '--after' in sys.argv else 'queue/task38/context-audit.json')
    out.write_text(json.dumps(dict(headers_checked=checked, affected=affected,
                                   leftovers_checked=len(leftovers), current_affected=current), indent=2) + '\n')
    print(checked, 'headers checked;', len(affected), 'affected;',
          len({r['func'] for r in affected}), 'distinct function names')
    print(len(leftovers), 'leftovers;', len(current), 'self-data declarations removed by generator')
