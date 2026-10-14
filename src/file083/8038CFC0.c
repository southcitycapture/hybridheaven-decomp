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

typedef struct func_8038CFF4_StructQ {
    u8 pad0[0x9C];
    u8 unk9C;
} func_8038CFF4_StructQ;

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
    u8 pad34[0x312 - 0x34];
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
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
    u8 pad9A[2];
    s32 unk9C;
} func_8038CFF4_StructA;

extern func_8038CFF4_StructG D_801BBBF0;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8022559C(s32, void *, void *, void *);
extern s16 func_80228C20(void *);
extern s32 func_80228D90(void *, void *);
extern void func_80228E5C(void *, void *, s32);
extern void func_80228FD0(void *, void *, s32);
extern void func_802292D0(void *, void *);

void func_8038CFF4(func_8038CFF4_StructA *arg0, s32 arg1) {
    s16 t;
    s16 ang;
    func_8038CFF4_StructC *c;
    func_8038CFF4_StructP *a;
    func_8038CFF4_StructP *b;
    s32 pad_q;
#define q ((func_8038CFF4_StructQ *)var_a0)
    s32 var_a0;
    s32 pad1;
    s16 s;
    f64 d;
    func_8038CFF4_StructT *dc;

    ang = (s16)(0x2800 - D_801BBBF0.unk232) & 0x1FFF;
    c = (func_8038CFF4_StructC *)((D_801BBBF0.unkDC == arg0->unkC->unkC) ? D_801BBC8C : D_801BBCAC);
    a = (func_8038CFF4_StructP *)((D_801BBBF0.unkDC == arg0->unkC->unkC) ? &D_801BC03C : &D_801BC3D8);
    b = (func_8038CFF4_StructP *)((D_801BBBF0.unkDC == arg0->unkC->unkC) ? &D_801BC3D8 : &D_801BC03C);
    if ((s32)&D_801BBBF0 + 0x44C == (s32)b) {
        var_a0 = D_801BBBF0.unkDC->unk5C->unk1C;
    } else {
        var_a0 = D_801BBBF0.unkEC->unk5C->unk1C;
    }
    pad_q = func_8022559C(var_a0, a, &D_801BBBF0, arg0);
    dc = D_801BBBF0.unkDC;
    var_a0 = (s32)((arg0->unkC->unkC == dc) ? dc->unk5C : D_801BBBF0.unkEC->unk5C);
    if (arg0->unk91 == 1 && D_801BBBF0.unk1031 == 7) {
        arg0->unk91 = 2;
    }
    if (a->u30.b.bf9 != 0 && a->u30.b.bf3 != 1) {
        if (D_801BBBF0.unk1031 >= 7 && D_801BBBF0.unk1031 != 15) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (D_801BBBF0.unk1031 == 5 && a->u30.b.bf13 == 0) {
            d = D_801BBBF0.unkB90;
            if (d < 20.0 || arg0->unk95 == 1) {
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
                if ((b->u30.b.bf11 != 0 && b->unk312 >= 11) || b->u30.b.bf3 == 2) {
                    if (a->unk6 >= 100) {
                        c->unk4 = 0x8000;
                    }
                } else if (arg0->unk92 == 1) {
                    if (a->unk6 >= 0x47) {
                        func_802292D0(c, a);
                        arg0->unk91 = 1;
                        arg0->unk92 = 2;
                        return;
                    }
                    func_80228E5C(arg0, c, 0x10);
                } else if (arg0->unk92 == 2) {
                    if (a->u30.b.bf22 == 2) {
                        q->unk9C = 3;
                        arg0->unk92 = 3;
                    }
                    if (a->u30.b.bf22 == 0) {
                        arg0->unk92 = 1;
                    }
                } else if (arg0->unk92 == 3) {
                    if (q->unk9C == 0) {
                        arg0->unk92 = 4;
                    }
                } else if (arg0->unk92 == 4) {
                    if (a->unk6 >= 100) {
                        if (func_80228D90(arg0, a) != 0) {
                            a->u30.b.bf22 = 0;
                            c->unk4 = 0x8000;
                            arg0->unk91 = 0;
                            return;
                        }
                    }
                    func_80228FD0(arg0, c, 0x10);
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if (a->u30.b.bf22 == 2) {
                    a->u30.b.bf22 = 0;
                }
                if (D_801BBBF0.unkB90 > 40.0f) {
                    arg0->unk98 = 0;
                }
                if (arg0->unk98 < 60) {
                    if (arg0->unk98 == 0) {
                        q->unk9C = 1;
                    }
                    if (arg0->unk98 == 50) {
                        q->unk9C = 3;
                    }
                    s = func_80228C20(arg0);
                    t = (s16)(func_8001EAD0(arg0->unk9C << 7) * 1024.0f + s + ang) & 0x1FFF;
                    c->unk6 = -func_8001EB64(t) * 80.0f;
                    c->unk8 = func_8001EAD0(t) * 80.0f;
                } else if (arg0->unk98 < 120) {
                    if (arg0->unk98 == 60) {
                        q->unk9C = 1;
                    }
                    if (arg0->unk98 == 110) {
                        q->unk9C = 3;
                    }
                    s = func_80228C20(arg0);
                    t = (s16)(func_8001EAD0(arg0->unk9C << 7) * 1024.0f + s + 4096.0f + ang) & 0x1FFF;
                    c->unk6 = -func_8001EB64(t) * 80.0f;
                    c->unk8 = func_8001EAD0(t) * 80.0f;
                }
            }
        }
    }
}


typedef struct {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
} func_8038D59C_Struct0;

typedef struct {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x2D8 - 4];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D59C_Struct1;

typedef struct {
    u8 pad0[0x30];
    s32 unk30;
} func_8038D59C_Struct2;

void func_802294BC(void *);
void func_80229CE0(void *, void *, s32);
s32 func_8022B640(s32);

void func_8038D59C(func_8038D59C_Struct0 *arg0, func_8038D59C_Struct1 *arg1, func_8038D59C_Struct2 *arg2) {
    if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xBU;
        arg1->unk2D9 = 3U;
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A = arg0->unk9A | 0x20;
    } else if (((u32) arg2->unk30 << 0xB) >> 0x1E != 0) {
        func_802294BC(arg1);
        arg0->unk9A = 8;
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0U;
        } else {
            arg1->unk2D8 = 1U;
        }
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


typedef struct func_8038D688_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x90];
    u8 unkA0;
} func_8038D688_Struct;

extern s32 D_801BBCCC;
extern void func_8038D718();

void func_8038D688(func_8038D688_Struct *arg0, void *arg1) {
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
    func_8038D59C(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D718);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file083/8038CFC0/func_8038D718.s")

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038D8BC(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

