#include "common.h"

extern s32 D_801BBCCC;
extern s32 func_8022AB58();
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 func_8022B3E0[];
extern void *func_800058DC(void *, void *);
extern void D_8038D744(void *, void *, void *, void *);
extern void func_80229500(void);
extern void func_8022A834();
#define func_8038CFF4 func_8038CFF4__decl
extern void func_8038CFF4(void);
extern void func_8038D8A0();



void func_8038CFC0(void *arg0, s32 arg1)
{
  void *new_var3;
  void (*new_var)(void);
  void (*new_var2)(void);
  new_var3 = new_var3;
  if ((!arg0) && (!arg0))
  {
  }
 do { func_80229500(); new_var2 = func_8038CFF4; } while (0);
  if (1 ^ 0)
  {
    new_var = new_var2;
    new_var3 = (void *) new_var;
    func_800058DC(arg0, new_var3);
  }
}

#undef func_8038CFF4
#define B_801BBBF0 B_801BBBF0__func_8038CFF4
#define D_801BBC8C D_801BBC8C__func_8038CFF4
#define D_801BBCAC D_801BBCAC__func_8038CFF4
#define func_8001EAD0 func_8001EAD0__func_8038CFF4
#define func_8001EB64 func_8001EB64__func_8038CFF4
#define func_8010843C func_8010843C__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_802291FC func_802291FC__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4


typedef struct func_8038CFF4_StructB {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x98 - 0x10];
    s16 unk98;
} func_8038CFF4_StructB;

typedef struct func_8038CFF4_StructA {
    u8 pad0[0xC];
    func_8038CFF4_StructB *unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 pad2[2];
    u8 unk95;
    s16 unk96;
    s16 unk98;
} func_8038CFF4_StructA;

typedef struct func_8038CFF4_StructO {
    u8 pad0[6];
    s16 unk6;
    u8 pad8[0x30 - 0x8];
    union {
        struct {
            u32 x0 : 3;
            u32 c3 : 4;
            u32 x7 : 2;
            u32 b9 : 2;
            u32 b11 : 2;
            u32 rest : 19;
        } bf;
        u16 h;
        u8 b[4];
    } u30;
    u8 pad34[0x2FC - 0x34];
    u8 unk2FC;
    u8 pad2FD[0x312 - 0x2FD];
    s16 unk312;
} func_8038CFF4_StructO;

typedef struct func_8038CFF4_StructP {
    u8 pad0[0x2C];
    struct func_8038CFF4_StructV {
        f32 unk0;
        f32 unk4;
        f32 unk8;
        f32 unkC;
    } *unk2C;
} func_8038CFF4_StructP;

typedef struct func_8038CFF4_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    func_8038CFF4_StructP *unkE0;
    u8 pad1[0xF0 - 0xE4];
    func_8038CFF4_StructP *unkF0;
    u8 pad2[0x232 - 0xF4];
    s16 unk232;
    u8 pad3[0xB90 - 0x234];
    f32 unkB90;
    u8 pad4[0x1031 - 0xB94];
    u8 unk1031;
} func_8038CFF4_StructG;

extern func_8038CFF4_StructG B_801BBBF0;
#define G B_801BBBF0

extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];

f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
s32 func_8010843C(f32, f32, f32, f32, f32, f32);
s32 func_80228C20(void *);
s32 func_80228D90(void *, void *);
void func_80228FD0(void *, void *, s32);
s32 func_802291FC(void *, void *, void *, s32);
void func_802292D0(void *, void *);

