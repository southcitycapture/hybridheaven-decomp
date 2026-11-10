#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#define D_801BBBF0 D_801BBBF0__func_8038CFF4
#define D_801BBC8C D_801BBC8C__func_8038CFF4
#define D_801BBCAC D_801BBCAC__func_8038CFF4
#define D_801BC03C D_801BC03C__func_8038CFF4
#define D_801BC3D8 D_801BC3D8__func_8038CFF4
#define func_8001EAD0 func_8001EAD0__func_8038CFF4
#define func_8001EB64 func_8001EB64__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_80228FD0 func_80228FD0__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
#define func_8038D7F0_Struct0 func_8038D7F0_Struct0__func_8038CFF4
typedef struct func_8038D7F0_Struct0 {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D7F0_Struct0;
extern func_8038D7F0_Struct0 D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_80228C20();
extern s32 func_80228D90();
extern void func_80228FD0();
extern s32 func_80229260();
extern void func_802292D0();
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];

typedef struct func_8038CFF4_G {
    u8 pad0[0x232];
    s16 unk232;
} func_8038CFF4_G;

typedef struct func_8038CFF4_StructC {
    u8 pad0[0xC];
    s32 unkC;
} func_8038CFF4_StructC;

typedef struct func_8038CFF4_StructA {
    u8 pad0[0xC];
    func_8038CFF4_StructC *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[0x9A - 0x96];
    s16 unk9A;
    s32 unk9C;
} func_8038CFF4_StructA;

