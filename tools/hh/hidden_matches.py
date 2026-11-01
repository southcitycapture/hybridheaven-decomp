"""Hidden matches: saved attempts that already match inside their file although their batch recorded FAIL.

The worker's standalone check (try_func) reports "code matches but the function's .rodata differs" when the code
is right but the jump table / float / string layout is not the original's in isolation. The in-file check
(srcbuild.infile_check, the gate the loop uses) places the function in its real file, where that rodata is often
right. Task 21 found 3 such functions among the big leftovers; this sweeps every unmatched function.

  hidden_matches.py scan [--jobs N] [--budget SEC] [--min-score F] [--out queue/hidden1.jsonl] [--limit N]
  hidden_matches.py land OUT.jsonl BATCH      write queue/BATCH/{results.jsonl,work/} for `srcbuild.py add BATCH`

scan: unmatched = build/progress/report.json fuzzy < 100, minus queue/link_blocklist.txt, registered functions and
library-source files. Every saved attempt
(*.c and .attempts/*.c in queue/*/work/FUNC[@SEG] of this checkout and the live repo, read only) is deduplicated by
content and ranked: standalone "rodata differs" first, then by the best recorded score (.attempts/N.res,
verify.txt, .lastcheck). Checks run as `srcbuild.py infile` subprocesses (one in flight per file: the check
rewrites name-keyed _mrg_/_ro_ blocks of its file, so one check per C file at a time; gen_blocks.py restores
them afterwards), stop for a function at its first pass, and are cached by
(attempt hash, the function's src file hash, gate version) in build/hidden_cache.jsonl.
"""
import argparse, glob, hashlib, json, os, re, shutil, subprocess, sys, tempfile, threading, time
from pathlib import Path

HH = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(HH / 'tools' / 'hh'))
LIVE = Path('/home/claude/work/hybrid-heaven-decomp')
CACHE = HH / 'build' / 'hidden_cache.jsonl'
GATE_FILES = ('tools/hh/srcbuild.py', 'tools/hh/reconcile_frozen.py', 'tools/hh/try_func.py', 'tools/hh/mulfix.py',
              'tools/hh/kept_blocks.py', 'tools/hh/rodata_owned.py', 'tools/hh/bss_layout.py', 'hybridheaven.yaml')
SCORE = re.compile(r'score (\d+)/(\d+)')
RODATA = "code matches but the function's .rodata"


def sha(text):
    return hashlib.sha1(text.encode(errors='replace')).hexdigest()[:16]


def parse_score(text):
    """(fraction, rodata_only) from a try_func/check output; (None, False) when it has no score line."""
    if RODATA in text:
        return 1.0, True
    m = SCORE.search(text)
    if not m:
        return (1.0, False) if text.strip().startswith('MATCH') else (None, False)
    good, n = int(m[1]), int(m[2])
    return (good / n if n else 0.0), False


def _read(p):
    try:
        return Path(p).read_text(errors='replace')
    except OSError:
        return ''


def unmatched(report='build/progress/report.json'):
    """[(seg, func, size)] with fuzzy < 100, minus link_blocklist (incl. the reserved file036 functions) and minus
    functions already in the registry (matched/: built as ASM on purpose; `srcbuild add` only takes new keys) and
    functions of files built from library source (tools/hh/libultra.json; srcbuild leaves those files alone)."""
    import srcbuild as S
    blocked = set(S.link_blocked()) | set(S.registry())
    out = []
    for u in json.load(open(HH / report))['units']:
        seg = u['name'].split('/')[0]
        for f in u.get('functions', []):
            if (f.get('fuzzy_match_percent', 0) < 100 and (seg, f['name']) not in blocked
                    and (seg, S.file_of(seg, f['name'])) not in S.LIBFILES):
                out.append((seg, f['name'], int(f['size'])))
    return out


