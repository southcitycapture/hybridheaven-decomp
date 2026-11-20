#include "common.h"


extern s16 D_80046934[];

struct func_8001EF38_StructTerms
{
  f32 abs_y;
  f32 abs_x;
  f32 product;
};

s16 func_8001EF38(f32 arg0, f32 arg1)
{
  struct func_8001EF38_StructTerms terms;
  s16 sp2;
  s16 v;
  s16 *new_var;
  s32 i;
  if (arg1 < 0.0f)
  {
    terms.abs_y = -arg1;
  }
  else
  {
    terms.abs_y = arg1;
  }
  if (arg0 < 0.0f)
  {
    terms.abs_x = -arg0;
  }
  else
  {
    terms.abs_x = arg0;
  }
  new_var = &v;
  if (terms.abs_x < terms.abs_y)
  {
    if (arg1 == 0.0f)
    {
      return 0;
    }
    i = (s32) ((terms.abs_x * 2048.0f) / terms.abs_y);
    if (((u32) i) >= 0x801U)
    {
      i = 0x800;
    }
    v = D_80046934[i];
    if (i != 0)
    {
      terms.product = arg1 * arg0;
      if (terms.product < 0.0f)
      {
        v = (s16) ((*new_var) + 1);
      }
    }
    sp2 = *new_var;
  }
  else
    if (terms.abs_y < terms.abs_x)
  {
    if (arg0 == 0.0f)
    {
      return 0;
    }
    i = (s32) ((terms.abs_y * 2048.0f) / terms.abs_x);
    if (((u32) i) >= 0x801U)
    {
      i = 0x800;
    }
    v = (s16) (0x800 - D_80046934[i]);
    if (i != 0)
    {
      terms.product = arg1 * arg0;
      if (terms.product > 0.0f)
      {
        v = (s16) ((*new_var) - 1);
      }
    }
    sp2 = *new_var;
  }
  else
  {
    v = 0x400;
    if (terms.abs_y == terms.abs_x)
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
