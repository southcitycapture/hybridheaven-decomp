#include "context.h"

extern u64 func_801C0F18(s32 arg0, s32 arg1);
extern s32 func_801C0EB0(s32 arg0, s32 arg1);
extern f64 func_80034C24(u64 arg0);
extern f32 D_801E846C;
extern f64 D_801E8900;

s32 func_801E7338(s32 arg0, s32 arg1)
{
  f64 new_var;
  u64 temp_ret;
  volatile unsigned long long pad;
  f32 four;
  if (func_801C0B8C(0x2711A0B) != 0)
  {
    func_801C0EB0(4, 1);
    return 8;
  }
  temp_ret = func_801C0F18(4, 1);
  four = 4.0f;
  new_var = func_80034C24(temp_ret);
  *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) (((u8 *) func_801DAAF0) + 0x24))) + 8))) + 8))) + 0x24))) + 0x2C))) + 8)) = (f32) (((268.0f - D_801E846C) * (((f32) (new_var / D_801E8900)) / four)) + D_801E846C);
  return 7;
}
