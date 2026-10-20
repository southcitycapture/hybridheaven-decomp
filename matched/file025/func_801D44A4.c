#include "context.h"

extern f32 D_801DB428[];
extern f32 D_801DD558;
extern f32 D_801DD55C;
extern f32 D_801DD560;
extern f32 D_801DD564;
extern f32 D_801DD568;
extern f32 D_801DD56C;
extern f32 D_801DD570;

f32 func_801D44A4(f32 arg0, f32 arg1)
{
  f32 *p;
  s32 i;
  f32 a;
  f32 b;
  f32 z;
  if (arg1 == 0.0f)
  {
    if (arg0 < 0.0f)
    {
      return D_801DD558;
    }
    if (arg0 > 0.0f)
    {
      return D_801DD55C;
    }
    i = 0;
  }
  if (arg0 == 0.0f)
  {
    if (arg1 < 0.0f)
    {
      return D_801DD560;
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
    return (((f32) i) * D_801DD564) / 180.0f;
  }
  if ((arg1 < 0.0f) && (arg0 > 0.0f))
  {
    return (((f32) (0xB4 - i)) * D_801DD568) / 180.0f;
  }
  if ((arg1 < 0.0f) && (arg0 < 0.0f))
  {
    return (((f32) (i + 0xB4)) * D_801DD56C) / 180.0f;
  }
  if ((arg1 > 0.0f) && (arg0 < 0.0f))
  {
    return (((f32) (0x168 - i)) * D_801DD570) / 180.0f;
  }
  return 0.0f;
}
