#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80029280/func_80029280.s")


s32 func_80028A10(s32);                             /* extern */
s32 func_800309B0();                                /* extern */

s32 func_80029440(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_800309B0() != 0) {
        return -1;
    }
    *(s32 *)0xA4040000 = arg1;
    *(s32 *)0xA4040004 = func_80028A10(arg2);
    if (arg0 == 0) {
        *(s32 *)0xA404000C = arg3 - 1;
    } else {
        *(s32 *)0xA4040008 = arg3 - 1;
    }
    return 0;
}

