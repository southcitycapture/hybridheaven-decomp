#include "context.h"

s32 func_801E2290()
{
  f32 t;
  s32 v;
  s32 n;
  s32 c;
  extern void func_801CCE50();
  if (D_801E8084 != 0)
  {
    v = D_801E8088;
  }
  else
  {
    v = 0x1D - D_801E8088;
  }
  t = ((f32) v) / 30.0f;
  ;
  func_801CCE50(((u32) ((87.0f * t) + 40.0f)) & 0xFF, ((u32) ((215.0f * t) + 40.0f)) & 0xFF, (((u32) ((215.0f * t) + 40.0f)) & 0xFF) & 0xFF, &D_801E8084);
  n = (D_801E8088 = D_801E8088 + 1);
  if (n >= 0x1E)
  {
    if (D_801E8084 != 0)
    {
      D_801E8084 = (c = 0);
    }
    else
    {
      D_801E8084 = 1;
    }
  }
  D_801E8088 = n % 30;
}
