"""Rehearse the rodata/master merge in a disposable repository under build/.

The temporary repository reads this repository's objects through Git alternates; it
never fetches, uses a worktree, or updates a ref in the source repository. All ROM
inputs and installed tools are reused read-only; all generated outputs are private.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys
import tempfile


def git(root, *args):
    return subprocess.check_output(['git', '-C', str(root), *args], text=True).strip()


def parse_allow_missing(value):
    """Explicit original identities only: no globs or segment-wide exceptions."""
    identities = set()
    for item in value.split(','):
        if not re.fullmatch(r'(?:main|file[0-9]{3}):func_[0-9A-F]{8}', item):
            raise argparse.ArgumentTypeError('expected SEG:func_XXXXXXXX, got ' + repr(item))
        identities.add(tuple(item.split(':')))
    return identities


def verdict(audit, rom_ok, tests_ok, allow_missing=()):
    """Counts alone cannot prove preservation: require both sets of identities."""
    return (rom_ok and tests_ok and audit['after'] >= audit['master']
            and not audit['lost_before']
            and set(map(tuple, audit['missing_master'])) <= set(allow_missing))


def combine_history(*texts):
    """Concurrent generated history appends must retain both branches' points."""
    rows = {line: json.loads(line) for text in texts for line in text.splitlines() if line.strip()}
    return ''.join(line + '\n' for line in sorted(rows, key=lambda line: rows[line]['t']))


def run(root, command, log):
    print('+ ' + ' '.join(map(str, command)), flush=True)
    with log.open('a') as output:
        env = dict(os.environ, HH_ROOT=str(root), PYTHONDONTWRITEBYTECODE='1')
        result = subprocess.run(command, cwd=root, stdout=output, stderr=subprocess.STDOUT, env=env)
    if result.returncode:
        raise RuntimeError('%s failed (%d); see %s' % (command[0], result.returncode, log))


