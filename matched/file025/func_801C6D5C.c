#include "context.h"

extern u8 D_801DA594[];
extern u8 func_801C70A0[];

void func_801C6D5C(func_801C6580_Struct *arg0, func_801C6580_Struct2 **arg1)
{
  short new_var;
  f32 sp28;
  f32 sp24;
  func_801C6580_Struct4 *t;
  func_80005E44(arg0, D_801DA594);
  func_80006214(arg0);
  (*arg1)->unk30->unk30 = 0;
  (*arg1)->unk30->unk28 = D_801D9908;
  (*arg1)->unk30->unk0 = 0;
  (*arg1)->unk30->unk2C = 0;
  func_8012CF8C(arg0, (*arg1)->unk30->unk40, 0x474, 0);
  (*arg1)->unk30->unk4 = arg0->unk90;
  (*arg1)->unk30->unk8 = arg0->unk94;
  (*arg1)->unk30->unkC = arg0->unk98;
  t = D_801BBCD8->unk2C;
  sp28 = t->unk3C - t->unk30;
  sp24 = t->unk44 - t->unk38;
  (*arg1)->unk30->unk10 = func_8001EF38(D_801BBCD8->unk2C->unk40 - D_801BBCD8->unk2C->unk34, func_8002FC20((sp28 * sp28) + (sp24 * sp24))) & 0x1FFF;
  new_var = func_8001EF38(sp28, sp24);
  (*arg1)->unk30->unk12 = (new_var + 0x1000) & 0x1FFF;
  (*arg1)->unk30->unk18 = arg0->unk9C;
  (*arg1)->unk30->unk1C = arg0->unkA0;
  (*arg1)->unk30->unk20 = arg0->unkA4;
  (*arg1)->unk30->unk24 = 0x300;
  (*arg1)->unk30->unk48 = 0xFF;
  (*arg1)->unk30->unk49 = 0xFF;
  (*arg1)->unk30->unk4A = 0xFF;
  (*arg1)->unk30->unk4B = 0xFF;
  (*arg1)->unk30->unk4C = (func_801C78F8() * 95.0f) + 160.0f;
  (*arg1)->unk30->unk4D = func_801C78F8() * 160.0f;
  (*arg1)->unk30->unk4E = 0;
  (*arg1)->unk30->unk4F = 0xFF;
  (*arg1)->unk22 = 0;
  func_800058DC(arg0, func_801C70A0);
}
