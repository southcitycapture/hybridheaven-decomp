"""rule_check.py: source-honesty rules for matched functions (11-19). Inspired by the fakematch table in
lemiur/Game-Decompilation-Skill-For-Claude (decomp-code-rules section F); checks written for this codebase.

Checks each registered function's body as it is built (src/, the ROM-checked text; the registry copy can be stale).
HARD rules are compiler-steering tricks: srcbuild add refuses new snippets with them, and landed ones are a repair
queue. SOFT rules are style debt counted separately ("pending"), not refused.

    rule_check.py [--json build/rule_check.json]     summary per rule; rule_check.hits(text) for one snippet
"""
import json, os, re, sys
HH = os.path.normpath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "../.."))

TYPE = r'(?:unsigned\s+|signed\s+)?(?:s8|u8|s16|u16|s32|u32|s64|u64|f32|f64|int|char|short|long|float|double|void|bool)'


def strip(text):
    """remove comments, string and char literals (keep lengths roughly, enough for regexes)"""
    text = re.sub(r'/\*.*?\*/', ' ', text, flags=re.S)
    text = re.sub(r'//[^\n]*', ' ', text)
    text = re.sub(r'"(?:\\.|[^"\\\n])*"', '""', text)
    text = re.sub(r"'(?:\\.|[^'\\\n])+'", "'c'", text)
    return text


def body_of(text):
    """the outermost function body (text between the first '{' after a ')' at top level and its match)"""
    m = re.search(r'\)\s*\{', text)
    if not m: return ""
    i = m.end(); d = 1
    while i < len(text) and d:
        d += (text[i] == '{') - (text[i] == '}'); i += 1
    return text[m.end():i - 1]


def unused_locals(body):
    """locals declared at the top of a block (`T name;`, `T name[N];`) that are never used again, or only written"""
    out = []
    # 11-28 (Fable re-baseline): look behind for the delimiter; consuming it skipped every second adjacent declaration
    for m in re.finditer(r'(?:^|(?<=[;{}]))\s*(?:const\s+|static\s+)?(?:struct\s+\w+\s*\**|%s\s*\**)\s*(\w+)\s*(\[[^\]]*\])?\s*;' % TYPE, body):
        name = m.group(1)
        if name in ('void',): continue
        # a member inside a struct/union body declared in the function is not a local
        depth, j = 0, m.start(1)
        while j > 0:
            j -= 1
            if body[j] == '}': depth += 1
            elif body[j] == '{':
                if depth == 0: break
                depth -= 1
        if j > 0 and re.search(r'\b(?:struct|union)\s*\w*\s*$', body[:j]): continue
        rest = body[m.end():]
        uses = re.findall(r'(?<![\w.>])%s\b(\s*(?:\[[^\]]*\]\s*)*)(\s*[-+*/%%&|^]?=(?!=))?' % re.escape(name), rest)
        if not uses: out.append(name + (" (never used)"))
        elif all(u[1] and u[1].strip() == '=' for u in uses): out.append(name + " (only assigned)")
    return out


