# Hybrid Heaven (USA) matching build.
#   make            -> build/hybridheaven.z64, checked against the original SHA-1
#   make expanded   -> just the expanded (decompressed) image
# Needs: . ./env.sh (MIPS binutils, python venv), baserom/baserom.us.z64 for `make setup`.
SHELL     := /bin/bash
CROSS     := mips-linux-gnu-
AS        := $(CROSS)as
LD        := $(CROSS)ld
OBJCOPY   := $(CROSS)objcopy
PYTHON    := python3
ASFLAGS   := -EB -march=vr4300 -mabi=32 -G 0 -I include -I build/include
BUILD     := build
BASEROM   := baserom/baserom.us.z64
SHA1      := 16dbc21620b52deab5c5abf8a309ac60adfbee85

ASM_S     := $(shell find asm -name '*.s' -not -path 'asm/nonmatchings/*' 2>/dev/null)
ASM_O     := $(patsubst asm/%.s,$(BUILD)/asm/%.o,$(ASM_S))
C_SRC     := $(shell find src -name '*.c' 2>/dev/null)
C_O       := $(patsubst src/%.c,$(BUILD)/src/%.o,$(C_SRC))
IDO       := tools/ido/7.1/cc
# -Wab,-r4300_mul: the original build's flag (as1 emits the VR4300 multiply-pair nops itself; Task 26).
# HH_MULFIX=1 make  -> the old pipeline instead: no flag, tools/hh/mulfix.py on every object (tools/hh/idoflags.py).
#                     Comparison only: functions landed since Task 26 need the flag, so that build no longer matches.
HH_MULFIX ?= 0
ifeq ($(HH_MULFIX),0)
R4300_MUL := -Wab,-r4300_mul
POSTFIX   := @true
else
R4300_MUL :=
POSTFIX   := @$(PYTHON) tools/hh/mulfix.py
endif
CFLAGS    := -G 0 -non_shared -Xcpluscomm -mips2 $(R4300_MUL) -O2 -I include -I src
ASMPROC   := $(PYTHON) tools/asm-processor/build.py --input-enc utf-8 --output-enc euc-jp   # the game's strings are EUC-JP
BIN_IN    := $(shell find assets -name '*.bin' 2>/dev/null)
BIN_O     := $(patsubst assets/%.bin,$(BUILD)/assets/%.o,$(BIN_IN))

.PHONY: all setup expanded clean
all: $(BUILD)/hybridheaven.z64
	@echo "$(SHA1)  $<" | sha1sum -c -

setup:
	$(PYTHON) tools/hh/expand.py $(BASEROM) $(BUILD)
	$(PYTHON) tools/hh/gen_splat.py
	rm -rf asm     # regenerated from scratch: stale per-file dirs would duplicate functions after a re-split
	$(PYTHON) -m splat split hybridheaven.yaml
	$(PYTHON) tools/hh/bss_layout.py --linker
	$(PYTHON) tools/hh/data_layout.py --linker
	@if [ -d asm/matchings ]; then cp -rn asm/matchings/. asm/nonmatchings/ && rm -rf asm/matchings; fi
	$(PYTHON) tools/hh/gen_pads.py
	$(PYTHON) tools/hh/gen_blocks.py

expanded: $(BUILD)/expanded.out.bin

$(BUILD)/asm/%.o: asm/%.s
	@mkdir -p $(dir $@)
	@$(AS) $(ASFLAGS) -o $@ $<

# The original gaps between tightly packed BSS objects need no gas end pad.
PACKED_BSS := $(shell $(PYTHON) tools/hh/bss_layout.py --packed-segments)
PACKED_BSS_ASM := $(foreach seg,$(PACKED_BSS),$(wildcard asm/data/$(seg)_bss_*.bss.s))
ifneq ($(strip $(PACKED_BSS_ASM)),)
$(patsubst asm/%.s,$(BUILD)/asm/%.o,$(PACKED_BSS_ASM)): ASFLAGS += -no-pad-sections
endif

.PHONY: pads
pads:
	@$(PYTHON) tools/hh/gen_pads.py

# libultra 2.0J objects are built straight from ultralib's source (tools/hh/libultra.json, tools/hh/gen_libultra.py)
ULTRALIB  ?= tools/ultralib
IDO53     := tools/ido/5.3/cc
$(BUILD)/libultra.mk: tools/hh/libultra.json tools/hh/gen_libultra.py
	@$(PYTHON) tools/hh/gen_libultra.py > /dev/null
