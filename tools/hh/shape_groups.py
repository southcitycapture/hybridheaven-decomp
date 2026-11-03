"""Shape groups among unmatched functions: one match propagates to the rest (propagate.py), so aim workers at one
representative per group.

  shape_groups.py [--out queue/shape_groups.jsonl] [--infile queue/hidden_task23.jsonl ...]

Unmatched = build/progress/report.json fuzzy < 100, minus queue/link_blocklist.txt (the reserved file036 finale
among them), registered functions and library-source files (hidden_matches.unmatched). Members share
propagate.shape() (instructions with jal targets and every mappable immediate masked) and no member's shape twin is
matched yet (those are propagate's job). Per member: the best saved attempt (hidden_matches.scored over this
checkout's and the live repo's queue/*/work, read only). The representative is the member with the best attempt
(ties: lower difficulty, then smaller). Rows are sorted by unlock_bytes / difficulty, best first.
--infile: hidden_matches scan outputs; a member whose attempt passed srcbuild.infile_check is marked.
"""
import argparse, csv, collections, json, os, sys

HH = os.path.normpath(os.path.join(os.path.dirname(__file__), '../..'))
sys.path.insert(0, os.path.join(HH, 'tools/hh'))


def build(infile_logs=()):
    os.chdir(HH)
    _argv = sys.argv; sys.argv = ['propagate.py']
    import propagate as P
    sys.argv = _argv
    import hidden_matches as H
    rows = list(csv.DictReader(open('queue/functions.csv')))
    groups = P.shape_groups(rows)
    of = {k: g for g in groups.values() for k in g}
    reg, blocked = P.S.registry(), P.S.link_blocked()
    un = {(s, f): z for s, f, z in H.unmatched()}
    passed = {}
    for p in infile_logs:
        for line in open(p):
            r = json.loads(line)
            if r.get('result') == 'IN-FILE MATCH': passed.setdefault((r['seg'], r['func']), r['attempt'])
    seen, out = set(), []
    roots = [HH, str(H.LIVE)]
    for k in sorted(un):
        g = of.get(k)
        if not g or id(g) in seen: continue
        seen.add(id(g))
        if any(m in reg for m in g): continue          # a matched twin: propagate's job, not a model's
        members = [m for m in g if m in un and m not in blocked]
        if len(members) < 2: continue
        info = []
        for seg, func in members:
            r = P.ROW[(seg, func)]
            att = H.scored(func, seg, roots)
            known = [x for x in att if x['score'] is not None]
            best = max(known, key=lambda x: (x['score'], x['rodata'])) if known else None
            info.append(dict(seg=seg, func=func, size=int(r['size']), difficulty=int(r['difficulty']),
                             attempts=len(att), best_score=None if not best else best['score'],
                             best_rodata_only=bool(best and best['rodata']), best_attempt=best and best['path'],
                             infile_pass=passed.get((seg, func))))
        rep = min(info, key=lambda m: (m['infile_pass'] is None, -(m['best_score'] or 0), m['difficulty'], m['size']))
        total = sum(m['size'] for m in info)
        out.append(dict(representative='%s/%s' % (rep['seg'], rep['func']), size=len(info), rep_bytes=rep['size'],
                        unlock_bytes=total, copy_bytes=total - rep['size'], difficulty=rep['difficulty'],
                        rep_best_score=rep['best_score'], rank=round(total / max(1, rep['difficulty']), 3),
                        members=info, blocked_twins=sorted('%s/%s' % m for m in g if m in blocked)))
    out.sort(key=lambda r: -r['rank'])
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--out', default='queue/shape_groups.jsonl')
    ap.add_argument('--infile', nargs='*', default=[])
    a = ap.parse_args()
    rows = build(a.infile)
    with open(os.path.join(HH, a.out), 'w') as fh:
        for r in rows: fh.write(json.dumps(r) + '\n')
    print('%d groups, %d functions, %d bytes (%d bytes of copies) -> %s' % (
        len(rows), sum(r['size'] for r in rows), sum(r['unlock_bytes'] for r in rows), sum(r['copy_bytes'] for r in rows), a.out))
    for r in rows[:10]:
        print('  %-24s x%d  %6d B  diff %4d  best %s' % (r['representative'], r['size'], r['unlock_bytes'], r['difficulty'], r['rep_best_score']))


if __name__ == '__main__':
    main()
