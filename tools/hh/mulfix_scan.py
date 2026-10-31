"""Recheck all leftovers' per-worker best saved sources for new mulfix sites.

Includes final sources and the best .res/.ali checkpoints from every worker,
not just the single FROM=best selection. Does not change sources or registry.
"""
from collections import Counter, defaultdict
from concurrent.futures import ProcessPoolExecutor
import hashlib
import json
from pathlib import Path
import re

from elftools.elf.elffile import ELFFile
import mulfix as M
import srcbuild as S
import wall as W


def sources_for(rows):
    sources = W.attempt_index(rows)
    byname = defaultdict(list)
    for row in rows:
        byname[row['func']].append((row['seg'], row['func']))
    for batch in sorted(Path('queue').iterdir()):
        work = batch/'work'
        if not work.is_dir():
            continue
        for directory in sorted(work.iterdir()):
            func, _, seg = directory.name.partition('@')
            keys = [k for k in byname[func] if not seg or seg == k[0]]
            if len(keys) != 1 or not directory.is_dir():
                continue
            key = keys[0]
            paths = [directory/'attempt.c']
            for suffix in ('res', 'ali'):
                scored = []
                for receipt in (directory/'.attempts').glob('*.'+suffix):
                    text = receipt.read_text()
                    if suffix == 'res':
                        score = re.search(r'score (\d+)/(\d+)', text)
                        rank = 1 if text.startswith('MATCH') else int(score[1])/max(1, int(score[2])) if score else -1
                    else:
                        try:
                            rank = int(text.split()[0])
                        except (IndexError, ValueError):
                            rank = -1
                    if rank >= 0 and receipt.with_suffix('.c').exists():
                        scored.append((rank, receipt.with_suffix('.c')))
                if scored:
                    best = max(rank for rank, _ in scored)
                    paths.extend(p for rank, p in scored if rank == best)
            # Equal checkpoint contents under the same headers need one compile.
            seen = set()
            for path in paths:
                if path.exists():
                    digest = hashlib.sha256(path.read_bytes()).digest()
                    if digest not in seen:
                        sources.setdefault(key, []).append(str(path))
                        seen.add(digest)
    return {k: sorted(set(v)) for k, v in sources.items()}


def check(job):
    row, sources = job
    results, errors = [], []
    original_fix = M.fix
    for source in sources:
        sites = []
        def record_fix(path):
            with open(path, 'rb') as fh:
                elf = ELFFile(fh)
                symbol = next(s for s in elf.get_section_by_name('.symtab').iter_symbols() if s.name == row['func'])
                words = W.words(elf.get_section_by_name('.text').data())
                funcs = [(s['st_value'] // 4, (s['st_value'] + s['st_size']) // 4)
                         for s in elf.get_section_by_name('.symtab').iter_symbols()
                         if s['st_info']['type'] == 'STT_FUNC' and s['st_size']]
                sites.extend(4*p-symbol['st_value'] for p in M.insertion_points(words, funcs)
                             if not M.is_mul(words[p]) and symbol['st_value'] < 4*p < symbol['st_value']+symbol['st_size'])
            return original_fix(path)
        M.fix = record_fix
        try:
            result = W.check_source(row, source)
            result['new_padding_offsets'] = sites
            results.append(result)
        except (Exception, SystemExit) as exc:
            errors.append(dict(source=source, error=str(exc)[-500:]))
        finally:
            M.fix = original_fix
    if results:
        best = max(results, key=lambda r: (r['class'] == 'match', r['diff_score'], r['positional_score']))
    else:
        best = dict(row, **{'class': 'no_attempt' if not sources else 'does_not_compile'}, attempt_source=None)
    best['checked'] = [dict(source=r['attempt_source'], classification=r['class'],
                            score=r['diff_score'], new_padding_offsets=r['new_padding_offsets']) for r in results]
    best['errors'] = errors
    print(row['seg'], row['func'], best['class'], len(sources), flush=True)
    return best


def main():
    rows = W.inventory(json.loads(Path('build/progress/report.json').read_text()))
    blocked = S.link_blocked()
    rows = [r for r in rows if (r['seg'], r['func']) not in blocked]
    sources = sources_for(rows)
    with ProcessPoolExecutor(max_workers=8) as pool:
        results = list(pool.map(check, [(r, sources.get((r['seg'], r['func']), [])) for r in rows]))
    Path('queue/task19_scan.jsonl').write_text(''.join(json.dumps(r, sort_keys=True)+'\n' for r in results))
    print(dict(Counter(r['class'] for r in results)))
    print('Sources:', sum(len(r['checked'])+len(r['errors']) for r in results))


if __name__ == '__main__':
    main()
