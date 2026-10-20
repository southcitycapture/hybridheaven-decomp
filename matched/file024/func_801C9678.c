#include "context.h"

typedef struct func_801C9678_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[3];
    s16 unk94;
    s16 unk96;
    s16 unk98;
    u8 pad9A[2];
    f32 unk9C;
} func_801C9678_Struct;

typedef struct func_801C9678_Pair {
    u8 *unk0;
    u8 *unk4;
} func_801C9678_Pair;

extern func_801C9678_Pair D_801CD0A0[];
extern f64 D_801CF3E0;
extern void func_80005700(void *);

void func_801C9678(func_801C9678_Struct *arg0, s32 arg1)
{
  u8 *a;
  u8 *b;
  u8 buf[3];
  s32 new_var;
  a = D_801CD0A0[arg0->unk90].unk0;
  b = D_801CD0A0[arg0->unk90].unk4;
  new_var = 0;
  buf[0] = (u32) (arg0->unk9C * ((f32) arg0->unk94));
  buf[1] = (u32) (arg0->unk9C * ((f32) arg0->unk96));
  buf[2] = (u32) (arg0->unk9C * ((f32) arg0->unk98));
  new_var = new_var;
  do
  {
    u8 v = buf[new_var];
    b[new_var] = v;
    a[new_var] = v;
    new_var = (new_var + 1) & 0xFF;
  }
  while (new_var < 3);
  arg0->unk9C = arg0->unk9C - D_801CF3E0;
  if (arg0->unk9C < 0.0f)
  {
    *((&D_801CFD70) + arg0->unk90) = 0;
    func_80005700(arg0);
  }
}
