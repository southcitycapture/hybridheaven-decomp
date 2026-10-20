#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file093/8038CFC0/func_8038CFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file093/8038CFC0/func_8038DAFC.s")


struct func_8038DCD4_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
    u8 pad2[0xA0 - 0x94];
    u8 unkA0;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 func_8038DD54[];

extern s32 func_8038DAFC();

void func_8038DCD4(struct func_8038DCD4_Struct *arg0, s32 arg1) {
    u8 *var_a1;
    u8 *var_a2;

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
    arg0->unkA0 = 3;
    func_8038DAFC(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038DD54);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file093/8038CFC0/func_8038DD54.s")

/* starting point: func_8038D900 (file061), whose assembly is 91% the same as this function's */

struct func_8038DFA0_StructA {
    u8 pad0[0xA5];
    u8 unkA5;
};

struct func_8038DFA0_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x333 - 8];
    u8 unk333;
};

extern void func_8022A834();

void func_8038DFA0(struct func_8038DFA0_StructA *arg0, struct func_8038DFA0_StructB *arg1)
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

