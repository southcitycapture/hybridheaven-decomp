"""Conservative completion credit, using the same final predicate as progress.py."""
import copy
from dataclasses import dataclass
import re

from progress_code import unit_complete


@dataclass
class FinishFile:
    name: str
    code: int
    remaining: tuple                 # (segment, function) keys


ASM = re.compile(r'^\s*#pragma GLOBAL_ASM\("([^"\n]+)"\)[ \t]*$', re.M)


def finish_file(unit, source):
    """Credit only files whose remaining function pragmas are the ONLY blockers.

    Padding, retained rodata, INCLUDE_ASM, missing diff entries, and already-C
    functions that do not match cannot be wished away by matching a new pick.
    """
    functions = unit.get("functions", [])
    remaining = [f["name"] for f in functions if f.get("fuzzy_match_percent") != 100.0]
    if not remaining:
        return None
    segment, cfile = unit["name"].split("/")
    removed = []

    def replace(match):
        for name in remaining:
            if match[1] == "asm/nonmatchings/%s/%s/%s.s" % (segment, cfile, name):
                removed.append(name)
                return ""
        return match[0]

    c_only = ASM.sub(replace, source)
    if sorted(removed) != sorted(remaining):
        return None
    hypothetical = copy.deepcopy(unit)
    for f in hypothetical["functions"]:
        f["fuzzy_match_percent"] = 100.0
    hypothetical["measures"]["matched_functions"] = len(functions)
    if not unit_complete(hypothetical, c_only):
        return None
    return FinishFile(unit["name"], int(unit["measures"].get("total_code", 0)),
                      tuple((segment, name) for name in remaining))


def finish_profiles(report, read_source):
    profiles = []
    for unit in report["units"]:
        if not unit.get("functions"):
            continue                    # data-only units have no C source
        profile = finish_file(unit, read_source(unit["name"]))
        if profile:
            profiles.append(profile)
    return profiles


def finish_shares(profiles):
    return {key: profile.code / len(profile.remaining)
            for profile in profiles for key in profile.remaining}


def score(probability, payoff, cost, finish, bonus):
    # Preserve the exact legacy arithmetic when disabled (including tie order).
    return probability * (payoff + bonus * finish) / cost if bonus else probability * payoff / cost


def expected_complete(chosen, groups, profiles, propagation):
    """Expected NEW fully-linked code, not the amortized scoring credit.

    A file earns bytes only when ALL remaining functions are covered. A fresh
    group's success is shared by its propagated copies; propagation events are
    modeled independently conditional on that success. Different agent attempts
    are independent, as in the picker's measured matched-byte expectation.
    """
    coverage = {}
    for attempt, (_, kind, row, _, probability, _, _, _) in enumerate(chosen):
        representative = (row["segment"], row["func"])
        coverage[representative] = (attempt, probability, 1.0)
        if kind == "fresh":
            for copy_row in groups[row["fp"]]:
                key = (copy_row["segment"], copy_row["func"])
                if key != representative:
                    coverage[key] = (attempt, probability, propagation)
    total = 0.0
    for profile in profiles:
        events = {}
        for key in profile.remaining:
            if key not in coverage:
                break
            attempt, probability, prop = coverage[key]
            events[attempt] = events.get(attempt, probability) * prop
        else:
            probability = 1.0
            for event in events.values():
                probability *= event
            total += probability * profile.code
    return total
