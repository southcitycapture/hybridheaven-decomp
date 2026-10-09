#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file060/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file060/8038CFC0/func_8038CFF4.s")


struct func_8038D4F4_Arg0 {
    u8 pad[0x92];
    u8 unk92;
    u8 unk93;
    u8 pad2[0x9A - 0x94];
    s16 unk9A;
    u8 pad3[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D4F4_Arg1 {
    u8 pad[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D4F4_Arg2 {
    u8 pad[0x30];
    s32 unk30;
    u8 pad2[0x2D1 - 0x34];
    u8 unk2D1;
    u8 pad3[0x388 - 0x2D2];
    u8 unk388;
};

void func_802294BC(void *);
void func_80229CE0(void *, void *, s32);
s32 func_8022B640(s32);

void func_8038D4F4(struct func_8038D4F4_Arg0 *arg0, struct func_8038D4F4_Arg1 *arg1, struct func_8038D4F4_Arg2 *arg2)
{
  u32 temp_v0;
  s32 temp_t4;
  s32 temp_t5;
  temp_v0 = arg2->unk30;
  temp_t4 = 1;
  temp_t5 = 1;
  if ((((((u32) (temp_v0 << 0xB)) >> 0x1E) != 0) || ((((u32) (temp_v0 * 8)) >> 0x1C) == 2)) && (((s32) arg2->unk2D1) >= 5))
  {
    func_802294BC(arg1);
    arg0->unk9A = (s16) (arg0->unk9A | 8);
  }
  else
    if (arg2->unk388 < 6)
  {
    arg1->unk2D8 = temp_t4;
    func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
  }
  else
  {
    arg1->unk2D8 = temp_t5;
    func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    arg0->unk93 = (arg0->unk92 = 0);
  }
  arg0->unkA1 = arg1->unk2D8;
  arg0->unkA2 = arg1->unk2D9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file060/8038CFC0/func_8038D5D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file060/8038CFC0/func_8038D660.s")


struct func_8038D7B8_Arg0 {
    u8 pad[0xA5];
    u8 unkA5;
};

struct func_8038D7B8_Arg1 {
    u8 pad[6];
    s16 unk6;
};

void func_8022A834();

void func_8038D7B8(struct func_8038D7B8_Arg0 *arg0, struct func_8038D7B8_Arg1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 1;
        return;
    }
    func_8022A834();
}

