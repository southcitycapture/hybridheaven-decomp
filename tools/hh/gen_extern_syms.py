"""Define every referenced-but-undefined address-named symbol (func_/D_/.L/jtbl_ + 8 hex
digits) at its own address. Needed because overlays sharing a RAM slot cannot see each
other's labels. Output: build/extern_syms.ld"""
import re, glob, os
ref = set(); defined = set()
name_re = re.compile(r'((?:\.L|func_|D_|jtbl_|B_)[0-9A-F]{8})\b')
def_re = re.compile(r'^\s*(?:glabel|dlabel|jlabel|alabel|\.L[0-9A-F]{8}:|nonmatching)\s*([.\w]+)|^(\.L[0-9A-F]{8}):', re.M)
local_missing = set()
for p in glob.glob("asm/**/*.s", recursive=True):
    s = open(p).read()
    here = set()
    for m in def_re.finditer(s):
        here.add(m.group(1) or m.group(2))
    for m in re.finditer(r'^\s*(\.L[0-9A-F]{8}):', s, re.M): here.add(m.group(1))
    used = set(name_re.findall(s))
    # .L labels are file-local: a reference to one defined in another file is still missing
    local_missing |= {n for n in used if n.startswith(".L") and n not in here}
    defined |= {n for n in here if not n.startswith(".L")}
    ref |= {n for n in used if not n.startswith(".L")}
# C files can reference address-named symbols the asm never mentions
for p in glob.glob("src/**/*.c", recursive=True):
    s = open(p).read()
    ref |= set(re.findall(r'\b((?:func_|D_)[0-9A-F]{8})\b', s))
    defined |= set(re.findall(r'^[A-Za-z_][\w\s\*]*?\b(func_[0-9A-F]{8})\s*\([^;]*$', s, re.M))
known = set()
for f in ("undefined_syms_auto.txt", "undefined_funcs_auto.txt"):
    if os.path.exists(f):
        for line in open(f):
            m = re.match(r'\s*(\S+)\s*=', line)
            if m: known.add(m.group(1))
missing = sorted((ref - defined - known) | local_missing)
os.makedirs("build", exist_ok=True)
with open("build/extern_syms.ld", "w") as o:
    for n in missing:
        o.write("%s = 0x%s;\n" % (n, n[-8:]))
print("defined %d cross-overlay symbols" % len(missing))
