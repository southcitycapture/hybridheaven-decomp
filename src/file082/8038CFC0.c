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
    u8 pad34[0x44 - 0x34];
    s16 unk44;
    u8 pad46[0x2FC - 0x46];
    u8 unk2FC;
    u8 pad2FD[0x312 - 0x2FD];
    s16 unk312;
    u8 pad314[0x390 - 0x314];
    u8 unk390;
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
    u8 pad10[0x98 - 0x10];
    s16 unk98;
} func_8038CFF4_StructB;

typedef struct func_8038CFF4_StructA {
    u8 pad0[0xC];
    func_8038CFF4_StructB *unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
    s16 unk9A;
} func_8038CFF4_StructA;

extern func_8038CFF4_StructG D_801BBBF0;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern u8 func_8022559C(s32, void *, void *);
extern s32 func_80228C20(void *, void *, void *);
extern s32 func_80228D90(void *, void *, void *);
extern s32 func_80228E5C();
extern void func_802292D0(void *, void *);

void func_8038CFF4(func_8038CFF4_StructA *arg0, s32 arg1) {
    s16 sp2E;
    s16 sp2C;
    func_8038CFF4_StructC *sp28;
    s32 var_a0;
    func_8038CFF4_StructP *a;
    func_8038CFF4_StructP *b;
    u8 sp1B;
    s32 v;
    s32 t;
    f64 d;

    sp2C = (s16)(0x2800 - D_801BBBF0.unk232) & 0x1FFF;
    sp28 = (func_8038CFF4_StructC *)((D_801BBBF0.unkDC == arg0->unkC->unkC) ? D_801BBC8C : D_801BBCAC);
    a = (func_8038CFF4_StructP *)((D_801BBBF0.unkDC == arg0->unkC->unkC) ? D_801BC03C : D_801BC3D8);
    b = (func_8038CFF4_StructP *)((D_801BBBF0.unkDC == arg0->unkC->unkC) ? D_801BC3D8 : D_801BC03C);
    if ((s32)&D_801BBBF0 + 0x44C == (s32)b) {
        var_a0 = D_801BBBF0.unkDC->unk5C->unk1C;
    } else {
        var_a0 = D_801BBBF0.unkEC->unk5C->unk1C;
    }
    sp1B = func_8022559C(var_a0, a, &D_801BBBF0);
    if (arg0->unk91 == 1 && D_801BBBF0.unk1031 == 7) {
        arg0->unk91 = 2;
    }
    if (a->u30.b.bf9 != 0 && a->u30.b.bf3 != 1) {
        if (D_801BBBF0.unk1031 >= 7 && D_801BBBF0.unk1031 != 15) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (a->u30.b.bf13 == 0 && D_801BBBF0.unk1031 == 5) {
            d = D_801BBBF0.unkB90;
            if ((d < 20.0 ||arg0->unk95 == 1) && a->u30.b.bf27 == 0) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if (d > 30.0) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                    return;
                }
                if ((b->u30.b.bf11 != 0 && b->unk312 >= 11) || b->u30.b.bf3 == 2) {
                    if (a->unk6 >= 100) {
                        sp28->unk4 = 0x8000;
                    }
                } else {
                    if (a->unk6 >= 100 && arg0->unk98 < b->unk2FC) {
                        a->unk44 = 50;
                        a->unk390 = 1;
                        arg0->unk95 = 0;
                        arg0->unk92 = 0;
                        arg0->unk98++;
                        return;
                    }
                    if (arg0->unk91 == 2) {
                        arg0->unk92 = 3;
                    }
                    if (arg0->unk92 == 1) {
                        if (a->unk6 >= 0x47) {
                            func_802292D0(sp28, a);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                        } else {
                            func_80228E5C(arg0, sp28, 4);
                        }
                    } else if (arg0->unk92 == 2) {
                        if (a->u30.b.bf22 == 2) {
                            arg0->unk92 = 3;
                        }
                        if (a->u30.b.bf22 == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 3) {
                        if (a->unk6 >= 100) {
                            if (func_80228D90(arg0, a, &D_801BBBF0) != 0) {
                                a->u30.b.bf22 = 0;
                                sp28->unk4 = 0x8000;
                                arg0->unk91 = 0;
                                return;
                            }
                        }
                        func_80228E5C(arg0, sp28, 4);
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if (a->u30.b.bf22 == 2) {
                    a->u30.b.bf22 = 0;
                }
                sp2E = (s16)(func_80228C20(arg0, a, &D_801BBBF0) + sp2C) & 0x1FFF;
                if (D_801BBBF0.unkB90 < 45.0f && D_801BBBF0.unkB90 > 25.0f && a->unk6 >= 100) {
                    if (func_80228D90(arg0, a, &D_801BBBF0) != 0 &&arg0->unkC->unk98 != 0 && b->u30.b.bf11 == 0) {
                        sp28->unk4 = 0x8000;
                        arg0->unkC->unk98--;
                        return;
                    }
                }
                if (D_801BBBF0.unkB90 > 60.0f) {
                    arg0->unk9A = 30;
                }
                var_a0 = arg0->unk9A > 0;
                arg0->unk9A--;
                if (var_a0) {
                    sp28->unk2 = 0x2000;
                    sp28->unk6 = -func_8001EB64(sp2E) * 40.0f;
                    sp28->unk8 = func_8001EAD0(sp2E) * 40.0f;
                    return;
                }
                if (sp1B >= 21 || D_801BBBF0.unkB90 > 20.0f) {
                    sp28->unk6 = -func_8001EB64(sp2E) * 80.0f;
                    sp28->unk8 = func_8001EAD0(sp2E) * 80.0f;
                    return;
                }
                sp28->unk6 = -func_8001EB64(sp2E) * 40.0f;
                sp28->unk8 = func_8001EAD0(sp2E) * 40.0f;
            }
        }
    }
}


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

extern s32 D_801BBCCC;
#define func_8038D76C func_8038D76C__decl295
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
#undef func_8038D76C

#define D_8038D76C D_8038D76C__func_8038D76C
#define func_8022AB58 func_8022AB58__func_8038D76C
#define func_8022B3E0 func_8022B3E0__func_8038D76C

struct func_8038D76C_StructObj {
    u8 pad0[0x0C];
    void *unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 pad92[0x98 - 0x92];
    s16 unk98;
    s16 unk9A;
    u8 pad9C[0xA8 - 0x9C];
    u8 unkA8;
    u8 padA9[0xB0 - 0xA9];
    void *unkB0;
};

struct func_8038D76C_StructA {
    u8 pad0[0x30];
    u16 unk30;
};

struct func_8038D76C_StructB {
    u8 pad0[0x30];
    s32 unk30;
};
extern s32 func_8022AB58(void *, void *, void *);
extern u8 func_8022B3E0[];
extern u8 D_8038D76C[];

void func_8038D76C(struct func_8038D76C_StructObj *arg0, void *arg1) {
    struct func_8038D76C_StructA *var_a1;
    struct func_8038D76C_StructB *var_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    u32 temp_v0_3;

    if (D_801BBBF0.unkDC == arg0->unkC) {
        var_a1 = (struct func_8038D76C_StructA *) D_801BC03C;
    } else {
        var_a1 = (struct func_8038D76C_StructA *) D_801BC3D8;
    }
    if (D_801BBBF0.unkDC == arg0->unkC) {
        var_a2 = (struct func_8038D76C_StructB *) D_801BC3D8;
    } else {
        var_a2 = (struct func_8038D76C_StructB *) D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        func_8038D5F8(arg0, var_a1, var_a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((var_a1->unk30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D76C;
        func_800058DC((s32) arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, var_a1, var_a2) != 0) {
        arg0->unk91 = 0;
        func_8038D5F8(arg0, var_a1, var_a2);
        return;
    }
    if (D_801BBBF0.unkB90 > 25.0f) {
        temp_v0 = arg0->unk9A;
        if ((temp_v0 == 0) && (arg0->unk98 != 0)) {
            arg0->unk9A = (s16) (temp_v0 | 0x100);
            func_8038D5F8(arg0, var_a1, var_a2);
            return;
        }
    }
    if (D_801BBBF0.unkB90 <= 20.0f) {
        temp_v0_2 = arg0->unk9A;
        if (temp_v0_2 & 0x100) {
            arg0->unk9A = (s16) (temp_v0_2 ^ 0x100);
            func_8038D5F8(arg0, var_a1, var_a2);
            return;
        }
    }
    temp_v0_3 = (u32) (var_a2->unk30 << 0xB) >> 0x1E;
    if ((temp_v0_3 != 0) && !(arg0->unk9A & 8)) {
        func_8038D5F8(arg0, var_a1, var_a2);
        return;
    }
    if ((temp_v0_3 == 0) && (arg0->unk9A & 8)) {
        arg0->unk9A = (s16) (arg0->unk9A ^ 8);
        func_8038D5F8(arg0, var_a1, var_a2);
    }
}
#undef D_8038D76C
#undef func_8022AB58
#undef func_8022B3E0

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038D950(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