def prepare(root, checkout, rodata, master, log):
    run(root, ['git', 'init', '--quiet', '--initial-branch=switch-check', str(checkout)], log)
    objects = Path(git(root, 'rev-parse', '--path-format=absolute', '--git-path', 'objects'))
    (checkout / '.git/objects/info/alternates').write_text(str(objects) + '\n')
    run(checkout, ['git', 'checkout', '--quiet', '-B', 'switch-check', rodata], log)
    # Conflicting generated source/layout is deliberately regenerated from the rodata
    # baseline. Conflicts in registry inputs or tools require a real reviewed merge.
    merge = subprocess.run(['git', '-c', 'user.name=Switch check', '-c',
                            'user.email=switch-check@localhost', 'merge', '--no-commit',
                            '--no-ff', master], cwd=checkout, capture_output=True, text=True)
    with log.open('a') as output:
        output.write(merge.stdout + merge.stderr)
    conflicts = git(checkout, 'diff', '--name-only', '--diff-filter=U').splitlines()
    had_conflicts = bool(conflicts)
    history = 'dashboard/history.jsonl'
    if history in conflicts:
        (checkout / history).write_text(combine_history(
            git(root, 'show', rodata + ':' + history), git(root, 'show', master + ':' + history)))
        run(checkout, ['git', 'add', '--', history], log)
        conflicts.remove(history)
    generated = {'hybridheaven.yaml', 'hybridheaven.ld', 'undefined_syms_auto.txt',
                 'undefined_funcs_auto.txt', 'queue/merge_gap.jsonl'}
    unresolved = [p for p in conflicts if not p.startswith('src/') and p not in generated]
    if unresolved or (merge.returncode and not had_conflicts):
        raise RuntimeError('merge needs review: ' + ', '.join(unresolved or [merge.stderr.strip()]))
    # Start from the exact frozen source whose C identities must be preserved; the
    # shared merge tool adds master-only definitions at the current file boundaries.
    run(checkout, ['git', 'restore', '--source=' + rodata, '--staged', '--worktree', '--', 'src'], log)
    for path in conflicts:
        if path in generated:
            run(checkout, ['git', 'restore', '--source=' + rodata, '--staged', '--worktree', '--', path], log)
    for relative in ['.venv', 'baserom', 'tools/ido', 'tools/asm-processor', 'tools/m2c',
                     'tools/bin', 'tools/ultralib']:
        dest = checkout / relative
        if not dest.exists() and (root / relative).exists():
            dest.symlink_to(root / relative, target_is_directory=True)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--rodata', default='HEAD', help='committed rodata revision (default HEAD)')
    parser.add_argument('--master', default='master', help='master revision to snapshot (default master)')
    parser.add_argument('--jobs', type=int, default=8)
    parser.add_argument('--keep', action='store_true', help='retain the temporary checkout even on PASS')
    parser.add_argument('--allow-missing', type=parse_allow_missing, default=set(),
                        help='comma-separated SEG:func_XXXXXXXX master gaps explicitly accepted by the operator')
    args = parser.parse_args()
    root = Path(__file__).resolve().parents[2]
    rodata, master = (git(root, 'rev-parse', ref + '^{commit}') for ref in (args.rodata, args.master))
    print('Checking committed rodata %s against master %s (local edits are excluded)' % (rodata, master), flush=True)
    if not git(root, 'ls-tree', rodata, '--', 'tools/hh/rodata_splits.json'):
        parser.error('--rodata must contain the per-file rodata layout')
    build = root / 'build'
    build.mkdir(exist_ok=True)
    directory = Path(tempfile.mkdtemp(prefix='switch-check-', dir=build))
    checkout, log = directory / 'checkout', directory / 'check.log'
    result = dict(rodata_ref=rodata, master_ref=master, passed=False, log=str(log),
                  allow_missing=sorted(args.allow_missing))
    try:
        prepare(root, checkout, rodata, master, log)
        py = str(checkout / '.venv/bin/python')
        run(checkout, ['make', 'setup'], log)
        run(checkout, [py, 'tools/hh/gen_libultra.py', '--stubs'], log)
        run(checkout, [py, 'tools/hh/merge_rodata.py', '--apply', '--before', rodata, '--master', master], log)
        audit = json.loads((checkout / 'build/merge_rodata_audit.json').read_text())
        result['audit'] = audit
        print('rodata before {before}; master {master}; merged {after}'.format(**audit), flush=True)
        print('lost rodata identities: ' + json.dumps(audit['lost_before']), flush=True)
        print('master gaps: ' + json.dumps(audit['missing_master']), flush=True)
        result['unexpected_missing'] = sorted(set(map(tuple, audit['missing_master'])) - args.allow_missing)
        print('allowed master gaps: ' + json.dumps(result['allow_missing']), flush=True)
        print('unexpected master gaps: ' + json.dumps(result['unexpected_missing']), flush=True)
        gaps = checkout / 'queue/merge_gap.jsonl'
        if gaps.exists():
            print(gaps.read_text(), end='', flush=True)
        run(checkout, [py, 'tools/hh/gen_blocks.py', '--annotate'], log)
        run(checkout, [py, 'tools/hh/gen_blocks.py'], log)
        run(checkout, [py, '-m', 'unittest', 'discover', '-s', 'tools/hh', '-p', 'test_*.py'], log)
        result['tests_ok'] = True
        run(checkout, ['make', '-j' + str(args.jobs)], log)
        expected = re.search(r'^SHA1\s*:=\s*(\w+)', (checkout / 'Makefile').read_text(), re.M).group(1)
        result['rom_sha1'] = hashlib.sha1((checkout / 'build/hybridheaven.z64').read_bytes()).hexdigest()
        result['rom_ok'] = result['rom_sha1'] == expected and 'build/hybridheaven.z64: OK' in log.read_text()
        # A moving master invalidates the rehearsal rather than silently blessing an older snapshot.
        if git(root, 'rev-parse', args.master + '^{commit}') != master:
            raise RuntimeError('master advanced during the rehearsal; pause the loop and rerun')
        result['passed'] = verdict(audit, result['rom_ok'], result['tests_ok'], args.allow_missing)
    except (RuntimeError, OSError, subprocess.CalledProcessError) as error:
        result['error'] = str(error)
        print(str(error), file=sys.stderr)
    (build / 'switch_check.json').write_text(json.dumps(result, indent=2) + '\n')
    if result['passed']:
        print('PASS', flush=True)
        if not args.keep:
            shutil.rmtree(directory, ignore_errors=True)
    else:
        # 10-29: kept failed checkouts (~2 GB each) filled the disk; keep only the log unless --keep
        if not args.keep and checkout.exists():
            shutil.copy(log, build / 'switch_check_last_fail.log'); shutil.rmtree(directory, ignore_errors=True)
            print('FAIL; details: %s; log: %s (checkout removed; rerun with --keep to keep it)'
                  % (build / 'switch_check.json', build / 'switch_check_last_fail.log'), flush=True)
        else:
            print('FAIL; details: %s; checkout: %s' % (build / 'switch_check.json', checkout), flush=True)
    return 0 if result['passed'] else 1


if __name__ == '__main__':
    sys.exit(main())
