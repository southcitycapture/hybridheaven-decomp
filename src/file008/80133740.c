#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133740/func_80133740.s")


extern u8 D_801BCD90[];

void func_80133790(s32 arg0) {
    u8 *temp_v0;
    s32 temp_t0;
    u8 temp_t4;

    temp_t0 = arg0 % 8;
    temp_v0 = &D_801BCD90[(arg0 / 8) & 0xFF];
    temp_t4 = 1 << (temp_t0 & 0xFF);
    *temp_v0 &= ~temp_t4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133740/func_801337E4.s")


extern u8 D_801BCDF4[];

void func_80133830(void) {
    s32 var_v1;

    var_v1 = 0;
    do {
        var_v1 += 4;
        D_801BCD90[var_v1 - 3] = 0;
        D_801BCD90[var_v1 - 2] = 0;
        D_801BCD90[var_v1 - 1] = 0;
        D_801BCD90[var_v1 - 4] = 0;
    } while (D_801BCDF4 != &D_801BCD90[var_v1]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133740/func_80133860.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133740/func_801338B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133740/func_80133904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133740/func_80133950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133740/func_80133980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133740/func_801339D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133740/func_80133A24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133740/func_80133A70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80133740/func_80133AA0.s")


extern s32 D_8017AA90;

void func_80133AAC(s32 arg0) {
    D_8017AA90 = arg0;
}

