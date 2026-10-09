"""Build objdiff progress inputs and generate build/progress/report.json.

For every code segment:
  target object = all original asm for the segment (asm/nonmatchings/<seg>/*.s, in address order)
  base object   = only the decompiled C (src/<seg>.c with the GLOBAL_ASM lines removed), compiled with IDO
objdiff then diffs them function by function, which is the same report decomp.dev consumes."""
import glob, json, os, re, subprocess, sys
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../.."))
os.chdir(HH)
OUT = "build/progress"; os.makedirs(OUT + "/target", exist_ok=True); os.makedirs(OUT + "/base", exist_ok=True)
AS = ["mips-linux-gnu-as", "-EB", "-march=vr4300", "-mabi=32", "-G", "0", "-I", "include"]
CC = ["tools/ido/7.1/cc", "-c", "-G", "0", "-non_shared", "-Xcpluscomm", "-mips2", "-O2", "-I", "include", "-I", "src"]
HEAD = '.include "macro.inc"\n.set noat\n.set noreorder\n.set gp=64\n.section .text, "ax"\n\n'
units = []
for src in sorted(glob.glob("src/*/*.c")):
    seg = os.path.relpath(src, "src")[:-2]                  # e.g. file057/80375560
    funcs = sorted(f for f in glob.glob("asm/nonmatchings/%s/*.s" % seg) if not os.path.basename(f).startswith("_pad"))  # pad blocks are not functions
    if not funcs: continue
    os.makedirs(os.path.dirname("%s/target/%s.o" % (OUT, seg)), exist_ok=True)
    os.makedirs(os.path.dirname("%s/base/%s.o" % (OUT, seg)), exist_ok=True)
    tgt_s, tgt_o = "%s/target/%s.s" % (OUT, seg), "%s/target/%s.o" % (OUT, seg)
    newest = max(os.path.getmtime(f) for f in funcs)
    if not os.path.exists(tgt_o) or os.path.getmtime(tgt_o) < newest:
        with open(tgt_s, "w") as o:
            o.write(HEAD)
            for f in funcs: o.write(open(f).read() + "\n")
        subprocess.run(AS + ["-o", tgt_o, tgt_s], check=True)
    unit = {"name": seg, "target_path": tgt_o}
    text = open(src).read()
    c_only = re.sub(r'#pragma GLOBAL_ASM\("[^"]+"\)\n', "", text)
    if re.search(r"^\w[\w\s\*]*\bfunc_[0-9A-F]{8}\s*\([^;]*$", c_only, re.M):     # at least one C function body
        base_c, base_o = "%s/base/%s.c" % (OUT, seg), "%s/base/%s.o" % (OUT, seg)
        if not os.path.exists(base_o) or os.path.getmtime(base_o) < os.path.getmtime(src):
            open(base_c, "w").write(c_only)
            r = subprocess.run(CC + ["-o", base_o, base_c], capture_output=True, text=True)
            if r.returncode: print("base compile failed for", seg, r.stderr[:300]); base_o = None
        if base_o: unit["base_path"] = base_o
    unit["metadata"] = {"progress_categories": ["main" if seg.startswith("main/") else "overlays"]}
    units.append(unit)
cfg = {"min_version": "2.0.0", "build_target": False, "build_base": False, "units": units,
       "progress_categories": [{"id": "main", "name": "Main (incl. libultra)"}, {"id": "overlays", "name": "Game overlays"}]}
json.dump(cfg, open("objdiff.json", "w"), indent=1)
subprocess.run(["tools/bin/objdiff-cli", "report", "generate", "-p", ".", "-o", OUT + "/report.json", "-f", "json-pretty"], check=True)
r = json.load(open(OUT + "/report.json"))
m = r["measures"]
print("code: %s / %s bytes matched (%.3f%%), functions %s / %s" % (m.get("matched_code", 0), m.get("total_code"),
      m.get("matched_code_percent", 0), m.get("matched_functions", 0), m.get("total_functions")))
