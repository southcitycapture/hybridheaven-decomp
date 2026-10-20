#include "context.h"

extern f64 D_80258B98;
extern f64 D_80258BA0;
extern f64 D_80258BA8;

struct func_80246598_Arg0 {
    u8 pad[0x98];
    f32 unk98;
    u8 pad2[4];
    f32 unkA0;
};

struct func_80246598_Sub2 {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[6];
    s16 unk12;
    u8 pad2[8];
    f32 unk1C;
};

struct func_80246598_Sub1 {
    u8 pad[0x30];
    struct func_80246598_Sub2 *unk30;
};

struct func_80246598_Arg1 {
    u8 pad[0x14];
    struct func_80246598_Sub1 *unk14;
};

void func_80246598(void *arg0, s32 arg1)
{
  struct func_80246598_Arg0 *a0 = (struct func_80246598_Arg0 *) arg0;
  struct func_80246598_Sub2 *temp_v0;
  struct func_80246598_Arg0 *new_var;
  ((struct func_80246598_Arg1 *) arg1)->unk14->unk30->unk8 = (f32) ((((f64) a0->unkA0) * D_80258B98) + (((f64) a0->unk98) + 9.5));
  temp_v0 = ((struct func_80246598_Arg1 *) arg1)->unk14->unk30;
  temp_v0->unk12 = (s16) (((short) (temp_v0->unk12 + 0x16)) & 0x1FFF);
  new_var = a0;
  ((struct func_80246598_Arg1 *) arg1)->unk14->unk30->unk1C = (f32) (((f64) a0->unkA0) * D_80258BA0);
  new_var->unkA0 = (f32) (((f64) a0->unkA0) + D_80258BA8);
  if (((f64) new_var->unkA0) > 1.0)
  {
    a0->unkA0 = 1.0f;
  }
}
