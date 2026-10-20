"""Write a self-contained snapshot of the live worker view (tools/swarm/live.py) for publishing as an artifact.

    .venv/bin/python tools/swarm/live_snapshot.py OUT.html

Same data as the LAN page at that moment, baked into the page (an artifact can't reach this machine), so it is
viewable from anywhere; it shows when it was taken.
"""
import html, json, os, sys, time

sys.path.insert(0, os.path.dirname(__file__))
import live  # noqa: E402  (chdirs to the repo)

s = live.status(); s["recent"] = live.recent_matches(30)
e = html.escape


def dur(x):
    if x is None: return ""
    return "%ds" % x if x < 60 else "%dm %02ds" % (x // 60, x % 60) if x < 3600 else "%dh %02dm" % (x // 3600, x % 3600 // 60)


def lane(l):
    k = {"Sonnet": "sonnet", "Haiku": "haiku", "Opus": "opus", "GPT-6.1 Sol": "sol", "DeepSeek (free)": "ds"}.get(l, "other")
    return '<span class="lane %s">%s</span>' % (k, e(l))


p = s["progress"] or {}; m = s["meters"] or {}
counts = {}
for w in s["workers"]: counts[w["lane"]] = counts.get(w["lane"], 0) + 1
wk, fv = m.get("weekly"), m.get("five")
tone = lambda v: "bad" if (v or 0) >= 90 else "warn" if (v or 0) >= 75 else ""
workers = "".join(
    "<tr><td>%s</td><td><code>%s</code> <span class=muted>%s</span></td><td class=muted>%s</td><td class=n>%s</td>"
    "<td class=n>%s</td><td>%s</td></tr>" % (lane(w["lane"]), e(w["func"]), e(w["seg"]), e(w["batch"]), dur(w["secs"]),
                                             w["checks"] or "", '<span class=ok>MATCH</span>' if w["last"] == "MATCH" else e(w["last"] or ""))
    for w in s["workers"]) or '<tr><td colspan=6 class=muted>No workers running at this moment.</td></tr>'
batches = "".join(
    "<tr><td><code>%s</code></td><td>%s</td><td class=muted>%s</td><td class='n ok'>%d</td><td class=n>%d</td>"
    "<td class=n>%d</td><td class=n>%s</td></tr>" % (e(b["batch"]), lane(b["lane"]), e(b["state"]), b["match"], b["fail"],
                                                    max(0, b["total"] - b["match"] - b["fail"]), "" if b["rate"] is None else "%d%%" % b["rate"])
    for b in s["batches"])
recent = "".join("<li>%s <code>%s</code> <span class=muted>%s · %s</span></li>" % (lane(r["lane"]), e(r["func"]), e(r["seg"]), e(r["batch"]))
                 for r in s["recent"])
chips = "".join("<span class=chip>%s %d working</span>" % (lane(l), n) for l, n in sorted(counts.items())) or "<span class=muted>none</span>"
cool = "".join("<span class=chip>%s <span class=muted>since %s</span></span>" % (e(c["model"]), e(c["since"][5:16].replace("T", " ")))
               for c in s["cooldowns"]) or "<span class=muted>none</span>"
total_matches = sum(b["match"] for b in s["batches"])

page = """<title>Hybrid Heaven Live</title>
<link rel="preconnect" href="https://fonts.googleapis.com"><link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Archivo:wdth,wght@62..125,400..800&family=IBM+Plex+Mono:wght@400;600&display=swap">
<style>
/* layout: one header strip, three summary panels, then the worker, batch and match tables. Single dark look, after the
   Hybrid Heaven box art: midnight navy, icy blue accent, tall condensed caps. */
:root { color-scheme: dark;
  --bg: #0b1222; --panel: #111a2e; --line: #22304c; --ink: #e6eefb; --muted: #8fa0bd; --accent: #9fd8ff;
  --ok: #5fd39b; --warn: #f0b35a; --bad: #ff7a7a; --track: #1b2740;
  --sonnet: #c9a4ff; --haiku: #7ee0c3; --opus: #ffb38a; --sol: #9fd8ff; --ds: #f5d76e; --other: #8fa0bd;
  --display: "Archivo", "Arial Narrow", system-ui, sans-serif; --body: "Archivo", system-ui, sans-serif;
  --mono: "IBM Plex Mono", ui-monospace, Menlo, monospace; }
* { box-sizing: border-box; }
body { background: var(--bg); color: var(--ink); font: 14px/1.45 var(--body); padding-inline: 16px; padding-block: 0 32px; }
header { display: flex; flex-wrap: wrap; align-items: baseline; gap: 4px 16px; padding-block: 18px 14px; border-bottom: 1px solid var(--line); }
h1 { margin: 0; font: 800 26px/1 var(--display); font-stretch: 68%; letter-spacing: .05em; text-transform: uppercase; text-wrap: balance; }
h1 b { color: var(--accent); text-shadow: 0 0 12px color-mix(in oklab, var(--accent) 45%, transparent); }
.muted { color: var(--muted); }
.wrap { display: grid; gap: 14px; padding-block: 14px; grid-template-columns: repeat(auto-fit, minmax(min(300px, 100%), 1fr)); }
section { background: var(--panel); border: 1px solid var(--line); border-radius: 8px; padding: 12px 14px; min-width: 0; }
section.wide { grid-column: 1 / -1; }
h2 { margin: 0 0 10px; font: 600 11.5px/1.2 var(--body); letter-spacing: .12em; text-transform: uppercase; color: var(--muted); }
.big { font: 800 32px/1.05 var(--display); font-stretch: 75%; font-variant-numeric: tabular-nums; }
.bar { height: 8px; background: var(--track); border-radius: 4px; overflow: hidden; margin: 6px 0 4px; }
.bar i { display: block; height: 100%; background: var(--accent); }
.bar.warn i { background: var(--warn); } .bar.bad i { background: var(--bad); }
.two { display: grid; grid-template-columns: 1fr 1fr; gap: 12px; }
.scroll { overflow-x: auto; }
table { width: 100%; border-collapse: collapse; font-variant-numeric: tabular-nums; }
th, td { text-align: left; padding: 5px 6px; border-bottom: 1px solid var(--line); white-space: nowrap; }
th { color: var(--muted); font-weight: 500; font-size: 12px; }
.n { text-align: right; }
code { font: 12.5px var(--mono); }
.ok { color: var(--ok); font-weight: 600; }
.lane { display: inline-block; padding: 1px 8px; border-radius: 10px; font: 600 12px/1.5 var(--body); color: var(--bg); background: var(--other); }
.lane.sonnet { background: var(--sonnet); } .lane.haiku { background: var(--haiku); } .lane.opus { background: var(--opus); }
.lane.sol { background: var(--sol); } .lane.ds { background: var(--ds); }
.chips { display: flex; flex-wrap: wrap; gap: 6px; }
.chip { background: var(--track); border: 1px solid var(--line); border-radius: 6px; padding: 3px 8px; font-size: 12.5px; }
ul.feed { list-style: none; margin: 0; padding: 0; columns: 2 280px; column-gap: 24px; }
ul.feed li { padding: 4px 0; border-bottom: 1px solid var(--line); break-inside: avoid; display: flex; gap: 8px; align-items: center; }
</style>
<header>
  <h1>Hybrid Heaven <b>Live</b></h1>
  <span class="muted">Swarmer · snapshot taken __NOW__ · refreshed when you ask</span>
  <span class="muted">__LOOP__</span>
</header>
<div class="wrap">
  <section><h2>Decomp progress</h2>
    <div class="big">__PCT__</div><div class="bar"><i style="width:__PCTW__%"></i></div>
    <div class="muted">__PTEXT__</div></section>
  <section><h2>Claude meters</h2><div class="two">
    <div><div class="muted">Weekly</div><div class="big">__WK__</div><div class="bar __WKT__"><i style="width:__WKW__%"></i></div><div class="muted">__RESET__</div></div>
    <div><div class="muted">5-hour window</div><div class="big">__FV__</div><div class="bar __FVT__"><i style="width:__FVW__%"></i></div></div>
  </div></section>
  <section><h2>Lanes now</h2><div class="chips">__CHIPS__</div>
    <h2 style="margin-top:14px">Cooldowns</h2><div class="chips">__COOL__</div></section>
  <section class="wide"><h2>Workers running · __NW__</h2><div class="scroll"><table>
    <thead><tr><th>Lane</th><th>Function</th><th>Batch</th><th class="n">Running</th><th class="n">Checks</th><th>Last check</th></tr></thead>
    <tbody>__WORKERS__</tbody></table></div></section>
  <section class="wide"><h2>Batches in the last 24 hours · __TM__ matches</h2><div class="scroll"><table>
    <thead><tr><th>Batch</th><th>Lane</th><th>State</th><th class="n">Matches</th><th class="n">Failed</th><th class="n">Left</th><th class="n">Hit rate</th></tr></thead>
    <tbody>__BATCHES__</tbody></table></div></section>
  <section class="wide"><h2>Latest matches</h2><ul class="feed">__RECENT__</ul></section>
</div>
"""
loop = "Claude loop paused" if s["paused"] else next((l.lstrip("-* ").strip() for l in s["loop"] if l.lstrip("-* ").lower().startswith(("running", "idle", "waiting"))), "")
rep = {"__NOW__": e(s["now"]), "__LOOP__": e(loop),
       "__PCT__": "%.3f%%" % p["pct"] if p else "–", "__PCTW__": str(p.get("pct", 0)),
       "__PTEXT__": "{:,} / {:,} functions".format(p["done"], p["total"]) if p else "",
       "__WK__": "–" if wk is None else "%d%%" % wk, "__WKW__": str(wk or 0), "__WKT__": tone(wk),
       "__FV__": "–" if fv is None else "%d%%" % fv, "__FVW__": str(fv or 0), "__FVT__": tone(fv),
       "__RESET__": "resets " + e(m["reset"].replace("T", " ")) if m.get("reset") else "",
       "__CHIPS__": chips, "__COOL__": cool, "__NW__": str(len(s["workers"])), "__WORKERS__": workers,
       "__TM__": "{:,}".format(total_matches), "__BATCHES__": batches, "__RECENT__": recent}
for k, v in rep.items(): page = page.replace(k, v)
open(sys.argv[1], "w").write(page)
print("wrote", sys.argv[1], len(page), "bytes;", len(s["workers"]), "workers,", len(s["batches"]), "batches")
