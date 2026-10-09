#include "common.h"


extern s32 func_8013B570(s32, s32, s32, s32, void (*)());
extern s32 func_801CC654(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_801DAC50;
extern s32 D_801DAC58;
extern s32 D_801DAC70;
extern s32 D_801DAC74;
extern s32 D_801DAC78;
extern s32 D_801DAC7C;
extern s32 D_801DAC84;
extern s32 D_801DAC88;
extern s32 D_801DAC8C;
extern void func_801CDF50();

void func_801CDE80(s32 arg0, s32 arg1) {
    D_801DAC50 = arg0;
    D_801DAC70 = 0;
    D_801DAC74 = 0;
    D_801DAC78 = 1;
    D_801DAC7C = 0;
    D_801DAC58 = 0;
    D_801DAC84 = 0;
    D_801DAC88 = 0;
    D_801DAC8C = func_801CC654(arg0, 0x28, 0, 0x28, 1, 0x28, 0, 0x28, 1, 1, 0, 0);
    func_8013B570(arg0, 0x29, 0, 4, func_801CDF50);
}


struct func_801CDF50_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern void func_8012D844(void *, s32, s32);
extern void func_800058DC(void *, void (*)(void));
extern void func_801CDFAC(void);

void func_801CDF50(struct func_801CDF50_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x28, 0);
        func_800058DC(arg0, func_801CDFAC);
        return;
    }
    func_800058DC(arg0, func_801CDF50);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/func_801CDFAC.s")



s32 func_801CE274(void) {
    return D_801DAC74 != 0;
}



s32 func_801CE284(void) {
    if (D_801DAC74 != 0) {
        return 0;
    }
    if (D_801DAC70 != 0) {
        return 0;
    }
    return D_801DAC78;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/func_801CE2C4.s")


struct func_801CE2D0_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801CE2D0_Struct D_801E11B0;

s32 func_801CE2D0(s32 arg0, u16 arg1) {
    if (arg0 != D_801E11B0.unk0) {
        return 0;
    }
    return D_801E11B0.unk4 == arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/func_801CE308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/func_801CE384.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/func_801CE394.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/func_801CE3A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/func_801CE3AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/func_801CE3B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/func_801CE3C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/func_801CE3D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/func_801CE488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/func_801CE494.s")


extern void func_80006214();
extern s32 func_801C354C(s32);

void func_801CE5A8(s32 arg0) {
    func_80006214();
    D_801DAC7C = func_801C354C(arg0) == 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CDE80/func_801CE5D8.s")

