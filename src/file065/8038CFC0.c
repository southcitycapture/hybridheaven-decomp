#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file065/8038CFC0/func_8038CFF4.s")


struct func_8038D450_StructA {
    u8 pad0[0x92];
    u8 unk92;
    u8 unk93;
    u8 pad1[6];
    u16 unk9A;
    u8 pad2[5];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D450_StructB {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D450_StructC {
    u8 pad0[0x30];
    u32 unk30;
};

void func_802294BC(void *);
void func_80229CE0(void *, void *, s32);
s32 func_8022B640(s32);

void func_8038D450(struct func_8038D450_StructA *arg0, struct func_8038D450_StructB *arg1, struct func_8038D450_StructC *arg2)
{
  s32 temp_v0;
  u8 temp_v0_2;
  if (((arg2->unk30 << 0xB) >> 0x1E) != 0)
  {
    func_802294BC(arg1);
    arg0->unk9A = 8;
  }
  else
  {
    temp_v0 = arg0->unk92;
    if (temp_v0 == 0)
    {
      arg1->unk2D8 = 0;
      func_80229CE0(arg0, arg1, 1);
      temp_v0_2 = arg0->unk92;
      arg0->unk92 = temp_v0_2 + 1;
      arg0->unk93 = temp_v0_2;
    }
    else
      if (temp_v0 == 1)
    {
      arg1->unk2D8 = 1;
      func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
      arg0->unk93 = (arg0->unk92 = 0);
    }
  }
  arg0->unkA1 = arg1->unk2D8;
  arg0->unkA2 = arg1->unk2D9;
}


struct func_8038D514_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 func_8038D59C[];

void func_8038D514(struct func_8038D514_Struct *arg0, void *arg1) {
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
    func_8038D450(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D59C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file065/8038CFC0/func_8038D59C.s")

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038D6F4(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

