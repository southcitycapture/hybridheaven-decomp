#include "context.h"

struct func_8014B1A4_Struct {
    u8 unk0;
    u8 unk1;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    u16 unkA;
    u8 unkC;
    u8 unkD;
    u16 unkE;
};

s32 func_8014B6F8(u16);

s32 func_8014B1A4(f32 arg0, f32 arg1, f32 arg2, s16 arg3, u16 arg4, u8 arg5, u16 arg6, u16 arg7, u8 arg8, u8 arg9)
{
  struct func_8014B1A4_Struct *temp_v0;
  if (((s32) arg4) < 0x8000)
  {
    return 0;
  }
  if (func_8014B6F8(arg4) != 0)
  {
    return 0;
  }
  temp_v0 = (struct func_8014B1A4_Struct *) func_8014B5E8();
  if (temp_v0 == 0)
  {
    return 0;
  }
  temp_v0->unk0 = (s8) ((arg8 & 0xFFu) | 3);
  temp_v0->unk1 = arg9;
  temp_v0->unk2 = (s16) ((s32) arg0);
  temp_v0->unk4 = (s16) ((s32) arg1);
  temp_v0->unk6 = (s16) ((s32) arg2);
  temp_v0->unk8 = arg3;
  temp_v0->unkA = arg4;
  temp_v0->unkE = arg7;
  temp_v0->unkC = arg5;
  temp_v0->unkD = (s8) arg6;
  return 1;
}
