# exp4: does a Haiku brief help Sonnet? (cloud, script harness)

The 56 hard functions a first Haiku run didn't match (same set as exp2). Run in a cloud session on cloud-session
credits, with the new script harness: one lead session (Sonnet) ran `cloud/run_all.sh` once, which launched headless
`claude -p` workers 8 at a time; results came back as script-printed, checksummed base64 chunks read straight from
the session's command output (byte-exact, sha256 verified).

- **brief:** Haiku, 3 checks, writes `brief.md` (signature, structs/offsets, callees, globals, control flow, and why
  the previous attempt doesn't match). It does not try to finish the match.
- **base:** Sonnet, 15 checks, in-file check, starting from the first Haiku attempt (as exp1 arm B).
- **withbrief:** the same, plus the Haiku brief.

| Arm | Matched | Cost | Cost per run | $ per match | Median turns | Median checks |
|---|---|---|---|---|---|---|
| Haiku brief (56 runs) | n/a | $2.62 | $0.047 | n/a | 12 | 1 |
| Sonnet, base | **10 / 56** | $21.61 | $0.386 | $2.16 | 37 | 13 |
| Sonnet + brief | **8 / 56** (+1 alone) | $22.44 (+$2.62 briefs) | $0.401 | $3.13 | 35.5 | 12.5 |

Overlap: 6 matched by both, 4 only by base, 2 only with the brief; 12 in the union. exp1's arm B (the same setup on
the subscription, a day earlier) matched 12; base and exp1 arm B share 7, and all three Sonnet runs together reach 16.

## Findings

- **The brief didn't help.** 8 vs 10 is within noise either way, it didn't shorten Sonnet's work (same turns and
  checks), and it costs ~12 % more. Sonnet already reads the asm itself; a second-hand summary adds little.
- **Sonnet runs are noisy:** two independent runs of the same setup overlap only 7 of 12; a second Sonnet run on the
  misses would add about as much as the first one's margin over Haiku. Best-of-2 Sonnet beats any brief.
- **The script harness works:** the lead cost **$1.10** for the whole run (vs $43.51 for kit 2's subagent lead), and
  the results arrived byte-exact. Workers ran as `claude -p` in the cloud container.
- Landed: 3 new functions (the rest were already matched by earlier runs on this set).
