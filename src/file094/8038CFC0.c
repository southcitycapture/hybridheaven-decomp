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


struct func_8038DD10_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 pad3[0x9A - 0x92];
    s16 unk9A;
    u8 pad4[0xA0 - 0x9C];
    u8 unkA0;
    u8 pad5[7];
    u8 unkA8;
    u8 pad6[7];
    void *unkB0;
};
struct func_8038DD10_Struct2 {
    s16 unk0;
    s16 unk2;
    u8 pad[0x2C];
    u16 unk30;
    u8 pad32[6];
    u32 b31 : 1;
    u32 b30 : 2;
    u32 b28 : 1;
    u32 b0 : 28;
};
struct func_8038DD10_Struct3 {
    u8 pad[0x30];
    u32 p29 : 3;
    u32 g : 4;
    u32 p21 : 4;
    u32 f : 2;
    u32 p0 : 19;
};
struct func_8038DD10_Glob {
    u8 pad[0xDC];
    s32 unkDC;
    u8 pad2[0xB90 - 0xE0];
    f32 unkB90;
    u8 pad3[0x1031 - 0xB94];
    u8 unk1031;
};
extern struct func_8038DD10_Glob D_801BBBF0;
extern u8 func_8022B3E0[];
extern s32 func_8022AB58();

#define CALL() func_8038DA10((void *)arg0, (void *)a3, (void *)a2)

void func_8038DD10(struct func_8038DD10_Struct *arg0, s32 arg1) {
    struct func_8038DD10_Struct2 *a3;
    struct func_8038DD10_Struct3 *a2;
    s32 v1;
    u32 w;
    u32 f;
    u32 g;

    a3 = (D_801BBBF0.unkDC == arg0->unkC) ? (void *)D_801BC03C : (void *)D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (void *)D_801BC3D8 : (void *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        CALL();
        arg0->unkA8 = 0;
        return;
    }
    if ((a3->unk30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = func_8038DD10;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if ((a3->unk2 < (a3->unk0 / 5)) && (arg0->unkA0 != 0) && !(arg0->unk9A & 0x20)) {
        CALL();
        return;
    }
    if (func_8022AB58(arg0, a3) != 0) {
        arg0->unk91 = 0;
        CALL();
        return;
    }
    if (a2->f || (a2->g == 2)) {
        CALL();
        return;
    }
    if (!a2->f && (a2->g != 2)) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            CALL();
            return;
        }
    }
    if ((D_801BBBF0.unkB90 > 25.0f) && !(arg0->unk9A & 0x100)) {
        CALL();
        return;
    }
    if (D_801BBBF0.unkB90 <= 20.0f) {
        if (arg0->unk9A & 0x100) {
            arg0->unk9A ^= 0x100;
            CALL();
            return;
        }
    }
    if (a3->b31 && !a3->b28 && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a3->b31 && a3->b28 && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (!a3->b31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        CALL();
    }
}
#undef CALL


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

