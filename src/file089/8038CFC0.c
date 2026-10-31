#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#define D_801BBBF0 D_801BBBF0__func_8038CFF4
#define D_801BBC20 D_801BBC20__func_8038CFF4
#define D_801BBC8C D_801BBC8C__func_8038CFF4
#define D_801BBCAC D_801BBCAC__func_8038CFF4
#define D_801BC03C D_801BC03C__func_8038CFF4
#define D_801BC3D8 D_801BC3D8__func_8038CFF4
#define func_8001EAD0 func_8001EAD0__func_8038CFF4
#define func_8001EB64 func_8001EB64__func_8038CFF4
#define func_8010843C func_8010843C__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8038DA8C_StructG func_8038DA8C_StructG__func_8038CFF4
typedef struct func_8038DA8C_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8038DA8C_StructG;
extern func_8038DA8C_StructG D_801BBBF0;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;


typedef struct func_8038CFF4_Obj {
    u8 pad0[0xC];
    struct func_8038CFF4_Obj *unkC;
    u8 pad10[0x80];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
    s16 unk9A;
} func_8038CFF4_Obj;

typedef struct func_8038CFF4_Ent {
    u8 pad0[2];
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFF4_Ent;

typedef struct func_8038CFF4_Bits {
    u32 a:3;
    u32 b:4;
    u32 c:2;
    u32 d:2;
    u32 e:21;
} func_8038CFF4_Bits;

typedef struct func_8038CFF4_V {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8038CFF4_V;

typedef struct func_8038CFF4_G {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad34[0xDC - 0x32];
    s32 unkDC;
    void *unkE0;
    u8 padE4[0xF0 - 0xE4];
    void *unkF0;
    u8 padF4[0x232 - 0xF4];
    s16 unk232;
    u8 pad234[0xB94 - 0x234];
    f32 unkB94;
    u8 padB98[0x1031 - 0xB98];
    u8 unk1031;
} func_8038CFF4_G;

typedef struct func_8038CFF4_T {
    u8 pad0[6];
    s16 unk6;
    u8 pad8[0x30 - 8];
    union {
        u32 w;
        u8 b[4];
        struct {
            u32 hi : 13;
            u32 f : 3;
            u32 lo : 16;
        } bf;
    } u30;
    u8 pad34[4];
    u32 unk38;
    u8 pad3C[0x2FC - 0x3C];
    u8 unk2FC;
    u8 pad2FD[3];
    u8 pad300[0x312 - 0x300];
    s16 unk312;
} func_8038CFF4_T;
#define unk32 u30.b[2]

#define GG (*(func_8038CFF4_G *)&D_801BBBF0)
extern u16 D_801BBC20;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80228C20();
extern s32 func_80228D90(void *);
extern s32 func_80229260();
extern void func_802292D0(void *, void *);

void func_8038CFF4(func_8038CFF4_Obj *arg0, s32 arg1) {
    s32 v;
    s32 w;
    f32 sp54;
    s16 sp52;
    s16 sp50;
    func_8038CFF4_Ent *sp4C;
    func_8038CFF4_T *sp48;
    func_8038CFF4_T *sp44;
    void *sp40;
#define p ((*(func_8038CFF4_V **)((u8 *)sp40 + 0x2C)))

    sp50 = (s16)(u16)(0x2800 - GG.unk232) & 0x1FFF;
    v = arg0->unkC->unkC;
    w = GG.unkDC;
    sp4C = (w == v) ? (func_8038CFF4_Ent *)D_801BBC8C : (func_8038CFF4_Ent *)D_801BBCAC;
    if (w == v) {
        sp48 = (func_8038CFF4_T *)&D_801BC03C;
    } else {
        sp48 = (func_8038CFF4_T *)&D_801BC3D8;
    }
    if (w == v) {
        sp44 = (func_8038CFF4_T *)&D_801BC3D8;
    } else {
        sp44 = (func_8038CFF4_T *)&D_801BC03C;
    }
    if (w == v) {
        sp40 = GG.unkE0;
    } else {
        sp40 = GG.unkF0;
    }
    if ((arg0->unk91 == 1) && (GG.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if (((sp48->u30.w << 9) >> 30) != 0 && ((sp48->u30.w << 3) >> 28) != 1) {
        if (GG.unk1031 >= 7 && GG.unk1031 != 0xF) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (GG.unk1031 == 5 && !sp48->u30.bf.f) {
            if (func_80229260(arg0, sp48, sp4C, 0xA) != 0) {
                return;
            }
            if (arg0->unk92 == 0) {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if (sp48->unk6 >= 0x46 && GG.unkB94 < 15.0) {
                    if ((((sp44->u30.w << 11) >> 30) != 0 && sp44->unk312 >= 0xB) || ((sp44->u30.w << 3) >> 28) == 2) {
                        if (sp48->unk6 >= 0x64) {
                            *(u16 *)&sp4C->unk4 = 0x8000;
                        }
                        return;
                    } else {
                        sp52 = (s16)(func_80228C20(arg0, (&D_801BBBF0)) + sp50) & 0x1FFF;
                        sp4C->unk6 = (s32)(-func_8001EB64(sp52) * 80.0f);
                        sp4C->unk8 = (s32)(func_8001EAD0(sp52) * 80.0f);
                        arg0->unk92 = 1;
                        arg0->unk90 = 0;
                    }
                } else {
                    arg0->unk92 = 0;
                    if (GG.unkB94 > 20.0f) {
                        sp52 = (s16)(func_80228C20(arg0, (&D_801BBBF0)) + sp50) & 0x1FFF;
                        if (arg0->unk98 == 0) {
                            sp4C->unk2 = 0x2000;
                            sp4C->unk6 = (s32)(-func_8001EB64(sp52) * 40.0f);
                            sp4C->unk8 = (s32)(func_8001EAD0(sp52) * 40.0f);
                        } else {
                            sp4C->unk6 = (s32)(-func_8001EB64(sp52) * 80.0f);
                            sp4C->unk8 = (s32)(func_8001EAD0(sp52) * 80.0f);
                            arg0->unk98 = arg0->unk98 - 1;
                        }
                    } else {
                        arg0->unk98 = 0x14;
                        if (GG.unkB94 > 14.0 && (GG.unk30 % 10) == 0) {
                            sp54 = 0.0f;
                        } else {
                            sp54 = 1.0f;
                        }
                        if (GG.unk30 & 0x100) {
                            if (func_8010843C(p->unk4, p->unk8, p->unkC, p->unk4 + func_8001EB64((s16)((s16)(s32)((f32)func_80228C20(arg0, (&D_801BBBF0)) + 2048.0f * sp54) & 0x1FFF)) * 20.0f, p->unk8, p->unkC + func_8001EAD0((s16)((s16)(s32)((f32)func_80228C20(arg0) + 2048.0f * sp54) & 0x1FFF)) * 20.0f) == 0) {
                                sp52 = (s16)(s32)((f32)func_80228C20(arg0) + 2048.0f * sp54 + (f32)sp50) & 0x1FFF;
                            }
                        } else {
                            if (func_8010843C(p->unk4, p->unk8, p->unkC, p->unk4 + func_8001EB64((s16)((s16)(s32)((f32)func_80228C20(arg0, (&D_801BBBF0)) - 2048.0f * sp54) & 0x1FFF)) * 20.0f, p->unk8, p->unkC + func_8001EAD0((s16)((s16)(s32)((f32)func_80228C20(arg0) - 2048.0f * sp54) & 0x1FFF)) * 20.0f) == 0) {
                                sp52 = (s16)(s32)((f32)func_80228C20(arg0) + (-2048.0f * sp54) + (f32)sp50) & 0x1FFF;
                            }
                        }
                        arg1 = (s32)GG.unk30 % 256;
                        if (arg1 >= 0x91 && arg1 < 0x99) {
                            sp4C->unk4 = 0x4000;
                        } else {
                            sp4C->unk6 = (s32)(-func_8001EB64(sp52) * 80.0f);
                            sp4C->unk8 = (s32)(func_8001EAD0(sp52) * 80.0f);
                        }
                    }
                }
                if ((sp48->unk32 & 3) == 2U) {
                    sp48->unk32 = sp48->unk32 & 0xFFFC;
                }
            } else {
                w = arg0->unk92;
                if (1 == (w | 0)) {
                    if ((sp48->unk38 >> 31) != 0) {
                        arg0->unk90 = 0x14;
                        arg0->unk92 = 3;
                        return;
                    }
                    if ((sp48->unk2FC % 3) == 2) {
                        sp4C->unk4 = 0x10;
                        arg0->unk90 = 0x14;
                        arg0->unk92 = 3;
                        return;
                    }
                    if (arg0->unk91 != 2) {
                        func_802292D0(sp4C, sp48);
                        arg0->unk91 = 1;
                        arg0->unk92 = 2;
                        return;
                    }
                    arg0->unk92 = 3;
                    return;
                }
                if (2 == (w | 0)) {
                    if ((sp48->unk38 >> 31) != 0) {
                        arg0->unk90 = 0x14;
                        arg0->unk92 = 3;
                    }
                    if ((sp48->unk32 & 3) == 2U) {
                        sp52 = (s16)(func_80228C20(arg0) + sp50) & 0x1FFF;
                        sp4C->unk6 = (s32)(-func_8001EB64(sp52) * 80.0f);
                        sp4C->unk8 = (s32)(func_8001EAD0(sp52) * 80.0f);
                        arg0->unk92 = 3;
                    }
                    if ((sp48->unk32 & 3) == 0) {
                        arg0->unk92 = 1;
                    }
                } else if (w == 3U) {
                    if (*(f32 *)((u8 *)&D_801BC3D8 + 0x3AC) > 20.0) {
                        arg0->unk92 = 0;
                        return;
                    }
                    if (sp48->unk6 >= 0x64 && func_80228D90(arg0) != 0 && arg0->unk90 == 0) {
                        sp48->unk32 = sp48->unk32 & 0xFFFC;
                        *(u16 *)&sp4C->unk4 = 0x8000;
                        arg0->unk91 = 0;
                        arg0->unk9A = arg0->unk9A + 1;
                    }
                    if (arg0->unk90 != 0) {
                        arg0->unk90 = arg0->unk90 - 1;
                    }
                }
            }
        }
    }
}
#undef unk32
#undef GG
#undef p
#undef D_801BBBF0
#undef D_801BBC20
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8010843C
#undef func_80228C20
#undef func_80228D90
#undef func_80229260
#undef func_802292D0
#undef func_8038DA8C_StructG


typedef struct func_8038D918_StructA {
    u8 pad0[0x92];
    u8 unk92;
    u8 pad93[0x9A - 0x93];
    s16 unk9A;
    u8 pad9C[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
} func_8038D918_StructA;

typedef struct func_8038D918_StructB {
    u8 pad0[0x30];
    u32 unk30;
} func_8038D918_StructB;

typedef struct func_8038D918_StructC {
    u8 pad0[0x38];
    u32 unk38;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D918_StructC;

extern s32 func_8012C6B4(s32);
extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D918(func_8038D918_StructA *arg0, func_8038D918_StructC *arg1, func_8038D918_StructB *arg2) {
    if (((u32) (arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = (s16) (arg0->unk9A | 8);
    } else if ((arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = (s16) (arg0->unk9A | 2);
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (func_8012C6B4(3) == 0) {
        arg1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 0);
        arg0->unk92 = 0;
    } else {
        arg1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        arg0->unk92 = 1;
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038DA14_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern void func_8038DA8C();

void func_8038DA14(struct func_8038DA14_Struct *arg0, s32 arg1) {
    u8 *var_a1;
    u8 *var_a2;

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
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    func_8038D918(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038DA8C);
}


typedef struct func_8038DA8C_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8038DA8C_StructG;
typedef struct func_8038DA8C_StructO {
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
} func_8038DA8C_StructO;
typedef struct func_8038DA8C_StructP {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 p0 : 3;
            u32 b : 4;
            u32 p1 : 4;
            u32 t : 2;
        } bf;
    } unk30;
    u32 pad34;
    struct {
        u32 f : 1;
        u32 p : 2;
        u32 g : 1;
    } unk38;
} func_8038DA8C_StructP;

extern func_8038DA8C_StructG D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();
extern u8 D_8038DA8C[];

#define CALL() func_8038D918((func_8038D918_StructA *)arg0, (func_8038D918_StructC *)a3, (func_8038D918_StructB *)a2)

void func_8038DA8C(func_8038DA8C_StructO *arg0, s32 arg1) {
    func_8038DA8C_StructP *a3;
    func_8038DA8C_StructP *a2;

    a3 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038DA8C_StructP *)&D_801BC03C : (func_8038DA8C_StructP *)&D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038DA8C_StructP *)&D_801BC3D8 : (func_8038DA8C_StructP *)&D_801BC03C;
    if (arg0->unkA8 == 2) {
        CALL();
        arg0->unkA8 = 0;
        return;
    }
    if ((a3->unk30.h & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038DA8C;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a3, a2) != 0) {
        arg0->unk91 = 0;
        CALL();
        return;
    }
    if (a2->unk30.bf.t != 0 || a2->unk30.bf.b == 2) {
        CALL();
        return;
    }
    if (a2->unk30.bf.t == 0 && a2->unk30.bf.b != 2) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            CALL();
            return;
        }
    }
    if (a3->unk38.f != 0 && !a3->unk38.g && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a3->unk38.f != 0 && a3->unk38.g && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (a3->unk38.f == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        CALL();
    }
}

/* starting point: func_8038D900 (file061), whose assembly is 91% the same as this function's */

struct func_8038DC98_StructA {
    u8 pad0[0xA5];
    u8 unkA5;
};

struct func_8038DC98_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x333 - 8];
    u8 unk333;
};

extern void func_8022A834();

void func_8038DC98(struct func_8038DC98_StructA *arg0, struct func_8038DC98_StructB *arg1)
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

