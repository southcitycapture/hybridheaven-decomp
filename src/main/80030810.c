#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80030810/func_80030810.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80030810/func_8003089C.s")


s32 func_8002BA34();                                /* extern */

s32 func_800308D0(s32 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    if (*arg0 & 5) {
        temp_v0 = func_8002BA34();
        var_v1 = temp_v0;
        if (temp_v0 == 0) {
            *arg0 &= ~4;
        }
    } else {
        var_v1 = 5;
    }
    return var_v1;
}

