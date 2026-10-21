#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file096/8038CFC0/func_8038CFF4.s")

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

void func_8038D8F0(func_8038D8F0_Struct *arg0, s32 arg1)
{
  func_8038D8F0_A *a1;
  func_8038D8F0_B *a2;
  u32 t;
  u32 f;
  s32 c;
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
#undef func_800058DC
#undef func_8022AB58
#undef func_8022B3E0
#undef func_8038D694

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DBA0(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

