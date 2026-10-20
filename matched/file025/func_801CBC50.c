#include "context.h"

typedef struct func_801CBC50_Inner {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
} func_801CBC50_Inner;
typedef struct func_801CBC50_Outer {
    u8 pad[0x30];
    func_801CBC50_Inner *unk30;
} func_801CBC50_Outer;
extern s32 D_801DAA20[];

void func_801CBC50(func_801C7D0C_Struct *arg0, func_801CBC50_Outer **arg1)
{
  u8 pad[8];
  f32 dx;
  f32 dz;
  f32 r;
  r = ((f32) ((u32) arg0->unkB0)) / ((f32) ((u32) arg0->unkB2));
  func_8012CF8C(arg0, ((u8 *) (*arg1)->unk30) + 0x40, 0x472, D_801DAA20[((u32) (12.0f * r)) % 12U]);
  dx = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
  dz = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
  if (((*arg1)->unk30 && (*arg1)->unk30) && (*arg1)->unk30)
  {
  }
  (*arg1)->unk30->unk12 = (func_8001EF38(dx, dz) + 0x1000) & 0x1FFF;
  (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20((dx * dx) + (dz * dz))) & 0x1FFF;
  arg0->unkB0 = arg0->unkB0 + 1;
  if (arg0->unkB0 >= arg0->unkB2)
  {
    func_80005700((s32) arg0);
  }
}
