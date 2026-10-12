#include "context.h"

typedef struct func_80251B6C_Struct_Obj {
    u8 pad[0x12];
    s16 unk12;
    u8 pad2[0x4B - 0x14];
    u8 unk4B;
} func_80251B6C_Struct_Obj;

typedef struct func_80251B6C_Struct_Ref {
    u8 pad[0x30];
    func_80251B6C_Struct_Obj *unk30;
} func_80251B6C_Struct_Ref;

void func_80251B6C(s32 arg0, func_80251B6C_Struct_Ref **arg1)
{
  func_80251B6C_Struct_Obj *temp_v0;
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk12 = (s16) ((((temp_v0->unk12 - 0x2D) & 0xFFFF) & 0xFFFF) & 0x1FFF);
  temp_v0 = (*arg1)->unk30;
  temp_v0->unk4B = (u8) (temp_v0->unk4B + 3);
  temp_v0 = (*arg1)->unk30;
  if (((s32) temp_v0->unk4B) >= 0xFB)
  {
    temp_v0->unk4B = 0xFA;
  }
  if (func_80133A24(0x7B) != 0)
  {
    func_80005700(arg0);
  }
}
