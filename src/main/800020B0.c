#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/800020B0/func_800020B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800020B0/func_800021B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800020B0/func_80002364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/800020B0/func_800023A8.s")


extern void func_800023A8(s32);

void func_800023EC(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_800023A8(var_s0 & 0xFF);
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/800020B0/func_8000242C.s")

