#include "common.h"

extern s32 D_801BBCCC;
extern s32 func_8022B640();
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
extern void func_800058DC(void *, void *);
extern void func_802294BC();
extern void func_80229500(void *, void *, void *);
extern void func_80229CE0();
extern void func_8022A834();
extern void func_8038CFFC();
extern void func_8038D900(void *, void *, void *);
extern void func_8038DA4C(void);


struct func_8038CFC0_Struct {
    u8 pad0[0x98];
    s16 unk98;
};


void func_8038CFC0(s32 arg0, s32 arg1)
{
  void *new_var;
  extern void func_80229500();
  if (1)
  {
    new_var = (void *) arg0;
    func_80229500();
    ((struct func_8038CFC0_Struct *) arg0)->unk98 = 5;
  }
  func_800058DC(new_var, &func_8038CFFC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file068/8038CFC0/func_8038CFFC.s")

struct func_8038D900_StructA { u8 pad[0x30]; u32 pre:11; u32 f:2; u32 rest:19; };
struct func_8038D900_StructB { u8 pad[0x9A]; s16 unk9A; u8 pad2[5]; u8 unkA1; u8 unkA2; };
struct func_8038D900_StructC { u8 pad[0x2D8]; u8 unk2D8; u8 unk2D9; };

void func_8038D900(void *a0, void *a1, void *a2) {
    struct func_8038D900_StructB *arg0 = a0;
    struct func_8038D900_StructC *arg1 = a1;
    struct func_8038D900_StructA *arg2 = a2;
    if (arg2->f != 0) {
        func_802294BC(arg1);
        arg0->unk9A |= 8;
    } else if (*(f32 *)(&D_801BC3D8 + 0x3A8) > 35.0f) {
        arg1->unk2D8 = 0xC;
        arg1->unk2D9 = 0x18;
    } else {
        if (func_8022B640(2) == 0) {
            arg1->unk2D8 = 0;
        } else {
            arg1->unk2D8 = 1;
        }
        func_80229CE0(arg0, arg1, 1);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038D9D4_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};


void func_8038D9D4(struct func_8038D9D4_Struct *arg0, s32 arg1) {
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
    func_8038D900(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038DA4C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file068/8038CFC0/func_8038DA4C.s")

/* starting point: func_8038D900 (file061), whose assembly is 91% the same as this function's */

struct func_8038DC28_StructA {
    u8 pad0[0xA5];
    u8 unkA5;
};

struct func_8038DC28_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x333 - 8];
    u8 unk333;
};


void func_8038DC28(struct func_8038DC28_StructA *arg0, struct func_8038DC28_StructB *arg1)
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

