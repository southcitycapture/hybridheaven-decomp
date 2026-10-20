#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file096/8038CFC0/func_8038CFF4.s")

extern u8 D_801BC3D8[];

typedef struct func_8038D694_StructA {
    u8 pad0[0x92];
    u8 unk92;
    u8 unk93;
    u8 pad94[6];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
} func_8038D694_StructA;

typedef struct func_8038D694_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 unk38;
    u8 pad3C[0x29C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D694_StructB;

typedef struct func_8038D694_StructC {
    u8 pad0[0x30];
    u32 unk30;
} func_8038D694_StructC;

extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

s32 func_8038D694(func_8038D694_StructA *x0, func_8038D694_StructB *x1, func_8038D694_StructC *arg2) {
    func_8038D694_StructA *arg0 = x0;
    func_8038D694_StructB *arg1 = x1;

    if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xB;
        if (arg0->unkA0 == 5) {
            arg1->unk2D9 = 4;
        } else {
            arg1->unk2D9 = 1;
        }
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A = arg0->unk9A | 0x20;
    } else if (((arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_802294BC(arg1);
        arg0->unk9A = 8;
    } else if ((arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = arg0->unk9A | 2;
        func_80229CE0(arg0, arg1, 0);
    } else if (20.0f < *(f32 *)((u8 *)&D_801BC3D8 + 0x3A8)) {
        arg1->unk2D8 = 0xC;
        if (func_8022B640(5) != 0) {
            arg1->unk2D9 = 0x1A;
        } else {
            arg1->unk2D9 = 0x1B;
        }
    } else if (func_8022B640(2) == 0) {
        arg1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 1);
        arg0->unk93 = arg0->unk92 = 0;
    } else {
        arg1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, 1);
        arg0->unk93 = arg0->unk92 = 1;
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


typedef struct func_8038D860_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x90];
    u8 unkA0;
} func_8038D860_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern void func_8038D8F0();

void func_8038D860(func_8038D860_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = &D_801BC03C;
    } else {
        var_a1 = &D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = &D_801BC3D8;
    } else {
        var_a2 = &D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    arg0->unkA0 = 5;
    func_8038D694(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D8F0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file096/8038CFC0/func_8038D8F0.s")

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DBA0(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

