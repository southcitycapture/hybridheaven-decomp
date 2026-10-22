#include "context.h"

extern f32 func_8002FC20(f32);
extern s32 D_80164DE0;

s32 func_8011BA18(f32 arg0, f32 arg1, f32 arg2)
{
  f32 temp_fv0;
  s32 *new_var;
  f32 temp_fv1;
  new_var = (s32 *) (&D_80164DE0);
  if ((*((s32 *) ((*((u8 **) (((u8 *) (&D_801BBBF0)) + 0x40))) + 0x24))) == 0)
  {
    arg2 += 0;
    *new_var += 1;
    return 0;
  }
  if ((*((u8 *) (((u8 *) (&D_801BBBF0)) + 0xF5))) == 0)
  {
    *new_var += 1;
    return 0;
  }
  D_80164DE0 = 0;
  temp_fv0 = (*((f32 *) ((*((u8 **) ((*((u8 **) (((u8 *) (&D_801BBBF0)) + 0xE0))) + 0x2C))) + 0x4))) - arg0;
  temp_fv1 = (*((f32 *) ((*((u8 **) ((*((u8 **) (((u8 *) (&D_801BBBF0)) + 0xE0))) + 0x2C))) + 0xC))) - arg1;
  if (func_8002FC20((temp_fv0 * temp_fv0) + (temp_fv1 * temp_fv1)) < arg2)
  {
    return 1;
  }
  return 0;
}
