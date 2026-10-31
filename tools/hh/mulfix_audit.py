"""Audit the original per-function assembly against mulfix.py's padding rules (Task 19).

For every mul.s/mul.d in every original function (asm/nonmatchings/**, one function per file; _mrg_/_pad/_ro_
blocks skipped as duplicates), it records what follows. The rules are confirmed when
  - no mul.s/mul.d without a following nop is a rule site (`unpadded_rule_sites` is empty), and
  - every mul.s/mul.d followed by a nop is explained by a rule once that nop is removed (`unexplained` lists the rest).
Writes queue/task19_mulfix_audit.json and prints the summary.

  .venv/bin/python tools/hh/mulfix_audit.py
"""
from collections import Counter
import glob
import json
import os
from pathlib import Path
import re

import mulfix as M

WORD = re.compile(r'/\* [0-9A-F]+ ([0-9A-F]{8}) ([0-9A-F]{8}) \*/\s+(\S+)')
LABEL = re.compile(r'\s*(?:[gj]label\s+\S+|[.\w]+:)')


def function_words(path):
    """(words, label word indexes) of the .text part of one per-function asm file."""
    words, labels, pending, section = [], set(), False, '.text'
    for line in Path(path).read_text().splitlines():
        if line.startswith('.section'):
            section = line.split()[1]
        if section != '.text' or line.startswith('endlabel'):
            if line.startswith('endlabel'):
                break
            continue
        if LABEL.match(line):
            pending = True
        m = WORD.search(line)
        if m:
            if pending:
                labels.add(len(words))
            words.append(int(m.group(2), 16))
            pending = False
    return words, labels


def kind(words, labels, j):
    if j >= len(words):
        return 'end'
    w = words[j]
    tag = 'label:' if j in labels else ''
    if w == 0:
        return tag + 'nop'
    if M.is_mul(w):
        return tag + 'mul'
    if w == M.JR_RA:
        return tag + 'jr_ra'
    if M._transfer(w):
        return tag + 'transfer'
    return tag + 'other'


def audit(root='asm/nonmatchings'):
    counts, unexplained, unpadded, divs = Counter(), [], [], Counter()
    functions = 0
    for path in sorted(glob.glob(os.path.join(root, '**', '*.s'), recursive=True)):
        if os.path.basename(path).startswith(('_mrg_', '_pad', '_ro_', '_lr_')):
            continue
        words, labels = function_words(path)
        if not words:
            continue
        functions += 1
        span = [(0, len(words))]
        for k in M.insertion_points(words, span):
            unpadded.append('%s:%d' % (path, k))
        targets = {k + 1 + f for k, w in enumerate(words) if (f := M.branch_field(w)) is not None}
        for k, w in enumerate(words[:-1]):
            if w >> 26 == 0x11 and (w >> 21) & 31 in (16, 17) and w & 63 == 3:
                divs['div before branch destination' if k + 1 in targets else 'div other'] += 1
            if not M.is_mul(w):
                continue
            nxt = kind(words, labels, k + 1)
            if words[k + 1] == 0:
                after = kind(words, labels, k + 2)
                counts['mul; nop; ' + after] += 1
                stripped = words[:k + 1] + words[k + 2:]
                # branch fields across the removed nop are off by one, but the rules only look at the multiply's
                # neighbour, at destinations (recomputed from the original) and at jr $ra
                ins = M.insertion_points(stripped, [(0, len(stripped))])
                if k + 1 not in ins and not (k + 2 in targets or M.is_mul(words[k + 2])):
                    unexplained.append('%s:%d (%s)' % (path, k, after))
            else:
                counts['mul; ' + nxt] += 1
    return dict(functions=functions, counts=dict(sorted(counts.items())), div=dict(divs),
                unpadded_rule_sites=unpadded, unexplained=unexplained)


if __name__ == '__main__':
    result = audit()
    Path('queue/task19_mulfix_audit.json').write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps(result, indent=2))
