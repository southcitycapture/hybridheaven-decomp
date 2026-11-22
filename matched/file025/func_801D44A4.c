#include "common.h"

extern f32 D_801DB428[];
f32 func_801D44A4(f32 arg0, f32 arg1)
{
  f32 *p;
  s32 i;
  f32 a;
  f32 b;
  if (arg1 == 0.0f)
  {
    if (arg0 < 0.0f)
    {
      return 4.71238899f;
    }
    if (arg0 > 0.0f)
    {
      return 1.57079637f;
    }
    i = 0;
  }
  if (arg0 == 0.0f)
  {
    if (arg1 < 0.0f)
    {
      return 3.14159274f;
    }
    if (arg1 > 0.0f)
    {
      return 0.0f;
    }
  }
  p = D_801DB428;
  i = 0;
  if (arg0 == 0.0f)
  {
    return 0.0f;
  }
  a = (arg1 < 0) ? (-arg1) : (arg1);
  b = (arg0 < 0) ? (-arg0) : (arg0);
  do
  {
    if ((b / a) <= (*p))
    {
      break;
    }
    i++;
    p++;
  }
  while (i < 0x5A);
  if (i == 0x5A)
  {
    i = 0x59;
  }
  if ((arg1 > 0.0f) && (arg0 > 0.0f))
  {
    return (((f32) i) * 3.14159274f) / 180.0f;
  }
  if ((arg1 < 0.0f) && (arg0 > 0.0f))
  {
    return (((f32) (0xB4 - i)) * 3.14159274f) / 180.0f;
  }
  if ((arg1 < 0.0f) && (arg0 < 0.0f))
  {
    return (((f32) (i + 0xB4)) * 3.14159274f) / 180.0f;
  }
  if ((arg1 > 0.0f) && (arg0 < 0.0f))
  {
    return (((f32) (0x168 - i)) * 3.14159274f) / 180.0f;
  }
  return 0.0f;
}
