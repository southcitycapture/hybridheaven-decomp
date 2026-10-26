"""Code input selection and conservative fully-linked unit metadata."""
import re


def c_only_source(source):
    """Remove ASM inclusions without changing __LINE__-based private aliases."""
    return re.sub(r'(?m)^[ \t]*#pragma GLOBAL_ASM\("[^"\n]+"\)[^\n]*', '', source)


def source_units(config):
    """Use the ROM's configured C units, not leftover generated src files."""
    names = []
    for segment in config["segments"]:
        if not isinstance(segment, dict):
            continue
        for subsegment in segment.get("subsegments", []):
            if isinstance(subsegment, list) and len(subsegment) >= 3 and subsegment[1] == "c":
                names.append(subsegment[2])
    assert len(names) == len(set(names)), "duplicate C unit in splat configuration"
    return sorted(names)


def target_source(head, assembly):
    """Each asm input may start/end in data; always restore executable text."""
    parts = [head]
    for text in assembly:
        text = re.sub(r"(?m)^\s*\.late_rodata_alignment\b.*$", "", text)
        text = re.sub(r"(?m)^\s*\.late_rodata\s*$", ".section .rodata", text)
        parts.append(text + '\n.section .text, "ax"\n')
    return "".join(parts)


def unit_complete(unit, source):
    """No asm of any kind, and every target function must match compiled C."""
    if re.search(r"\b(?:GLOBAL_ASM|INCLUDE_ASM)\b", source):
        return False
    functions = unit.get("functions", [])
    measures = unit["measures"]
    total = int(measures.get("total_functions", 0))
    return (bool(functions) and len(functions) == total
            and int(measures.get("matched_functions", 0)) == total
            and all(f.get("fuzzy_match_percent") == 100.0 for f in functions))
