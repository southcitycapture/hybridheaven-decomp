import os
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

import unreject as U


class ReplayTests(unittest.TestCase):
    def test_history_union_keeps_overlay_identity_and_all_reasons(self):
        paths = ['queue/rejected.jsonl', 'queue/link_blocklist.txt',
                 'matched_rejected/file002/func_80000000.c']
        data = {
            paths[0]: '\n'.join([
                '{"segment":"file001","func":"func_80000000","why":"old layout"}',
                '{"segment":"file001","func":"func_80000000","why":"old layout"}',
                '{"segment":"file001","func":"func_80000000","why":"slot overflow"}']),
            paths[1]: '# comment\nfile003 func_80000000 # link failed\n',
        }
        with patch.object(U, 'git_files', return_value=paths), \
                patch.object(U, 'blobs', return_value=data):
            reasons, origins = U.inventory('snapshot')
        self.assertEqual(set(reasons), {(s, 'func_80000000') for s in ('file001', 'file002', 'file003')})
        self.assertEqual(reasons[('file001', 'func_80000000')], ['old layout', 'slot overflow'])
        self.assertEqual(origins[('file002', 'func_80000000')], {paths[2]})

    def test_saved_best_attempt_uses_worker_context_and_exact_overlay(self):
        root = os.getcwd()
        with tempfile.TemporaryDirectory(dir='build') as td:
            os.chdir(td)
            try:
                work = Path('queue/worker/work/func_80000000')
                (work / '.attempts').mkdir(parents=True)
                Path('queue/worker/functions.txt').write_text('func_80000000 file001\n')
                (work / 'context.h').write_text('typedef struct Leaf { s32 n; } Leaf;\n')
                (work / 'attempt.c').write_text('#include "context.h"\ns32 func_80000000(Leaf *p) {\nreturn 2;\n}\n')
                (work / '.attempts/1.c').write_text('#include "context.h"\ns32 func_80000000(Leaf *p) {\nreturn p->n;\n}\n')
                (work / '.attempts/1.res').write_text('MATCH\n')
                (work / '.attempts/2.c').write_text('#include "context.h"\ns32 func_80000000(Leaf *p) {\nreturn 3;\n}\n')
                (work / '.attempts/2.res').write_text('score 2/4\n')
                for seg in ('file001', 'file002'):
                    source = Path('src') / seg / '80000000.c'
                    source.parent.mkdir(parents=True)
                    source.write_text('#include "common.h"\n')
                with patch.object(U, 'git_files', return_value=[]), \
                        patch.object(U.S, 'registry', return_value={}), \
                        patch.object(U.S, 'file_of', return_value='80000000'):
                    candidates = U.saved_candidates('snapshot', {
                        ('file001', 'func_80000000'), ('file002', 'func_80000000')})
                first = candidates[('file001', 'func_80000000')]
                self.assertEqual(len(first), 2)
                best = next(text for path, text in first if '/.attempts/1.c' in path)
                self.assertIn('typedef struct Leaf', best)
                self.assertNotIn('#include "context.h"', best)
                self.assertEqual(candidates[('file002', 'func_80000000')], [])
            finally:
                os.chdir(root)

    def test_byte_match_cannot_authorize_an_existing_c_eviction(self):
        root = os.getcwd()
        with tempfile.TemporaryDirectory(dir='build') as td:
            os.chdir(td)
            try:
                Path('build').mkdir()
                source = Path('src/file001/80000000.c')
                source.parent.mkdir(parents=True)
                original = 's32 func_80000000(void) {\nreturn 0;\n}\n'
                source.write_text(original)
                replacement = 's32 func_80000010(void) {\nreturn 1;\n}\n'
                row = dict(func='func_80000010', seg='file001')
                with patch.object(U.S, 'entries', return_value=[('func_80000000',), ('func_80000010',)]), \
                        patch.object(U.R, 'verify', return_value=(True, 'ok')), \
                        patch.object(U.R, 'integrate', return_value=(replacement, {'func_80000010': 'plain'}, {})):
                    with self.assertRaises(RuntimeError):
                        U.job(('file001', '80000000', [(row, [('saved.c', replacement)])], True))
                self.assertEqual(source.read_text(), original)
            finally:
                os.chdir(root)


if __name__ == '__main__':
    unittest.main()
