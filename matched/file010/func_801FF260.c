#include "context.h"
extern void (*D_8021793C[])();
extern void (*D_80217948[])();
extern void *func_8012C4D0(s32, func_801FF438_Struct, s32);
extern s32 D_801BBC2C;

extern func_801FF438_Struct D_80217738;

struct func_801FF260_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x40 - 0x30];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x90 - 0x4C];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
    u8 unk9E;
    u8 unk9F;
    u16 unkA0;
    u16 unkA2;
    s32 unkA4;
    u16 unkA8;
};

struct func_801FF260_Struct *func_801FF260(f32 arg0, f32 arg1, f32 arg2, s16 arg3, s32 arg4, u8 arg5, u16 arg6)
{
  struct func_801FF260_Struct *temp_v0;
  temp_v0 = func_8012C4D0(D_801BBC2C, D_80217738, 7);
  if (temp_v0 != 0)
  {
    temp_v0->unk9E = 0;
    temp_v0->unk90 = arg0;
    temp_v0->unk94 = arg1;
    temp_v0->unk98 = arg2;
    temp_v0->unk9C = arg3;
    temp_v0->unk40 = 0.0f;
    temp_v0->unk44 = 0.0f;
    temp_v0->unk48 = 0.0f;
    temp_v0->unk9F = arg5;
    temp_v0->unkA0 = arg6;
    temp_v0->unkA2 = 0;
    temp_v0->unkA4 = arg4;
    temp_v0->unkA8 = 2;
    temp_v0->unkA2 = 0;
    temp_v0->unk2C = 0;
    return temp_v0;
  }
  return 0;
}
