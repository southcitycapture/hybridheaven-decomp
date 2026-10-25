"""Build objdiff progress inputs and generate build/progress/report.json.

For every code segment:
  target object = all original asm for the segment (asm/nonmatchings/<seg>/*.s, in address order)
  base object   = only the decompiled C (src/<seg>.c with the GLOBAL_ASM lines removed), compiled with IDO
objdiff then diffs them function by function. Data measures are replaced using the
actual linked layout and compiler-only byte provenance (see progress_data.py)."""
import glob, json, os, re, subprocess, sys
import yaml
from progress_code import source_units, target_source, unit_complete
HH = os.path.normpath(os.path.join(os.path.dirname(__file__), "../.."))
os.chdir(HH)
OUT = "build/progress"; os.makedirs(OUT + "/target", exist_ok=True); os.makedirs(OUT + "/base", exist_ok=True)
AS = ["mips-linux-gnu-as", "-EB", "-march=vr4300", "-mabi=32", "-G", "0", "-I", "include"]
CC = ["tools/ido/7.1/cc", "-c", "-G", "0", "-non_shared", "-Xcpluscomm", "-mips2", "-O2", "-I", "include", "-I", "src"]
HEAD = '.include "macro.inc"\n.set noat\n.set noreorder\n.set gp=64\n.section .text, "ax"\n\n'
def lib_base(seg, funcs):
    """Copy of a library object (osSendMesg, ...) with each function renamed to the func_XXXXXXXX name the target
    asm uses, matched by its offset in the file's .text, so objdiff can pair them."""
    from elftools.elf.elffile import ELFFile
    src, out = "build/src/%s.o" % seg, "%s/base/%s.o" % (OUT, seg)
    os.makedirs(os.path.dirname(out), exist_ok=True)
    start = int(os.path.basename(seg), 16)
    with open(src, "rb") as fh:
        e = ELFFile(fh); ti = next(i for i, x in enumerate(e.iter_sections()) if x.name == ".text")
        names = {x["st_value"]: x.name for x in e.get_section_by_name(".symtab").iter_symbols()
                 if x["st_info"]["type"] == "STT_FUNC" and x["st_shndx"] == ti}
    ren = []
    for f in funcs:
        n = os.path.basename(f)[:-2]
        if not n.startswith("func_"): continue
        off = int(n[5:], 16) - start
        if off in names and names[off] != n: ren += ["--redefine-sym", "%s=%s" % (names[off], n)]
    subprocess.run(["mips-linux-gnu-objcopy"] + ren + [src, out], check=True)
    return out

units = []
sources = {}
inputs = []
LIBFILES = set(json.load(open("tools/hh/libultra.json"))) if os.path.exists("tools/hh/libultra.json") else set()
for seg in source_units(yaml.safe_load(open("hybridheaven.yaml"))):
    src = "src/" + seg + ".c"
    sources[seg] = open(src).read()
    funcs = sorted(f for f in glob.glob("asm/nonmatchings/%s/*.s" % seg) if not os.path.basename(f).startswith(("_pad", "_mrg_", "_ro_")))  # pad blocks are not functions
    if not funcs: raise RuntimeError("missing target assembly for " + seg + "; run make setup")
    inputs.append({"name": seg, "source": src, "assembly": funcs})
    os.makedirs(os.path.dirname("%s/target/%s.o" % (OUT, seg)), exist_ok=True)
    os.makedirs(os.path.dirname("%s/base/%s.o" % (OUT, seg)), exist_ok=True)
    tgt_s, tgt_o = "%s/target/%s.s" % (OUT, seg), "%s/target/%s.o" % (OUT, seg)
    # Rebuild: source mtimes cannot detect changed generators, headers, removed
    # inputs, or preserved-timestamp ROM splits. Old targets hid 57 functions.
    with open(tgt_s, "w") as o:
        o.write(target_source(HEAD, (open(f).read() for f in funcs)))
    subprocess.run(AS + ["-o", tgt_o, tgt_s], check=True)
    unit = {"name": seg, "target_path": tgt_o}
    if seg in LIBFILES:                        # built from library source: the real object is the base,
        unit["base_path"] = lib_base(seg, funcs)  # with its functions renamed to the address names objdiff pairs on
        unit["metadata"] = {"progress_categories": ["main"]}; units.append(unit); continue
    text = sources[seg]
    c_only = re.sub(r'#pragma GLOBAL_ASM\("[^"]+"\)\n', "", text)
    if re.search(r"^\w[\w\s\*]*\bfunc_[0-9A-F]{8}\s*\([^;]*$", c_only, re.M):     # at least one C function body
        base_c, base_o = "%s/base/%s.c" % (OUT, seg), "%s/base/%s.o" % (OUT, seg)
        open(base_c, "w").write(c_only)
        result = subprocess.run(CC + ["-o", base_o, base_c], capture_output=True, text=True)
        if result.returncode:
            raise RuntimeError("base compile failed for " + seg + ":\n" + result.stderr)
        sys.path.insert(0, "tools/hh"); import mulfix; mulfix.fix(base_o)
        unit["base_path"] = base_o
    unit["metadata"] = {"progress_categories": ["main" if seg.startswith("main/") else "overlays"]}
    units.append(unit)
