#include "common.h"

extern s32 D_801BBCCC;
extern s32 func_8022B640(s32);
extern s32 func_8038D618();
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_800058DC();
extern void func_80229500();
extern void func_80229CE0(void *, void *, s32);
extern void func_8022A834();
extern void func_8022B3E0();
extern void func_8038CFF4();
extern void func_8038D770();



void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}


typedef struct func_8038CFF4_StructE {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    u8 pad8[2];
    s16 unkA;
    u8 padC[0x30 - 0xC];
    u32 a : 3;
    u32 f3 : 4;
    u32 gap : 2;
    u32 b : 2;
    u32 f11 : 2;
    u32 rest : 19;
    u32 pad34;
    u32 g0 : 1;
    u32 g1 : 2;
    u32 grest : 29;
    u8 pad3C[0x312 - 0x3C];
    s16 unk312;
    u8 pad314[0x38B - 0x314];
    u8 unk38B;
} func_8038CFF4_StructE;

typedef struct func_8038CFF4_StructO {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFF4_StructO;

typedef struct func_8038CFF4_StructP {
    u8 pad0[0xC];
    struct func_8038CFF4_StructQ *unkC;
    u8 pad10[0x92 - 0x10];
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
    u8 pad9A[2];
    u32 unk9C;
} func_8038CFF4_StructP;

typedef struct func_8038CFF4_StructQ {
    u8 pad0[0xC];
    s32 unkC;
} func_8038CFF4_StructQ;

typedef struct func_8038CFF4_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    void *unkE0;
    u8 padE4[0xF0 - 0xE4];
    void *unkF0;
    u8 padF4[0x232 - 0xF4];
    s16 unk232;
    u8 pad234[0xB90 - 0x234];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038CFF4_StructG;

typedef struct func_8038CFF4_StructW {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8038CFF4_StructW;

typedef struct func_8038CFF4_StructV {
    u8 pad0[0x2C];
    struct func_8038CFF4_StructW *unk2C;
} func_8038CFF4_StructV;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_80228C20();
extern s32 func_80228D90();
extern void func_80228FD0();
extern s32 func_80229260();
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];

extern u8 D_801CBBF0[];

#define GLOB ((func_8038CFF4_StructG *)(D_801CBBF0 - 0x10000))

void func_8038CFF4(func_8038CFF4_StructP *arg0, s32 arg1) {
    s16 sp4E;
    s16 sp4C;
    func_8038CFF4_StructO *o;
    func_8038CFF4_StructE *e1;
    func_8038CFF4_StructE *e2;
    void *v;
    u8 pad[12];
    f32 f;
    f32 g;

    sp4C = (s16)(0x2800 - GLOB->unk232) & 0x1FFF;
    o = (arg0->unkC->unkC == GLOB->unkDC) ? (void *)D_801BBC8C : (void *)D_801BBCAC;
    e1 = (arg0->unkC->unkC == GLOB->unkDC) ? (void *)D_801BC03C : (void *)D_801BC3D8;
    e2 = (arg0->unkC->unkC == GLOB->unkDC) ? (void *)D_801BC3D8 : (void *)D_801BC03C;
    v = (arg0->unkC->unkC == GLOB->unkDC) ? GLOB->unkE0 : GLOB->unkF0;
    if (e1->b != 0 && e1->f3 != 1) {
        if (GLOB->unk1031 >= 7 && GLOB->unk1031 != 0xF) {
            arg0->unk98 = 0;
            arg0->unk95 = ((u8 *)&arg0->unk98)[1];
            arg0->unk92 = ((u8 *)&arg0->unk98)[1];
        }
        if (GLOB->unk1031 == 5 && e2->f11 == 0 && !(*(u16 *)((u8 *)e1 + 0x30) & 7) && func_80229260(arg0, e1, o, 10) == 0) {
            if (((((f64)GLOB->unkB90 < 15.0) || arg0->unk92 != 0) && (e1->unk4 / 5 < e1->unk6 || e2->unk38B < 10)) || e2->f3 != 0) {
                if (arg0->unk92 == 0) {
                    arg0->unk92 = 1;
                }
                if (e2->f11 != 0 && e2->unk312 >= 11 && e1->unk6 >= 31 && e1->unkA < 50) {
                    o->unk4 = 0x8000;
                    return;
                }
                if ((f64)GLOB->unkB90 > 25.0 || func_80228D90(arg0) == 0) {
                    arg0->unk92 = 0;
                    return;
                }
                if (arg0->unk92 == 1) {
                    if (e1->b != 0) {
                        o->unk4 = 0x10;
                        arg0->unk92 = 2;
                        return;
                    }
                    if (e1->g0 != 0) {
                        arg0->unk92 = 3;
                        return;
                    }
                    arg0->unk92 = 1;
                    return;
                }
                if (arg0->unk92 == 2) {
                    if (e1->g0 != 0) {
                        arg0->unk92 = 3;
                        return;
                    }
                    if (e1->g0 == 0 && !(((u8 *)e1)[0x30] & 1)) {
                        arg0->unk92 = 4;
                    }
                } else if (arg0->unk92 == 3) {
                    if (e1->unk6 >= 100 && e1->g0 != 0 && e1->g1 == 0 && e2->g0 != 0 && e2->g1 == 0) {
                        if (!(arg0->unk9C & 7)) {
                            o->unk4 = 0x8000;
                            arg0->unk92 = 4;
                        }
                    } else {
                        func_80228FD0(arg0, o, 4, e1);
                    }
                    if (e1->g0 == 0) {
                        arg0->unk92 = 0;
                    }
                } else if (arg0->unk92 == 4 && GLOB->unk1031 == 5) {
                    arg0->unk92 = 0;
                }
            } else if (e1->unk6 < 100) {
                if (GLOB->unkB90 < 50.0f) {
                    f = func_8001EB64((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF);
                    g = func_8001EAD0((s16)(func_80228C20(arg0) + 0x1000) & 0x1FFF);
                    {
                        func_8038CFF4_StructW *p = ((func_8038CFF4_StructV *)v)->unk2C;
                        if (func_8010843C(p->unk4, p->unk8, p->unkC, f * 40.0f + p->unk4, p->unk8, g * 40.0f + p->unkC) != 0) {
                            sp4E = (s16)((s16)(func_80228C20(arg0) + sp4C + 0x800) & 0x1FFF);
                        } else {
                            sp4E = (s16)((s16)(func_80228C20(arg0) + sp4C + 0x1000) & 0x1FFF);
                        }
                    }
                    o->unk6 = -func_8001EB64(sp4E) * 40.0f;
                    o->unk8 = func_8001EAD0(sp4E) * 40.0f;
                }
            } else if (GLOB->unkB90 > 10.0f && (arg0->unk9C & 0xFF) > 0x80) {
                o->unk2 = 0x2000;
                sp4E = func_80228C20(arg0) + sp4C;
                o->unk6 = -func_8001EB64(sp4E) * 40.0f;
                o->unk8 = func_8001EAD0(sp4E) * 40.0f;
            }
        }
    }
}
#undef GLOB


typedef struct func_8038D618_StructA {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
} func_8038D618_StructA;
typedef struct func_8038D618_StructB {
    u8 pad0[0x38];
    u32 f31 : 1;
    u32 rest : 31;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D618_StructB;
typedef struct func_8038D618_StructC {
    u8 pad0[2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 hi : 11;
    u32 f : 2;
    u32 rest : 19;
} func_8038D618_StructC;

s32 func_8038D618(arg0, arg1, arg2)
    func_8038D618_StructA *arg0;
    func_8038D618_StructB *arg1;
    func_8038D618_StructC *arg2;
{
    if (arg2->f != 0) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 5;
        arg0->unk9A |= 8;
    } else if (arg1->f31 != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A |= 2;
        if (arg2->unk2 < 0x28) {
            func_80229CE0(arg0, arg1, 2);
        } else {
            func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        }
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038D6E8_Struct {
    u8 pad0[0xC];
    s32 unkC;
};


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
    func_8038D618(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D770);
}


typedef struct func_8038D770_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x8A];
    s16 unk9A;
    u8 pad2[0xC];
    u8 unkA8;
    u8 padA9[7];
    s32 unkB0;
} func_8038D770_Struct;

typedef struct func_8038D770_StructB {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xF51];
    u8 unk1031;
} func_8038D770_StructB;

typedef struct func_8038D770_StructC {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad1[6];
    u32 f31 : 1;
    u32 f30 : 2;
    u32 f28 : 1;
    u32 rest : 28;
} func_8038D770_StructC;

extern func_8038D770_StructB D_801BBBF0;

void func_8038D770(func_8038D770_Struct *arg0, s32 arg1) {
    func_8038D770_StructC *a1;
    func_8038D770_StructC *a2;
    u32 v;
    u32 t;

    if (D_801BBBF0.unkDC == arg0->unkC) {
        a1 = &D_801BC03C;
    } else {
        a1 = &D_801BC3D8;
    }
    if (D_801BBBF0.unkDC == arg0->unkC) {
        a2 = &D_801BC3D8;
    } else {
        a2 = &D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        func_8038D618(arg0, a1, a2, &D_801BBBF0);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->unk30 & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = (s32)func_8038D770;
        func_800058DC(arg0, func_8022B3E0, a2, &D_801BBBF0);
        return;
    }
    if (((*(u32 *)((u8 *)a2 + 0x30) << 11) >> 30) == 0) {
        if (arg0->unk9A & 8) {
            arg0->unk9A ^= 8;
            func_8038D618(arg0, a1, a2, &D_801BBBF0);
            return;
        }
    }
    if (a1->f31 != 0 && !a1->f28 && !(arg0->unk9A & 2)) {
        func_8038D618(arg0, a1, a2, &D_801BBBF0);
        return;
    }
    if (a1->f31 != 0 && a1->f28 && !(arg0->unk9A & 4)) {
        func_8038D618(arg0, a1, a2, &D_801BBBF0);
        return;
    }
    if (a1->f31 == 0) {
        if (arg0->unk9A & 6) {
            arg0->unk9A &= 0xFFF9;
            func_8038D618(arg0, a1, a2, &D_801BBBF0);
        }
    }
}


struct func_8038D900_StructA {
    u8 pad0[0xA5];
    u8 unkA5;
};

struct func_8038D900_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x333 - 8];
    u8 unk333;
};


void func_8038D900(struct func_8038D900_StructA *arg0, struct func_8038D900_StructB *arg1)
{
  u8 temp_v0;
  temp_v0 = arg1->unk333;
  if (temp_v0 == 0)
  {
    goto case0;
  }
  if (1 == temp_v0)
  {
    goto case1;
  }
  if (temp_v0 == 2)
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
    func_8022A834();
    arg1->unk333 = (u8) (arg1->unk333 + 1);
  }
  else
  {
    arg0->unkA5 = 0;
  }

  arg1->unk333 = 0;
  return;
}

