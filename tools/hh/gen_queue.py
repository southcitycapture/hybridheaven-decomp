"""Build the function work queue: every function in asm/, with its segment, size, a rough
difficulty score, and a 'dup_of' pointer when an identical function (ignoring relocated
fields) appears earlier. Writes queue/functions.csv"""
import re, glob, os, json, csv, hashlib
segs = {}
for line in open("hybridheaven.yaml"):
    pass
img = open("build/expanded.bin", "rb").read()
FUNC = re.compile(r"nonmatching (func_[0-9A-F]{8}), (0x[0-9A-F]+)\s+glabel \1\s+/\* ([0-9A-F]+) ")
rows = []
# map asm file start offset -> segment name using the yaml
names = {}
cur = None
for line in open("hybridheaven.yaml"):
    m = re.match(r"  - name: (\S+)", line)
    if m: cur = m.group(1)
    m = re.match(r"      - \[0x([0-9A-F]+), asm\]", line)
    if m and cur: names[int(m.group(1), 16)] = cur
for p in sorted(glob.glob("asm/nonmatchings/*/*/*.s")):
    seg, cfile = p.split("/")[2], p.split("/")[3]
    s = open(p).read()
    for m in FUNC.finditer(s):
        name, size, off = m.group(1), int(m.group(2), 16), int(m.group(3), 16)
        body = s[m.end():s.find("endlabel " + name, m.end())]
        n_br = len(re.findall(r"\s(b\w*|j)\s", body)); n_jal = body.count(" jal ")
        n_fp = len(re.findall(r"\.(s|d)\s|\$f\d|lwc1|swc1|mtc1|mfc1", body))
        n_jt = body.count("jtbl_") + body.count(" jr ") - body.count("jr         $ra")
        insns = size // 4
        diff = insns + 3 * n_br + 2 * n_jal + 2 * n_fp + 25 * max(0, n_jt)
        words = [int.from_bytes(img[off + 4*k:off + 4*k + 4], "big") for k in range(insns)]
        fp = hashlib.sha1(b"".join(((w & 0xFC000000) if (w >> 26) in (2, 3) else
                                    (w & 0xFFFF0000) if (w >> 26) in (8, 9, 0xF, 0x23, 0x2B, 0x21, 0x25, 0x20, 0x24, 0x28, 0x29, 0x31, 0x39) else w).to_bytes(4, "big")
                                   for w in words)).hexdigest()[:16]
        rows.append(dict(func=name, segment=seg, file=cfile, rom_exp=hex(off), size=size, insns=insns,
                         branches=n_br, calls=n_jal, float_ops=n_fp, difficulty=diff, fp=fp))
rows.sort(key=lambda r: int(r["rom_exp"], 16))
first = {}
for r in rows:
    r["dup_of"] = first.get(r["fp"], "")
    first.setdefault(r["fp"], r["func"] + "@" + r["segment"])
os.makedirs("queue", exist_ok=True)
with open("queue/functions.csv", "w", newline="") as fh:
    w = csv.DictWriter(fh, fieldnames=list(rows[0].keys())); w.writeheader(); w.writerows(rows)
uniq = [r for r in rows if not r["dup_of"]]
print("functions: %d total, %d unique (%d duplicates)" % (len(rows), len(uniq), len(rows) - len(uniq)))
print("unique code bytes: 0x%X (%d KB)" % (sum(r["size"] for r in uniq), sum(r["size"] for r in uniq) // 1024))
b = [0, 0, 0, 0]
for r in uniq:
    d = r["difficulty"]; b[0 if d < 30 else 1 if d < 100 else 2 if d < 300 else 3] += 1
print("difficulty buckets (unique): easy<30: %d, medium<100: %d, hard<300: %d, very hard: %d" % tuple(b))
