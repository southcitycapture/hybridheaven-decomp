"""Finalize Task 16's original inventory against the current frozen sources.

Retains landed identities in the audit, rechecks every participating whole file,
and retries open saved attempts with the current integration/literal tools.
"""
import argparse
import collections
import json
from multiprocessing import Pool
from pathlib import Path
import subprocess
import tempfile

import symfix as F
import symfix_literals as L

S, R, U, W = F.S, F.R, F.U, F.W


def audit_file(job):
    seg, cf, rows = job
    text = Path('src/%s/%s.c' % (seg, cf)).read_text()
    present = S.defined_functions(text) & {e[0] for e in S.entries(seg, cf)}
    with tempfile.TemporaryDirectory(dir='build') as td:
        ok, why = R.verify(seg, cf, text, present, td)
        if not ok:
            raise RuntimeError('%s/%s baseline: %s' % (seg, cf, why))
        for row in rows:
            name = row['func']
            receipt = Path('build/symfix') / seg / cf / (name + '.json')
            if receipt.exists():
                saved = json.loads(receipt.read_text())
                if saved.get('result') == 'verified_proposal' or row['result'] == 'open':
                    row.update({k: saved[k] for k in ('note', 'bss_owner') if k in saved})
            source = row['source']
            standalone = W.check_source(dict(seg=seg, func=name, file=cf), source)
            row['standalone_class'] = standalone['class']
            snippet = U.read_saved(seg, name, source)
            corrected = L.corrected(S, seg, name, source, snippet)
            if corrected:
                row['literal_corrections'] = corrected[1]
            row['bucket'] = F.bucket(dict(standalone, fresh_class=standalone['class']), '')
            original_asm = next(e[1] for e in S.entries(seg, cf) if e[0] == name)
            if standalone['class'] == 'match' and '.late_rodata' in S._rd(original_asm):
                row['bucket'] = 'a'
            if name == 'func_801CCAB0' or 'bss_owner' in row:
                row['bucket'] = 'c'
            if name == 'func_801E2648' and seg == 'file035':
                row['bucket'] = 'd'
            row['whole_file_verified'] = True
            if name in present:
                row['result'] = 'landed'
                row['registry'] = 'matched/%s/%s.c' % (seg, name)
                if name == 'func_801CCAB0':
                    row['note'] = ('Reproduced 0x135BE vs 0x135B0; dummy BSS grew by 0x3A50 and changed 691 words. '
                                   'Removed the dummy pad; original array owns BSS [0x801E07A0,0x801E0A50). ROM exact.')
                continue
            logpath = Path('build/task16_final_%s_%s.log' % (seg, name))
            failures = []
            with logpath.open('w') as log:
                for how, candidate in [('saved', snippet)] + ([('literal-values', corrected[0])] if corrected else []):
                    trial, acc, rej = R.integrate(seg, cf, text, {name: candidate}, td,
                                                log=lambda s: log.write(s + '\n'))
                    if name in acc:
                        assert R.verify(seg, cf, trial, present | {name}, td)[0]
                        assert present <= S.defined_functions(trial)
                        dest = Path('build/symfix') / seg / cf
                        dest.mkdir(parents=True, exist_ok=True)
                        (dest / 'source.c').write_text(trial)
                        (dest / (name + '.c')).write_text(candidate)
                        text, present = trial, present | {name}
                        row.update(result='verified_proposal', note=how + '; ' + acc[name])
                        break
                    failures.append(how + ': ' + F.I.rejection_summary(rej.get(name, 'not accepted')))
                else:
                    row.update(result='open', note=' | '.join(failures), log=str(logpath))
                    if row['bucket'] == 'c' and standalone['details'].get('rodata_equal') is False:
                        row['bucket'] = 'a'
            prefix = Path('build/task16_prefix_%s_%s.log' % (seg, name))
            if prefix.exists() and row['result'] == 'open':
                row['prefix_trial'] = str(prefix)
                checks = [line for line in prefix.read_text().splitlines()
                          if line.startswith(('baseline ', 'mutable '))]
                if checks:
                    row['note'] += ' | readonly-prefix trial: ' + checks[-1]
            if seg == 'file027' and name == 'func_801EAB64' and row['result'] == 'open':
                row['note'] += (' | Removing the two shadowing static definitions also fails: named insertion '
                                'moves existing C neighbours (func_801EF8B8/func_801EAD90); see build/task16_027.log.')
            print(seg, name, row['bucket'], row['result'], flush=True)
    return rows


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--before', default='03a24fbebc')
    ap.add_argument('--jobs', type=int, default=8)
    args = ap.parse_args()
    rows = {(r['seg'], r['func']): r for r in map(json.loads, Path('queue/symfix_sol.jsonl').read_text().splitlines())}
    byfile = collections.defaultdict(list)
    for key, row in sorted(rows.items()):
        assert key not in S.link_blocked(), key
        byfile[row['seg'], row['file']].append(row)
    out = []
    with Pool(args.jobs) as pool:
        for group in pool.imap_unordered(audit_file, [(s, c, rs) for (s, c), rs in sorted(byfile.items())]):
            out += group
    Path('queue/symfix_sol.jsonl').write_text(''.join(json.dumps(r, sort_keys=True) + '\n'
        for r in sorted(out, key=lambda r: (r['seg'], r['func']))))
    libraries = json.loads(Path('tools/hh/libultra.json').read_text())
    before = U.M.functions(U.M.sources(args.before), libraries)
    after = U.M.functions(U.M.sources(None), libraries)
    assert before <= after, sorted(before - after)
    assert {(r['seg'], r['func']) for r in out if r['result'] == 'landed'} == after - before
    result = dict(before_ref=args.before, before=len(before), after=len(after), added=sorted(after-before), lost=[],
                  results=dict(collections.Counter(r['result'] for r in out)),
                  buckets=dict(collections.Counter(r['bucket'] for r in out)),
                  files=len(byfile), verified_c_definitions=sum(len(S.defined_functions(
                      Path('src/%s/%s.c' % key).read_text()) & {e[0] for e in S.entries(*key)}) for key in byfile))
    Path('build/task16_audit.json').write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps(result, indent=2), flush=True)


if __name__ == '__main__':
    main()
