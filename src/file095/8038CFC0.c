#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file095/8038CFC0/func_8038CFF4.s")


typedef struct func_8038DB8C_StructA {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad93[0x6];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
} func_8038DB8C_StructA;

typedef struct func_8038DB8C_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 unk38;
    u8 pad3C[0x6A];
    u8 unkA6;
    u8 padA7[0x231];
    u8 unk2D8;
    u8 unk2D9;
} func_8038DB8C_StructB;

typedef struct func_8038DB8C_StructC {
    u8 pad0[0x30];
    struct {
        u32 a : 11;
        u32 b : 2;
        u32 c : 19;
    } unk30;
} func_8038DB8C_StructC;

extern void func_802294BC();
extern void func_80229CE0();
extern s32 func_8022B640();
extern u8 D_801BC3D8;

s32 func_8038DB8C(func_8038DB8C_StructA *arg0, func_8038DB8C_StructB *arg1, func_8038DB8C_StructC *arg2) {
    u8 v;
    u8 w;

    if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 4;
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A |= 0x20;
    } else if (arg2->unk30.b != 0) {
        func_802294BC(arg1);
        arg0->unk9A = 8;
    } else if ((arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A |= 2;
        func_80229CE0(arg0, arg1, 0);
    } else if (*(f32 *)((u8 *)&D_801BC3D8 + 0x3A8) > 25.0f) {
        if (!(arg1->unkA6 & 1)) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0x1E;
        } else if (!(arg1->unkA6 & 4)) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0x1F;
        } else if (!(arg1->unkA6 & 0x10)) {
            arg1->unk2D8 = 0xB;
            arg1->unk2D9 = 0x20;
        } else {
            arg0->unk92 = w = func_8022B640(5);
            if (w == 0) goto case0;
            if (w == 1) goto case0;
            if (w == 2) goto case0;
            if (w != 3) goto other;
case0:
            arg1->unk2D8 = 0xC;
            arg1->unk2D9 = 0x1C;
            goto done;
other:
            arg1->unk2D8 = 0xC;
            arg1->unk2D9 = 0x1D;
done:;
        }
        arg0->unk9A |= 0x100;
    } else {
        arg0->unk92 = v = func_8022B640(2);
        if (v == 0) {
            arg1->unk2D8 = 0;
            func_80229CE0(arg0, arg1, 1);
        } else {
            arg1->unk2D8 = 1;
            func_80229CE0(arg0, arg1, 1);
        }
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


typedef struct func_8038DDC0_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x90];
    u8 unkA0;
} func_8038DDC0_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern void func_8038DE50();

void func_8038DDC0(func_8038DDC0_Struct *arg0, void *arg1) {
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
    arg0->unkA0 = 1;
    func_8038DB8C(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038DE50);
}


typedef struct func_8038DE50_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x81];
    u8 unk91;
    u8 pad2[0x8];
    s16 unk9A;
    u8 pad3[0x4];
    u8 unkA0;
    u8 pad4[0x7];
    u8 unkA8;
    u8 pad5[0x7];
    s32 unkB0;
} func_8038DE50_Struct;

typedef struct func_8038DE50_Bits38 {
    u32 hi : 1;
    u32 pad : 2;
    u32 b28 : 1;
    u32 rest : 28;
} func_8038DE50_Bits38;

typedef struct func_8038DE50_Ctl {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x2C];
    u16 unk30;
    u8 pad32[6];
    func_8038DE50_Bits38 unk38;
} func_8038DE50_Ctl;

typedef struct func_8038DE50_Glob {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xAB0];
    f32 unkB90;
    u8 pad2[0x49D];
    u8 unk1031;
} func_8038DE50_Glob;

extern func_8038DE50_Glob D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();

#define CALL() func_8038DB8C((func_8038DB8C_StructA *)arg0, (func_8038DB8C_StructB *)a, b)

void func_8038DE50(func_8038DE50_Struct *arg0, s32 arg1) {
    func_8038DE50_Ctl *a;
    func_8038DB8C_StructC *b;
    u32 sub;
    s32 cur;
    func_8038DE50_Bits38 w;

    a = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038DE50_Ctl *)&D_801BC03C : (func_8038DE50_Ctl *)&D_801BC3D8;
    b = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038DB8C_StructC *)&D_801BC3D8 : (func_8038DB8C_StructC *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        CALL();
        arg0->unkA8 = 0;
        return;
    }
    if (((a->unk30 & 7) != 0) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = (s32)func_8038DE50;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if ((a->unk2 < a->unk0 / 5) && (arg0->unkA0 != 0) && !(arg0->unk9A & 0x20)) {
        CALL();
        return;
    }
    if (func_8022AB58() != 0) {
        arg0->unk91 = 0;
        CALL();
        return;
    }
    sub = b->unk30.b;
    if (sub != 0 && !(arg0->unk9A & 8)) {
        CALL();
        return;
    }
    if (D_801BBBF0.unkB90 > 25.0f && arg0->unk9A == 0) {
        CALL();
        return;
    }
    if (D_801BBBF0.unkB90 <= 20.0f) {
        s32 f = arg0->unk9A;
        if (f & 0x100) {
            arg0->unk9A = f ^ 0x100;
            CALL();
            return;
        }
    }
    if (a->unk38.hi && !a->unk38.b28 && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a->unk38.hi && a->unk38.b28 && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (!a->unk38.hi && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        CALL();
        return;
    }
    if (sub == 0 && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        CALL();
    }
}
#undef CALL

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038E100(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

