"""Reproduce Task 39 frozen-file failures with bounded, low-priority workers."""
import concurrent.futures
import csv
import json
import os
import subprocess


def check(row):
    seg, func = row['segment'], row['func']
    attempt = f'sol_ref/task39/{seg}/{func}/attempt.c'
    result = subprocess.run(['nice', '-n', '19', 'python', 'tools/hh/srcbuild.py',
                             'infile', seg, func, attempt], capture_output=True, text=True)
    return dict(row, status=result.returncode, diagnostic=result.stdout + result.stderr)


if __name__ == '__main__':
    rows = list(csv.DictReader(open('sol_ref/task39/INVENTORY.tsv'), delimiter='\t'))
    os.makedirs('queue/task39', exist_ok=True)
    rows = [r for r in rows if not os.path.exists('queue/task39/%s-%s.json' % (r['segment'], r['func']))]
    with concurrent.futures.ThreadPoolExecutor(max_workers=4) as pool:
        for result in pool.map(check, rows):
            path = 'queue/task39/%s-%s.json' % (result['segment'], result['func'])
            with open(path, 'w') as fh:
                json.dump(result, fh, indent=2)
            print(result['segment'], result['func'], result['status'], flush=True)
