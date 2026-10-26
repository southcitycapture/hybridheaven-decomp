"""Finish scoring, correlated propagation, and loop exclusion regressions."""
import collections
import copy
import json
import os
from pathlib import Path
import tempfile
import time
import unittest
from unittest.mock import patch

import features
import pick
from pick_filters import unavailable
from pick_finish import FinishFile, expected_complete, finish_file, finish_profiles, finish_shares, score


def row(name, segment="main", fp=None, size=100):
    return dict(func=name, segment=segment, file="unit", fp=fp or name, size=str(size), difficulty="10")


class FinishTests(unittest.TestCase):
    def setUp(self):
        self.unit = {"name": "main/unit", "measures": {"total_code": "1000", "total_functions": 3, "matched_functions": 2},
                     "functions": [{"name": "a", "fuzzy_match_percent": 100.0},
                                   {"name": "b", "fuzzy_match_percent": 100.0}, {"name": "c"}]}
        self.source = 'void a(void) {}\nvoid b(void) {}\n#pragma GLOBAL_ASM("asm/nonmatchings/main/unit/c.s")\n'

    def test_last_function_gets_whole_file_and_input_is_not_mutated(self):
        original = copy.deepcopy(self.unit)
        profile = finish_file(self.unit, self.source)
        self.assertEqual(finish_shares([profile]), {("main", "c"): 1000})
        self.assertEqual(self.unit, original)

    def test_two_remaining_functions_split_credit(self):
        self.unit["functions"][1].pop("fuzzy_match_percent")
        self.unit["measures"]["matched_functions"] = 1
        source = self.source + '#pragma GLOBAL_ASM("asm/nonmatchings/main/unit/b.s")\n'
        self.assertEqual(finish_shares([finish_file(self.unit, source)]), {("main", "b"): 500, ("main", "c"): 500})

    def test_other_asm_and_mismatching_c_prevent_credit(self):
        for extra in ('#pragma GLOBAL_ASM("_pad_4.s")', '#pragma GLOBAL_ASM("_ro_a.s")', 'INCLUDE_ASM("x", other);'):
            with self.subTest(extra=extra):
                self.assertIsNone(finish_file(self.unit, self.source + extra))
        self.assertIsNone(finish_file(self.unit, 'void a(void) {} void b(void) {} void c(void) {}'))
        self.unit["functions"][0]["fuzzy_match_percent"] = 99.99999
        self.assertIsNone(finish_file(self.unit, self.source))

    def test_missing_diff_entries_and_complete_files_get_no_credit(self):
        self.unit["measures"]["total_functions"] = 4
        self.assertIsNone(finish_file(self.unit, self.source))
        self.unit["functions"][2]["fuzzy_match_percent"] = 100.0
        self.assertIsNone(finish_file(self.unit, self.source))
        self.assertEqual(finish_profiles({"units": [{"name": "main/data", "measures": {}}]}, lambda _: self.fail()), [])

    def test_zero_is_exact_legacy_score_and_bonus_is_scaled(self):
        self.assertEqual(score(.37, 123.4, .019, 1000, 0), .37 * 123.4 / .019)
        self.assertEqual(score(.5, 100, 2, 1000, 2), 525)

    def test_expected_completion_requires_all_functions_and_counts_file_once(self):
        a, b = row("a"), row("b")
        chosen = [(0, "fresh", a, 100, .5, 1, 1, 500)]
        profile = FinishFile("main/unit", 1000, (("main", "a"), ("main", "b")))
        self.assertEqual(expected_complete(chosen, {"a": [a], "b": [b]}, [profile], .8), 0)
        chosen.append((0, "fresh", b, 100, .4, 1, 1, 500))
        self.assertEqual(expected_complete(chosen, {"a": [a], "b": [b]}, [profile], .8), 200)

    def test_propagated_copies_share_agent_success(self):
        a, b, c = row("a", fp="same"), row("b", fp="same"), row("c", fp="same")
        chosen = [(0, "fresh", a, 260, .5, 1, 3, 1000)]
        profile = FinishFile("main/unit", 1000, (("main", "a"), ("main", "b"), ("main", "c")))
        self.assertAlmostEqual(expected_complete(chosen, {"same": [a, b, c]}, [profile], .8), 320)


