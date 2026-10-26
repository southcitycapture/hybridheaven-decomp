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
    u8 padA7[0x2FC - 0xA7];
    u8 unk2FC;
    u8 pad2FD[0x312 - 0x2FD];
    s16 unk312;
} func_8038CFF4_StructP;

typedef struct func_8038CFF4_StructC {
    u8 pad0[0x4];
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
extern s32 func_80228C20(void *);
extern s32 func_80228D90(void *, void *);
extern s32 func_80228E5C();
extern void func_80228FD0(void *, void *, s32);
extern s32 func_80229260(void *, void *, void *, s32);
extern void func_802292D0(void *, void *);
extern f64 D_8038DAC0;

void func_8038CFF4(func_8038CFF4_StructA *arg0, s32 arg1) {
    s16 pad2E;
    s16 sp2C;
    func_8038CFF4_StructC *sp28;
    func_8038CFF4_StructP *a;
    func_8038CFF4_StructP *b;
    s32 var_a0;
    s16 t;
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
        if (D_801BBBF0.unk1031 == 5 && a->u30.b.bf13 == 0 && func_80229260(arg0, a, sp28, 15) == 0) {
            d = D_801BBBF0.unkB90;
            if (d < 18.0 || arg0->unk95 == 1) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if (d > 25.0) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                    return;
                }
                if ((b->u30.b.bf11 != 0 && (b->unk312 >= 11 || b->u30.b.bf3 == 1)) || b->u30.b.bf3 == 2) {
                    if (a->unk6 >= 50) {
                        sp28->unk4 = 0x8000;
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
                        if (a->unk2FC % 3 == 1) {
                            sp28->unk4 = 0x10;
                            arg0->unk90 = 0;
                            arg0->unk92 = 4;
                            return;
                        }
                        if (a->unk6 >= 0x47) {
                            func_802292D0(sp28, a);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        func_80228E5C(arg0, sp28, 0x10);
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
                                arg0->unk90 = 0;
                                arg0->unk92 = 4;
                                return;
                            }
                        }
                        if (a->bf38 == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 4) {
                        if (a->unk6 >= 100) {
                            if (func_80228D90(arg0, a) != 0) {
                                a->u30.b.bf22 = 0;
                                sp28->unk4 = 0x8000;
                                arg0->unk91 = 0;
                                return;
                            }
                        }
                        func_80228FD0(arg0, sp28, 8);
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if (a->u30.b.bf22 == 2) {
                    a->u30.b.bf22 = 0;
                }
                if (D_801BBBF0.unkB90 > 30.0f && !(a->unkA6 & 4) && a->unk6 >= 100) {
                    sp28->unk4 = 0x8000;
                    return;
                }
                if (a->unk6 >= 100) {
                    t = (s16)(func_80228C20(arg0) + sp2C) & 0x1FFF;
                    sp28->unk6 = -func_8001EB64(t) * 80.0f;
                    sp28->unk8 = func_8001EAD0(t) * 80.0f;
                    return;
                }
                if (D_801BBBF0.unkB90 > D_8038DAC0) {
                    func_80228FD0(arg0, sp28, 0x20);
                    return;
                }
                t = (s16)(func_80228C20(arg0) + sp2C + 0x1000) & 0x1FFF;
                sp28->unk6 = -func_8001EB64(t) * 80.0f;
                sp28->unk8 = func_8001EAD0(t) * 80.0f;
            }
        }
    }
}


extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

typedef struct func_8038D59C_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
} func_8038D59C_StructA;

typedef struct func_8038D59C_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x30 - 4];
    u32 unk30;
    u8 pad34[4];
    u32 unk38;
    u8 pad3C[0xA6 - 0x3C];
    u8 unkA6;
    u8 padA7[0x2D8 - 0xA7];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D59C_StructB;

void func_8038D59C(void *arg0, void *arg1, void *arg2) {
    func_8038D59C_StructA *a = arg0;
    func_8038D59C_StructB *b = arg1;
    func_8038D59C_StructB *c = arg2;

    if ((c->unk30 << 11 >> 30) != 0) {
        func_802294BC(b);
        a->unk9A = 8;
    } else if ((b->unk38 >> 31) != 0) {
        b->unk2D8 = 2;
        a->unk9A = 2;
        func_80229CE0(a, b, 1);
    } else if ((*(f32 *)(D_801BC3D8 + 0x3A8) > 30.0f) && !(b->unkA6 & 4)) {
        b->unk2D8 = 11;
        b->unk2D9 = 31;
        a->unk9A |= 0x100;
    } else if ((func_8022B640(2) == 0) && (b->unk2 < b->unk0 / 5)) {
        b->unk2D8 = 0;
        func_80229CE0(a, b, 2);
    } else {
        b->unk2D8 = 1;
        func_80229CE0(a, b, func_8022B640(2) & 0xFF);
    }
    a->unkA1 = b->unk2D8;
    a->unkA2 = b->unk2D9;
}