def scored(func, seg, roots):
    """[dict(path, hash, score, rodata)] of distinct saved attempts, best first."""
    import stitch
    by_hash = {}
    for path, d in stitch.collect(func, seg, roots):
        p = Path(path)
        text = _read(p)
        h = sha(text)
        score, ro = None, False
        if p.parent.name == '.attempts':
            score, ro = parse_score(_read(p.with_suffix('.res')))
        elif p.name == 'attempt.c':
            for side in ('verify.txt', '.lastcheck'):
                score, ro = parse_score(_read(p.parent / side))
                if score is not None:
                    break
        by_hash[h] = dict(path=str(p), hash=h, score=score, rodata=ro)
    # stitch.collect already deduplicates exactly; a copy saved twice keeps its first path but takes the best score
    for d in stitch.attempt_dirs(func, seg, roots):
        for p in sorted(d.glob('*.c')) + sorted((d / '.attempts').glob('*.c')):
            h = sha(_read(p))
            if h in by_hash and p.parent.name == '.attempts':
                s, ro = parse_score(_read(p.with_suffix('.res')))
                e = by_hash[h]
                if s is not None and (e['score'] is None or (ro, s) > (e['rodata'], e['score'])):
                    e['score'], e['rodata'] = s, ro
    return sorted(by_hash.values(), key=rank)


UNSCORED = 0.9      # drafts/previous/base copies with no recorded check: after the >= 0.9 near-misses


def rank(e):
    return (not e['rodata'], -(e['score'] if e['score'] is not None else UNSCORED))


def gate_version():
    return sha(''.join(_read(HH / p) for p in GATE_FILES))


def load_cache():
    out = {}
    if CACHE.exists():
        for line in open(CACHE):
            try:
                r = json.loads(line)
            except ValueError:
                continue
            out[r['key']] = r
    return out


def check(seg, func, path, tmp, timeout=600):
    """(ok, message) from `srcbuild.py infile` run in a private TMPDIR (removed afterwards, also on timeout)."""
    env = dict(os.environ, TMPDIR=tmp)
    os.makedirs(tmp, exist_ok=True)
    try:
        r = subprocess.run([sys.executable, 'tools/hh/srcbuild.py', 'infile', seg, func, path], cwd=HH, env=env,
                           capture_output=True, text=True, timeout=timeout)
        msg = (r.stdout.strip().splitlines() or [r.stderr.strip()[-300:]])[-1]
        return r.returncode == 0 and msg.startswith('IN-FILE MATCH'), msg[:400]
    except subprocess.TimeoutExpired:
        return False, 'timeout after %ds' % timeout
    finally:
        shutil.rmtree(tmp, ignore_errors=True)


def schedule(tasks, worker, jobs, deadline):
    """Run worker(task) over tasks (ordered) on `jobs` threads. One task per C file (task['file'], default its key)
    in flight; once a func (task['key']) passes, its remaining tasks are dropped.
    Returns ({func key: first passing task}, unchecked tasks)."""
    lock = threading.Lock()
    pending = list(tasks)
    busy, passed = set(), {}

    def take():
        with lock:
            for i, t in enumerate(pending):
                if t['key'] in passed:
                    continue
                f = t.get('file', t['key'])
                if f not in busy:
                    busy.add(f)
                    return pending.pop(i)
            pending[:] = [t for t in pending if t['key'] not in passed]
            return None if not pending else False

    def loop():
        while time.time() < deadline:
            t = take()
            if t is None:
                return
            if t is False:
                time.sleep(0.5)
                continue
            ok = worker(t)
            with lock:
                busy.discard(t.get('file', t['key']))
                if ok and t['key'] not in passed:
                    passed[t['key']] = t

    th = [threading.Thread(target=loop) for _ in range(jobs)]
    for x in th:
        x.start()
    for x in th:
        x.join()
    return passed, pending