typedef struct func_8038CFF4_StructO {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFF4_StructO;

typedef union func_8038CFF4_U30 {
    struct {
        u32 p0 : 3;
        u32 m : 4;
        u32 p1 : 2;
        u32 a : 2;
        u32 b : 2;
        u32 rest : 19;
    } bf;
    struct {
        u16 h;
        u8 b2;
        u8 b3;
    } by;
} func_8038CFF4_U30;

typedef struct func_8038CFF4_StructE {
    u8 pad0[6];
    s16 unk6;
    u8 pad8[0x30 - 8];
    func_8038CFF4_U30 u30;
    u32 unk34;
    u32 neg : 1;
    u32 mid : 2;
    u32 rest38 : 29;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 pad2D9[0x2FC - 0x2D9];
    u8 unk2FC;
    u8 pad2FD[0x312 - 0x2FD];
    s16 unk312;
} func_8038CFF4_StructE;

void func_8038CFF4(func_8038CFF4_StructA *arg0, s32 arg1) {
    s16 sp36;
    s16 sp34;
    func_8038CFF4_StructO *sp30;
    func_8038CFF4_StructE *a1;
    func_8038CFF4_StructE *v1;
    s16 sp26;
    s32 v;
    s32 q;
    s32 padC;
    f64 fv;
    s32 bb;

    sp34 = (s16)(0x2800 - ((func_8038CFF4_G *)&D_801BBBF0)->unk232) & 0x1FFF;
    q = D_801BBBF0.unkDC;
    padC = arg0->unkC->unkC;
    sp30 = (q == padC) ? (func_8038CFF4_StructO *)D_801BBC8C : (func_8038CFF4_StructO *)D_801BBCAC;
    if (q == padC) {
        a1 = (func_8038CFF4_StructE *)D_801BC03C;
    } else {
        a1 = (func_8038CFF4_StructE *)D_801BC3D8;
    }
    if (q != padC) {
        v1 = (func_8038CFF4_StructE *)D_801BC03C;
    } else {
        v1 = (func_8038CFF4_StructE *)D_801BC3D8;
    }
    if (arg0->unk91 == 1 && D_801BBBF0.unk1031 == 7) {
        arg0->unk91 = 2;
    }
    if (a1->u30.bf.a != 0 && a1->u30.bf.m != 1) {
        if (D_801BBBF0.unk1031 >= 7 && D_801BBBF0.unk1031 != 0xF) {
            arg0->unk92 = arg0->unk95 = 0;
        }
        if (D_801BBBF0.unk1031 == 5 && (a1->u30.by.h & 7) == 0 && func_80229260(arg0, a1, sp30, 0xA) == 0) {
            fv = D_801BBBF0.unkB90;
            if ((fv < 20.0 || arg0->unk95 == 1) && a1->unk2D8 != 0xC) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = arg0->unk92 = 1;
                    return;
                }
                if (fv > 25.0) {
                    arg0->unk95 = arg0->unk92 = 0;
                    return;
                }
                if ((v1->u30.bf.b != 0 && (v1->unk312 >= 0xB || v1->u30.bf.m == 1U)) || v1->u30.bf.m == 2U) {
                    if (a1->unk6 >= 0x64) {
                        sp30->unk4 = 0x8000;
                    }
                } else {
                    if (arg0->unk91 == 2) {
                        arg0->unk92 = 4;
                    }
                    if (arg0->unk92 == 1) {
                        if (a1->neg != 0) {
                            arg0->unk90 = 0;
                            arg0->unk92 = 3;
                            return;
                        }
                        if (1 == a1->unk2FC % 3) {
                            if (a1->unk6 >= 0x50) {
                                sp30->unk4 = 0x10;
                                arg0->unk90 = 0;
                                arg0->unk92 = 4;
                                return;
                            }
                            func_80228FD0(arg0, sp30, 7);
                            return;
                        }
                        if (a1->unk6 >= 0x47) {
                            func_802292D0(sp30, a1);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        sp26 = func_80228C20(arg0, a1);
                        sp36 = (s16)(s32)((func_8001EAD0(arg0->unk9C << 7) * 1024.0f) + (f32)(sp26 + 0x1000) + (f32)sp34) & 0x1FFF;
                        sp30->unk6 = (s16)(s32)(-func_8001EB64(sp36) * 40.0f);
                        sp30->unk8 = (s16)(s32)(func_8001EAD0(sp36) * 40.0f);
                        return;
                    }
                    if (arg0->unk92 == 2) {
                        if (a1->neg != 0) {
                            arg0->unk90 = 0;
                            arg0->unk92 = 3;
                        }
                        v = a1->u30.by.b2 & 3;
                        if ((v << 0) == 2U) {
                            arg0->unk92 = 4;
                            v = a1->u30.by.b2 & 3;
                        }
                        if (v == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 3) {
                        if (a1->neg != 0) {
                            bb = arg0->unk90++ >= 0x15;
                            if (bb) {
                                arg0->unk92 = 4;
                                arg0->unk90 = 0;
                                return;
                            }
                        }
                        if (a1->mid == 0 && a1->neg == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 4) {
                        if (a1->unk6 >= 0x64) {
                            if (func_80228D90(arg0, a1) != 0) {
                                a1->u30.by.b2 = a1->u30.by.b2 & 0xFFFC;
                                sp30->unk4 = 0x8000;
                                arg0->unk91 = 0;
                                return;
                            }
                        }
                        func_80228FD0(arg0, sp30, 4);
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if ((a1->u30.by.b2 & 3) == 2U) {
                    a1->u30.by.b2 = a1->u30.by.b2 & 0xFFFC;
                }
                if (a1->unk6 >= 0x64 && a1->unk2D8 == 0xC && func_80228D90(arg0) != 0) {
                    sp30->unk4 = 0x8000;
                    arg0->unk91 = 0;
                    return;
                }
                sp36 = (s16)(func_80228C20(arg0) + sp34) & 0x1FFF;
                if (D_801BBBF0.unkB90 > 60.0f) {
                    arg0->unk9A = 0x1E;
                }
                if (arg0->unk9A-- > 0) {
                    sp30->unk2 = 0x2000;
                    sp30->unk6 = (s16)(s32)(-func_8001EB64(sp36) * 40.0f);
                    sp30->unk8 = (s16)(s32)(func_8001EAD0(sp36) * 40.0f);
                } else {
                    sp30->unk6 = (s16)(s32)(-func_8001EB64(sp36) * 80.0f);
                    sp30->unk8 = (s16)(s32)(func_8001EAD0(sp36) * 80.0f);
                }
            }
        }
    }
}
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_80228C20
#undef func_80228D90
#undef func_80228FD0
#undef func_80229260
#undef func_802292D0
#undef func_8038D7F0_Struct0

extern u8 D_801BC3D8[];

typedef struct func_8038D664_Struct0 {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
} func_8038D664_Struct0;

typedef struct func_8038D664_Struct1 {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad3C[0x2D8 - 0x3C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D664_Struct1;

typedef struct func_8038D664_Struct2 {
    u8 pad0[0x30];
    u32 unk30;
} func_8038D664_Struct2;

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640();

s32 func_8038D664(func_8038D664_Struct0 *arg0, func_8038D664_Struct1 *arg1, func_8038D664_Struct2 *arg2) {
    if (((arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_80229404(arg1);
        arg0->unk9A = 8;
    } else if (((u32) arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = arg0->unk9A | 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (*(f32 *) (D_801BC3D8 + 0x3A8) > 25.0f) {
        arg1->unk2D8 = 0xC;
        arg1->unk2D9 = 0x14;
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 1;
        } else {
            arg1->unk2D8 = 0;
        }
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


typedef struct func_8038D774_Struct {
    u8 pad0[0x0C];
    s32 unkC;
    u8 pad10[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
    u8 pad94[0xA8 - 0x94];
    u8 unkA8;
} func_8038D774_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern void func_8038D7F0();

void func_8038D774(func_8038D774_Struct *arg0, s32 arg1) {
    u8 *var_a1;
    u8 *var_a2;

    var_a1 = (D_801BBCCC == arg0->unkC) ? D_801BC03C : D_801BC3D8;
    var_a2 = (D_801BBCCC == arg0->unkC) ? D_801BC3D8 : D_801BC03C;
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    arg0->unkA8 = 0;
    func_8038D664(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D7F0);
}


typedef struct func_8038D7F0_Struct0 {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D7F0_Struct0;

typedef struct func_8038D7F0_Struct1 {
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
} func_8038D7F0_Struct1;

typedef struct func_8038D7F0_Struct2 {
    u8 pad0[0x30];
    u32 unk30;
    u32 unk34;
    u32 b38_0 : 1;
    u32 b38_1 : 2;
    u32 b38_3 : 1;
    u32 b38_4 : 28;
}func_8038D7F0_Struct2;

extern func_8038D7F0_Struct0 D_801BBBF0;
extern s32 func_8022AB58();
extern u8 func_8022B3E0[];

void func_8038D7F0(func_8038D7F0_Struct1 *arg0, s32 arg1) {
    func_8038D7F0_Struct2 *a3;
    func_8038D7F0_Struct2 *a2;
    s32 v0;
    u32 v1;
    u32 a1;
    s32 t;

    a3 = (func_8038D7F0_Struct2 *)((D_801BBBF0.unkDC == arg0->unkC) ? D_801BC03C : D_801BC3D8);
    a2 = (func_8038D7F0_Struct2 *)((D_801BBBF0.unkDC == arg0->unkC) ? D_801BC3D8 : D_801BC03C);
    if (arg0->unkA8 == 2) {
        func_8038D664(arg0, a3, a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((((u16 *)a3)[0x18] & 7) || (D_801BBBF0.unk1031 == 6)) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = func_8038D7F0;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a3) != 0) {
        arg0->unk91 = 0;
        func_8038D664(arg0, a3, a2);
        return;
    }
    v0 = a2->unk30;
    v1 = (u32)(v0 << 11) >> 30;
    if (v1 != 0 || ((u32)(v0 << 3) >> 28) == 2) {
        func_8038D664(arg0, a3, a2);
        return;
    }
    if (v1 == 0 && ((u32)(v0 << 3) >> 28) != 2 && (arg0->unk9A & 8)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        func_8038D664(arg0, a3, a2);
        return;
    }
    if (D_801BBBF0.unkB90 > 25.0f) {
        if (arg0->unk9A == 0) {
            arg0->unk9A |= 0x100;
            func_8038D664(arg0, a3, a2);
            return;
        }
    }
    if (D_801BBBF0.unkB90 < 20.0f) {
        if (arg0->unk9A & 0x100) {
            arg0->unk9A ^= 0x100;
            func_8038D664(arg0, a3, a2);
            return;
        }
    }
    v1 = a3->b38_0;
    if (v1 != 0 && !a3->b38_3 && !(arg0->unk9A & 2)) {
        func_8038D664(arg0, a3, a2);
        return;
    }
    if (v1 != 0 && a3->b38_3 && !(arg0->unk9A & 4)) {
        func_8038D664(arg0, a3, a2);
        return;
    }
    if (v1 == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        func_8038D664(arg0, a3, a2);
    }
}

/* starting point: func_8038D900 (file061), whose assembly is 91% the same as this function's */

struct func_8038DA84_StructA {
    u8 pad0[0xA5];
    u8 unkA5;
};

struct func_8038DA84_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x333 - 8];
    u8 unk333;
};

extern void func_8022A834();

void func_8038DA84(struct func_8038DA84_StructA *arg0, struct func_8038DA84_StructB *arg1)
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

