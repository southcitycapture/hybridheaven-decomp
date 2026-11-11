"""Charts for the public README, drawn as plain SVG from the run logs (no plotting library needed).

    python3 tools/hh/readme_charts.py OUTDIR     writes progress.svg, models.svg, tooling.svg; prints a summary line

progress.svg  share of code matched over time (dashboard/history.jsonl)
models.svg    hit rate per model on hard leftovers (queue/<batch>/results.jsonl)
tooling.svg   the same model with an open-ended vs a narrowed task
"""
import datetime as dt, glob, json, os, sys

HH = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "../.."))
TOTAL_CODE = 2818696
INK, MUTED, GRID = "#1f2933", "#6b7785", "#d9dee4"
COLORS = {"claude": "#c96442", "openai": "#3b7ea1", "free": "#6a9a5b", "tool": "#8a6fb3"}


def batch(name, root=HH):
    """(matches, runs) of a batch, or None when its results aren't here."""
    p = os.path.join(root, "queue", name, "results.jsonl")
    if not os.path.exists(p): return None
    rs = []
    for l in open(p):
        try: r = json.loads(l)
        except ValueError: continue
        if r.get("verified") != "ERROR": rs.append(r)
    return (sum(r.get("verified") == "MATCH" for r in rs), len(rs)) if rs else None


def esc(s): return s.replace("&", "&amp;").replace("<", "&lt;")


def svg(w, h, body, title):
    return ('<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 %d %d" width="%d" height="%d" '
            'font-family="-apple-system,Segoe UI,Helvetica,Arial,sans-serif" role="img" aria-label="%s">'
            '<rect width="100%%" height="100%%" fill="#ffffff"/>%s</svg>\n' % (w, h, w, h, esc(title), body))


def bars(title, rows, path, note=""):
    """rows: [(label, matches, runs, color)] -> horizontal bar chart of hit rate."""
    rows = [r for r in rows if r[2]]
    w, lh, top, left, right = 720, 34, 46, 250, 70
    h = top + lh * len(rows) + (34 if note else 18)
    pw = w - left - right
    b = ['<text x="16" y="28" font-size="17" font-weight="600" fill="%s">%s</text>' % (INK, esc(title))]
    for k in range(0, 101, 25):
        x = left + pw * k / 100
        b.append('<line x1="%.1f" y1="%d" x2="%.1f" y2="%d" stroke="%s"/>' % (x, top - 6, x, top + lh * len(rows) - 6, GRID))
        b.append('<text x="%.1f" y="%d" font-size="11" fill="%s" text-anchor="middle">%d%%</text>' % (x, top + lh * len(rows) + 8, MUTED, k))
    for i, (label, m, n, c) in enumerate(rows):
        y = top + i * lh; v = 100.0 * m / n
        b.append('<text x="%d" y="%d" font-size="13" fill="%s" text-anchor="end">%s</text>' % (left - 10, y + 15, INK, esc(label)))
        b.append('<rect x="%d" y="%d" width="%.1f" height="20" rx="3" fill="%s"/>' % (left, y + 1, max(2, pw * v / 100), c))
        b.append('<text x="%.1f" y="%d" font-size="12" fill="%s">%.0f%% <tspan fill="%s">(%d/%d)</tspan></text>'
                 % (left + pw * v / 100 + 6, y + 15, INK, v, MUTED, m, n))
    if note: b.append('<text x="16" y="%d" font-size="11" fill="%s">%s</text>' % (h - 10, MUTED, esc(note)))
    open(path, "w").write(svg(w, h, "".join(b), title))


XMAS, FORECAST = dt.datetime(2026, 12, 25).timestamp(), (90, 93, 96)   # re-estimated 11-11 at 84.2%   # code % by Christmas: low, mid, high (docs/ENDGAME.md)


