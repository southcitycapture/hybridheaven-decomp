#include "context.h"

typedef struct func_8038CFF4_StructP {
    u8 pad0[0x6];
    s16 unk6;
    u8 pad8[0x30 - 0x8];
    union {
        struct {
            u32 bf0 : 3;
            u32 bf3 : 4;
            u32 bf7 : 2;
            u32 bf9 : 2;
            u32 bf11 : 2;
            u16 bf13 : 3;
            u32 bf16 : 6;
            u32 bf22 : 2;
            u32 bf24 : 3;
            u32 bf27 : 2;
            u32 bf29 : 3;
        } b;
        struct {
            u16 h30;
            u8 unk32;
            u8 unk33;
        } c;
    } u30;
    u8 pad34[0x38 - 0x34];
    u32 bf38 : 1;
    u32 bf38_1 : 31;
    u8 pad3C[0x312 - 0x3C];
    s16 unk312;
} func_8038CFF4_StructP;

typedef struct func_8038CFF4_StructC {
    u8 pad0[0x2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFF4_StructC;

typedef struct func_8038CFF4_StructG {
    u8 pad0[0xDC];
    void *unkDC;
    u8 padE0[0x232 - 0xE0];
    s16 unk232;
    u8 pad234[0xB90 - 0x234];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038CFF4_StructG;

typedef struct func_8038CFF4_StructB {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0x98 - 0x10];
    s16 unk98;
} func_8038CFF4_StructB;

typedef struct func_8038CFF4_StructA {
    u8 pad0[0xC];
    func_8038CFF4_StructB *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
    s16 unk9A;
    u32 unk9C;
} func_8038CFF4_StructA;

extern func_8038CFF4_StructG D_801BBBF0;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_80228C20(void *);
extern s32 func_80228D90(void *, void *);
extern s32 func_80228E5C();
extern s32 func_802291FC(void *, void *, void *, s32);
extern void func_802292D0(void *, void *);

void func_8038CFF4(func_8038CFF4_StructA *arg0, s32 arg1) {
    s16 t;
    s16 sp2C;
    func_8038CFF4_StructC *sp28;
    func_8038CFF4_StructP *a;
    func_8038CFF4_StructP *b;
    f64 d;

    sp2C = (s16)(0x2800 - D_801BBBF0.unk232) & 0x1FFF;
    sp28 = (func_8038CFF4_StructC *)((D_801BBBF0.unkDC == arg0->unkC->unkC) ? D_801BBC8C : D_801BBCAC);
    a = (func_8038CFF4_StructP *)((D_801BBBF0.unkDC == arg0->unkC->unkC) ? D_801BC03C : D_801BC3D8);
    b = (func_8038CFF4_StructP *)((D_801BBBF0.unkDC == arg0->unkC->unkC) ? D_801BC3D8 : D_801BC03C);
    if (arg0->unk91 == 1 && D_801BBBF0.unk1031 == 7) {
        arg0->unk91 = 2;
    }
    if (a->u30.b.bf9 != 0 && a->u30.b.bf3 != 1) {
        if (D_801BBBF0.unk1031 >= 7 && D_801BBBF0.unk1031 != 15) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (D_801BBBF0.unk1031 == 5 && a->u30.b.bf13 == 0 && func_802291FC(arg0, a, sp28, 30) == 0) {
            d = D_801BBBF0.unkB90;
            if ((d < 15.0 || arg0->unk95 == 1) && (arg0->unk9C & 0x100)) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if (d > 20.0) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                    return;
                }
                if ((b->u30.b.bf11 != 0 && b->unk312 >= 11) || b->u30.b.bf3 == 2) {
                    if (a->unk6 >= 100) {
                        sp28->unk4 = 0x8000;
                    }
                } else {
                    if (arg0->unk91 == 2) {
                        arg0->unk92 = 3;
                    }
                    if (arg0->unk92 == 1) {
                        if (a->bf38 != 0) {
                            arg0->unk92 = 3;
                            return;
                        }
                        if (a->unk6 >= 0x47) {
                            func_802292D0(sp28, a);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        func_80228E5C(arg0, sp28, 7);
                    } else if (arg0->unk92 == 2) {
                        if (a->bf38 != 0) {
                            arg0->unk92 = 3;
                        }
                        if (a->u30.b.bf22 == 2) {
                            arg0->unk92 = 3;
                        }
                        if (a->u30.b.bf22 == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 3) {
                        if (a->unk6 >= 100) {
                            if (func_80228D90(arg0, a) != 0) {
                                a->u30.b.bf22 = 0;
                                sp28->unk4 = 0x8000;
                                arg0->unk91 = 0;
                            }
                        }
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if (a->u30.b.bf22 == 2) {
                    a->u30.b.bf22 = 0;
                }
                if ((arg0->unk9C & 0xFF) > 160) {
                    t = (s16)(func_80228C20(arg0) + sp2C) & 0x1FFF;
                    if (D_801BBBF0.unkB90 > 50.0f) {
                        arg0->unk9A = 30;
                    }
                    if (arg0->unk9A-- > 0) {
                        sp28->unk2 = 0x2000;
                    }
                    sp28->unk6 = -func_8001EB64(t) * 40.0f;
                    sp28->unk8 = func_8001EAD0(t) * 40.0f;
                    if (a->unk6 >= 100) {
                        if (func_80228D90(arg0, a) != 0 && arg0->unkC->unk98 != 0 && D_801BBBF0.unkB90 < 25.0) {
                            a->u30.b.bf22 = 0;
                            sp28->unk4 = 0x8000;
                            arg0->unkC->unk98--;
                        }
                    }
                }
            }
        }
    }
}
