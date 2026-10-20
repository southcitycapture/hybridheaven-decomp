#include "common.h"


extern f32 D_80040930[];
extern f32 D_80044930[];
extern f32 D_80048930[];
extern f32 D_8004C930[];

f32 func_8001EAD0(s16 arg0) {
    arg0 = arg0 & 0x1FFF;
    if (arg0 < 0x800) {
        return D_80044930[arg0];
    }
    if (arg0 < 0x1000) {
        return *(f32 *)((u8 *)D_80048930 + -(arg0 * 4));
    }
    if (arg0 < 0x1800) {
        return -D_80040930[arg0];
    }
    return -*(f32 *)((u8 *)D_8004C930 + -(arg0 * 4));
}


extern f32 D_8003E930[];
extern f32 D_80042930[];
extern f32 D_80046930[];
extern f32 D_8004A930[];

f32 func_8001EB64(s16 arg0) {
    s32 idx;

    arg0 = arg0 & 0x1FFF;
    if (arg0 < 0x800) {
        idx = -(arg0 * 4);
        return *(f32 *)((u8 *)D_80046930 + idx);
    }
    if (arg0 < 0x1000) {
        return -D_80042930[arg0];
    }
    if (arg0 < 0x1800) {
        idx = -(arg0 * 4);
        return -*(f32 *)((u8 *)D_8004A930 + idx);
    }
    return D_8003E930[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001EAD0/D_8004CE60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001EAD0/D_8004CF24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001EAD0/D_8004CF2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001EAD0/D_8004CF30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001EAD0/D_8004CF34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001EAD0/func_8001EBF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001EAD0/func_8001ED68.s")


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

