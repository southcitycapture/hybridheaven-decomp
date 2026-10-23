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


struct func_8038D4D4_Struct0 {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad1[5];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D4D4_Struct1 {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad1[0x29C];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D4D4_Struct2 {
    u8 pad0[0x30];
    s32 unk30;
};

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

s32 func_8038D4D4(struct func_8038D4D4_Struct0 *arg0, struct func_8038D4D4_Struct1 *arg1, struct func_8038D4D4_Struct2 *arg2) {
    if ((f64) *(f32 *) &D_801BC3D8[0x3A8] > 15.0) {
        arg1->unk2D8 = 0x13U;
        arg1->unk2D9 = 7U;
    } else if (((u32) (arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = (s16) (arg0->unk9A | 8);
    } else if (((u32) arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2U;
        arg0->unk9A = (s16) (arg0->unk9A | 2);
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (func_8022B640(0xA) < 7) {
        arg1->unk2D8 = 0U;
        func_80229CE0(arg0, arg1, 1);
    } else {
        arg1->unk2D8 = 1U;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = (u8) arg1->unk2D8;
    arg0->unkA2 = (u8) arg1->unk2D9;
}


struct func_8038D600_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x82];
    u8 unk92;
    u8 unk93;
    u8 pad2[4];
    s16 unk98;
};

extern s32 D_801BBCCC;
#define func_8038D680 func_8038D680__decl261
extern void func_8038D680(void);

void func_8038D600(struct func_8038D600_Struct *arg0, s32 arg1) {
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
    arg0->unk98 = 5;
    func_8038D4D4(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038D680);
}
#undef func_8038D680

#define func_8038D680 D_8038D680
#undef func_8038D680

typedef struct func_8038D680_StructA {
    u8 pad0[0xC];
    void *unkC;
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
} func_8038D680_StructA;

typedef struct func_8038D680_StructP {
    u8 pad0[0x30];
    union {
        struct {
            u32 b0 : 3;
            u32 b3 : 4;
            u32 b7 : 4;
            u32 b11 : 2;
            u32 b13 : 19;
        } b;
        struct {
            u16 h30;
        } c;
    } u30;
    u8 pad34[0x38 - 0x34];
    u32 b31 : 1;
    u32 pad38 : 2;
    u32 b28 : 1;
    u32 rest : 28;
} func_8038D680_StructP;

extern s32 func_8022AB58(void *, void *, void *);
extern u8 func_8022B3E0[];
extern void D_8038D680(void);

void func_8038D680(func_8038D680_StructA *arg0, s32 arg1) {
    func_8038D680_StructP *p;
    func_8038D680_StructP *q;

    p = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D680_StructP *)D_801BC03C : (func_8038D680_StructP *)D_801BC3D8;
    q = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D680_StructP *)D_801BC3D8 : (func_8038D680_StructP *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D4D4((void *)arg0, (void *)p, (void *)q);
        arg0->unkA8 = 0;
        return;
    }
    if ((p->u30.c.h30 & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D680;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, p, q) != 0) {
        arg0->unk91 = 0;
        func_8038D4D4((void *)arg0, (void *)p, (void *)q);
        return;
    }
    if (D_801BBBF0.unkB90 > 15.0f) {
        if (arg0->unk9A == 0) {
            arg0->unk9A = arg0->unk9A | 0x100;
            func_8038D4D4((void *)arg0, (void *)p, (void *)q);
            return;
        }
    }
    if (D_801BBBF0.unkB90 <= 15.0f) {
        if (arg0->unk9A & 0x100) {
            arg0->unk9A = arg0->unk9A ^ 0x100;
            func_8038D4D4((void *)arg0, (void *)p, (void *)q);
            return;
        }
    }
    if (q->u30.b.b11 != 0 || q->u30.b.b3 == 2) {
        func_8038D4D4((void *)arg0, (void *)p, (void *)q);
        return;
    }
    if (q->u30.b.b11 == 0) {
        if (arg0->unk9A & 8) {
            arg0->unk9A = arg0->unk9A ^ 8;
            arg0->unk92 = arg0->unk93;
            func_8038D4D4((void *)arg0, (void *)p, (void *)q);
            return;
        }
    }
    if (p->b31 && !p->b28 && !(arg0->unk9A & 2)) {
        func_8038D4D4((void *)arg0, (void *)p, (void *)q);
        return;
    }
    if (p->b31 && p->b28 && !(arg0->unk9A & 4)) {
        func_8038D4D4((void *)arg0, (void *)p, (void *)q);
        return;
    }
    if (!p->b31 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        func_8038D4D4((void *)arg0, (void *)p, (void *)q);
    }
}

/* starting point: func_8038D900 (file061), whose assembly is 91% the same as this function's */

struct func_8038D8E0_StructA {
    u8 pad0[0xA5];
    u8 unkA5;
};

struct func_8038D8E0_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x333 - 8];
    u8 unk333;
};

extern void func_8022A834();

void func_8038D8E0(struct func_8038D8E0_StructA *arg0, struct func_8038D8E0_StructB *arg1)
{
  s32 temp_v0;
  s32 k;
  temp_v0 = arg1->unk333;
  k = 2;
  if (temp_v0 == 0)
  {
    goto case0;
  }
  if (1 == temp_v0)
  {
    goto case1;
  }
  if (temp_v0 == k)
  {
    goto case2;
    done:
    return;

  }
  goto done;
  case0:
  arg0->unkA5 = 0;

  arg1->unk333 = (u8) (arg1->unk333 + 1);
  return;
  case1:
  func_8022A834();

  arg1->unk333 = (u8) (arg1->unk333 + 1);
  return;
  case2:
  if (arg1->unk6 >= 0x64)
  {
    arg0->unkA5 = k;
  }
  else
  {
    arg0->unkA5 = 0;
  }

  arg1->unk333 = 0;
  return;
}

