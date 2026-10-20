#include "context.h"

extern s16 D_80046934[];

s16 func_8001EF38(f32 arg0, f32 arg1)
{
  s16 pad2;
  u8 pad[8];
  s16 sp2;
  f32 a;
  f32 b;
  s32 v;
  s32 *new_var;
  s32 i;
  if (arg1 < 0.0f)
  {
    a = -arg1;
  }
  else
  {
    a = arg1;
  }
  if (arg0 < 0.0f)
  {
    b = -arg0;
  }
  else
  {
    b = arg0;
  }
  new_var = &v;
  if (b < a)
  {
    if (arg1 == 0.0f)
    {
      return 0;
    }
    i = (s32) ((b * 2048.0f) / a);
    if (((u32) i) >= 0x801U)
    {
      i = 0x800;
    }
    v = D_80046934[i];
    if ((i != 0) && ((arg1 * arg0) < 0.0f))
    {
      v = (s16) ((*new_var) + 1);
    }
    sp2 = *new_var;
  }
  else
    if (a < b)
  {
    if (arg0 == 0.0f)
    {
      return 0;
    }
    i = (s32) ((a * 2048.0f) / b);
    if (((u32) i) >= 0x801U)
    {
      i = 0x800;
    }
    v = (s16) (0x800 - D_80046934[i]);
    if ((i != 0) && ((arg1 * arg0) > 0.0f))
    {
      v = (s16) ((*new_var) - 1);
    }
    sp2 = *new_var;
  }
  else
  {
    v = 0x400;
    if (a == b)
    {
      sp2 = *new_var;
    }
  }
  v = sp2;
  if ((arg1 < 0.0f) && (arg0 >= 0.0f))
  {
    v = (s16) (0x1000 - (*new_var));
  }
  else
    if ((arg1 < 0.0f) && (arg0 < 0.0f))
  {
    v = (s16) ((*new_var) + 0x1000);
  }
  else
    if ((arg1 >= 0.0f) && (arg0 < 0.0f))
  {
    v = (s16) (0x2000 - (*new_var));
  }
  return (*new_var) & 0x1FFF;
}