def hits(text, whole_body=None):
    """[(rule, kind, detail)] for one function's source text"""
    b = strip(whole_body if whole_body is not None else body_of(text))
    out = []
    def add(rule, kind, detail): out.append((rule, kind, detail))
    for m in re.finditer(r'\bif\s*\((?:[^()]|\([^()]*\))*\)\s*\{\s*\}(?!\s*else)', b): add("empty-if", "hard", m.group(0)[:60])
    for m in re.finditer(r'\belse\s*\{\s*\}', b): add("empty-else", "hard", m.group(0))
    for m in re.finditer(r'(?:^|[;{}])\s*\{\s*\}', b): add("empty-block", "hard", "{ }")
    lines = b.split('\n')
    for i, l in enumerate(lines):
        if re.match(r'^\s*;\s*$', l):
            prev = next((x for x in reversed(lines[:i]) if x.strip()), "")
            if not re.search(r'^\s*(?:while|for)\s*\(.*\)\s*$', prev): add("bare-semicolon", "hard", "line %d" % (i + 1))
    for m in re.finditer(r'(?<![\w.>\]])(\w+)\s*=\s*\1\s*;', b): add("self-assign", "hard", m.group(0))
    for m in re.finditer(r'(?<![\w.>\]])(\w+)\s*=\s*\(\s*\1\s*=', b): add("self-assign", "hard", m.group(0))
    for m in re.finditer(r'[\w)\]]\s*\+\s*0(?![\w.])', b): add("plus-zero", "hard", m.group(0))
    for m in re.finditer(r'[\w)\]]\s*\*\s*1(?![\w.])', b): add("times-one", "hard", m.group(0))
    for m in re.finditer(r'!!\s*[\w(]', b): add("double-not", "hard", m.group(0))
    # `(0, x)`: a comma expression that only burns a constant (not a call's first argument)
    for m in re.finditer(r'(?<![\w\])\s])\(\s*0\s*,', b): add("comma-zero", "hard", m.group(0))
    for m in re.finditer(r'\bvolatile\b', b):
        # hardware register access is legitimate: (volatile u32 *)0xA4xxxxxx / PHYS_TO_K1(...)
        if re.match(r'\s*\w+\s*\*\s*\)\s*(?:\(\s*)?(?:0x[AaBb]|PHYS_TO_K1|K0_TO_K1)', b[m.end():]): continue
        add("volatile-local", "hard", "volatile")
    for m in re.finditer(r'\bregister\b', b): add("register", "hard", "register")
    for m in re.finditer(r'\((\s*%s\s*\**\s*)\)\s*\(\1\)' % TYPE, b): add("same-cast", "hard", m.group(0))
    for n in unused_locals(b): add("unused-local", "hard", n)
    if re.search(r'\bif\s*\(\s*0\s*\)', b): add("if-0", "hard", "if (0)")
    for m in re.finditer(r'\bdo\s*\{', b):
        tail = b[m.end():]
        d = 1; i = 0
        while i < len(tail) and d: d += (tail[i] == '{') - (tail[i] == '}'); i += 1
        if re.match(r'\s*while\s*\(\s*0\s*\)', tail[i:]): add("do-while-0", "soft", "do { } while (0)")
    for m in re.finditer(r'\(\s*(?:u8|s8|char|unsigned\s+char)\s*\*\s*\)\s*[\w>.-]+\s*\)?\s*\+\s*(?:0x[0-9A-Fa-f]+|\d+)', b):
        add("byte-offset", "soft", m.group(0)[:50])
    return out


def main():
    os.chdir(HH); sys.path.insert(0, os.path.join(HH, "tools/hh"))
    import srcbuild
    from collections import Counter, defaultdict
    reg = srcbuild.registry(); srcs = {}
    per_rule, per_kind, rows = Counter(), defaultdict(set), []
    for (seg, fn) in sorted(reg):
        cf = srcbuild.file_of(seg, fn)
        if not cf: continue
        p = "src/%s/%s.c" % (seg, cf)
        if p not in srcs: srcs[p] = open(p).read() if os.path.exists(p) else ""
        b = srcbuild.fn_body(srcs[p], fn)
        if b is None: continue
        h = hits("", whole_body=body_of(b) if '{' in b else b)
        if not h: continue
        rows.append(dict(seg=seg, func=fn, hits=h))
        for r, k, _ in h:
            per_rule[(k, r)] += 1; per_kind[k].add((seg, fn))
    out = sys.argv[sys.argv.index("--json") + 1] if "--json" in sys.argv else "build/rule_check.json"
    json.dump(rows, open(out, "w"), indent=0)
    for (k, r), n in sorted(per_rule.items()): print("%-5s %-15s %5d hits" % (k, r, n))
    print("functions with a HARD hit: %d; with only SOFT hits: %d (of %d registered)" % (
        len(per_kind["hard"]), len(per_kind["soft"] - per_kind["hard"]), len(reg)))


if __name__ == "__main__":
    main()
