#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file066/8038CFC0/func_8038CFF4.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file066/8038CFC0/func_8038D7F0.s")

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