def progress(path):
    """Code, data and fully linked code over time, with the Christmas forecast band for code."""
    rows = sorted((json.loads(l) for l in open(os.path.join(HH, "dashboard/history.jsonl"))), key=lambda r: r["t"])
    series = [("Code", COLORS["claude"], [(r["t"], 100.0 * r["matched_code"] / r.get("total_code", TOTAL_CODE))
                                           for r in rows if r.get("matched_code")]),
              ("Data", COLORS["openai"], [(r["t"], 100.0 * r["matched_data"] / r["total_data"])
                                          for r in rows if r.get("matched_data") and r.get("total_data")]),
              ("Fully linked", COLORS["tool"], [(r["t"], 100.0 * r["complete_code"] / r["total_code"])
                                                for r in rows if r.get("complete_code") and r.get("total_code")])]
    pts = series[0][2]
    w, h, left, right, top, bottom = 720, 320, 52, 24, 64, 40
    pw, ph = w - left - right, h - top - bottom
    t0, t1, tx = pts[0][0], pts[-1][0], max(XMAS, pts[-1][0])
    X = lambda t: left + pw * (t - t0) / max(1, tx - t0)
    Y = lambda v: top + ph * (1 - v / 100)
    title = "Progress over time"
    b = ['<text x="16" y="28" font-size="17" font-weight="600" fill="%s">%s</text>' % (INK, title)]
    lx = 16
    for name, c, _ in series:
        b.append('<rect x="%d" y="40" width="14" height="4" rx="2" fill="%s"/>' % (lx, c))
        b.append('<text x="%d" y="46" font-size="12" fill="%s">%s</text>' % (lx + 19, INK, name))
        lx += 30 + 7 * len(name)
    for k in range(0, 101, 25):
        b.append('<line x1="%d" y1="%.1f" x2="%d" y2="%.1f" stroke="%s"/>' % (left, Y(k), w - right, Y(k), GRID))
        b.append('<text x="%d" y="%.1f" font-size="11" fill="%s" text-anchor="end">%d%%</text>' % (left - 6, Y(k) + 4, MUTED, k))
    day = dt.datetime.utcfromtimestamp(t0).replace(hour=0, minute=0, second=0)
    while day.timestamp() <= tx:
        if day.timestamp() >= t0 and day.weekday() == 0 and X(XMAS) - X(day.timestamp()) > 40:
            b.append('<text x="%.1f" y="%d" font-size="11" fill="%s" text-anchor="middle">%s</text>'
                     % (X(day.timestamp()), h - 16, MUTED, day.strftime("%b %d")))
        day += dt.timedelta(days=1)
    v = pts[-1][1]
    if XMAS > t1:   # forecast band from today's code figure to Christmas
        lo, mid, hi = FORECAST
        b.append('<polygon points="%.1f,%.1f %.1f,%.1f %.1f,%.1f" fill="%s" opacity="0.12"/>'
                 % (X(t1), Y(v), X(XMAS), Y(hi), X(XMAS), Y(lo), COLORS["claude"]))
        b.append('<line x1="%.1f" y1="%.1f" x2="%.1f" y2="%.1f" stroke="%s" stroke-width="2" stroke-dasharray="5,4"/>'
                 % (X(t1), Y(v), X(XMAS), Y(mid), COLORS["claude"]))
        b.append('<line x1="%.1f" y1="%d" x2="%.1f" y2="%.1f" stroke="%s" stroke-dasharray="2,3"/>'
                 % (X(XMAS), top - 4, X(XMAS), Y(0), MUTED))
        b.append('<text x="%.1f" y="%d" font-size="11" fill="%s" text-anchor="end">Christmas</text>' % (X(XMAS) - 4, h - 16, MUTED))
        b.append('<text x="%.1f" y="%.1f" font-size="11" fill="%s" text-anchor="end">forecast %d-%d%%</text>'
                 % (X(XMAS) - 6, Y(hi) - 6, MUTED, lo, hi))
    for i, (name, c, sp) in enumerate(series):
        if not sp: continue
        line = " ".join("%.1f,%.1f" % (X(t), Y(u)) for t, u in sp)
        if i == 0:
            b.append('<polygon points="%.1f,%.1f %s %.1f,%.1f" fill="%s" opacity="0.15"/>' % (X(t0), Y(0), line, X(t1), Y(0), c))
        b.append('<polyline points="%s" fill="none" stroke="%s" stroke-width="%s"/>' % (line, c, "2.5" if i == 0 else "2"))
        tl, u = sp[-1]
        b.append('<circle cx="%.1f" cy="%.1f" r="3.5" fill="%s"/>' % (X(tl), Y(u), c))
        if i == 0:   # left of the point, above the line: the forecast starts here
            b.append('<text x="%.1f" y="%.1f" font-size="12" font-weight="600" fill="%s" text-anchor="end">%.1f%%</text>'
                     % (X(tl) - 7, Y(u) - 8, c, u))
        else:
            b.append('<text x="%.1f" y="%.1f" font-size="12" font-weight="600" fill="%s">%.1f%%</text>'
                     % (X(tl) + 7, Y(u) + (4 if i != 1 else -4), c, u))
    open(path, "w").write(svg(w, h, "".join(b), title))
    return v, (t1 - t0) / 86400


def matched(name, root=HH):
    p = os.path.join(root, "queue", name, "results.jsonl")
    if not os.path.exists(p): return set()
    out = set()
    for l in open(p):
        try: r = json.loads(l)
        except ValueError: continue
        if r.get("verified") == "MATCH": out.add((r.get("func"), r.get("segment")))
    return out


