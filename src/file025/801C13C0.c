#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C13C0/func_801C13C0.s")

extern u32 D_801DEBC0[];

void func_801C13F8(s32 arg0) {
    D_801DEBC0[arg0] = 1;
}



void func_801C1410(s32 arg0) {
    D_801DEBC0[arg0] = 0;
}



s32 func_801C1424(s32 arg0) {
    s32 temp_v1;

    temp_v1 = D_801DEBC0[arg0];
    if (temp_v1 != 0) {
        D_801DEBC0[arg0] = 0;
    }
    return temp_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801C13C0/func_801C144C.s")