cfg = {"min_version": "2.0.0", "build_target": False, "build_base": False, "units": units,
       "progress_categories": [{"id": "main", "name": "Main (incl. libultra)"}, {"id": "overlays", "name": "Game overlays"}]}
def generate_report():
    json.dump(cfg, open("objdiff.json", "w"), indent=1)
    subprocess.run(["tools/bin/objdiff-cli", "report", "generate", "-p", ".", "-o", OUT + "/report-objdiff.json", "-f", "json-pretty"], check=True)
    return json.load(open(OUT + "/report-objdiff.json"))

r = generate_report()
reported = {unit["name"]: unit for unit in r["units"]}
assert set(reported) == set(sources), "objdiff omitted a configured code unit"
for unit in units:
    unit["metadata"]["complete"] = unit_complete(reported[unit["name"]], sources[unit["name"]])
# Let objdiff calculate complete_code/complete_units (including categories and
# protobuf defaults), using metadata validated against this run's function diff.
matched_before = [{k: group["measures"].get(k, 0) for k in ("total_code", "matched_code", "total_functions", "matched_functions")}
                  for group in [r] + r["categories"]]
r = generate_report()
assert matched_before == [{k: group["measures"].get(k, 0) for k in ("total_code", "matched_code", "total_functions", "matched_functions")}
                          for group in [r] + r["categories"]], "completion changed matching measures"
json.dump({"objdiff_version": subprocess.check_output(["tools/bin/objdiff-cli", "--version"], text=True).strip(),
           "ignored_sources": sorted(set(glob.glob("src/*/*.c")) - {"src/" + name + ".c" for name in sources}),
           "units": [dict(item, complete=unit["metadata"]["complete"]) for item, unit in zip(inputs, units)]},
          open(OUT + "/code-audit.json", "w"), indent=2)
from progress_data import update_report
code_before = [{k: v for k, v in group["measures"].items() if "data" not in k and k != "total_units"}
               for group in [r] + r["categories"]]
update_report(r, LIBFILES, OUT, CC)
assert code_before == [{k: v for k, v in group["measures"].items() if "data" not in k and k != "total_units"}
                       for group in [r] + r["categories"]], "data accounting changed code progress"
with open(OUT + "/report.json.tmp", "w") as f:
    json.dump(r, f, indent=2)
os.replace(OUT + "/report.json.tmp", OUT + "/report.json")
m = r["measures"]
print("code: %s / %s bytes matched (%.3f%%), functions %s / %s" % (m.get("matched_code", 0), m.get("total_code"),
      m.get("matched_code_percent", 0), m.get("matched_functions", 0), m.get("total_functions")))
print("data: %s / %s bytes matched (%.3f%%); details: %s/data-audit.json" %
       (m["matched_data"], m["total_data"], m["matched_data_percent"], OUT))
print("fully linked: %s / %s code bytes (%.3f%%), %s / %s units" %
      (m.get("complete_code", 0), m["total_code"], m.get("complete_code_percent", 0),
       m.get("complete_units", 0), m["total_units"]))
