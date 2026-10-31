#include "common.h"
extern s32 D_801FD47C;
extern s32 D_801FD480;
extern void func_8001B204(s32, s32, s32, void *);
extern s32 func_801302CC(void);
extern s32 func_8038D28C(s32 arg0);


extern s32 D_8038CAF4(u8 *, s32, s32);
extern s32 D_801FAF7C;
extern s32 D_801FAF80;
extern u8 D_801FD488[];

s32 func_801E2074(s32 arg0, s32 arg1)
{
  s32 temp_s0;
  s32 sp28;
  s32 sp24;
  if (D_801FD480 >= 5)
  {
    sp24 = 0;
    temp_s0 = D_801FD47C / 16;
    sp28 = D_801FD47C % 16;
    if (func_801302CC() != 0)
    {
      sp24 = -0x14;
    }
    if (temp_s0 == 0)
    {
      D_8038CAF4(D_801FD488, D_801FAF7C, sp28 + 1);
      (D_801FD488 + sp28)[1] = 0;
      func_8001B204(0, 0x64, (s16) (sp24 + 0xAA), D_801FD488);
    }
    else
    {
      D_8038CAF4(D_801FD488, D_801FAF7C, 0x10);
      func_8001B204(0, 0x64, (s16) (sp24 + 0xAA), D_801FD488);
      D_8038CAF4(D_801FD488, D_801FAF80, sp28 + 1);
      (D_801FD488 + sp28)[1] = 0;
      func_8001B204(1, 0x64, (s16) (sp24 + 0xBA), D_801FD488);
    }
    if (((u16) *(D_801FD488 + sp28) != 0x20) && ((u16) *(D_801FD488 + sp28) != 0))
    {
      func_8038D28C(0x1C9);
    }
    D_801FD47C = D_801FD47C + 1;
    if (D_801FD47C >= 0x20)
    {
      return 2;
    }
    D_801FD480 = 0;
  }
  D_801FD480 = D_801FD480 + 1;
  return 1;
}
