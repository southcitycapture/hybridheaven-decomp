#include "common.h"

extern void *func_80005670(s32, void *);
extern u8 D_801DA580[];
extern u8 func_8038D8B8[];

typedef struct func_801C6CC4_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    s16 unkA8;
    s16 unkAA;
    s16 unkAC;
    s16 unkAE;
    s16 unkB0;
    s16 unkB2;
} func_801C6CC4_Struct;

s32 func_801C6CC4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6, s32 arg7)
{
  func_801C6CC4_Struct *temp_v0;
  f32 temp_f0;
  func_801C6CC4_Struct *new_var;
  temp_v0 = func_80005670(*((s32 *) (func_8038D8B8 + 0x14)), D_801DA580);
  if (0 == temp_v0)
  {
    return 0;
  }
  new_var = temp_v0;
  temp_v0->unk90 = arg0;
  temp_v0->unk94 = arg1;
  temp_v0->unk98 = arg2;
  temp_v0->unk9C = arg3;
  temp_v0->unkA0 = arg4;
  temp_v0->unkA4 = (temp_f0 = arg5);
  new_var->unkA8 = 0;
  temp_v0->unkAA = (s16) arg6;
  temp_v0->unkB0 = 0;
  temp_v0->unkB2 = (s16) arg7;
  return 1;
}
