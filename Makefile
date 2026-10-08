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
CFLAGS    := -G 0 -non_shared -Xcpluscomm -mips2 -O2 -I include -I src
ASMPROC   := $(PYTHON) tools/asm-processor/build.py
BIN_IN    := $(shell find assets -name '*.bin' 2>/dev/null)
BIN_O     := $(patsubst assets/%.bin,$(BUILD)/assets/%.o,$(BIN_IN))

.PHONY: all setup expanded clean
all: $(BUILD)/hybridheaven.z64
	@echo "$(SHA1)  $<" | sha1sum -c -

setup:
	$(PYTHON) tools/hh/expand.py $(BASEROM) $(BUILD)
	$(PYTHON) tools/hh/gen_splat.py
	$(PYTHON) -m splat split hybridheaven.yaml
	$(PYTHON) tools/hh/gen_pads.py

expanded: $(BUILD)/expanded.out.bin

$(BUILD)/asm/%.o: asm/%.s
	@mkdir -p $(dir $@)
	@$(AS) $(ASFLAGS) -o $@ $<

.PHONY: pads
pads:
	@$(PYTHON) tools/hh/gen_pads.py

$(BUILD)/src/%.o: src/%.c $(shell find include -name '*.h') | pads
	@mkdir -p $(dir $@)
	@$(ASMPROC) $(IDO) -- $(AS) $(ASFLAGS) -- -c $(CFLAGS) -o $@ $<

$(BUILD)/assets/%.o: assets/%.bin
	@mkdir -p $(dir $@)
	@$(OBJCOPY) -I binary -O elf32-tradbigmips -B mips --rename-section .data=.data,alloc,load,data,contents $< $@

$(BUILD)/extern_syms.ld: $(C_SRC)
	@$(PYTHON) tools/hh/gen_extern_syms.py > /dev/null

$(BUILD)/hybridheaven.elf: $(ASM_O) $(C_O) $(BIN_O) hybridheaven.ld $(BUILD)/extern_syms.ld
	$(LD) -T hybridheaven.ld -T undefined_syms_auto.txt -T undefined_funcs_auto.txt -T $(BUILD)/extern_syms.ld \
	      -Map $(BUILD)/hybridheaven.map --no-check-sections -z muldefs -o $@

$(BUILD)/expanded.out.bin: $(BUILD)/hybridheaven.elf
	$(OBJCOPY) -O binary $< $@

$(BUILD)/hybridheaven.z64: $(BUILD)/expanded.out.bin $(BUILD)/expanded.json
	$(PYTHON) tools/hh/pack.py $< $(BUILD)/expanded.json $@

clean:
	rm -rf $(BUILD)/asm $(BUILD)/src $(BUILD)/assets $(BUILD)/hybridheaven.* $(BUILD)/expanded.out.bin