def scan(args):
    import srcbuild as S
    roots = [str(HH), str(LIVE)]
    gv = gate_version()
    cache = load_cache()
    funcs = unmatched()
    if args.only:
        funcs = [f for f in funcs if '%s/%s' % f[:2] in args.only]
    tasks, n_att = [], 0
    for seg, func, size in funcs:
        cf = S.file_of(seg, func)
        if not cf:
            continue
        src_hash = sha(_read(HH / 'src' / seg / (cf + '.c')))
        for e in scored(func, seg, roots):
            n_att += 1
            e.update(seg=seg, func=func, size=size, key=(seg, func), file=(seg, cf), ckey='%s %s %s %s %s' % (seg, func, e['hash'], src_hash, gv))
            if e['score'] is None or e['score'] >= args.min_score or e['rodata']:
                tasks.append(e)
    tasks.sort(key=rank)
    if args.limit:
        tasks = tasks[:args.limit]
    print('%d functions, %d distinct attempts, %d queued (min score %.2f)' % (len(funcs), n_att, len(tasks), args.min_score), flush=True)
    tmp_root = HH / 'build' / 'hidden-tmp'
    lock = threading.Lock()
    done = [0, 0]
    out = open(HH / args.out, 'a')
    cache_fh = open(CACHE, 'a')

    def worker(t):
        hit = cache.get(t['ckey'])
        if hit:
            ok, msg, cached = hit['ok'], hit['msg'], True
        else:
            ok, msg = check(t['seg'], t['func'], t['path'], str(tmp_root / ('%s-%s' % (t['func'], t['hash']))), args.timeout)
            cached = False
        with lock:
            done[0] += 1
            done[1] += ok
            if not cached:
                cache_fh.write(json.dumps(dict(key=t['ckey'], ok=ok, msg=msg)) + '\n'); cache_fh.flush()
            out.write(json.dumps(dict(func=t['func'], seg=t['seg'], size=t['size'], attempt=t['path'], hash=t['hash'],
                                      score=t['score'], rodata_only=t['rodata'],
                                      result='IN-FILE MATCH' if ok else 'IN-FILE FAIL', msg=msg, cached=cached)) + '\n')
            out.flush()
            if ok or done[0] % 50 == 0:
                print('[%d checked, %d pass] %s %s %s %s' % (done[0], done[1], t['seg'], t['func'], 'PASS' if ok else 'fail',
                                                           t['path']), flush=True)
        return ok

    t0 = time.time()
    passed, left = schedule(tasks, worker, args.jobs, t0 + args.budget)
    shutil.rmtree(tmp_root, ignore_errors=True)
    # The in-file check rewrites name-keyed generated blocks (_mrg_<func>.s, _ro_<func>.s) for its trial layouts;
    # put back the ones src/ uses (2026-11-01: a stale _mrg_ block broke progress.py's data audit).
    subprocess.run([sys.executable, 'tools/hh/gen_blocks.py'], cwd=HH, check=True)
    print('checked %d in %.0fs; %d functions pass in-file; %d tasks left unchecked' % (done[0], time.time() - t0, len(passed), len(left)))
    for (seg, func), t in sorted(passed.items()):
        print('PASS %s %s %d B %s' % (seg, func, t['size'], t['path']))


def land(out_path, batch):
    """queue/BATCH: one MATCH row per function that passed (first passing attempt), with its work dir copied in, so
    `srcbuild.py add BATCH` takes it through the normal registry path (context.h kept next to attempt.c)."""
    import srcbuild as S
    best, skip = {}, set(S.registry()) | set(S.link_blocked())
    for line in open(HH / out_path):
        r = json.loads(line)
        key = (r['seg'], r['func'])
        if r['result'] == 'IN-FILE MATCH' and key not in skip and (r['seg'], S.file_of(*key)) not in S.LIBFILES:
            best.setdefault((r['seg'], r['func']), r)
    import workdir
    q = HH / 'queue' / batch
    rows = []
    for (seg, func), r in sorted(best.items()):
        src = Path(r['attempt'])
        d = src.parent.parent if src.parent.name == '.attempts' else src.parent
        dst = HH / workdir.path(batch, func, seg)
        dst.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(src, dst / 'attempt.c')
        if (d / 'context.h').exists():
            shutil.copyfile(d / 'context.h', dst / 'context.h')
        rows.append(dict(func=func, segment=seg, model='hidden_matches.py (saved attempt %s)' % r['attempt'],
                         verified='MATCH', note='standalone check FAIL; srcbuild.infile_check: IN-FILE MATCH'))
    with open(q / 'results.jsonl', 'w') as fh:
        for row in rows:
            fh.write(json.dumps(row) + '\n')
    print('%s: %d functions' % (q, len(rows)))


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest='cmd', required=True)
    s = sub.add_parser('scan')
    s.add_argument('--jobs', type=int, default=max(1, (os.cpu_count() or 2) // 2))
    s.add_argument('--budget', type=float, default=7200)
    s.add_argument('--timeout', type=int, default=600)
    s.add_argument('--min-score', type=float, default=0.0)
    s.add_argument('--limit', type=int, default=0)
    s.add_argument('--only', nargs='*', help='SEG/FUNC ...')
    s.add_argument('--out', default='queue/hidden1.jsonl')
    l = sub.add_parser('land')
    l.add_argument('out')
    l.add_argument('batch')
    a = ap.parse_args()
    os.chdir(HH)
    if a.cmd == 'scan':
        scan(a)
    else:
        land(a.out, a.batch)


if __name__ == '__main__':
    main()
