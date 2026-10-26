"""Readonly boundary inference regressions."""
import unittest
import gen_rodata_splits as G


class BoundaryTests(unittest.TestCase):
    def test_legacy_table_does_not_consume_next_object(self):
        text = ('dlabel jtbl_801857FC\n.word .L80107B60\n.word .L80107C00\n'
                'dlabel D_80185804\n.word 0\n'
                'dlabel jtbl_80185808\n.word .L80107C40\n'
                'enddlabel jtbl_80185808\n.section .text\n.word 0\n')
        self.assertEqual([(m[1], m[3].count('.word')) for m in G.jump_tables(text)],
                         [('jtbl_801857FC', 2), ('jtbl_80185808', 1)])


if __name__ == '__main__':
    unittest.main()
