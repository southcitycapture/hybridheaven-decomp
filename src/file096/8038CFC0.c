#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#define D_8001EAD0 D_8001EAD0__func_8038CFF4
#define D_8001EB64 D_8001EB64__func_8038CFF4
#define D_801BBBF0 D_801BBBF0__func_8038CFF4
#define D_801BBC8C D_801BBC8C__func_8038CFF4
#define D_801BBCAC D_801BBCAC__func_8038CFF4
#define D_801BC03C D_801BC03C__func_8038CFF4
#define D_801BC3D8 D_801BC3D8__func_8038CFF4
#define func_8001EAD0 func_8001EAD0__func_8038CFF4
#define func_8001EB64 func_8001EB64__func_8038CFF4
#define func_8022559C func_8022559C__func_8038CFF4
#define func_80228C20 func_80228C20__func_8038CFF4
#define func_80228D90 func_80228D90__func_8038CFF4
#define func_802290C8 func_802290C8__func_8038CFF4
#define func_80229260 func_80229260__func_8038CFF4
#define func_802292D0 func_802292D0__func_8038CFF4
extern u8 D_801BBBF0[];
extern u8 D_801BC03C;
extern u8 D_801BC3D8[];


typedef struct func_8038CFF4_StructT {
    u8 pad0[0x1C];
    s32 unk1C;
} func_8038CFF4_StructT;

typedef struct func_8038CFF4_StructU {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x4C];
    func_8038CFF4_StructT *unk5C;
} func_8038CFF4_StructU;

typedef struct func_8038CFF4_StructG {
    u8 padG[0xDC];
    s32 unkDC;
    u8 padE0[0xC];
    func_8038CFF4_StructU *unkEC;
    u8 padF0[0x142];
    s16 unk232;
    u8 pad234[0x218];
    u8 unk44C[0x744];
    f32 unkB90;
    u8 padB94[0x49D];
    u8 unk1031;
} func_8038CFF4_StructG;

typedef struct func_8038CFF4_StructS {
    u8 pad0[4];
    s16 unk4;
    s16 unk6;
    u8 pad8[0x28];
    u32 f30_0:3;
    u32 f30_3:4;
    u32 f30_7:2;
    u32 f30_9:2;
    u32 f30_11:2;
    u32 f30_13:19;
    u8 pad34[4];
    u32 f38_0:1;
    u32 f38_1:31;
    u8 pad3C[0x29C];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x38];
    s16 unk312;
} func_8038CFF4_StructS;

typedef struct func_8038CFF4_StructP {
    u8 pad0[0xC];
    func_8038CFF4_StructU *unkC;
    u8 pad10[0x80];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
    u8 pad9A[2];
    s32 unk9C;
} func_8038CFF4_StructP;

typedef struct func_8038CFF4_StructO {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8038CFF4_StructO;

extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];
extern f32 func_8001EAD0(s16, s16);
extern f32 func_8001EB64(s16, s16);
extern f32 D_8001EAD0(s16);
extern f32 D_8001EB64(s16);
extern u8 func_8022559C(s32, void *);
extern s16 func_80228C20();
extern s32 func_80228D90();
extern void func_802290C8();
extern s32 func_80229260();
extern void func_802292D0();

#define GG (*(func_8038CFF4_StructG *)D_801BBBF0)
#define B32(p) (*((u8 *)(p) + 0x32))
#define H30(p) (*(u16 *)((u8 *)(p) + 0x30))

