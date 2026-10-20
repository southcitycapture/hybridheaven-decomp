#include "context.h"

extern u8 D_801D9F00[];
extern u8 D_801DA9E0[];
extern f32 D_801DD2F8;
extern u8 func_801CB048[];

void func_801CAE5C(func_801C7D0C_Struct *arg0, func_801CA628_Outer **arg1)
{
  u8 pad[4];
  f32 dx;
  f32 dz;
  f32 k;
  func_80005E44((s32) arg0, D_801DA9E0);
  func_80006214((s32) arg0);
  func_8012C89C(arg0, 0, 0x373, 1);
  k = D_801DD2F8;
  (*arg1)->unk30->unk30 = ((s32) D_801D9F00) | 0x40000000;
  (*arg1)->unk30->unk4 = arg0->unk90;
  (*arg1)->unk30->unk8 = arg0->unkA0;
  (*arg1)->unk30->unkC = arg0->unk94;
  (*arg1)->unk30->unk18 = k;
  (*arg1)->unk30->unk1C = k;
  (*arg1)->unk30->unk20 = k;
  (*arg1)->unk30->unk24 |= 0x300;
  (*arg1)->unk30->unk48 = 0xFF;
  (*arg1)->unk30->unk49 = 0xFF;
  (*arg1)->unk30->unk4A = 0x64;
  (*arg1)->unk30->unk4B = 0x7F;
  (*arg1)->unk30->unk4C = 0xFF;
  (*arg1)->unk30->unk4D = 0x46;
  (*arg1)->unk30->unk4E = 0;
  (*arg1)->unk30->unk4F = 0xFF;
  dx = D_801BBCD8->unk2C->unk3C - D_801BBCD8->unk2C->unk30;
  dz = D_801BBCD8->unk2C->unk44 - D_801BBCD8->unk2C->unk38;
  (*arg1)->unk30->unk12 = (((((((((((((func_8001EF38(dx, dz) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) + 0x1000) & 0x1FFF;
  (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20((dx * dx) + (dz * dz))) & 0x1FFF;
  func_800058DC((s32) arg0, (void (*)(void)) func_801CB048);
}
