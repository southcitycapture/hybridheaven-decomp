#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013D4A0/func_8013D4A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013D4A0/func_8013D520.s")


typedef struct func_8013D5F4_Struct {
    s32 *ptr;
    s32 pad;
} func_8013D5F4_Struct;

extern func_8013D5F4_Struct D_8017DFFC[];

s32 func_8013D5F4(u8 arg0) {
    return *D_8017DFFC[arg0].ptr;
}