void func_8038CFF4(func_8038CFF4_StructP *arg0, s32 arg1) {
    s16 a1s;
    s16 sp3C;
    func_8038CFF4_StructO *sp38;
    s32 activeEntity;
    func_8038CFF4_StructS *a1;
    func_8038CFF4_StructS *t1;
    u8 sp2B;
    s32 v;
    s16 ang;
    s16 sp20;
    f64 fv;

    sp3C = (s16)(0x2800 - GG.unk232) & 0x1FFF;
    activeEntity = GG.unkDC;
    if (arg0->unkC->unkC == activeEntity) {
        sp38 = (func_8038CFF4_StructO *)D_801BBC8C;
    } else {
        sp38 = (func_8038CFF4_StructO *)D_801BBCAC;
    }
    if (arg0->unkC->unkC == activeEntity) {
        a1 = (func_8038CFF4_StructS *)&D_801BC03C;
    } else {
        a1 = (func_8038CFF4_StructS *)D_801BC3D8;
    }
    if (arg0->unkC->unkC == activeEntity) {
        t1 = (func_8038CFF4_StructS *)D_801BC3D8;
    } else {
        t1 = (func_8038CFF4_StructS *)&D_801BC03C;
    }
    if ((s32)t1 == (s32)D_801BBBF0 + 0x44C) {
        arg1 = ((func_8038CFF4_StructU *)activeEntity)->unk5C->unk1C;
    } else {
        arg1 = GG.unkEC->unk5C->unk1C;
    }
    sp2B = func_8022559C(arg1, a1);
    if ((arg0->unk91 == 1) && (GG.unk1031 == 7)) {
        arg0->unk91 = 2;
    }
    if ((a1->f30_9 != 0) && (a1->f30_3 != 1)) {
        if ((GG.unk1031 >= 7) && (GG.unk1031 != 0xF)) {
            arg0->unk98 = 0;
            arg0->unk92 = arg0->unk95 = *((u8 *)arg0 + 0x99);
        }
        if (!(H30(a1) & 7) && (GG.unk1031 == 5) && (func_80229260(arg0, a1, sp38, 10) == 0)) {
            if (((fv = GG.unkB90) < 15.0) || (arg0->unk95 == 1)) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = arg0->unk92 = 1;
                    return;
                }
                if (fv > 20.0) {
                    arg0->unk95 = 0;
                    arg0->unk92 = 0;
                    return;
                }
                if (((t1->f30_11 != 0) && ((t1->unk312 >= 0xB) || (t1->f30_3 == 1))) || (t1->f30_3 == 2U)) {
                    if (a1->unk6 >= 0x64) {
                        sp38->unk4 = 0x8000;
                    }
                } else {
                    if (arg0->unk91 == 2) {
                        arg0->unk92 = 4;
                    }
                    if (arg0->unk92 == 1) {
                        if (a1->f38_0 != 0) {
                            arg0->unk92 = 3;
                            arg0->unk90 = 0;
                            return;
                        }
                        if (a1->unk6 >= 0x47) {
                            func_802292D0(sp38, a1);
                            arg0->unk91 = 1;
                            arg0->unk92 = 2;
                            return;
                        }
                        func_802290C8(arg0, sp38, 4, 0x41700000);
                        return;
                    }
                    if (arg0->unk92 == 2) {
                        if (a1->f38_0 != 0) {
                            arg0->unk92 = 3;
                            arg0->unk90 = 0;
                        }
                        if ((B32(a1) & 3) == 2U) {
                            arg0->unk92 = 4;
                        }
                        v = B32(a1) & 3;
                        if (v == 0) {
                            arg0->unk92 = 1;
                        }
                    } else if (arg0->unk92 == 3) {
                        if (a1->f38_0 != 0) {
                            arg1 = arg0->unk90++ >= 0x1F;
                            if (arg1) {
                                arg0->unk92 = 4;
                                arg0->unk90 = 0;
                                return;
                            }
                        }
                        if (a1->f38_0 == 0) {
                            arg0->unk90 = 1;
                        }
                    } else if (arg0->unk92 == 4) {
                        if ((a1->unk6 >= 0x64) && (func_80228D90(arg0, a1) != 0)) {
                            B32(a1) = B32(a1) & 0xFFFC;
                            sp38->unk4 = 0x8000;
                            arg0->unk91 = 0;
                            if ((a1->unk6 == a1->unk4) && (a1->f38_0 == 0)) {
                                a1->unk2D8 = 0xA;
                                a1->unk2D9 = 3;
                            }
                            return;
                        }
                        func_802290C8(arg0, sp38, 4, 0x41700000);
                        return;
                    }
                }
            } else {
                if (arg0->unk91 == 1) {
                    arg0->unk91 = 2;
                }
                if ((B32(a1) & 3) == 2U) {
                    B32(a1) = B32(a1) & 0xFFFC;
                }
                if ((a1->unk6 >= 0x64) && (a1->unk2D8 == 0xC) && (func_80228D90(arg0) != 0)) {
                    sp38->unk4 = 0x8000;
                    arg0->unk91 = 0;
                    return;
                }
                sp20 = func_80228C20(arg0);
                ang = (arg0->unk9C & 0xFF) << 6;
                a1s = (s16)(D_8001EAD0(ang) * 1024.0f + sp20 + sp3C) & 0x1FFF;
                if (GG.unkB90 > 60.0f) {
                    arg0->unk98 = 0x14;
                }
                arg1 = arg0->unk98-- > 0;
                if (arg1) {
                    sp38->unk2 = 0x2000;
                    sp38->unk6 = -D_8001EB64(a1s) * 40.0f;
                    sp38->unk8 = D_8001EAD0(a1s) * 40.0f;
                    return;
                }
                if ((sp2B >= 0x15) || (GG.unkB90 > 20.0f)) {
                    sp38->unk6 = -D_8001EB64(a1s) * 80.0f;
                    sp38->unk8 = D_8001EAD0(a1s) * 80.0f;
                    return;
                }
                sp38->unk6 = -D_8001EB64(a1s) * 40.0f;
                sp38->unk8 = D_8001EAD0(a1s) * 40.0f;
            }
        }
    }
}
#undef GG
#undef B32
#undef H30
#undef D_8001EAD0
#undef D_8001EB64
#undef D_801BBBF0
#undef D_801BBC8C
#undef D_801BBCAC
#undef D_801BC03C
#undef D_801BC3D8
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8022559C
#undef func_80228C20
#undef func_80228D90
#undef func_802290C8
#undef func_80229260
#undef func_802292D0

