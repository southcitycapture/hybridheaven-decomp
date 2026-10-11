#!/bin/bash
# wb_diag.sh FUNC SEG ATTEMPT.c: N64 Decomp Workbench verdict for one attempt (target = original asm, candidate = IDO build)
f=$1; seg=$2; src=$(realpath "$3"); HH=$(cd "$(dirname "$0")/../.." && pwd); cd "$HH"; . ./env.sh >/dev/null 2>&1
WB=${WB:-$HOME/work/tools-ext/wb-venv/bin/decomp-workbench}; d=$(mktemp -d)
asm=$(ls asm/nonmatchings/$seg/*/$f.s | head -1)
{ printf '.include "macro.inc"\n.set noat\n.set noreorder\n.set gp=64\n.section .text\n'; cat "$asm"; } > $d/t.s
mips-linux-gnu-as -EB -march=vr4300 -mabi=32 -G 0 -I include -o $d/target.o $d/t.s 2>/dev/null
tools/ido/7.1/cc -c -G 0 -non_shared -Xcpluscomm -mips2 -O2 -I include -I src -I "$(dirname "$src")" -o $d/cand.o "$src" 2>/dev/null
$WB diagnose $d/target.o $d/cand.o --function $f --objdump mips-linux-gnu-objdump 2>&1; rm -rf $d
