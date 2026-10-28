"""Replay wall.py's standalone matches through the shared frozen-file gate.

Run with --apply to land verified sources/registry inputs and write the outcome
inventory. Files are independent jobs; each job retains every starting C body
and verifies the entire linked text and rodata before writing anything.
"""
import argparse
import collections
import json
from multiprocessing import Pool
from pathlib import Path
import subprocess
import tempfile

import unreject as U

S, R = U.S, U.R


def rejection_summary(reason):
    """Prefer an executable-but-nonmatching variant over declaration noise."""
    variants = reason.split('; ')
    compiled = [v for v in variants if ': does not match:' in v or ': file .' in v]
    return ('all saved variants rejected; best compiling check: ' + compiled[0]
            if compiled else reason[:1000])


def replay(job):
    seg, cf, rows, candidates, baseline, apply = job
    path = Path('src') / seg / (cf + '.c')
    original = path.read_text()
    present = S.defined_functions(original) & {e[0] for e in S.entries(seg, cf)}
    if seg + '/' + cf in json.loads(Path('tools/hh/libultra.json').read_text()):
        # These wrappers build with library-specific flags/names. Check their
        # actual linked bytes instead of compiling the comment-only marker.
        from elftools.elf.elffile import ELFFile
        start, end = S.file_span(seg, cf)
        base = int(cf, 16)
        with open('build/hybridheaven.elf', 'rb') as fh:
            elf = ELFFile(fh)
            section = next(s for s in elf.iter_sections()
                           if s['sh_addr'] <= base and
                           base + end - start <= s['sh_addr'] + s['sh_size'] and
                           s['sh_flags'] & 4)
            offset = base - section['sh_addr']
            assert section.data()[offset:offset + end - start] == S.IMG[start:end]
        return [dict(func=r['func'], seg=seg, size=r['size'], file=cf,
                     attempt_source=r['attempt_source'], result='already_in_library_c') for r in rows]
    snippets, outcomes = {}, []
    with tempfile.TemporaryDirectory(dir='build') as td:
        try:
            ok, why = R.verify(seg, cf, original, present, td)
        except Exception as exc:
            raise RuntimeError(str(path) + ': baseline exception') from exc
        if not ok:
            raise RuntimeError(str(path) + ': baseline: ' + why)
        text, accepted, rejected = original, {}, {}
        with open('build/inmatch_%s_%s.log' % (seg, cf), 'w') as log:
            for row in rows:
                name = row['func']
                if name in present:
                    continue
                for source, snippet in candidates.get((seg, name), []):
                    log.write('\nSOURCE ' + source + '\n')
                    trial, acc, rej = R.integrate(seg, cf, text, {name: snippet}, td,
                                                log=lambda line: log.write(line + '\n'))
                    if name in acc:
                        text = trial
                        snippets[name] = snippet
                        accepted.update(acc)
                        row['accepted_source'] = source
                        rejected.pop(name, None)
                        break
                    rejected[name] = rej.get(name, 'not accepted')
                else:
                    rejected.setdefault(name, 'Task 10 attempt absent; no saved local C candidate found')
        ok, why = R.verify(seg, cf, text, present | set(accepted), td)
        if not ok or not present <= S.defined_functions(text):
            raise RuntimeError(str(path) + ': final/no-eviction gate: ' + why)
        if apply and accepted:
            path.write_text(text)
            for name in accepted:
                (Path('matched') / seg / (name + '.c')).write_text(snippets[name])
        for row in rows:
            name = row['func']
            out = {k: row[k] for k in ('func', 'seg', 'size', 'attempt_source')}
            out['file'] = cf
            out['result'] = ('landed' if name in present and (seg, name) not in baseline else
                             'already_in_c' if name in present else
                             ('landed' if apply else 'matches_dry_run') if name in accepted else 'open')
            if out['result'] == 'landed' and name in present:
                out['accepted_source'] = 'matched/%s/%s.c' % (seg, name)
                out['method'] = 'previously integrated; whole linked file reverified'
            if name in accepted:
                out['method'] = accepted[name]
                out['accepted_source'] = row['accepted_source']
            if name in rejected:
                out['reason'] = rejection_summary(rejected[name])
            outcomes.append(out)
    return outcomes


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--apply', action='store_true')
    ap.add_argument('--jobs', type=int, default=8)
    ap.add_argument('--walls', default='queue/walls.jsonl')
    ap.add_argument('--output', default='queue/inmatch1.jsonl')
    ap.add_argument('--seg', action='append', default=[])
    ap.add_argument('--before', help='classify additions relative to this local revision')
    args = ap.parse_args()
    rows = [json.loads(l) for l in Path(args.walls).read_text().splitlines()]
    rows = [r for r in rows if r['class'] == 'match' and
            (not args.seg or r['seg'] in args.seg)]
    byfile = collections.defaultdict(list)
    for row in rows:
        cf = S.file_of(row['seg'], row['func'])
        if cf is None:
            raise RuntimeError('no unique file for ' + str(row))
        byfile[row['seg'], cf].append(row)
    missing = {(r['seg'], r['func']) for r in rows
               if r['func'] not in S.defined_functions(
                   Path('src/%s/%s.c' % (r['seg'], S.file_of(r['seg'], r['func']))).read_text())}
    candidates = U.saved_candidates('HEAD', missing)
    for row in rows:
        key = row['seg'], row['func']
        if key in missing and Path(row['attempt_source']).exists():
            candidates[key].insert(0, (row['attempt_source'], U.read_saved(*key, row['attempt_source'])))
    baseline = (U.M.functions(U.M.sources(args.before), json.loads(subprocess.check_output(
        ['git', 'show', args.before + ':tools/hh/libultra.json'], text=True)))
        if args.before else {(r['seg'], r['func']) for r in rows if (r['seg'], r['func']) not in missing})
    results = []
    with Pool(args.jobs) as pool:
        for outcomes in pool.imap_unordered(replay, [
                (seg, cf, rs, {k: v for k, v in candidates.items() if k[0] == seg}, baseline, args.apply)
                for (seg, cf), rs in sorted(byfile.items())]):
            results.extend(outcomes)
            print(outcomes[0]['seg'] + '/' + outcomes[0]['file'],
                  dict(collections.Counter(r['result'] for r in outcomes)), flush=True)
    results.sort(key=lambda r: (r['seg'], r['func']))
    Path(args.output).write_text(''.join(json.dumps(r, sort_keys=True) + '\n' for r in results))
    print(dict(collections.Counter(r['result'] for r in results)), flush=True)


if __name__ == '__main__':
    main()
