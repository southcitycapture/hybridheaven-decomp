#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file065/8038CFC0/func_8038CFC0.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/file065/8038CFC0/func_8038D514.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file065/8038CFC0/func_8038D59C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file065/8038CFC0/func_8038D6F4.s")

