#include "common.h"

extern s32 D_801BBCCC;
extern s32 func_80229500();
extern s32 func_8022B640();
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern void func_802294BC();
extern void func_80229CE0();
extern void func_8038CFF4();
extern void func_8038DA0C();


extern void func_800058DC(void *a, void *b);

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file098/8038CFC0/func_8038CFF4.s")

typedef struct func_8038D800_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
} func_8038D800_StructA;
typedef struct func_8038D800_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 flag:1;
    u8 pad3C[0x29F];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D800_StructB;
typedef struct func_8038D800_StructC {
    u8 pad[0x30];
    u32 pre:11;
    u32 f:2;
} func_8038D800_StructC;

s32 func_8038D800(func_8038D800_StructA *arg0, func_8038D800_StructB *arg1, func_8038D800_StructC *arg2) {
    if (arg1->flag != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = arg0->unk9A | 2;
        func_80229CE0(arg0, arg1, (u8)func_8022B640(2));
    } else if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 3;
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A = arg0->unk9A | 0x20;
    } else if (arg2->f != 0) {
        func_802294BC(arg1);
        arg0->unk9A = 8;
    } else if ((f64)*(f32 *)(&D_801BC3D8 + 0x3A8) > 20.0) {
        arg1->unk2D8 = 0x13;
        arg1->unk2D9 = func_8022B640(5);
    } else if (func_8022B640(2) == 0) {
        arg1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 1);
    } else {
        arg1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, 1);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


typedef struct func_8038D97C_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x90];
    u8 unkA0;
} func_8038D97C_Struct;


void func_8038D97C(func_8038D97C_Struct *arg0, void *arg1) {
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
    arg0->unkA0 = 99;
    func_8038D800(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038DA0C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file098/8038CFC0/func_8038DA0C.s")


struct func_8038DC3C_Struct1 {
    u8 pad[6];
    s16 unk6;
};

struct func_8038DC3C_Struct2 {
    u8 pad[0xA5];
    u8 unkA5;
};

void func_8038DC3C(struct func_8038DC3C_Struct2 *arg0, struct func_8038DC3C_Struct1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 2;
        return;
    }
    arg0->unkA5 = 0;
}

