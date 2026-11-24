"""readme_effort.py (11-24, Zach: a chart of which models did the work plus how hard it was). Model usage + difficulty: runs/matches, the size of functions each model matched (median + biggest, log scale),
and how many earlier failed runs (any model) the functions it matched had already absorbed (median)."""
import json, glob, collections, statistics, os, sys, math
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__))); import readme_charts as RC
FAM = [("haiku", "Haiku 5.5", "claude"), ("sonnet", "Sonnet 5.5", "claude"), ("opus", "Opus 5.5", "claude"),
       ("fable", "Fable 5.2", "claude"), ("terra", "GPT-6.1 Terra", "openai"), ("astra", "GPT-6.2 Astra", "openai"),
       ("sol", "GPT Sol", "openai"), ("deepseek", "DeepSeek v4.1", "free"), ("qwen", "Qwen 3.8 (local)", "free"),
       ("strata", "Qwen 3.8 (local)", "free"), ("nemotron", "Nemotron 3.5", "free")]


def effort(path):
    rep = json.load(open(os.path.join(RC.HH, 'build/progress/report.json'))); size = {}
    for u in rep['units']:
        for f in u.get('functions', []): size[(u['name'].split('/')[0], f['name'])] = int(f.get('size', 0))
    rows = []
    for p in glob.glob(os.path.join(RC.HH, 'queue/*/results.jsonl')):
        t = os.path.getmtime(p)
        for i, l in enumerate(open(p)):
            try: rows.append((t, i, json.loads(l)))
            except Exception: pass
    rows.sort(key=lambda x: (x[0], x[1]))
    runs, hits, col = collections.Counter(), collections.Counter(), {}
    msize, prior, fails = collections.defaultdict(list), collections.defaultdict(list), collections.Counter()
    for t, i, r in rows:
        k = (r.get('segment'), r.get('func')); m = (r.get('model') or '').lower()
        fam = next((n for key, n, c in FAM if key in m), None)
        if fam: col[fam] = next(c for key, n, c in FAM if n == fam); runs[fam] += 1
        if r.get('verified') == 'MATCH':
            if fam:
                hits[fam] += 1
                if k in size: msize[fam].append(size[k]); prior[fam].append(fails[k])
        else: fails[k] += 1
    names = sorted(runs, key=lambda k: -runs[k])
    W, lh, top, nameW = 960, 40, 92, 150
    c1x, c1w = nameW + 10, 300            # runs / matches
    c2x, c2w = c1x + c1w + 30, 250        # match size (log)
    c3x, c3w = c2x + c2w + 30, 170        # failed tries before
    H = top + lh * len(names) + 56
    mx = max(runs.values()); LO, HI = math.log2(64), math.log2(16384)
    SX = lambda b: c2x + c2w * (math.log2(max(64, min(16384, b))) - LO) / (HI - LO)
    PX = lambda v: c3x + c3w * min(v, 10) / 10
    b = ['<text x="16" y="28" font-size="17" font-weight="600" fill="%s">Which models did the work, and how hard it was</text>' % RC.INK,
         '<text x="16" y="46" font-size="11" fill="%s">%s model runs. Difficulty = size of the functions each model matched, and how many failed runs came before.</text>'
         % (RC.MUTED, format(sum(runs.values()), ","))]
    for x, lab in ((c1x, "RUNS  (bright = matched)"), (c2x, "TYPICAL MATCH SIZE  (diamond = biggest)"), (c3x, "FAILED TRIES BEFORE")):
        b.append('<text x="%d" y="%d" font-size="10" fill="%s" letter-spacing="1">%s</text>' % (x, top - 18, RC.GLOW, lab))
    yb = top + lh * len(names) - 10
    for v in (64, 256, 1024, 4096, 16384):
        b.append('<line x1="%.1f" y1="%d" x2="%.1f" y2="%d" stroke="%s"/>' % (SX(v), top - 8, SX(v), yb, RC.GRID))
        b.append('<text x="%.1f" y="%d" font-size="10" fill="%s" text-anchor="middle">%s</text>' % (SX(v), yb + 14, RC.MUTED, "%dB" % v if v < 1024 else "%dKB" % (v // 1024)))
    for v in (0, 5, 10):
        b.append('<line x1="%.1f" y1="%d" x2="%.1f" y2="%d" stroke="%s"/>' % (PX(v), top - 8, PX(v), yb, RC.GRID))
        b.append('<text x="%.1f" y="%d" font-size="10" fill="%s" text-anchor="middle">%s</text>' % (PX(v), yb + 14, RC.MUTED, "10+" if v == 10 else v))
    b.append('<text x="%d" y="%d" font-size="10" fill="%s">%s runs max</text>' % (c1x, yb + 14, RC.MUTED, format(mx, ",")))
    for i, n in enumerate(names):
        y = top + i * lh; c = RC.COLORS[col[n]]; r_, h_ = runs[n], hits[n]
        if i % 2 == 0: b.append('<rect x="8" y="%d" width="%d" height="%d" fill="#ffffff" opacity="0.025"/>' % (y - 8, W - 16, lh))
        b.append('<text x="%d" y="%d" font-size="13" fill="%s" text-anchor="end">%s</text>' % (nameW, y + 12, RC.INK, RC.esc(n)))
        bw = c1w * 0.5
        b.append('<rect x="%d" y="%d" width="%.1f" height="14" rx="2" fill="%s" opacity="0.3"/>' % (c1x, y + 1, max(2, bw * r_ / mx), c))
        b.append('<rect x="%d" y="%d" width="%.1f" height="14" rx="2" fill="%s"/>' % (c1x, y + 1, max(1, bw * h_ / mx), c))
        b.append('<text x="%.1f" y="%d" font-size="11" fill="%s">%s <tspan fill="%s">/ %s (%d%%)</tspan></text>'
                 % (c1x + max(2, bw * r_ / mx) + 5, y + 12, RC.INK, format(r_, ","), RC.MUTED, format(h_, ","), round(100.0 * h_ / r_)))
        s = msize.get(n)
        if s:
            med, big = statistics.median(s), max(s)
            b.append('<line x1="%.1f" y1="%d" x2="%.1f" y2="%d" stroke="%s" stroke-opacity="0.45" stroke-width="2"/>' % (SX(med), y + 8, SX(big), y + 8, c))
            b.append('<rect x="%d" y="%d" width="%.1f" height="14" rx="2" fill="%s"/>' % (c2x, y + 1, max(2, SX(med) - c2x), c))
            b.append('<path d="M%.1f,%d l6,6 l-6,6 l-6,-6 z" fill="%s" stroke="%s"/>' % (SX(big), y + 2, RC.BG, c))
            lab = ("%d B" % med) if med < 1024 else ("%.1f KB" % (med / 1024))
            b.append('<text x="%d" y="%d" font-size="10" fill="%s" text-anchor="end">%s</text>' % (c2x - 4, y + 12, RC.MUTED, lab))
            pm = statistics.median(prior[n])
            b.append('<rect x="%d" y="%d" width="%.1f" height="14" rx="2" fill="%s"/>' % (c3x, y + 1, max(2, PX(pm) - c3x), c))
            b.append('<text x="%.1f" y="%d" font-size="11" fill="%s">%d</text>' % (PX(pm) + 5, y + 12, RC.INK, pm))
    lx = 16
    for c, lab in (("claude", "Claude"), ("openai", "ChatGPT plan"), ("free", "free / local")):
        b.append('<rect x="%d" y="%d" width="12" height="8" rx="2" fill="%s"/><text x="%d" y="%d" font-size="11" fill="%s">%s</text>'
                 % (lx, H - 20, RC.COLORS[c], lx + 16, H - 12, RC.INK, lab)); lx += 40 + 7 * len(lab)
    b.append('<text x="%d" y="%d" font-size="10" fill="%s" text-anchor="end">tools (unify, permuter, ...) left out: no model</text>' % (W - 16, H - 12, RC.MUTED))
    open(path, 'w').write(RC.svg(W, H, "".join(b), "Which models did the work, and how hard it was"))


if __name__ == "__main__":
    effort(sys.argv[1] if len(sys.argv) > 1 else "docs/img/effort.svg")
