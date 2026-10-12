#include "context.h"

extern f64 D_80389D58;
extern f64 D_80389D60;

struct func_80386EE0_StructInner {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad1[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad2[0x27];
    u8 unk4B;
};

struct func_80386EE0_StructOuter {
    u8 pad0[0x30];
    struct func_80386EE0_StructInner *unk30;
};

void func_80386EE0(struct func_80386420_StructArg0 *arg0, struct func_80386EE0_StructOuter **arg1)
{
  u16 temp_a2;
  struct func_80386EE0_StructInner *temp_v0;
  s16 temp_t1;
  temp_a2 = arg0->unk3C;
  arg0->unk3C = (u16) (temp_a2 + 1);
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk18 = (f32) (((f64) temp_v0->unk18) + D_80389D58);
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk20 = temp_v0->unk18;
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk18 = (f32) (((f64) temp_v0->unk18) + D_80389D60);
  temp_v0 = (*arg1)->unk30;
  *((s16 *) (((u8 *) temp_v0) + 0x12)) = (s16) (((short) ((*((s16 *) (((u8 *) temp_v0) + 0x12))) + 0x555)) & 0x1FFF);
  if (((s32) temp_a2) < 4)
  {
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B + 0x37);
    return;
  }
  if (((s32) temp_a2) >= 5)
  {
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B - 0x10);
    if (((s32) (*arg1)->unk30->unk4B) < 0x10)
    {
      func_80005700();
    }
  }
}
