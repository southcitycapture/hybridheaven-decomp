"""Search valleys/cache/deadlines, transformation semantics, and real IDO scoring."""
from collections import Counter
from pathlib import Path
import shutil
import subprocess
import tempfile
import time
import unittest

import regsearch as B


def result(good, mismatch=0, match=False):
    return dict(ok=True, match=match, good=good, total=10, mismatched=mismatch,
                regions=[(0, good, 10)], verdict='MATCH' if match else 'score %d/10' % good)


class BeamTests(unittest.TestCase):
    def test_chain_crosses_a_valley_and_caches_diamonds_and_failures(self):
        graph = {'base': [('left', 'a'), ('right', 'b'), ('bad', 'fail')],
                 'a': [('valley', 'c'), ('cycle', 'base'), ('bad', 'fail')],
                 'b': [('diamond', 'c'), ('bad', 'fail')], 'c': [('finish', 'win')]}
        counts = Counter()
        scores = {'base': 8, 'a': 7, 'b': 6, 'c': 5, 'win': 10}
        def evaluate(candidates):
            rows = []
            for text, _ in candidates:
                counts[text] += 1
                rows.append(result(scores[text], match=text == 'win') if text != 'fail' else dict(ok=False))
            return rows
        r = B.beam('base', evaluate, lambda text, _: graph.get(text, []), width=2, depth=3)
        self.assertTrue(r['match'])
        self.assertEqual(r['chain'], ['left', 'valley', 'finish'])
        self.assertTrue(all(n == 1 for n in counts.values()))
        self.assertEqual(r['cache_entries'], 6)

    def test_regions_and_register_distance_guide_ties(self):
        a, b = result(8, 5), result(8, 2)
        a['good'], b['good'] = 9, 3  # positional score cannot override region/distance
        self.assertGreater(B.rank(b), B.rank(a))
        self.assertGreater(B.rank(result(9, 100)), B.rank(b))

    def test_expired_deadline_does_not_expand(self):
        r = B.beam('base', lambda cs: [result(4) for _ in cs],
                   lambda *_: self.fail('expanded after timeout'), deadline=time.monotonic() - 1)
        self.assertEqual(r['history'], [])

    def test_equal_scores_keep_distinct_move_families(self):
        rows = [{**result(4), 'text': str(i), 'chain': ['swap decl %d' % i]} for i in range(20)]
        rows.append({**result(4), 'text': 'ref', 'chain': ['ref local']})
        selected = B.select_beam(rows, 3)
        self.assertIn('ref', [r['text'] for r in selected])


SOURCE = '''typedef int s32;
typedef unsigned int u32;
typedef short s16;
typedef unsigned char u8;
s32 f(s32 arg) {
    s32 x;
    s32 y;
    s32 z;
    s32 copy;
    s32 i;
    s32 sum = 0;

    x = 3;
    y = 5;
    copy = x + y;
    z = copy;
    x = 7;
    y = x + z;
    for (i = 0; i < arg; i++) {
        sum += y + i;
    }
    return sum + y;
}
'''


