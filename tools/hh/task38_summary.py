"""Compact, per-attempt Task 38 dispositions from the reproducible audit."""
import json
from collections import Counter
from pathlib import Path
import srcbuild as S

if __name__ == '__main__':
    rows = json.loads(Path('queue/task38/audit.json').read_text())
    lines = ['part\tsegment\tfunc\tstandalone\tinfile\tfirst_difference\tsource\tprepared\tcurrently_C']
    for row in sorted(rows, key=lambda r: (r['part'], r['seg'], r['func'])):
        d = row['details']
        first = d.get('first_divergence')
        detail = ('+0x%X target %s; attempt %s' % (first['offset'], first['target'], first['attempt'])
                  if first else str(d.get('errors', 'none')))
        fields = [row['part'], row['seg'], row['func'], row['class'], row['infile_first'], detail, row['source'],
                  row['attempt_source'], S.source_has_function(row['seg'], row['func'])]
        lines.append('\t'.join(str(f).replace('\n', ' ') for f in fields))
    text = '\n'.join(lines) + '\n'
    Path('queue/task38/dispositions.tsv').write_text(text)
    for part in ('place', 'restored'):
        selected = [r for r in rows if r['part'] == part]
        print(part, len(selected), dict(Counter(r['class'] for r in selected)),
              'infile accepted:', sum(r['accepted'] for r in selected))
    print(len(rows), 'per-attempt dispositions written')
