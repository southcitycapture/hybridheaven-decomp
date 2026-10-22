#include "common.h"

extern u32 D_801DEBC0[];

void func_801C13C0(void)
{
    s32 i;

    for (i = 0; i < 9; i++) {
        D_801DEBC0[i] = 0;
    }
}


void func_801C13F8(s32 arg0) {
    D_801DEBC0[arg0] = 1;
}



void func_801C1410(s32 arg0) {
    D_801DEBC0[arg0] = 0;
}



s32 func_801C1424(s32 arg0) {
    s32 temp_v1;

    temp_v1 = D_801DEBC0[arg0];
    if (temp_v1 != 0) {
        D_801DEBC0[arg0] = 0;
    }
    return temp_v1;
}


s32 func_801C144C(u32 arg0)
{
  s32 i;
  s32 r;
  unsigned char new_var;
  u32 m;
  m = arg0;
  r = 1;
  for (i = 0; i < 9; i++)
  {
    if (m & 1)
    {
      r &= D_801DEBC0[i];
    }
    m >>= 1;
  }

  if (r != 0)
  {
    i = 0;
    if (arg0 & 1)
    {
      D_801DEBC0[i] = 0;
    }
    i = 1;
    m = arg0 >> (new_var = 1);
    do
    {
      if (m & new_var)
      {
        D_801DEBC0[i] = 0;
      }
      m >>= 1;
      i++;
    }
    while (i < 9);
  }
  return r;
}

