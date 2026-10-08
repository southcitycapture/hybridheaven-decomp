#include "common.h"

struct func_80377BA0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 pad10[0x1C];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x38];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    u8 unk7C;
    u8 unk7D;
    u8 unk7E;
    u8 unk7F;
    u8 unk80;
    u8 unk81;
    u8 unk82;
    u8 unk83;
    u8 unk84;
    u8 unk85;
    u8 unk86;
    u8 unk87;
    s32 unk88;
    s32 unk8C;
    u16 unk90;
    u16 unk92;
    u8 unk94;
    u8 unk95;
};

extern void *func_80005670(s32, void *);
extern s32 *func_80377B48(u8);
extern struct func_80377BA0_Struct D_80388800;

void func_80377BA0(s32 arg0, u8 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5, u8 arg6, u8 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11, u8 arg12, u8 arg13, u8 arg14, u8 arg15, u8 arg16, u8 arg17, u8 arg18, u8 arg19, u8 arg20, u8 arg21, u16 arg22)
{
  struct func_80377BA0_Struct *temp_v0_2;
  s32 *temp_v0;
  temp_v0 = func_80377B48(arg1);
  D_80388800.unkC = *temp_v0;
  temp_v0_2 = func_80005670(arg0, &D_80388800);
  temp_v0_2->unk30 = 0;
  temp_v0_2->unk2C = 0;
  if (((!temp_v0_2) && (!temp_v0_2)) != 0)
  {
  }
  temp_v0_2->unk6C = arg2;
  temp_v0_2->unk70 = arg3;
  temp_v0_2->unk74 = arg4;
  temp_v0_2->unk78 = arg5;
  temp_v0_2->unk79 = arg6;
  temp_v0_2->unk7A = arg7;
  temp_v0_2->unk7B = arg8;
  temp_v0_2->unk7C = arg9;
  temp_v0_2->unk7D = arg10;
  temp_v0_2->unk7E = arg11;
  temp_v0_2->unk7F = arg12;
  temp_v0_2->unk80 = arg13;
 temp_v0_2->unk81 = arg14; temp_v0_2->unk82 = arg15;
  temp_v0_2->unk83 = arg16;
  temp_v0_2->unk84 = arg17;
  temp_v0_2->unk85 = arg18;
  temp_v0_2->unk86 = arg19;
  temp_v0_2->unk87 = arg20;
  temp_v0_2->unk88 = temp_v0[1];
  temp_v0_2->unk8C = temp_v0[0];
  temp_v0_2->unk90 = arg22;
  temp_v0_2->unk92 = 0;
  temp_v0_2->unk94 = arg21;
  temp_v0_2->unk95 = arg1;
}