class RankingTests(unittest.TestCase):
    def rank(self, rows, **options):
        by = {(r["segment"], r["func"]): r for r in rows}
        stats = {(0, False): (10, 5, .5, 1)}
        with patch.object(pick.S, "file_of", return_value="unit"), patch.object(pick.S, "LIBFILES", set()):
            return pick.rank(rows, by, options.pop("reg", set()), options.pop("feats", {}), stats,
                             options.pop("fails", collections.Counter()), .8, **options)[0]

    def test_bonus_promotes_finisher_without_changing_matched_payoff(self):
        rows = [row("large", size=200), row("finish", size=100)]
        shares = {("main", "finish"): 1000}
        old = self.rank(rows, shares=shares)
        new = self.rank(rows, shares=shares, bonus=1)
        self.assertEqual([x[2]["func"] for x in old], ["large", "finish"])
        self.assertEqual([x[2]["func"] for x in new], ["finish", "large"])
        self.assertEqual({x[2]["func"]: x[3:7] for x in old}, {x[2]["func"]: x[3:7] for x in new})

    def test_fresh_representative_and_propagated_credit(self):
        rows = [row("a", fp="same"), row("b", "overlay", fp="same")]
        shares = {("overlay", "b"): 1000}
        old = self.rank(rows, shares=shares)[0]
        new = self.rank(rows, shares=shares, bonus=1)[0]
        self.assertEqual(old[2]["func"], "a")
        self.assertEqual(new[2]["func"], "b")
        self.assertEqual(old[3], 180)
        self.assertEqual(new[3], 180)
        self.assertEqual(old[7], 800)
        self.assertEqual(new[7], 1000)

    def test_excluded_representative_does_not_hide_available_copy(self):
        rows = [row("a", fp="same"), row("b", "overlay", fp="same")]
        picks = self.rank(rows, shares={("main", "a"): 100000}, bonus=1, excluded={("a", "main")})
        self.assertEqual(picks[0][2]["func"], "b")
        self.assertEqual(picks[0][3], 180)       # legacy propagation payoff is retained

    def test_failure_decay_max_tries_and_twin_probability_unchanged(self):
        a, b = row("a", fp="same"), row("b", fp="same")
        failures = collections.Counter(same=2)
        self.assertEqual(self.rank([a], bonus=1, fails=failures)[0][4], .5 * .6**2)
        self.assertEqual(self.rank([a], bonus=1, fails=collections.Counter(same=4)), [])
        twin = self.rank([a, b], reg={("main", "a")}, bonus=1, fails=failures)[0]
        self.assertEqual(twin[1], "twin")
        self.assertEqual(twin[4], .77)
        self.assertEqual(twin[3], 100)

    def test_nonc_jump_tables_and_difficulty_still_excluded(self):
        a = row("a", "overlay")
        for feature in ("nonc", "jtbl"):
            self.assertEqual(self.rank([a], bonus=10, shares={("overlay", "a"): 1e9},
                                       feats={("overlay", "a"): {feature: True}}, allow_jt=True), [])
        self.assertEqual(self.rank([a], bonus=10, lo=11), [])


class FilterTests(unittest.TestCase):
    def test_holds_strong_models_rejections_and_segment_keys(self):
        root = Path(__file__).resolve().parents[2]
        with tempfile.TemporaryDirectory(dir=root / "build", prefix="test-pick-") as temp:
            previous = os.getcwd()
            os.chdir(temp)
            try:
                def write(path, text):
                    p = Path(path)
                    p.parent.mkdir(parents=True, exist_ok=True)
                    p.write_text(text)
                for batch in ("mine", "active", "closed", "stopped", "stale"):
                    write("queue/%s/functions.txt" % batch, "same %s\n" % batch)
                write("queue/closed/DONE", "done")
                write("queue/stopped/STOP", "stop")
                os.utime("queue/stale/functions.txt", (time.time() - 13 * 3600,) * 2)
                results = [{"func": "same", "segment": model, "model": model, "verified": "FAIL"}
                           for model in ("claude-sonnet", "claude-opus", "gpt-6.1-sol", "haiku")]
                results.append(dict(func="error", segment="main", model="gpt-6.1-sol", verified="ERROR"))
                write("queue/results/results.jsonl", "bad json\n" + "\n".join(map(json.dumps, results)))
                write("queue/link_blocklist.txt", "# comment\nblocked same\n")
                write("queue/rejected.jsonl", json.dumps(dict(func="same", segment="rejected")) + "\ninvalid\n")
                write("contrib/tasks.json", json.dumps({"tasks": [dict(func="same", segment="assigned", assigned=True),
                                                                dict(func="same", segment="done", assigned=True, status="done")]}))
                legacy = unavailable("mine")
                self.assertEqual(legacy, {("same", s) for s in ("active", "claude-sonnet", "claude-opus", "gpt-6.1-sol", "assigned")})
                self.assertEqual(unavailable("mine", include_rejected=True), legacy | {("same", "blocked"), ("same", "rejected")})
            finally:
                os.chdir(previous)

    def test_float_constant_feature_separates_stack_loads(self):
        root = Path(__file__).resolve().parents[2]
        with tempfile.TemporaryDirectory(dir=root / "build", prefix="test-features-") as temp:
            path = Path(temp) / "func.s"
            for instruction, expected in (("lwc1 $f0, 4($sp)", False), ("lwc1 $f0, %lo(D_80001000)($at)", True)):
                path.write_text("/* 000000 80000000 00000000 */ " + instruction + "\n")
                self.assertEqual(features.scan(path)["float_const"], expected)
            path.write_text(".section .late_rodata\n.float 1.25\n")
            self.assertTrue(features.scan(path)["float_const"])


if __name__ == "__main__":
    unittest.main()
