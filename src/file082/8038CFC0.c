#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file082/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file082/8038CFC0/func_8038CFF4.s")

extern u8 D_801BC3D8[];

struct func_8038D5F8_StructA {
    u8 pad0[0x98];
    s16 unk98;
    s16 unk9A;
    u8 pad1[0x5];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D5F8_StructB {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D5F8_StructC {
    u8 pad0[0x30];
    s32 unk30;
};

void func_802294BC(void *);
void func_80229CE0(void *, void *, s32);
s32 func_8022B640(s32);

void func_8038D5F8(void *arg0, void *arg1, void *arg2) {
    struct func_8038D5F8_StructA *a0;
    struct func_8038D5F8_StructB *a1;
    struct func_8038D5F8_StructC *a2;

    a0 = arg0;
    a1 = arg1;
    a2 = arg2;
    if ((*(f32 *) &D_801BC3D8[0x3A8] > 25.0f) && (a0->unk98 != 0)) {
        a1->unk2D8 = 0x13;
        a1->unk2D9 = 3;
    } else if (((u32) (a2->unk30 << 0xB) >> 0x1E) != 0) {
        func_802294BC(arg1);
        a0->unk9A = 8;
    } else if (func_8022B640(2) == 0) {
        a1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 1);
    } else {
        a1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    a0->unkA1 = a1->unk2D8;
    a0->unkA2 = a1->unk2D9;
}


struct func_8038D6DC_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x88];
    s16 unk98;
};

void func_800058DC(void *, void *);
void func_80229500(void *, void *, void *);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 func_8038D76C[];

void func_8038D6DC(struct func_8038D6DC_Struct *arg0, void *arg1) {
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
    func_8038D5F8(arg0, var_a1, var_a2);
    arg0->unk98 = 5;
    func_800058DC(arg0, func_8038D76C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file082/8038CFC0/func_8038D76C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file082/8038CFC0/func_8038D950.s")