class MoveTests(unittest.TestCase):
    def test_natural_search_omits_dead_uses_and_retains_real_rewrites(self):
        all_moves = B.search_moves(SOURCE, 'f')
        natural = B.search_moves(SOURCE, 'f', natural=True)
        self.assertTrue(any(label.startswith('ref ') for label, _ in all_moves))
        self.assertTrue(natural)
        self.assertEqual(natural, [(label, text) for label, text in all_moves
                                   if not label.startswith('ref ')])

    def test_excludes_unsafe_width_alias_and_statement_moves(self):
        source = '''s32 f(s32 arg) {
    s32 x;
    s32 y;
    s32 *p;
    x = arg;
    y = x + 1;
    *p = x;
    call();
    y = 3;
    return x / -2;
}
'''
        labels = [l for l, _ in B.variants(source, 'f')]
        self.assertFalse(any('range proved' in l or l.startswith('swap stmts') for l in labels))
        escaped = source.replace('x = arg;', 'p = &x;\n    x = arg;')
        self.assertFalse(any(l == 'register x' for l, _ in B.variants(escaped, 'f')))
        cont = SOURCE.replace('sum += y + i;', 'if (i == 2) continue;\n        sum += y + i;')
        self.assertFalse(any(l.startswith('for -> while') for l, _ in B.variants(cont, 'f')))
        self.assertEqual(B.variants('s32 f(void) {\n    typedef s32 Local;\n    Local x;\n    return 0;\n}\n', 'f'), [])

    def test_body_mask_and_move_families(self):
        source = SOURCE.replace('x = 3;', '/* } f() { */\n    x = 3;')
        vs = B.variants(source, 'f')
        labels = [l for l, _ in vs]
        for prefix in ('swap decl', 'ref ', 'add temporary', 'merge temporary', 'range proved', 'for -> while', 'cast '):
            self.assertTrue(any(prefix in l for l in labels), prefix)
        self.assertTrue(all('/* } f() { */' in t for _, t in vs))

    def test_split_declarators_preserves_pointer_binding(self):
        source = 's32 f(void) {\n    s32 *p, x;\n    x = 3;\n    p = &x;\n    return *p;\n}\n'
        vs = dict(B.variants(source, 'f'))
        self.assertIn('s32 x, *p;', vs['reverse declarators p,x'])
        self.assertIn('s32 *p;\n    s32 x;', vs['split declaration p,x'])

    def test_prototype_and_unbraced_control_scope_are_preserved(self):
        source = 's32 f(s32);\nvoid helper(void) { s32 x; x = 1; }\n' + SOURCE
        self.assertTrue(all('void helper(void) { s32 x; x = 1; }' in t for _, t in B.variants(source, 'f')))
        helper = 'void helper(void) { if (f(1)) { s32 x; x = 1; } }\n'
        self.assertTrue(all(helper in t for _, t in B.variants(helper + SOURCE, 'f')))
        unbraced = SOURCE.replace('    for (i = 0;', '    if (arg > 0)\n    for (i = 0;')
        self.assertFalse(any(l.startswith('for -> while') for l, _ in B.variants(unbraced, 'f')))
        shadowed = 's32 y;\ns32 f(void) {\n    s32 x = y;\n    s32 y;\n    return x;\n}\n'
        self.assertFalse(any(l == 'split init x' for l, _ in B.variants(shadowed, 'f')))
        literal = 's32 f(void) {\n    s32 x;\n    x = call("keep this");\n    return x;\n}\n'
        self.assertTrue(all('call("keep this")' in t for _, t in B.variants(literal, 'f')))
        conditional = 's32 f(s32 arg) {\n    s32 x;\n    s32 y = 0;\n    if (arg)\n        x = 3;\n    if (arg)\n        y = x;\n    return y;\n}\n'
        self.assertFalse(any(l.startswith(('ref x', 'add temporary', 'split lifetime')) for l, _ in B.variants(conditional, 'f')))
        stores = 'extern s32 D_80000000;\nextern s32 D_80000004;\nvoid f(s32 arg) {\n    if (arg)\n        D_80000000 = 1;\n    D_80000004 = 2;\n}\n'
        self.assertFalse(any(l.startswith('swap independent objects') for l, _ in B.variants(stores, 'f')))

    def test_read_only_aliasing_loads_can_swap_but_volatile_and_calls_cannot(self):
        source = '''typedef int s32;
struct Node { s32 a, b; };
s32 f(struct Node *p) {
    s32 x;
    s32 y;
    x = p->a;
    y = p->b;
    return x - y;
}
'''
        self.assertTrue(any(l.startswith('swap stmts') for l, _ in B.variants(source, 'f')))
        self.assertFalse(any(l.startswith('swap stmts') for l, _ in B.variants(source.replace('s32 a, b', 'volatile s32 a, b'), 'f')))
        self.assertFalse(any(l.startswith('swap stmts') for l, _ in B.variants(source.replace('p->b', 'call()'), 'f')))
        self.assertFalse(any(l.startswith('swap stmts') for l, _ in B.variants(source, 'f', '#include "unknown.h"')))

    @unittest.skipUnless(shutil.which('cc'), 'host C compiler needed for semantic checks')
    def test_signed_storage_move_keeps_negative_division_and_comparisons(self):
        source = '''typedef int s32; typedef unsigned int u32;
s32 f(s32 arg) {
    s32 x;
    x = arg;
    return (x < 0) + x / -3;
}
'''
        variant = next(t for l, t in B.variants(source, 'f') if l.startswith('sign s32 -> u32 x'))
        harness = '\n#include <stdio.h>\nint main(void) { int a[] = {-2147483647-1, -100, -3, -1, 0, 1, 100, 2147483647}; int i; for(i=0;i<8;i++) printf("%d\\n", f(a[i])); return 0; }'
        with tempfile.TemporaryDirectory(prefix='regsearch-sign-', dir=B.HH / 'build') as td:
            d = Path(td); outputs = []
            for text in (source, variant):
                (d / 'test.c').write_text(text + harness)
                subprocess.run(['cc', '-O2', '-Werror', str(d / 'test.c'), '-o', str(d / 'test')], check=True, capture_output=True)
                outputs.append(subprocess.check_output([str(d / 'test')]))
        self.assertEqual(*outputs)

    @unittest.skipUnless(shutil.which('cc'), 'host C compiler needed for semantic checks')
    def test_generated_variants_have_same_observable_results(self):
        # Independent executable oracle over zero/one/multiple loop trips. The
        # function has copy elimination, narrowable constants and dependent sets.
        harness = '\n#include <stdio.h>\nint main(void) { int i; for(i=0;i<12;i++) printf("%d\\n", f(i)); return 0; }\n'
        with tempfile.TemporaryDirectory(prefix='regsearch-test-', dir=B.HH / 'build') as td:
            d = Path(td)
            outputs = []
            for label, text in [('base', SOURCE)] + B.variants(SOURCE, 'f'):
                (d / 'test.c').write_text(text + harness)
                subprocess.run(['cc', '-O2', '-Werror', str(d / 'test.c'), '-o', str(d / 'test')], check=True, capture_output=True)
                outputs.append((label, subprocess.check_output([str(d / 'test')])))
            self.assertGreater(len(outputs), 15)
            for label, output in outputs[1:]:
                self.assertEqual(output, outputs[0][1], label)

    def test_real_ido_match_and_cleanup(self):
        from test_regtrace import MATCHED
        before = set((B.HH / 'build').glob('regsearch-*'))
        with tempfile.TemporaryDirectory(prefix='regsearch-control-', dir=B.HH / 'build') as td:
            src = Path(td) / 'attempt.c'; src.write_text(MATCHED)
            r = B.search('func_80002A04', 'main', src, seconds=20, jobs=1, log=lambda _: None)
        self.assertTrue(r['match'], r['best'])
        self.assertTrue(r['best']['regions'])
        self.assertEqual(r['chain'], [])
        self.assertEqual(set((B.HH / 'build').glob('regsearch-*')), before)

    def test_real_ido_search_finds_independent_store_order(self):
        from test_regtrace import SWAPPED
        with tempfile.TemporaryDirectory(prefix='regsearch-control-', dir=B.HH / 'build') as td:
            src = Path(td) / 'attempt.c'; src.write_text(SWAPPED)
            r = B.search('func_80002A04', 'main', src, seconds=20, jobs=2, log=lambda _: None)
        self.assertTrue(r['match'], r['best'])
        self.assertEqual(len(r['chain']), 1)
        self.assertTrue(r['chain'][0].startswith('swap independent objects'))

    def test_seed_comparison_uses_each_snapshots_headers(self):
        from test_regtrace import MATCHED, SWAPPED
        with tempfile.TemporaryDirectory(prefix='regsearch-seeds-', dir=B.HH / 'build') as td:
            a, b = Path(td) / 'a', Path(td) / 'b'; a.mkdir(); b.mkdir()
            (a / 'context.h').write_text('#define OLD_HEADER 1\n')
            (b / 'context.h').write_text('#define CORRECT_HEADER 1\n')
            (a / 'attempt.c').write_text('#include "context.h"\n' + SWAPPED)
            (b / 'attempt.c').write_text('#include "context.h"\n#ifndef CORRECT_HEADER\n#error wrong seed header\n#endif\n' + MATCHED)
            r = B.search('func_80002A04', 'main', a / 'attempt.c', alternative_source=b / 'attempt.c', seconds=20, jobs=1, log=lambda _: None)
        self.assertTrue(r['match'], r['best'])
        self.assertEqual(r['chain'], [])
        self.assertTrue(r['source'].endswith('/b/attempt.c'))
        self.assertEqual(len(r['seed_scores']), 2)


if __name__ == '__main__':
    unittest.main()
