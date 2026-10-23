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
#define func_8038D7F0 func_8038D7F0__decl78
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
#undef func_8038D7F0

#define func_8038D7F0 D_8038D7F0
#undef func_8038D7F0

typedef struct {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 pad0 : 11;
            u32 f : 2;
            u32 pad1 : 19;
        } bf;
    } u30;
    u8 pad34[4];
    u32 b31 : 1;
    u32 pad38 : 2;
    u32 b28 : 1;
    u32 pad38b : 28;
    u8 pad3C[0x396 - 0x3C];
    u8 unk396;
} func_8038D7F0_StructP;

typedef struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad94[0x9A - 0x94];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
} func_8038D7F0_StructA;

typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D7F0_StructG;

extern func_8038D7F0_StructG D_801BBBF0;
extern s32 func_8022AB58(void *, void *, void *);
extern u8 func_8022B3E0[];
extern u8 D_8038D7F0[];

void func_8038D7F0(func_8038D7F0_StructA *arg0, s32 arg1) {
    func_8038D7F0_StructP *p;
    func_8038D7F0_StructP *q;
    u32 f;

    p = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D7F0_StructP *)D_801BC03C : (func_8038D7F0_StructP *)D_801BC3D8;
    q = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D7F0_StructP *)D_801BC3D8 : (func_8038D7F0_StructP *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D630(arg0, p, q);
        arg0->unkA8 = 0;
        return;
    }
    if ((p->u30.h & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D7F0;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, p, q) != 0) {
        arg0->unk91 = 0;
        func_8038D630(arg0, p, q);
        return;
    }
    f = q->u30.bf.f;
    if ((f != 0) && !(arg0->unk9A & 8)) {
        func_8038D630(arg0, p, q);
        return;
    }
    if (p->b31 && !p->b28 && !(arg0->unk9A & 2)) {
        func_8038D630(arg0, p, q);
        return;
    }
    if (p->b31 && p->b28 && !(arg0->unk9A & 4)) {
        func_8038D630(arg0, p, q);
        return;
    }
    if (D_801BBBF0.unkB90 > 30.0f) {
        if ((arg0->unk9A == 0) && (q->unk396 == 0)) {
            arg0->unk9A |= 0x100;
            func_8038D630(arg0, p, q);
            return;
        }
    }
    if (D_801BBBF0.unkB90 <= 25.0f) {
        if (arg0->unk9A & 0x100) {
            arg0->unk9A ^= 0x100;
            func_8038D630(arg0, p, q);
            return;
        }
    }
    if (!p->b31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        func_8038D630(arg0, p, q);
        return;
    }
    if (f == 0) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            func_8038D630(arg0, p, q);
        }
    }
}

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DA6C(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

