#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file077/8038CFC0/func_8038CFF4.s")

extern u8 D_801BC3D8[];

struct func_8038D630_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
};
struct func_8038D630_StructB {
    u8 pad0[0x38];
    u32 unk38;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
};
struct func_8038D630_StructC {
    u8 pad0[0x30];
    u32 pad30_0 : 11;
    u32 f : 2;
    u32 pad30_1 : 19;
};
extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D630(void *a0, void *a1, void *a2) {
    struct func_8038D630_StructA *arg0 = a0;
    struct func_8038D630_StructB *arg1 = a1;
    struct func_8038D630_StructC *arg2 = a2;
    s32 v;

    if (arg2->f != 0) {
        func_802294BC(arg1);
        arg0->unk9A |= 8;
    } else if ((arg1->unk38 >> 31) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A |= 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (*(f32 *)(D_801BC3D8 + 0x3A8) > 30.0f) {
        arg1->unk2D8 = 0x13;
        arg1->unk2D9 = 1;
    } else {
        v = func_8022B640(5);
        if (v == 0 || v == 1 || v == 2) {
            arg1->unk2D8 = 0;
            func_80229CE0(arg0, arg1, 1);
        } else {
            arg1->unk2D8 = 1;
            func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        }
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038D768_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 func_8038D7F0[];

void func_8038D768(struct func_8038D768_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = D_801BC03C;
    } else {
        var_a1 = D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = D_801BC3D8;
    } else {
        var_a2 = D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    func_8038D630(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D7F0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file077/8038CFC0/func_8038D7F0.s")

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DA6C(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

