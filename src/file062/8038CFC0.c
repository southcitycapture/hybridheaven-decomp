#include "common.h"

extern f64 D_8038DB80;
extern s32 D_801BBCCC;
extern s32 func_8022B640();
extern s32 func_8038D5C4();
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 func_8038D784[];
extern void func_800058DC(void *, void *);
extern void func_80229404(void *);
extern void func_80229500(void *, void *, void *);
extern void func_80229CE0(void *, void *, s32);
extern void func_8022A834();
extern void func_8038CFFC();


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
    ((struct func_8038CFC0_Struct *) arg0)->unk98 = 3;
  }
  func_800058DC(new_var, &func_8038CFFC);
}

/* hh-block asm/nonmatchings/file062/8038CFC0/_mrg_keep_text_func_8038CFFC.s {"functions":["func_8038CFFC"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file062/8038CFC0/_mrg_keep_text_func_8038CFFC.s")



s32 func_8038D5C4(u8 *arg0, u8 *arg1, u8 *arg2) {
    u32 v = *(u32 *)(arg2 + 0x30);
    if ((((v << 11) >> 30) != 0) || (((v << 3) >> 28) == 2)) {
        func_80229404(arg1);
        *(s16 *)(arg0 + 0x9A) |= 8;
    } else if ((*(u32 *)(arg1 + 0x38) >> 31) != 0) {
        arg1[0x2D8] = 2;
        *(s16 *)(arg0 + 0x9A) |= 2;
        func_80229CE0(arg0, arg1, 1);
    } else if ((*(f32 *)(D_801BC3D8 + 0x3A8) > 25.0f) && (((f64)*(s16 *)arg2 * D_8038DB80) < (f64)*(s16 *)(arg2 + 2))) {
        arg1[0x2D8] = 0x13;
        arg1[0x2D9] = 2;
    } else {
        arg1[0x2D8] = 1;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0[0xA1] = arg1[0x2D8];
    arg0[0xA2] = arg1[0x2D9];
}


struct func_8038D6FC_Struct {
    u8 pad0[0xC];
    s32 unkC;
};


void func_8038D6FC(struct func_8038D6FC_Struct *arg0, void *arg1) {
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
    func_8038D5C4(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D784);
}

/* hh-block asm/nonmatchings/file062/8038CFC0/_mrg_keep_text_func_8038D784.s {"functions":["func_8038D784"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file062/8038CFC0/_mrg_keep_text_func_8038D784.s")

/* starting point: func_8038D900 (file061), whose assembly is 91% the same as this function's */

struct func_8038DA40_StructA {
    u8 pad0[0xA5];
    u8 unkA5;
};

struct func_8038DA40_StructB {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[0x333 - 8];
    u8 unk333;
};


void func_8038DA40(struct func_8038DA40_StructA *arg0, struct func_8038DA40_StructB *arg1)
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


/* Original readonly objects; named loads retain their original addresses. */
static const unsigned char rodata_8038CFC0[] = {
    0xA5, 0xD7, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x00, 0x3F, 0xE9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
    0x3F, 0xE9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A, 0x3F, 0xE9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x9A,
};
