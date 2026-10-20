#include "context.h"

typedef struct func_801C95AC_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801C95AC_Inner;

typedef struct func_801C95AC_Obj {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801C95AC_Inner *unk30;
} func_801C95AC_Obj;

typedef struct func_801C95AC_Struct {
    func_801C95AC_Obj *o[3];
} func_801C95AC_Struct;

void func_801C95AC(s32 arg0, func_801C95AC_Struct *arg1)
{
  f32 *d;
  f32 k;
  f32 k2;
  func_801C95AC_Obj **new_var2;
  int new_var;
  func_80006214(arg0);
  if (D_801DA648 != 0)
  {
    arg1->o[0]->unk22 = 1;
    arg1->o[1]->unk22 = 1;
    arg1->o[2]->unk22 = 1;
  }
  else
  {
    arg1->o[0]->unk22 = 0;
    arg1->o[1]->unk22 = 0;
    arg1->o[2]->unk22 = 0;
  }
  d = (f32 *) (&D_801E04E0);
  arg1->o[0]->unk30->unk4 = d[0x18 / 4];
  arg1->o[0]->unk30->unk8 = d[0x1C / 4];
  arg1->o[0]->unk30->unkC = d[0x20 / 4];
  k = 90.0f;
  k2 = 2048.0f;
  arg1->o[0]->unk30->unk10 = (s16) ((s32) ((d[0xC / 4] * k2) / k));
  new_var = 0;
  arg1->o[new_var]->unk30->unk12 = (s16) ((s32) ((d[0x10 / 4] * k2) / k));
  arg1->o[0]->unk30->unk14 = (s16) ((s32) ((d[0x14 / 4] * k2) / k));
  arg1->o[0]->unk30->unk18 = d[0];
  arg1->o[0]->unk30->unk1C = d[1];
  (new_var2 = arg1->o)[0]->unk30->unk20 = d[2];
  new_var2[1]->unk30->unk4 = d[0x3C / 4];
  new_var2[1]->unk30->unk8 = d[0x40 / 4];
  new_var2[1]->unk30->unkC = d[0x44 / 4];
  new_var2[1]->unk30->unk10 = (s16) ((s32) ((d[0x30 / 4] * k2) / k));
  new_var2[1]->unk30->unk12 = (s16) ((s32) ((d[0x34 / 4] * k2) / k));
  new_var2[1]->unk30->unk14 = (s16) ((s32) ((d[0x38 / 4] * k2) / k));
  new_var2[1]->unk30->unk18 = d[0x24 / 4];
  new_var2[1]->unk30->unk1C = d[0x28 / 4];
  new_var2[1]->unk30->unk20 = d[0x2C / 4];
  new_var2[2]->unk30->unk4 = d[0x60 / 4];
  new_var2[2]->unk30->unk8 = d[0x64 / 4];
  new_var2[2]->unk30->unkC = d[0x68 / 4];
  new_var2[2]->unk30->unk10 = (s16) ((s32) ((d[0x54 / 4] * k2) / k));
  new_var2[2]->unk30->unk12 = (s16) ((s32) ((d[0x58 / 4] * k2) / k));
  new_var2[2]->unk30->unk14 = (s16) ((s32) ((d[0x5C / 4] * k2) / k));
  new_var2[2]->unk30->unk18 = d[0x48 / 4];
  new_var2[2]->unk30->unk1C = d[0x4C / 4];
  new_var2[2]->unk30->unk20 = d[0x50 / 4];
  if (D_801DA644 == 0)
  {
    func_80005700(arg0);
  }
}