def summed(names):
    got = [x for x in (batch(n) for n in names) if x]
    return (sum(m for m, _ in got), sum(n for _, n in got)) if got else None


def main(out):
    os.makedirs(out, exist_ok=True)
    v, days = progress(os.path.join(out, "progress.svg"))
    C, O, F = COLORS["claude"], COLORS["openai"], COLORS["free"]
    model_rows = []
    for label, names, c in [("Claude Opus, near misses", ["opusN", "opusN2"], C),
                            ("Claude Opus, never tried by Opus", ["opusN3"], C),
                            ("Claude Sonnet, near misses", ["nearS"], C),
                            ("Claude Sonnet, small leftovers", ["sday1"], C),
                            ("DeepSeek V4.1 Flash (free tier)", ["ocL_dsf"], F),
                            ("GPT-6.1 Sol, leftovers", ["gptO_sol", "gptP_sol"], O)]:
        got = [x for x in (batch(n) for n in names) if x]
        if got: model_rows.append((label, sum(m for m, _ in got), sum(n for _, n in got), c))
    bars("Hit rate by lane (each lane had its own queue)", model_rows, os.path.join(out, "models.svg"),
         "Queues differ in difficulty, so lanes are not directly comparable: the head-to-head below is the fair comparison.")
    h2h = [("Claude Opus (high)", "abOpus", C), ("Claude Sonnet (high)", "abSonnet", C), ("GPT-6.1 Sol (default)", "abSol", O),
           ("GPT-6.1 Sol (high)", "abSol_high", O), ("GPT-6.1 Sol (max)", "abSol_max", O),
           ("GPT-6.1 Terra (default)", "abTerra", O), ("GPT-6.1 Terra (max)", "abTerra_max", O)]
    rows = [(l, *batch(b), c) for l, b, c in h2h if batch(b)]
    union = set().union(*(matched(b) for _, b, _ in h2h))
    if rows: rows.append(("All models combined", len(union), max(n for _, _, n, _ in rows), COLORS["tool"]))
    bars("Head to head: the same 40 functions, same starting point", rows, os.path.join(out, "headtohead.svg"),
         "Each model started from the best earlier attempt. Different models crack different functions.")
    tool_rows = []
    near = batch("nearS")
    if near: tool_rows.append(("Sonnet, open-ended retry", near[0], near[1], C))
    rf = batch("rfix1", os.path.expanduser("~/work/hh-rodata"))
    if rf: tool_rows.append(("Sonnet, narrowed repair task", rf[0], rf[1], COLORS["tool"]))
    for label, name in [("Opus, without recovered types", "typA"), ("Opus, with recovered types", "typB")]:
        x = batch(name)
        if x: tool_rows.append((label, x[0], x[1], C if name == "typA" else COLORS["tool"]))
    bars("Same model, different framing", tool_rows, os.path.join(out, "tooling.svg"),
         "Narrowing the task helps; adding recovered struct types to the prompt hurt (same 20 functions).")
    big = [(l, *summed(n), c) for l, n, c in [("Opus alone", ["bigA1", "bigA2", "bigA3", "bigA4"], C),
                                               ("Sonnet alone (6 functions)", ["bigB1", "bigB2"], C),
                                               ("Opus lead + Sonnet helpers", ["bigC1", "bigC2", "bigC3", "bigC4"], COLORS["tool"])]
           if summed(n)]
    bars("Big functions (2 KB and up): one lead, many helpers", big, os.path.join(out, "bigfunc.svg"),
         "Opus alone and Opus + Sonnet helpers got the same 22 functions at about the same cost.")
    hp = os.path.join(HH, "queue/localAB/rescored.json")   # 11-11 harness A/B, re-scored with the fixed checker
    if os.path.exists(hp):
        h = json.load(open(hp))
        rows = [("%s (%d min each)" % (k, h[k]["median_min"]), h[k]["matches"], h[k]["runs"], COLORS["tool"] if k == "Pi" else O)
                for k in ("Pi", "OpenCode") if k in h]
        per_h = {k: h[k]["matches"] / (h[k]["runs"] * h[k]["median_min"] / 60.0) for k in ("Pi", "OpenCode") if k in h}
        bars("Same local model, different harness", rows, os.path.join(out, "harness.svg"),
             "Qwen 3.8 Flash on one workstation GPU, same 20 functions. Pi: %.1f matches per GPU-hour, OpenCode: %.1f."
             % (per_h.get("Pi", 0), per_h.get("OpenCode", 0)))
    print("%.1f%% of code after %.0f days" % (v, days))


if __name__ == "__main__":
    main(sys.argv[1] if len(sys.argv) > 1 else "docs/img")
