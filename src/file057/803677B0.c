#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_803677B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_8036780C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_80367914.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_80367C24.s")


typedef struct func_80367C30_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_80367C30_Struct;

extern u8 D_801BBBF0[];
extern u8 D_8008DA88[];

s32 func_80006214();
s32 func_80010550(void *, s32);
s32 func_802237B0();
void func_8035DD80(void *, s32);
void func_80368020(void *, void *);

void func_80367C30(func_80367C30_Struct *arg0, void *arg1) {
    func_80367C30_Struct *var_a2;
    s32 sp28;
    s32 sp24;

    if (arg0 != *(func_80367C30_Struct **)(D_801BBBF0 + 0xDC)) {
        var_a2 = *(func_80367C30_Struct **)(D_801BBBF0 + 0xDC);
    } else {
        var_a2 = *(func_80367C30_Struct **)(D_801BBBF0 + 0xEC);
    }
    sp28 = arg0->unk5C;
    sp24 = var_a2->unk5C;
    func_802237B0(arg0, 1, var_a2);
    func_802237B0(var_a2, 1);
    func_80006214(var_a2);
    func_80010550(D_8008DA88, sp24);
    func_80006214(arg0);
    if (func_80010550(arg1, sp28) != 0) {
        func_8035DD80(arg0, 0);
        func_80368020(arg0, arg1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_80367CE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_80367D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_80368020.s")


typedef struct func_80368284_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80368284_Struct;

void func_8013A334(func_80368284_Struct *, s32, s32, u16);
void func_802254F8(s32, s32, s32);
void func_802266CC(s32, u16);
void func_80371A40(s32, func_80368284_Struct);

void func_80368284(s32 arg0, s32 arg1, s32 arg2, void *arg3, u16 arg4, u16 arg5) {
    func_80368284_Struct sp1C;

    ((u8 *)arg3)[0x2FA] = 1;
    func_8013A334(&sp1C, arg1, arg2, arg4);
    func_80371A40(arg0, sp1C);
    func_802266CC(arg0, arg5);
    func_802254F8(arg0, 0x14, 4);
}


void func_803682FC(s32 arg0, s32 arg1, s32 arg2, void *arg3, u16 arg4) {
    func_80368284_Struct sp1C;

    ((u8 *)arg3)[0x2FA] = 1;
    func_8013A334(&sp1C, arg1, arg2, arg4);
    func_80371A40(arg0, sp1C);
    func_802266CC(arg0, 0x3BB);
    func_802254F8(arg0, 0xF, 6);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_80368374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_80368E58.s")


typedef struct func_80369094_Struct {
    u8 pad0;
    u8 unk1;
    u8 pad2[6];
    s16 unk8;
    u8 pad10[0x2D9 - 0x0A];
    u8 unk2D9;
} func_80369094_Struct;

extern s32 D_801BBCCC;
extern func_80369094_Struct D_801BC03C;
extern func_80369094_Struct D_801BC3D8;

func_80369094_Struct *func_803677B0(u8);
void func_80368E58(s32, s32, s16, s32);

void func_80369094(s32 arg0, s32 arg1) {
    func_80369094_Struct *var_v0;
    func_80369094_Struct *temp_v0;

    if (arg0 != D_801BBCCC) {
        var_v0 = &D_801BC03C;
    } else {
        var_v0 = &D_801BC3D8;
    }
    temp_v0 = func_803677B0(var_v0->unk2D9);
    func_80368E58(arg0, arg1, temp_v0->unk8, ((u32) temp_v0->unk1 >> 6) & 0xFF);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_803690F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_8036920C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_803693E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/803677B0/func_803697AC.s")