extern u8 D_801BC3D8[];

typedef struct func_8038D694_StructA {
    u8 pad0[0x92];
    u8 unk92;
    u8 unk93;
    u8 pad94[6];
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
} func_8038D694_StructA;

typedef struct func_8038D694_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 unk38;
    u8 pad3C[0x29C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D694_StructB;

typedef struct func_8038D694_StructC {
    u8 pad0[0x30];
    u32 unk30;
} func_8038D694_StructC;

extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

s32 func_8038D694(func_8038D694_StructA *x0, func_8038D694_StructB *x1, func_8038D694_StructC *arg2) {
    func_8038D694_StructA *arg0 = x0;
    func_8038D694_StructB *arg1 = x1;

    if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xB;
        if (arg0->unkA0 == 5) {
            arg1->unk2D9 = 4;
        } else {
            arg1->unk2D9 = 1;
        }
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A = arg0->unk9A | 0x20;
    } else if (((arg2->unk30 << 0xB) >> 0x1E) != 0) {
        func_802294BC(arg1);
        arg0->unk9A = 8;
    } else if ((arg1->unk38 >> 0x1F) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = arg0->unk9A | 2;
        func_80229CE0(arg0, arg1, 0);
    } else if (20.0f < *(f32 *)((u8 *)&D_801BC3D8 + 0x3A8)) {
        arg1->unk2D8 = 0xC;
        if (func_8022B640(5) != 0) {
            arg1->unk2D9 = 0x1A;
        } else {
            arg1->unk2D9 = 0x1B;
        }
    } else if (func_8022B640(2) == 0) {
        arg1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 1);
        arg0->unk93 = arg0->unk92 = 0;
    } else {
        arg1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, 1);
        arg0->unk93 = arg0->unk92 = 1;
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


typedef struct func_8038D860_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x90];
    u8 unkA0;
} func_8038D860_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern void func_8038D8F0();

void func_8038D860(func_8038D860_Struct *arg0, void *arg1) {
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
    arg0->unkA0 = 5;
    func_8038D694(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D8F0);
}

#define D_801BBBF0 D_801BBBF0__func_8038D8F0
#define func_800058DC func_800058DC__func_8038D8F0
#define func_8022AB58 func_8022AB58__func_8038D8F0
#define func_8022B3E0 func_8022B3E0__func_8038D8F0
#define func_8038D694 func_8038D694__func_8038D8F0

typedef struct func_8038D8F0_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x81];
    u8 unk91;
    u8 pad1c[8];
    s16 unk9A;
    u8 pad2[4];
    u8 unkA0;
    u8 pad3[7];
    u8 unkA8;
    u8 pad4[7];
    s32 unkB0;
} func_8038D8F0_Struct;
typedef struct func_8038D8F0_A {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x2C];
    u16 unk30;
    u8 pad5[6];
    u32 a38 : 1;
    u32 : 2;
    u32 b38 : 1;
} func_8038D8F0_A;
typedef struct func_8038D8F0_B {
    u8 pad4[0x30];
    u32 : 11;
    u32 f30 : 2;
} func_8038D8F0_B;
typedef struct func_8038D8F0_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xAB0];
    f32 unkB90;
} func_8038D8F0_G;
extern u8 D_801BBBF0[];
extern u8 func_8022B3E0[];
extern s32 func_8022AB58();

#undef D_801BBBF0
#undef func_8022AB58
#undef func_8022B3E0
#define D_801BBBF0 D_801BBBF0__func_8038D8F0_c88d5c24
#define func_8022AB58 func_8022AB58__func_8038D8F0_c88d5c24
#define func_8022B3E0 func_8022B3E0__func_8038D8F0_c88d5c24
#define func_8038D8F0_A func_8038D8F0_A__func_8038D8F0_c88d5c24
#define func_8038D8F0_B func_8038D8F0_B__func_8038D8F0_c88d5c24
#define func_8038D8F0_G func_8038D8F0_G__func_8038D8F0_c88d5c24
#define func_8038D8F0_Struct func_8038D8F0_Struct__func_8038D8F0_c88d5c24

