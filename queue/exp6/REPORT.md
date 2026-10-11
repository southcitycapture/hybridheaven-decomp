# exp6: does a condensed IDO-learnings note help Haiku?

100 tried-but-unmatched easy/medium functions (not in exp5). Both arms: Haiku, 10 checks, in-file check, from the
same previous attempt; only `exp6_learn` got `tools/swarm/learnings_note.md` (~25 IDO 7.1 rules condensed from
cdlewis's Snowboard Kids DECOMPILATION_LEARNINGS.md, about 500 tokens).

| Arm | Matched | Cost (API-equiv.) | Median turns |
|---|---|---|---|
| with learnings | 15 | $2.24 | 12 |
| plain | 14 | $2.03 | 12 |

14 matched in both arms, 1 only with the note. No measurable effect; 10 new functions landed.

## The pattern across exp4-exp6

Three prompt-side additions, each tested A/B on 56-100 functions, all within noise:
- Haiku-written brief for Sonnet (exp4): 8 vs 10
- matched look-alike functions as examples (exp5): 36 vs 34 (mostly ignored)
- condensed IDO rules (exp6): 15 vs 14

What did move results was on the tooling side: the in-file `./check` (cloud kit 2 landed 65 % vs 32 %), the
model-free reconcile pass (307 functions), the permuter triage (68 % vs 22 % win rates by verdict), and escalating to
Sonnet. For a given model, extra text in the prompt changes little; better feedback from `./check`, better routing,
and fixing the build itself change a lot.
