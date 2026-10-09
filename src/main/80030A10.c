#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80030A10/func_80030A10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80030A10/func_80030B60.s")


extern void *D_80049940;

s32 func_80030C40(void *arg0) {
    if (arg0 == NULL) {
        arg0 = D_80049940;
    }
    return ((s32 *)arg0)[1];
}

