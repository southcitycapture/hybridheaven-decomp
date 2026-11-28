"""11-28: unused_locals must check every declaration, including back-to-back ones (the delimiter was consumed)."""
import os, sys, unittest
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import rule_check as RC


class AdjacentDecls(unittest.TestCase):
    def test_second_adjacent_pad_is_caught(self):
        self.assertEqual(RC.unused_locals(" s32 x; s32 pad[2]; x = 1; return x;"), ["pad (never used)"])

    def test_three_in_a_row(self):
        self.assertEqual(RC.unused_locals(" s32 a; s32 b; s32 c; a = 1; c = a; return c;"), ["b (never used)"])

    def test_all_used(self):
        self.assertEqual(RC.unused_locals(" s32 a; s32 b; a = 1; b = a; return b;"), [])


if __name__ == "__main__":
    unittest.main()
