#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80206190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80206598.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_802067F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80206944.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80206AB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80206C50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80206F14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_802070F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80207238.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_802073EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80207654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80207808.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80207814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_802079BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80207B80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80207E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80207FF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020829C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80208548.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_802087F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80208B18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80208CA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80208E30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80209004.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_802091D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_802093AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80209698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020A7D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020BCE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020C030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020C0A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020C150.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020C39C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020C61C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020CBC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020D358.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020D5DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020E7C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020E81C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020EAA0.s")


extern f64 D_8021ABA8;

struct func_8020EAE4_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    u8 pad20[0x2B];
    u8 unk4B;
};

struct func_8020EAE4_Outer {
    u8 pad0[0x30];
    struct func_8020EAE4_Inner *unk30;
};

struct func_8020EAE4_Arg0 {
    u8 pad0[0x94];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

s32 func_8020EAE4(struct func_8020EAE4_Arg0 *arg0, struct func_8020EAE4_Outer **arg1) {
    f64 k;
    struct func_8020EAE4_Inner *temp_v0;

    k = D_8021ABA8;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 + k);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk1C = (f32) ((f64) temp_v0->unk1C + k);
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B -= 0x18;
    if ((*arg1)->unk30->unk4B < 0x19) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020EB94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020F4D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_8020FB98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80210160.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_802113B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80211760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_802119A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80211E34.s")


extern u8 D_80217CA8;

struct func_80212A28_Struct {
    u8 pad0[0xAD];
    u8 unkAD;
};

void func_80212A28(struct func_80212A28_Struct *arg0) {
    arg0->unkAD = D_80217CA8;
    D_80217CA8 += 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80212A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80212A50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80212CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80212EAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80213044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80213430.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80213594.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80214D20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80215604.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80215D84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80216188.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_80216550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80206190/func_802169AC.s")

