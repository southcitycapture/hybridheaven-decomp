#include "common.h"


extern s8 D_801E4010;

void func_801BF1A0(s32 arg0) {
    s32 *p = &arg0;
    D_801E4010 = arg0;
}


extern s8 D_801BC3D8[];

void func_801BF1B0(u8 arg0) {
    D_801BC3D8[0x3BB] = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801BF1A0/D_801E2560.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801BF1A0/func_801BF1C0.s")