void func_8038CFF4(func_8038CFF4_StructA *arg0, func_8038CFF4_StructO *arg1) {
    s16 sp4E;
    s16 sp4C;
    s16 *sp48;
    s32 sp44;
    u8 *a1p;
    u8 *t1p;
#define a1 ((func_8038CFF4_StructO *)a1p)
#define t1 ((func_8038CFF4_StructO *)t1p)
    func_8038CFF4_StructP *sp38;
    s32 sp34;
    struct func_8038CFF4_StructV *p;
    f32 sp2C;
    s32 v1;
    s32 v0;
#define q (sp38->unk2C)
    s16 s0;

    sp4C = (s16)(0x2800 - G.unk232) & 0x1FFF;
    v1 = arg0->unkC->unkC;
    v0 = G.unkDC;
    sp48 = (v0 == v1) ? (s16 *)D_801BBC8C : (s16 *)D_801BBCAC;
    a1p = (v0 == v1) ? D_801BC03C : D_801BC3D8;
    t1p = (v0 == v1) ? D_801BC3D8 : D_801BC03C;
    sp38 = (v0 == v1) ? G.unkE0 : G.unkF0;
    if (arg0->unk91 == 1 && G.unk1031 == 7) {
        arg0->unk91 = 2;
    }
    if (a1->u30.bf.b9 != 0 && a1->u30.bf.c3 != 1) {
    if (G.unk1031 >= 7 && G.unk1031 != 0xF) {
        arg0->unk92 = arg0->unk95 = 0;
    }
    if (G.unk1031 == 5 && !(a1->u30.h & 7) && func_802291FC(arg0, a1, sp48, 10) == 0) {
    if ((G.unkB90 < 15.0 || arg0->unk95 == 1) && a1->unk6 >= 0x64) {
        if (arg0->unk95 == 0) {
            arg0->unk95 = 1;
            arg0->unk92 = 1;
            return;
        }
        if (G.unkB90 > 20.0) {
            arg0->unk95 = 0;
            arg0->unk92 = 0;
            return;
        }
        if ((t1->u30.bf.b11 != 0 && t1->unk312 >= 0xB) || t1->u30.bf.c3 == 2) {
            if (a1->unk6 >= 0x64) {
                *(u16 *)&sp48[2] = 0x8000;
            }
            return;
        }
        if (arg0->unk91 == 2) {
            arg0->unk92 = 3;
        }
        if (arg0->unk92 == 1) {
            if (a1->unk6 >= 0x46) {
                func_802292D0(sp48, a1);
                arg0->unk91 = 1;
                arg0->unk92 = 2;
                return;
            }
            func_80228FD0(arg0, sp48, 4);
            return;
        }
        if (arg0->unk92 == 2) {
            if ((a1->u30.b[2] & 3) == 2U) {
                arg0->unk92 = 3;
            }
            if ((a1->u30.b[2] & 3) == 0) {
                arg0->unk92 = 1;
            }
        } else if (arg0->unk92 == 3) {
            if (a1->unk6 >= 0x64) {
                if (func_80228D90(arg0, a1) != 0) {
                    a1->u30.b[2] = a1->u30.b[2] & 0xFFFC;
                    *(u16 *)&sp48[2] = 0x8000;
                    arg0->unk91 = 0;
                    return;
                }
            }
            func_80228FD0(arg0, sp48, 4);
        }
    } else {
    if (arg0->unk91 == 1) {
        arg0->unk91 = 2;
    }
    v0 = a1->u30.b[2];
    if ((v0 & 3) == 2U) {
        a1->u30.b[2] = v0 & 0xFFFC;
    }
    if (a1->unk6 < 0x64) {
        if (G.unkB90 < 50.0f && arg0->unk98 == 0) {
            sp2C = func_8001EB64((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF);
            if (func_8010843C(q->unk4, q->unk8, q->unkC, sp2C * 50.0f + q->unk4, q->unk8, q->unkC + func_8001EAD0((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF) * 50.0f) == 0) {
                sp4E = (s16)(func_80228C20(arg0) + sp4C + 0x1000) & 0x1FFF;
            } else {
                sp2C = func_8001EB64((s16)(func_80228C20(arg0) + 0x1800) & 0x1FFF);
                if (func_8010843C(q->unk4, q->unk8, q->unkC, sp2C * 50.0f + q->unk4, q->unk8, q->unkC + func_8001EAD0((s16)(func_80228C20(arg0) + 0x1800) & 0x1FFF) * 50.0f) == 0) {
                    sp4E = (s16)(func_80228C20(arg0) + sp4C + 0x1800) & 0x1FFF;
                } else {
                    sp2C = func_8001EB64((s16)(func_80228C20(arg0) + 0x800) & 0x1FFF);
                    if (func_8010843C(q->unk4, q->unk8, q->unkC, sp2C * 50.0f + q->unk4, q->unk8, q->unkC + func_8001EAD0((s16)(func_80228C20(arg0) + 0x800) & 0x1FFF) * 50.0f) == 0) {
                        sp4E = (s16)(func_80228C20(arg0) + sp4C + 0x800) & 0x1FFF;
                    }
                }
            }
            arg0->unk96 = sp4E;
            arg0->unk98 = 0x32;
            return;
        }
        if (arg0->unk98 != 0) {
            arg0->unk98 = arg0->unk98 - 1;
            sp48[1] = 0x2000;
            sp48[3] = -func_8001EB64(arg0->unk96) * 40.0f;
            sp48[4] = func_8001EAD0(arg0->unk96) * 40.0f;
        }
    } else {
    if (G.unkB90 > 40.0f) {
        if (func_80228D90(arg0, a1) != 0 && arg0->unkC->unk98 != 0 && (a1->unk2FC % 4) == 3) {
            *(u16 *)&sp48[2] = 0x8000;
            arg0->unkC->unk98 = arg0->unkC->unk98 - 1;
            return;
        }
    }
    s0 = (s16)(func_80228C20(arg0) + sp4C) & 0x1FFF;
    sp48[1] = 0x2000;
    sp48[3] = -func_8001EB64(s0) * 40.0f;
    sp48[4] = func_8001EAD0(s0) * 40.0f;
    }
    }
    }
    }
}
#undef G
#undef a1
#undef t1
#undef q
#undef B_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8010843C
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_802291FC
#undef func_802292D0
#define func_8038CFF4 func_8038CFF4__decl


typedef struct func_8038D744_Struct {
    u8 pad0[0x98];
    s16 unk98;
    s16 unk9A;
    u8 pad1[0x5];
    u8 unkA1;
    u8 unkA2;
} func_8038D744_Struct;

typedef struct func_8038D744_Arg1 {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D744_Arg1;

extern void func_802294BC(void *a);
extern void func_80229CE0(void *a, void *b, s32 c);

void func_8038D744(void *arg0, void *arg1, void *arg2) {
    if (((u32) (((u32 *) arg2)[12] << 0xB) >> 0x1E) != 0) {
        func_802294BC(arg1);
        ((func_8038D744_Struct *) arg0)->unk9A = (s16) (((func_8038D744_Struct *) arg0)->unk9A | 8);
    } else if ((*(f32 *) (D_801BC3D8 + 0x3A8) > 25.0) && (((func_8038D744_Struct *) arg0)->unk98 != 0)) {
        ((func_8038D744_Arg1 *) arg1)->unk2D8 = 0x13;
        ((func_8038D744_Arg1 *) arg1)->unk2D9 = 3;
    } else {
        ((func_8038D744_Arg1 *) arg1)->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 1);
    }
    ((func_8038D744_Struct *) arg0)->unkA1 = ((func_8038D744_Arg1 *) arg1)->unk2D8;
    ((func_8038D744_Struct *) arg0)->unkA2 = ((func_8038D744_Arg1 *) arg1)->unk2D9;
}


typedef struct func_8038D810_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x88];
    s16 unk98;
} func_8038D810_Struct;


