#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013C8F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013CC10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013CD04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013D09C.s")


struct func_8013D134_Struct {
    u8 pad[0x375];
    u8 unk375;
    u8 unk376;
};

void func_8013D134(struct func_8013D134_Struct *arg0) {
    arg0->unk376 = arg0->unk375;
}


extern u8 D_8018E2FC[];
extern u8 D_8018E300[];

u8 *func_8013D140(s32 arg0) {
    s32 *p = &arg0;

    arg0 &= 0xFF;
    if (arg0 < 0xE) {
        return D_8018E2FC;
    }
    return D_8018E300;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013D16C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8013C8F0/func_8013D268.s")


extern u8 D_801842A0[];

s32 func_8013D3F8(u8 *arg0)
{
  s32 var_v1;
  u8 temp_v0;
  u8 *new_var;
  u8 temp_v0_2;
  s32 temp_a1;
  u8 *temp_t6;
  u8 *temp_t9;
  u8 *temp_a2;
  u8 *temp_a3;
  temp_v0 = arg0[0x2D8];
  var_v1 = 0;
  if (((((s32) temp_v0) < 9) || (((s32) temp_v0) >= 0xB)) || ((temp_v0_2 = arg0[0x375], ((s32) temp_v0_2) <= 0)))
  {
    return 0;
  }
  temp_a1 = temp_v0_2;
  temp_t6 = arg0 + temp_a1;
  temp_a2 = &D_801842A0[temp_t6[0x377] * 0x1C];
  temp_t9 = temp_v0_2 + (new_var = arg0);
  temp_a3 = &D_801842A0[temp_t9[0x378] * 0x1C];
  if (temp_a2[0x1A] == temp_a3[0x1A])
  {
    var_v1 = 5;
  }
  if (temp_a2[0x9] == temp_a3[0x9])
  {
    var_v1 = (var_v1 + 5) & 0xFF;
  }
  return var_v1;
}

