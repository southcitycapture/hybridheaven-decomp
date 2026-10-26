"""Task 5 dry run and one-short inventory; writes docs/sol/task5-picker.md.

Run progress.py first. This reads the current queue/ledger and never opens a
worker batch, so generating the analysis cannot claim functions in another lane.
"""
import collections
import datetime
import json
from pathlib import Path
import subprocess

import features
import pick
from pick_filters import rejected, unavailable
from pick_finish import ASM, expected_complete, finish_profiles, finish_shares


def main():
    rows, by, reg = pick.load()
    feats = features.features()
    report = json.loads(Path("build/progress/report.json").read_text())
    sources = {u["name"]: Path("src/" + u["name"] + ".c").read_text()
               for u in report["units"] if u.get("functions")}
    profiles = finish_profiles(report, sources.__getitem__)
    shares = finish_shares(profiles)
    profile_by_name = {p.name: p for p in profiles}
    stats, fails = pick.model_stats(by, feats, "haiku")
    propagation = pick.prop_rate()
    excluded = unavailable("task5_analysis", 12, include_rejected=True)
    rejected_keys = rejected()
    dispatchable, _ = pick.rank(rows, by, reg, feats, stats, fails, propagation, excluded=excluded, allow_jt=True)
    eligibility = ("**No currently dispatchable picks survive all exclusions.** A bonus cannot override this result. "
                   if not dispatchable else "**%d dispatchable candidates survive all exclusions.** " % len(dispatchable))
    ranked = {}
    lines = ["# Task 5: picker dry run and one-short inventory", "",
             "Generated %s from `%s` plus Task 5 working changes." %
             (datetime.datetime.now(datetime.timezone.utc).isoformat(timespec="seconds"),
              subprocess.check_output(["git", "rev-parse", "--short", "HEAD"], text=True).strip()), "",
             "Reproduce: `.venv/bin/python tools/hh/progress.py`, then "
             "`.venv/bin/python tools/hh/pick_finish_report.py` (project toolchain on PATH).", "",
             "## Method", "",
             "Top 40 scoring preview, `--kind all --allow-switch --model haiku --max-tries 3`. "
             "The preview retains the legacy raw candidate pool to make 40-row comparisons "
             "possible; each row explicitly marks its dispatch exclusion. This calls the pure "
             "ranking function, not the dispatch CLI. The separate dispatch check below applies "
             "`--loop-eligible --hold-hours 12` for both scores. Haiku is "
             "intentional: the current loop invokes the picker's default Haiku statistical model "
             "even though its worker model is Sonnet. No workers or model requests were run.", "",
             "`score = P * (matched_payoff + finish_bonus * finish_credit) / cost`. "
             "Finish credit is the file's objdiff `total_code / remaining_functions`, "
             "including propagated credits at the existing %.6f rate. Existing "
             "matched-payoff bytes, probabilities, failure decay and costs are retained." % propagation, "",
             "Expected fully-linked bytes below are **new completions**, not fractional credit: "
             "every remaining function in a file must be covered by the list. Independent "
             "attempt probabilities are multiplied; copies in one fingerprint group share "
             "one agent success, with independent conditional propagation. These are model "
             "estimates, conditional on accepted in-file matches leaving no new asm padding/rodata.", "",
             "Files with nonfunction asm, missing diff entries or mismatching existing C "
             "receive no finish credit. The hypothetical final state is checked with "
             "`progress_code.unit_complete`, the exact predicate used by progress.py.", "",
             "## Dispatch eligibility", "",
              eligibility + "The CLI automatically applies all loop exclusions when "
             "the bonus is nonzero; `--finish-bonus 0 --loop-eligible` allows a like-for-like "
             "baseline. Default 0 without that flag retains the legacy raw ranking.", "",
             "| Candidate pool | Candidates |", "|---|---:|"]
    for label, exclusions in (("Legacy raw pool", set()), ("After blocklist/rejections", rejected_keys),
                              ("After held/strong-model exclusions", unavailable("task5_analysis", 12)),
                              ("After all exclusions", excluded)):
        candidates, _ = pick.rank(rows, by, reg, feats, stats, fails, propagation, excluded=exclusions, allow_jt=True)
        lines.append("| %s | %d |" % (label, len(candidates)))
    lines += ["", "| Dispatch bonus | Picks | Expected matched bytes | Expected fully-linked bytes |",
              "|---:|---:|---:|---:|"]
    for bonus in (0, .25):
        candidates, groups = pick.rank(rows, by, reg, feats, stats, fails, propagation, excluded=excluded,
                                      shares=shares, bonus=bonus, allow_jt=True)
        selected = candidates[:40]
        lines.append("| %g | %d | %.2f | %.2f |" % (bonus, len(selected), sum(x[3] * x[4] for x in selected),
                                                 expected_complete(selected, groups, profiles, propagation)))
    lines += ["", "## Scoring-only bonus sweep (40 rows each; excluded work is not dispatchable)", "",
             "| finish_bonus | picks | Expected matched bytes | Expected fully-linked bytes | Expected amortized finish credit | API-equivalent cost |",
             "|---:|---:|---:|---:|---:|---:|"]
    for bonus in (0, .1, .25, .5, 1, 2, 4):
        picks, groups = pick.rank(rows, by, reg, feats, stats, fails, propagation, bonus=bonus,
                                  shares=shares, allow_jt=True)
        chosen = picks[:40]
        ranked[bonus] = chosen
        lines.append("| %g | %d | %.2f | %.2f | %.2f | $%.4f |" %
                     (bonus, len(chosen), sum(x[3] * x[4] for x in chosen),
                      expected_complete(chosen, groups, profiles, propagation),
                      sum(x[4] * x[7] for x in chosen), sum(x[5] for x in chosen)))
    for bonus in (0, .25):
        chosen = ranked[bonus]
        lines += ["", "## Top 40 scoring preview: finish_bonus=%g" % bonus, "",
                  "| # | Function | Source file | Kind | Size | Difficulty | P | Expected matched bytes incl. copies | Finish credit | Score/$ | Dispatch exclusion |",
                  "|---:|---|---|---|---:|---:|---:|---:|---:|---:|---|"]
        for index, (sc, kind, r, pay, probability, cost, copies, finish) in enumerate(chosen, 1):
            key = (r["func"], r["segment"])
            status = "; ".join(label for label, present in (("rejected/blocklisted", key in rejected_keys),
                                                         ("held/strong-model tried", key in excluded - rejected_keys)) if present) or "—"
            lines.append("| %d | `%s` | `%s/%s` | %s | %s | %s | %.4f | %.2f | %.2f | %.2f | %s |" %
                         (index, r["func"], r["segment"], r["file"], kind, r["size"], r["difficulty"], probability,
                          pay * probability, finish, sc, status))
    inventory = []
    counts = collections.Counter()
    ro_segs = set(Path("tools/hh/rodata_segments.txt").read_text().split())
    for unit in report["units"]:
        m = unit["measures"]
        if int(m.get("total_functions", 0)) - int(m.get("matched_functions", 0)) != 1:
            continue
        missing = [f for f in unit.get("functions", []) if f.get("fuzzy_match_percent") != 100.0]
        assert len(missing) == 1, unit["name"]
        f = missing[0]
        segment, cfile = unit["name"].split("/")
        key = (segment, f["name"])
        r = by.get(key, {})
        feature = feats.get(key, {})
        main_segment = segment == "main"
        jt, floating = bool(feature.get("jtbl")), bool(feature.get("float_const"))
        source = sources[unit["name"]]
        residual = [Path(path).name for path in ASM.findall(source) if Path(path).name != f["name"] + ".s"]
        reasons = []
        if residual: reasons.append("asm: " + ", ".join(residual))
        if unit["name"] not in profile_by_name and not residual: reasons.append("existing C mismatch/no function placeholder")
        if (f["name"], segment) in rejected_keys: reasons.append("rejected/blocklisted")
        elif (f["name"], segment) in excluded: reasons.append("held/strong-model tried")
        if feature.get("nonc"): reasons.append("non-C instructions")
        if fails[r.get("fp")] > 3: reasons.append(">3 failed attempts")
        if jt and segment not in ro_segs: reasons.append("switch excluded: old rodata layout")
        counts["main" if main_segment else "overlay"] += 1
        counts["jtbl"] += jt
        counts["float"] += floating
        counts["old_overlay_switch"] += not main_segment and jt and segment not in ro_segs
        counts["old_overlay_float"] += not main_segment and floating and segment not in ro_segs
        counts["old_overlay_either"] += not main_segment and (floating or jt) and segment not in ro_segs
        counts["finish_eligible"] += unit["name"] in profile_by_name
        counts["residual_asm"] += bool(residual)
        counts["c_mismatch"] += unit["name"] not in profile_by_name and not residual
        inventory.append((unit["name"], f["name"], f.get("size", r.get("size", "?")),
                          m["total_code"], "main" if main_segment else "overlay", "yes" if jt else "no",
                          "yes" if floating else "no", r.get("float_ops", "?"),
                          "yes" if unit["name"] in profile_by_name else "no", "; ".join(reasons) or "—"))
    lines += ["", "## One-short files: %d" % len(inventory), "",
              "Main: %d; overlays: %d. Jump-table/switch: %d. Float-constant/named-FP-load flag: %d. "
              "Conservatively finish-credit eligible: %d; residual nonfunction asm: %d; "
              "existing C mismatch/no placeholder: %d." %
              (counts["main"], counts["overlay"], counts["jtbl"], counts["float"], counts["finish_eligible"],
               counts["residual_asm"], counts["c_mismatch"]), "",
              "Old-layout overlay switches definitely excluded by the picker: **%d**. "
              "Old-layout overlay float-constant/named-FP-load candidates: **%d**. "
              "Union: **%d**. The float flag includes `.float`/`.double` directives or "
              "`lwc1`/`ldc1` from address-named `D_...` symbols. Named loads can reference "
              "mutable globals, and workers can read old constants by name, so this is a "
              "layout-sensitive **candidate count**, not proof that all float-flagged functions "
              "are blocked. Switches are the definite old-layout blocker. `float_ops` is "
              "the queue's broader FP-instruction count. Both flags come from features.py; "
              "neither changes the picker's existing buildability rule." %
              (counts["old_overlay_switch"], counts["old_overlay_float"], counts["old_overlay_either"]), "",
              "Size is the last function's target bytes; file code is the full objdiff code "
               "denominator used for completion credit. All one-short files are listed, including "
              "already-C mismatches and files that still need nonfunction asm removal.", "",
              "| Source file | Last function | Size | File code | Location | Switch | Float const/load | float_ops | Finish eligible | Other blockers/status |",
              "|---|---|---:|---:|---|---|---|---:|---|---|"]
    for values in sorted(inventory):
        lines.append("| `%s` | `%s` | %s | %s | %s | %s | %s | %s | %s | %s |" % values)
    output = Path("docs/sol/task5-picker.md")
    output.write_text("\n".join(lines) + "\n")
    print("wrote", output)
    print(dict(counts))
    start = lines.index("## Scoring-only bonus sweep (40 rows each; excluded work is not dispatchable)")
    print("\n".join(lines[start:start + 11]))


if __name__ == "__main__":
    main()