struct func_8038D6E8_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
#define func_8038D770 func_8038D770__decl285
extern u8 func_8038D770[];

void func_8038D6E8(struct func_8038D6E8_Struct *arg0, void *arg1) {
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
    func_8038D59C(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D770);
}
#undef func_8038D770

#define D_8038D59C D_8038D59C__func_8038D770
#define D_8038D770 D_8038D770__func_8038D770
#define func_8022AB58 func_8022AB58__func_8038D770
#define func_8022B3E0 func_8022B3E0__func_8038D770
#define func_8038CFF4_StructP func_8038CFF4_StructP__func_8038D770
#define func_8038D770 func_8038D770_decl
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
    u8 padA7[0x2FC - 0xA7];
    u8 unk2FC;
    u8 pad2FD[0x312 - 0x2FD];
    s16 unk312;
} func_8038CFF4_StructP;
#undef func_8038D770

typedef struct func_8038D770_StructP {
    u8 pad0[0x30];
    union {
        struct {
            u32 bf0 : 11;
            u32 bf11 : 2;
            u32 bf13 : 19;
        } b;
        struct {
            u16 h30;
            u16 h32;
        } c;
    } u30;
    u8 pad34[4];
    u32 b31 : 1;
    u32 pad38 : 2;
    u32 b28 : 1;
    u32 rest : 28;
    u8 pad3C[0xA6 - 0x3C];
    u8 unkA6;
} func_8038D770_StructP;
typedef struct func_8038D770_StructA {
    u8 pad0[0xC];
    void *unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x9A - 0x92];
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
} func_8038D770_StructA;
extern u8 func_8022B3E0[];
extern s32 func_8022AB58(void *, void *, void *, void *);
extern void D_8038D59C(void *, void *, void *, void *);
extern u8 D_8038D770[];

void func_8038D770(func_8038D770_StructA *arg0, void *arg1) {
    func_8038D770_StructP *p;
    func_8038D770_StructP *c;

    p = (func_8038D770_StructP *)((D_801BBBF0.unkDC == arg0->unkC) ? D_801BC03C : D_801BC3D8);
    c = (func_8038D770_StructP *)((D_801BBBF0.unkDC == arg0->unkC) ? D_801BC3D8 : D_801BC03C);
    if (arg0->unkA8 == 2) {
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        arg0->unkA8 = 0;
        return;
    }
    if ((p->u30.c.h30 & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D770;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, p, c,&D_801BBBF0) != 0) {
        arg0->unk91 = 0;
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        return;
    }
    if (c->u30.b.bf11 != 0 && !(arg0->unk9A & 8)) {
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        return;
    }
    if (c->u30.b.bf11 == 0 && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        return;
    }
    if (D_801BBBF0.unkB90 > 30.0f && !(arg0->unk9A & 0x100) && !(p->unkA6 & 4)) {
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        return;
    }
    if (D_801BBBF0.unkB90 < 30.0f && (arg0->unk9A & 0x100)) {
        arg0->unk9A = 0;
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        return;
    }
    if (p->b31 && !p->b28 && !(arg0->unk9A & 2)) {
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        return;
    }
    if (p->b31 && p->b28 && !(arg0->unk9A & 4)) {
        D_8038D59C(arg0, p, c, &D_801BBBF0);
        return;
    }
    if (!p->b31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        D_8038D59C(arg0, p, c, &D_801BBBF0);
    }
}
#undef D_8038D59C
#undef D_8038D770
#undef func_8022AB58
#undef func_8022B3E0
#undef func_8038CFF4_StructP



void func_8038D9D8(u8 *arg0, s16 *arg1) {
    if (arg1[3] >= 0x64 && 13.0 < (f64) *(f32 *) &D_801BC3D8[0x3A8]) {
        arg0[0xA5] = 2;
        return;
    }
    arg0[0xA5] = 0;
}


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_8038CFC0[] = {
    0x40, 0x41, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
