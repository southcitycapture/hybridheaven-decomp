#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/800295D0/func_800295D0.s")


extern s32 func_800309E0();

s32 func_80029640(s32 arg0, s32 *arg1) {
    if (func_800309E0() != 0) {
        return -1;
    }
    *arg1 = *(s32 *) (arg0 | 0xA0000000);
    return 0;
}