-include $(BUILD)/libultra.mk
LIB_O := $(patsubst %,$(BUILD)/src/%.o,$(shell $(PYTHON) -c "import json;print(' '.join(json.load(open('tools/hh/libultra.json'))))"))
$(BUILD)/libultra_syms.ld: $(LIB_O) tools/hh/libultra_syms.py
	@$(PYTHON) tools/hh/libultra_syms.py

# Rebuild opted-in units when the readonly layout implementation changes.
RO_LAYOUT_SRC := $(shell grep -l '^/\* hh-rodata-layout ' $(C_SRC) 2>/dev/null)
$(patsubst src/%.c,$(BUILD)/src/%.o,$(RO_LAYOUT_SRC)): tools/hh/rodata_layout.py
# a planned unit with no GLOBAL_ASM left: asm-processor must still post-process it (static symbols for frozen pieces;
# srcbuild.asmproc_force)
FULLC_LAYOUT_SRC := $(if $(RO_LAYOUT_SRC),$(shell grep -L '^\#pragma GLOBAL_ASM' $(RO_LAYOUT_SRC) 2>/dev/null))
BSS_LAYOUT_O := $(addprefix $(BUILD)/src/,$(addsuffix .o,$(shell $(PYTHON) tools/hh/bss_layout.py --explicit-units)))
ifneq ($(strip $(BSS_LAYOUT_O)),)
$(BSS_LAYOUT_O): tools/hh/bss_layout.py tools/hh/bss_splits.json
endif

$(BUILD)/src/%.o: src/%.c $(shell find include -name '*.h') | pads
	@mkdir -p $(dir $@)
	@$(ASMPROC) $(if $(filter $<,$(FULLC_LAYOUT_SRC)),--force) $(IDO) -- $(AS) $(ASFLAGS) -- -c $(CFLAGS) -o $@ $<
	@if grep -q '^/\* hh-rodata-layout ' $<; then $(PYTHON) tools/hh/rodata_layout.py $< $@ || { rm -f $@; exit 1; }; fi
	$(if $(filter $@,$(BSS_LAYOUT_O)),@$(PYTHON) tools/hh/bss_layout.py --verify $(patsubst $(BUILD)/src/%.o,%,$@) $@ || { rm -f $@; exit 1; })
	$(POSTFIX) $@

$(BUILD)/assets/%.o: assets/%.bin
	@mkdir -p $(dir $@)
	@$(OBJCOPY) -I binary -O elf32-tradbigmips -B mips --rename-section .data=.data,alloc,load,data,contents $< $@

# Splat regenerates these lists during setup; the fallback generator consults
# both, so a symbol ceasing to be undefined must invalidate both link inputs.
AUTO_SYMS := undefined_syms_auto.txt undefined_funcs_auto.txt
$(BUILD)/extern_syms.ld: $(C_SRC) $(AUTO_SYMS) tools/hh/gen_extern_syms.py tools/hh/bss_layout.py tools/hh/bss_splits.json tools/hh/libultra.json tools/hh/data_layout.py $(wildcard tools/hh/data_splits.json)
	@$(PYTHON) tools/hh/gen_extern_syms.py > /dev/null

$(BUILD)/hybridheaven.elf: $(ASM_O) $(C_O) $(BIN_O) hybridheaven.ld $(AUTO_SYMS) $(BUILD)/extern_syms.ld $(BUILD)/libultra_syms.ld
	$(LD) -T hybridheaven.ld -T undefined_syms_auto.txt -T undefined_funcs_auto.txt -T $(BUILD)/extern_syms.ld -T $(BUILD)/libultra_syms.ld \
	      -Map $(BUILD)/hybridheaven.map --no-check-sections -z muldefs -o $@

$(BUILD)/expanded.out.bin: $(BUILD)/hybridheaven.elf
	$(OBJCOPY) -O binary $< $@

$(BUILD)/hybridheaven.z64: $(BUILD)/expanded.out.bin $(BUILD)/expanded.json
	$(PYTHON) tools/hh/pack.py $< $(BUILD)/expanded.json $@

clean:
	rm -rf $(BUILD)/asm $(BUILD)/src $(BUILD)/assets $(BUILD)/hybridheaven.* $(BUILD)/expanded.out.bin
