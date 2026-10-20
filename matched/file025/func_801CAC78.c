#include "context.h"

typedef struct func_801CAC78_Obj {
    u8 pad[0xB0];
    u16 unkB0;
    u16 unkB2;
} func_801CAC78_Obj;
typedef struct func_801CAC78_Sub {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
} func_801CAC78_Sub;
typedef struct func_801CAC78_Hold {
    u8 pad[0x30];
    func_801CAC78_Sub *unk30;
} func_801CAC78_Hold;
extern s32 D_801DA9C0[];

void func_801CAC78(func_801CAC78_Obj *arg0, func_801CAC78_Hold **arg1)
{
  u8 pad[8];
  f32 dx;
  f32 dz;
  f32 r;
  f32 new_var;
  r = ((f32) ((u32) arg0->unkB0)) / ((f32) ((u32) arg0->unkB2));
  func_8012CF8C(arg0, ((u8 *) (*arg1)->unk30) + 0x40, 0x471, D_801DA9C0[((u32) (8.0f * r)) & 7]);
  dx = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
  dz = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
  new_var = dx;
  if ((!(*arg1)->unk30) && (!(*arg1)->unk30))
  {
  }
  (*arg1)->unk30->unk12 = (s16) ((func_8001EF38(new_var, dz) + 0x1000) & 0x1FFF);
  (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20((new_var * dx) + (dz * dz))) & 0x1FFF;
  arg0->unkB0++;
  if (arg0->unkB0 >= arg0->unkB2)
  {
    func_80005700((s32) arg0);
  }
}