void func_8038D810(func_8038D810_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    extern void func_80229500();

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
    arg0->unk98 = 3;
    func_8038D744(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D8A0);
}


typedef struct func_8038D8A0_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x4];
    u8 unk14[0x7D];
    u8 unk91;
    u8 pad92[0x6];
    s16 unk98;
    s16 unk9A;
    u8 pad9C[0xC];
    u8 unkA8;
    u8 padA9[0x7];
    void *unkB0;
} func_8038D8A0_Struct;
typedef struct func_8038D8A0_Glob {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D8A0_Glob;
extern func_8038D8A0_Glob D_801BBBF0;

void func_8038D8A0(func_8038D8A0_Struct *arg0, s32 arg1) {
    u8 *a1;
    u8 *a2;
    u32 v;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? D_801BC03C : D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? D_801BC3D8 : D_801BC03C;
    if (arg0->unkA8 == 2) {
        D_8038D744(arg0, a1, a2, &D_801BBBF0);
        arg0->unkA8 = 0;
        return;
    }
    if ((*(u16 *)(a1 + 0x30) & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = (void *)func_8038D8A0;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a1, a2, &D_801BBBF0) != 0) {
        arg0->unk91 = 0;
        D_8038D744(arg0, a1, a2, &D_801BBBF0);
        return;
    }
    v = (*(u32 *)(a2 + 0x30) << 11) >> 30;
    if (v != 0 && !(arg0->unk9A & 8)) {
        D_8038D744(arg0, a1, a2, &D_801BBBF0);
        return;
    }
    if (v == 0) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            D_8038D744(arg0, a1, a2, &D_801BBBF0);
            return;
        }
    }
    if (D_801BBBF0.unkB90 > 25.0f && arg0->unk9A == 0 && arg0->unk98 != 0) {
        arg0->unk9A |= 0x100;
        D_8038D744(arg0, a1, a2, &D_801BBBF0);
        return;
    }
    if (D_801BBBF0.unkB90 <= 20.0f) {
        if (arg0->unk9A & 0x100) {
            arg0->unk9A ^= 0x100;
            D_8038D744(arg0, a1, a2, &D_801BBBF0);
        }
    }
}


struct func_8038DA80_Arg0 {
    u8 pad[0xA5];
    u8 unkA5;
};

struct func_8038DA80_Arg1 {
    u8 pad[6];
    s16 unk6;
};


void func_8038DA80(struct func_8038DA80_Arg0 *arg0, struct func_8038DA80_Arg1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 1;
        return;
    }
    func_8022A834();
}