typedef struct func_8038D8F0_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x81];
    u8 unk91;
    u8 pad1c[8];
    s16 unk9A;
    u8 pad2[4];
    u8 unkA0;
    u8 pad3[7];
    u8 unkA8;
    u8 pad4[7];
    s32 unkB0;
} func_8038D8F0_Struct;
typedef struct func_8038D8F0_A {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x2C];
    u16 unk30;
    u8 pad5[6];
    u32 a38 : 1;
    u32 : 2;
    u32 b38 : 1;
} func_8038D8F0_A;
typedef struct func_8038D8F0_B {
    u8 pad4[0x30];
    u32 : 11;
    u32 f30 : 2;
} func_8038D8F0_B;
typedef struct func_8038D8F0_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xAB0];
    f32 unkB90;
} func_8038D8F0_G;
extern u8 D_801BBBF0[];
extern u8 func_8022B3E0[];
extern s32 func_8022AB58();

void func_8038D8F0(func_8038D8F0_Struct *arg0, s32 arg1)
{
  func_8038D8F0_A *a1;
  func_8038D8F0_B *a2;
  u32 t;
  u32 f;
  ;
  if (arg0->unkC == ((func_8038D8F0_G *) D_801BBBF0)->unkDC)
  {
    a1 = (func_8038D8F0_A *) (&D_801BC03C);
  }
  else
  {
    a1 = (func_8038D8F0_A *) (&D_801BC3D8);
  }
  if (arg0->unkC == ((func_8038D8F0_G *) D_801BBBF0)->unkDC)
  {
    a2 = (func_8038D8F0_B *) (&D_801BC3D8);
  }
  else
  {
    a2 = (func_8038D8F0_B *) (&D_801BC03C);
  }
  if (arg0->unkA8 == 2)
  {
    func_8038D694();
    arg0->unkA8 = 0;
    return;
  }
  if (((a1->unk30 & 7) != 0) || (D_801BBBF0[0x1031] == 6))
  {
    arg0->unkA8 = 1;
    return;
  }
  if (D_801BBBF0[0x1031] == 7)
  {
    arg0->unkB0 = (s32) func_8038D8F0;
    func_800058DC((s32) arg0, func_8022B3E0);
    return;
  }
  if (((a1->unk2 < (a1->unk0 / 5)) && (arg0->unkA0 != 0)) && (!(arg0->unk9A & 0x20)))
  {
    func_8038D694();
    return;
  }
  if (func_8022AB58(arg0, a1, a2) != 0)
  {
    arg0->unk91 = 0;
    func_8038D694();
    return;
  }
  t = a2->f30;
  if ((t != 0) && (!(arg0->unk9A & 8)))
  {
    func_8038D694();
    return;
  }
  if (((func_8038D8F0_G *) D_801BBBF0)->unkB90 > 20.0f)
  {
    if (arg0->unk9A == 0)
    {
      arg0->unk9A |= 0x100;
      func_8038D694();
      return;
    }
  }
  if (((func_8038D8F0_G *) D_801BBBF0)->unkB90 <= 15.0f)
  {
    if (arg0->unk9A & 0x100)
    {
      arg0->unk9A ^= 0x100;
      func_8038D694();
      return;
    }
  }
  f = a1->a38;
  if (((f != 0) && (!a1->b38)) && (!(arg0->unk9A & 2)))
  {
    func_8038D694();
    return;
  }
  if (((f != 0) && a1->b38) && (!(arg0->unk9A & 4)))
  {
    func_8038D694();
    return;
  }
  if ((f == 0) && (arg0->unk9A & 6))
  {
    arg0->unk9A = 0;
    func_8038D694();
    return;
  }
  if ((t == 0) && (arg0->unk9A & 8))
  {
    arg0->unk9A = 0;
    func_8038D694();
  }
}
#undef D_801BBBF0
#undef func_8022AB58
#undef func_8022B3E0
#undef func_8038D8F0_A
#undef func_8038D8F0_B
#undef func_8038D8F0_G
#undef func_8038D8F0_Struct
#define D_801BBBF0 D_801BBBF0__func_8038D8F0
#define func_8022AB58 func_8022AB58__func_8038D8F0
#define func_8022B3E0 func_8022B3E0__func_8038D8F0
#undef D_801BBBF0
#undef func_800058DC
#undef func_8022AB58
#undef func_8022B3E0
#undef func_8038D694

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DBA0(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

