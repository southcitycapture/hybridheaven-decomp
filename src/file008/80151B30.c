#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151B30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151B98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151BC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151BFC.s")


extern u8 D_801BBD5C;

s32 func_80151C08(s32 arg0) {
    s32 *p;

    p = &arg0;
    arg0 = arg0 & 0xFF;
    if (arg0 < 2) {
        D_801BBD5C = arg0;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151C34.s")


extern u8 D_801BBD5D;

s32 func_80151C40(u8 arg0) {
    arg0 = arg0 & 0xFF;
    if (arg0 < 4) {
        D_801BBD5D = arg0;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151C6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151D80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_80151DA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80151B30/func_801521C8.s")

