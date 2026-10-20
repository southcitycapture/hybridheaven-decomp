#include "context.h"

s32 func_801E2E34()
{
  f32 t;
  s32 v;
  s32 n;
  s32 c;
  extern void func_801CCE50();
  if (D_801EC9D4 != 0)
  {
    v = D_801EC9D8;
  }
  else
  {
    v = 0x1D - D_801EC9D8;
  }
  t = ((f32) v) / 30.0f;
  ;
  func_801CCE50(((u32) ((87.0f * t) + 40.0f)) & 0xFF, ((u32) ((215.0f * t) + 40.0f)) & 0xFF, (((u32) ((215.0f * t) + 40.0f)) & 0xFF) & 0xFF, &D_801EC9D4);
  n = (D_801EC9D8 = D_801EC9D8 + 1);
  if (n >= 0x1E)
  {
    if (D_801EC9D4 != 0)
    {
      D_801EC9D4 = (c = 0);
    }
    else
    {
      D_801EC9D4 = 1;
    }
  }
  D_801EC9D8 = n % 30;
}
