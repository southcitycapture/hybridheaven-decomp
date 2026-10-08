#include "common.h"


typedef struct func_80123270_Struct {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad1[0x198 - 0x34];
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
} func_80123270_Struct;

extern func_80123270_Struct D_801BBBF0;

void func_80123270(f32 *arg0, f32 *arg1, f32 *arg2, s16 *arg3) {
    *arg0 = D_801BBBF0.unk198;
    *arg1 = D_801BBBF0.unk19C;
    *arg2 = D_801BBBF0.unk1A0;
    *arg3 = D_801BBBF0.unk32;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80123270/func_8012329C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80123270/func_80123360.s")

