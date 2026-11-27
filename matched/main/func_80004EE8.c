#include "common.h"
#define DPRINT(args) ((void)(args))
extern s32 func_8000469C(s32, s32);
extern s32 func_80004F98(u32, s32 *);

extern void func_80001FE8(s32, s32, s32);
extern s8 D_8008DC18;

u8 *func_80004EE8(s32 arg0, u8 *arg1)
{
  s32 sp2C;
  u8 i;
  s32 size;
  s32 end;
  if ((u32)arg0 >= 0x8B8AU)
  {
    return arg1;
  }
  if ((u32)arg0 >= 0x8000U)
  {
    size = func_80004F98(arg0, (s32)&sp2C);
    end = (s32)arg1 + size;
    i = 0x10;
    if (size != 0)
    {
      if (D_8008DC18 != 0) DPRINT(D_8008DC18);
      D_8008DC18 = 1;
      func_80001FE8(sp2C, (s32)arg1, size);
      while (i--)
      {
      }

      D_8008DC18 = 0;
    }
    return (u8 *)end;
  }
  return (u8 *)func_8000469C(arg0, (s32)arg1);
}
