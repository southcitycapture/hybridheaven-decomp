"""hidden_matches.py: score parsing, ranking, attempt inventory, and the one-per-function scheduler."""
import tempfile
import threading
import time
import unittest
from pathlib import Path

import hidden_matches as H


class TestHidden(unittest.TestCase):
    def test_parse_score(self):
        self.assertEqual(H.parse_score("score 614/614: code matches but the function's .rodata (jump table) differs"),
                         (1.0, True))
        self.assertEqual(H.parse_score('score 18/761 (size mine 0xBE4, target 0xB44)'), (18 / 761, False))
        self.assertEqual(H.parse_score('MATCH\nfile011 func_80229CE0: regions'), (1.0, False))
        self.assertEqual(H.parse_score(''), (None, False))

    def test_rank(self):
        es = [dict(rodata=False, score=0.5), dict(rodata=False, score=None), dict(rodata=True, score=1.0),
              dict(rodata=False, score=0.99)]
        self.assertEqual([(e['rodata'], e['score']) for e in sorted(es, key=H.rank)],
                         [(True, 1.0), (False, 0.99), (False, None), (False, 0.5)])

    def test_scored_dedupes_and_takes_best_score(self):
        with tempfile.TemporaryDirectory() as td:
            body = 'void func_80001000(void) {\n}\n'
            for batch, extra, res in (('b1', '', 'score 3/10'), ('b2', '', "score 10/10: code matches but the "
                                      "function's .rodata (jump table) differs"), ('b3', '/* other */\n', 'score 9/10')):
                d = Path(td) / 'queue' / batch / 'work' / 'func_80001000@file001'
                (d / '.attempts').mkdir(parents=True)
                (d / '.attempts' / '1.c').write_text(extra + body)
                (d / '.attempts' / '1.res').write_text(res)
            (Path(td) / 'queue' / 'b4' / 'work' / 'func_80001000@file002').mkdir(parents=True)
            out = H.scored('func_80001000', 'file001', [td])
        self.assertEqual(len(out), 2)                      # b1 and b2 hold the same text
        self.assertTrue(out[0]['rodata'] and out[0]['score'] == 1.0)
        self.assertEqual(out[1]['score'], 0.9)

    def test_schedule_one_in_flight_and_stop_after_pass(self):
        tasks = [dict(key='a', n=i) for i in range(5)] + [dict(key='b', n=i) for i in range(3)]
        running, seen, lock = {}, [], threading.Lock()

        def worker(t):
            with lock:
                self.assertNotIn(t['key'], running)
                running[t['key']] = 1
                seen.append((t['key'], t['n']))
            time.sleep(0.01)
            with lock:
                running.pop(t['key'])
            return t['key'] == 'a' and t['n'] == 1

        passed, left = H.schedule(tasks, worker, 4, time.time() + 30)
        self.assertEqual(passed['a']['n'], 1)
        self.assertEqual([n for k, n in seen if k == 'a'], [0, 1])  # a's later attempts dropped
        self.assertEqual(sorted(n for k, n in seen if k == 'b'), [0, 1, 2])
        self.assertEqual(left, [])

    def test_schedule_one_check_per_file(self):
        tasks = [dict(key=k, file='f1') for k in 'abc'] + [dict(key='d', file='f2')]
        running, peak, lock = set(), [0], threading.Lock()

        def worker(t):
            with lock:
                self.assertNotIn(t['file'], running)
                running.add(t['file'])
                peak[0] = max(peak[0], len(running))
            time.sleep(0.02)
            with lock:
                running.discard(t['file'])
            return False

        passed, left = H.schedule(tasks, worker, 4, time.time() + 30)
        self.assertEqual((passed, left), ({}, []))
        self.assertLessEqual(peak[0], 2)

    def test_schedule_deadline(self):
        passed, left = H.schedule([dict(key=str(i)) for i in range(3)], lambda t: True, 2, time.time() - 1)
        self.assertEqual(passed, {})
        self.assertEqual(len(left), 3)


if __name__ == '__main__':
    unittest.main()
