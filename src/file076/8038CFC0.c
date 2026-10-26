#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

typedef struct func_8038CFF4_StructU {
    u8 pad0[0x1C];
    s32 unk1C;
} func_8038CFF4_StructU;

typedef struct func_8038CFF4_StructT {
    u8 pad0[0x5C];
    func_8038CFF4_StructU *unk5C;
} func_8038CFF4_StructT;

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
    u8 pad3C[0xA6 - 0x3C];
    u8 unkA6;
    u8 padA7[0x312 - 0xA7];
    s16 unk312;
    u8 pad314[0x328 - 0x314];
    u8 unk328;
    u8 unk329;
    s16 unk32A;
    u8 pad32C[0x391 - 0x32C];
    u8 unk391;
} func_8038CFF4_StructP;

typedef struct func_8038CFF4_StructC {
    u8 pad0[0x4];
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFF4_StructC;

typedef struct func_8038CFF4_StructG {
    u8 pad0[0xDC];
    func_8038CFF4_StructT *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8038CFF4_StructT *unkEC;
    u8 padF0[0x232 - 0xF0];
    s16 unk232;
    u8 pad234[0x44C - 0x234];
    u8 unk44C[0xB90 - 0x44C];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038CFF4_StructG;

typedef struct func_8038CFF4_StructB {
    u8 pad0[0xC];
    void *unkC;
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
} func_8038CFF4_StructA;

extern func_8038CFF4_StructG D_801BBBF0;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern void func_8022559C(s32, void *);
extern s32 func_80228C20(void *);
extern s32 func_80228D90(void *, void *);
extern void func_80228FD0(void *, void *, s32);
extern s32 func_80229260(void *, void *, void *, s32);
extern void func_802292D0(void *, void *);

void func_8038CFF4(func_8038CFF4_StructA *arg0, s32 arg1) {
    s16 t;
    s16 sp3C;
    func_8038CFF4_StructC *sp38;
    s32 var_a0;
    func_8038CFF4_StructP *a;
    func_8038CFF4_StructP *b;
    u8 pad[4];
    f32 sp24;
    f64 d;

    sp3C = (s16)(0x2800 - D_801BBBF0.unk232) & 0x1FFF;
    sp38 = (func_8038CFF4_StructC *)((D_801BBBF0.unkDC == arg0->unkC->unkC) ? D_801BBC8C : D_801BBCAC);
    a = (func_8038CFF4_StructP *)((D_801BBBF0.unkDC == arg0->unkC->unkC) ? D_801BC03C : D_801BC3D8);
    b = (func_8038CFF4_StructP *)((D_801BBBF0.unkDC == arg0->unkC->unkC) ? D_801BC3D8 : D_801BC03C);
    if ((s32)&D_801BBBF0 + 0x44C == (s32)b) {
        var_a0 = D_801BBBF0.unkDC->unk5C->unk1C;
    } else {
        var_a0 = D_801BBBF0.unkEC->unk5C->unk1C;
    }
    func_8022559C(var_a0, a);
    if (arg0->unk91 == 1 && D_801BBBF0.unk1031 == 7) {
        arg0->unk91 = 2;
    }
    if (a->u30.b.bf9 != 0 && a->u30.b.bf3 != 1) {
        if (D_801BBBF0.unk1031 >= 7 && D_801BBBF0.unk1031 != 15) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (D_801BBBF0.unk1031 == 5 && a->u30.b.bf13 == 0 && func_80229260(arg0, a, sp38, 10) == 0) {
            d = D_801BBBF0.unkB90;
            if ((d < 25.0 || arg0->unk95 == 1) && a->unk6 >= 100) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if (d > 30.0) {
                    arg0->unk95 = arg0->unk92 = 0;
                    return;
                }
                if (d < 25.0 && ((b->u30.b.bf11 != 0 && (b->unk312 >= 11 || b->u30.b.bf3 == 1)) || b->u30.b.bf3 == 2)) {
                    if (a->unk6 >= 100) {
                        sp38->unk4 = 0x8000;
                    }
                } else {
                    if (arg0->unk91 == 2) {
                        arg0->unk92 = 4;
                    }
                    if (arg0->unk92 == 1) {
                        if (a->bf38 != 0) {
                            arg0->unk92 = 3;
                            arg0->unk90 = 0;
                            return;
                        }
                        if (a->unk6 >= 0x47) {
                            func_802292D0(sp38, a);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        func_80228FD0(arg0, sp38, 4);
                    } else if (arg0->unk92 == 2) {
                        if (a->bf38 != 0) {
                            arg0->unk92 = 3;
                            arg0->unk90 = 0;
                        }
                        if (a->u30.b.bf22 == 2) {
                            arg0->unk92 = 4;
                        }
                        if (a->u30.b.bf22 == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 3) {
                        if (a->bf38 != 0) {
                            var_a0 = arg0->unk90 >= 31;
                            arg0->unk90++;
                            if (var_a0) {
                                arg0->unk92 = 4;
                                arg0->unk90 = 0;
                            }
                        }
                        if (a->bf38 == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 4) {
                        if (a->unk6 >= 100) {
                            if (func_80228D90(arg0, a) != 0) {
                                a->unk391 = 1;
                                a->u30.b.bf22 = 0;
                                sp38->unk4 = 0x8000;
                                arg0->unk91 = 0;
                                return;
                            }
                        }
                        func_80228FD0(arg0, sp38, 4);
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if (a->u30.b.bf22 == 2) {
                    a->u30.b.bf22 = 0;
                }
                if (D_801BBBF0.unkB90 > 30.0f && !(a->unkA6 & 1) && a->unk6 >= 100) {
                    sp38->unk4 = 0x8000;
                    return;
                }
                if (D_801BBBF0.unkB90 > 30.0f || a->unk6 >= 100) {
                    t = (s16)(func_80228C20(arg0) + sp3C) & 0x1FFF;
                    sp38->unk6 = -func_8001EB64(t) * 40.0f;
                    sp38->unk8 = func_8001EAD0(t) * 40.0f;
                    return;
                }
                if (D_801BBBF0.unkB90 < 25.0f) {
                    a->unk328 = 3;
                    a->unk329 = 0;
                    sp24 = func_8001EB64(func_80228C20(arg0) + 0x1000) * 80.0f / 20.0;
                    a->unk32A = (s16)(func_8001EF38(sp24, func_8001EAD0(func_80228C20(arg0) + 0x1000) * 80.0f / 20.0) - sp3C) & 0x1FFF;
                }
            }
        }
    }
}


struct func_8038D5D8_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D5D8_StructB {
    u8 pad0[0x30];
    u32 unk30;
};

struct func_8038D5D8_StructC {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad3C[0xA6 - 0x3C];
    u8 unkA6;
    u8 padA7[0x2D8 - 0xA7];
    u8 unk2D8;
    u8 unk2D9;
};

extern void func_802294BC();
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640();

s32 func_8038D5D8(struct func_8038D5D8_StructA *arg0, struct func_8038D5D8_StructC *arg1, struct func_8038D5D8_StructB *arg2) {
    if (((u32) (arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_802294BC(arg1);
        arg0->unk9A = 8;
    } else if (((u32) arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if ((*(f32 *) &D_801BC3D8[0x3A8] > 30.0f) && !(arg1->unkA6 & 1)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 0x1E;
        arg0->unk9A = (s16) (arg0->unk9A | 0x100);
    } else if (func_8022B640(2) == 0) {
        arg1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 1);
    } else {
        arg1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, 1);
    }
    arg0->unkA1 = (u8) arg1->unk2D8;
    arg0->unkA2 = (u8) arg1->unk2D9;
}


struct func_8038D708_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
#define func_8038D790 func_8038D790__decl298
extern u8 func_8038D790[];

void func_8038D708(struct func_8038D708_Struct *arg0, void *arg1) {
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
    func_8038D5D8(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D790);
}
#undef func_8038D790

#define func_8022AB58 func_8022AB58__func_8038D790
#define func_8022B3E0 func_8022B3E0__func_8038D790
#define func_8038D790 func_8038D790_decl
#undef func_8038D790

typedef struct func_8038D790_StructP {
    u8 pad0[0x30];
    union {
        struct {
            u32 bf0 : 11;
            u32 bf11 : 2;
            u32 bf13 : 19;
        } b;
        u16 h30;
    } u30;
    u8 pad34[0x38 - 0x34];
    u32 b31 : 1;
    u32 b29 : 2;
    u32 b28 : 1;
    u32 rest : 28;
    u8 pad3C[0xA6 - 0x3C];
    u8 unkA6;
} func_8038D790_StructP;

typedef struct func_8038D790_StructA {
    u8 pad0[0xC];
    func_8038CFF4_StructT *unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x9A - 0x92];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
} func_8038D790_StructA;
extern void func_8022B3E0();
extern s32 func_8022AB58();

void func_8038D790(func_8038D790_StructA *arg0, s32 arg1) {
    func_8038D790_StructP *a1;
    func_8038D790_StructP *a2;
    u32 a3;

    a1 = (func_8038D790_StructP *)((arg0->unkC == D_801BBBF0.unkDC) ? D_801BC03C : D_801BC3D8);
    a2 = (func_8038D790_StructP *)((arg0->unkC == D_801BBBF0.unkDC) ? D_801BC3D8 : D_801BC03C);
    if (arg0->unkA8 == 2) {
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->u30.h30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = func_8038D790;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if ((D_801BBBF0.unkB90 > 30.0f) && !(arg0->unk9A & 0x100) && !(a1->unkA6 & 1)) {
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if ((D_801BBBF0.unkB90 < 30.0f) && (arg0->unk9A & 0x100)) {
        arg0->unk9A = 0;
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    a3 = a2->u30.b.bf11;
    if ((a3 != 0) && !(arg0->unk9A & 8)) {
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if (a1->b31 && !a1->b28 && !(arg0->unk9A & 2)) {
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if (a1->b31 && a1->b28 && !(arg0->unk9A & 4)) {
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if ((a3 == 0) && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if (!a1->b31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        func_8038D5D8((void *)arg0, (void *)a1, (void *)a2);
    }
}
#undef func_8022AB58
#undef func_8022B3E0

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038D9FC(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

