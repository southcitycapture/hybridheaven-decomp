#include "context.h"

extern void func_80001FE8(s32, s32, s32);
extern s32 func_80004F98(u32, s32 *);
extern s8 D_8008DC18;

s32 func_80004EE8(u32 arg0, s32 arg1)
{
  s32 sp2C;
  u8 i;
  s32 size;
  s32 end;
  if (arg0 >= 0x8B8AU)
  {
    return arg1;
  }
  if (arg0 >= 0x8000U)
  {
    size = func_80004F98(arg0, &sp2C);
    end = arg1 + size;
    i = 0x10;
    arg0 = (u32) (&D_8008DC18);
    if (size != 0)
    {
      if (arg0 != 0)
      {
      }
      *((u8 *) arg0) = 1;
      if ((arg0 && arg0) && arg0)
      {
      }
      func_80001FE8(sp2C, arg1, size);
      while (i--)
      {
      }

      D_8008DC18 = 0;
    }
    return end;
  }
  return 0, func_8000469C(arg0, arg1);
}
