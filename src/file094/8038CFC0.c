#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file094/8038CFC0/func_8038CFF4.s")

extern u8 D_801BC3D8[];

struct func_8038DA10_A {
    u8 pad0[0x92];
    u8 unk92;
    u8 unk93;
    u8 pad1[4];
    s16 unk98;
    s16 unk9A;
    u8 pad2[4];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
};
struct func_8038DA10_B {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 unk38;
    u8 pad3C[0x62];
    u16 unk9E;
    u16 unkA0;
    u8 pad1[0x236];
    u8 unk2D8;
    u8 unk2D9;
};
extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640();

s32 func_8038DA10(struct func_8038DA10_A *arg0, struct func_8038DA10_B *arg1, u32 *arg2) {
    s32 t;

    if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 & 7)) {
        arg1->unk2D8 = 0xB;
        if (arg0->unkA0 == 7) {
            arg1->unk2D9 = 4;
        } else {
            arg1->unk2D9 = 1;
        }
        arg0->unk9A |= 0x20;
    } else {
        if (arg1->unk9E != 0 && arg1->unkA0 != 0) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0xF;
        } else if (arg1->unk9E != 0) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0xE;
        } else if (arg1->unkA0 != 0) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0xD;
        } else if (25.0f < *(f32 *)(D_801BC3D8 + 0x3A8)) {
            arg1->unk2D8 = 0xB;
            t = arg0->unk98;
            if (!(t & 1)) {
                arg1->unk2D9 = 0x1E;
                arg0->unk98 |= 1;
            } else if (!(t & 2)) {
                arg1->unk2D9 = 0x1F;
                arg0->unk98 |= 2;
            } else if (!(t & 4)) {
                arg1->unk2D9 = 0x20;
                arg0->unk98 |= 4;
            } else {
                arg1->unk2D8 = 0xC;
                arg1->unk2D9 = func_8022B640(2) * 2 + 0x15;
                arg0->unk93 = arg0->unk92 = 3;
            }
            arg0->unk9A |= 0x100;
        } else if (((arg2[0x30 / 4] << 11) >> 30) != 0) {
            func_80229404(arg1);
            arg0->unk9A |= 8;
        } else if ((arg1->unk38 >> 31) != 0) {
            arg1->unk2D8 = 2;
            arg0->unk9A |= 2;
            func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        } else if (func_8022B640(2) == 0) {
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


struct func_8038DC8C_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x82];
    u8 unk92;
    u8 unk93;
    u8 pad2[4];
    s16 unk98;
    u8 pad3[6];
    u8 unkA0;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern void func_8038DD10();

void func_8038DC8C(struct func_8038DC8C_Struct *arg0, s32 arg1) {
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
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    arg0->unkA0 = 7;
    arg0->unk98 = 0;
    func_8038DA10(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038DD10);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file094/8038CFC0/func_8038DD10.s")


struct func_8038DFDC_Struct0 {
    u8 pad[0xA5];
    u8 unkA5;
};
struct func_8038DFDC_Struct1 {
    u8 pad[6];
    s16 unk6;
    u8 pad2[0x32B];
    u8 unk333;
};
extern void func_8022A834(void *);

void func_8038DFDC(struct func_8038DFDC_Struct0 *arg0, struct func_8038DFDC_Struct1 *arg1) {
    s32 result;
    s32 two;

    result = func_8022B640(3) & 0xFF;
    if (result == 0) goto zero;
    if (result == 1) goto one;
    two = 2;
    if (result != two) goto other;
    goto other;
zero:
    arg0->unkA5 = 0;
    arg1->unk333++;
    return;
one:
    func_8022A834(arg0);
    arg1->unk333++;
    return;
other:
        if (arg1->unk6 >= 100) {
            arg0->unkA5 = two;
        } else {
            arg0->unkA5 = 0;
        }
        arg1->unk333 = 0;
}

