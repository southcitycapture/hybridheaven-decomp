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


f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
extern s16 D_801BBC22;

void func_8012329C(f32 *arg0, f32 *arg1, f32 *arg2, s16 *arg3) {
    s16 sp1E;

    sp1E = (s16) (0x1800 - D_801BBC22) & 0x1FFF;
    *arg0 = D_801BBBF0.unk198 - (func_8001EB64(sp1E) * 40.0f);
    *arg1 = D_801BBBF0.unk19C;
    *arg2 = D_801BBBF0.unk1A0 - (func_8001EAD0(sp1E) * 40.0f);
    *arg3 = (s16) (D_801BBBF0.unk32 + 0x1000) & 0x1FFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80123270/func_80123360.s")

