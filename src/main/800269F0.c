#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/800269F0/func_800269F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800269F0/func_80026B0C.s")


extern s32 func_800309B0();
extern void func_80034690(s32);

void func_80026C9C(s32 arg0) {
    if (func_800309B0() != 0) {
        do {
        } while (func_800309B0() != 0);
    }
    func_80034690(0x125);
}

