#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_803709D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80370AB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80370E90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_8037118C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_803711C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_803711E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_803714B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80371930.s")


typedef struct func_80371994_Struct {
    u8 pad0[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_80371994_Struct;

extern s32 func_801CE330(f32 a0, s32 a1, f32 a2, f32 a3, f32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, f32 a15, s32 a16);
extern void func_800058DC(void *a0, void *a1);
extern f32 D_8038B410;
extern void func_8037118C(void);

void func_80371994(func_80371994_Struct *arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fa0;

    temp_fv0 = arg0->unk6C;
    temp_fv1 = arg0->unk70;
    temp_fa0 = arg0->unk74;
    func_801CE330(temp_fa0, 0x33, temp_fv0, temp_fv1, temp_fa0, 0xFF, 0xFF, 0, 0xFF, 0x1E, 0x90, 0, 0x80, 1, 0x14, D_8038B410, 2);
    func_800058DC(arg0, func_8037118C);
}


typedef struct func_80371A40_Sub {
    u8 pad0[0x68];
    void *unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad7B[1];
    f32 unk7C;
    f32 unk80;
    f32 unk84;
    f32 unk88;
    u8 pad8C[0x10];
    u8 unk9C;
} func_80371A40_Sub;

typedef struct func_80371A40_Struct {
    u8 pad0[0x5C];
    func_80371A40_Sub *unk5C;
} func_80371A40_Struct;

extern void *func_80005670(void *a0, void *a1, void *a2);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80387BEC[];

void func_80371A40(func_80371A40_Struct *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *var_a2;
    func_80371A40_Sub *temp_v0;
    func_80371A40_Sub *temp_v0_2;

    if ((s32) arg0 == D_801BBCCC) {
        var_a2 = D_801BC03C;
    } else {
        var_a2 = D_801BC3D8;
    }
    temp_v0 = arg0->unk5C;
    if ((temp_v0->unk9C == 1) || (temp_v0->unk9C == 2)) {
        temp_v0->unk9C = 3;
    }
    temp_v0_2 = func_80005670(arg0, D_80387BEC, var_a2);
    if (temp_v0_2 != NULL) {
        temp_v0_2->unk68 = var_a2;
        temp_v0_2->unk6C = *(f32 *) &arg1;
        temp_v0_2->unk70 = *(f32 *) &arg2;
        temp_v0_2->unk74 = *(f32 *) &arg3;
        temp_v0_2->unk79 = 0;
        temp_v0_2->unk7A = 0;
        temp_v0_2->unk7C = 0.0f;
        temp_v0_2->unk80 = 0.0f;
        temp_v0_2->unk84 = 0.0f;
        temp_v0_2->unk88 = 0.0f;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80371AF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80371D04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80371DF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80371E84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372094.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372198.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_803721E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372388.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_803724C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372784.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_8037296C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372CB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372D9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80372F8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803709D0/func_80373634.s")

