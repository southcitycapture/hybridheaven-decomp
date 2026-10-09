#include "context.h"

struct func_800114D0_Struct {
    u8 pad[4];
    u16 unk4;
};

s32 func_800114D0(struct func_800114D0_Struct *arg0)
{
  u16 temp_t6;
  f64 temp_ft1;
  u32 var_v0;
  temp_t6 = arg0->unk4;
  var_v0 = temp_t6 & 0xFFFFu;
  temp_ft1 = var_v0;
  return (u16) ((u32) temp_ft1);
}
