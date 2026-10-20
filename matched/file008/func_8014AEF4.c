#include "context.h"

struct func_8014AEF4_Struct { u8 a; u8 b; u16 c; s32 d; u8 e; u8 f; };
extern u16 func_8014B518();
extern u8 *func_8014B670(void);
extern s32 func_801FF260(f32, f32, s32, s16, void *, u8, u16);

u16 func_8014AEF4(f32 arg0, f32 arg1, s32 arg2, s16 arg3, u16 arg4, unsigned char arg5, volatile u16 arg6)
{
  struct func_8014AEF4_Struct *p;
  s32 sp2C;
  if (arg5 >= 0x2E)
  {
    return 0;
  }
  if (arg6 >= 3)
  {
    return 0;
  }
  sp2C = arg4;
  if (sp2C >= 0x8000)
  {
    if (func_8014B7CC(arg4) != 0)
    {
      return 0;
    }
    if (func_8014B6F8(arg4) != 0)
    {
      return 0;
    }
  }
  p = func_8014B670();
  if (p != 0)
  {
    (*p).a = 3;
    p->b = 0;
    if (sp2C >= 0x8000)
    {
      p->c = arg4;
    }
    else
    {
      p->c = func_8014B518();
    }
    p->e = arg5;
    p->f = arg6;
    sp2C = func_801FF260(arg0, arg1, arg2, arg3, p, arg5, arg6);
    p->d = sp2C;
    if (p->d == 0)
    {
      return 0;
    }
    return p->c;
  }
  return 0;
}
