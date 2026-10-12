#include "context.h"

typedef struct func_80011198_Struct_Sub {
    u8 pad0[0x50];
    f32 unk50;
} func_80011198_Struct_Sub;

typedef struct func_80011198_Struct_Obj {
    u8 pad0[0x2C];
    func_80011198_Struct_Sub *unk2C;
} func_80011198_Struct_Obj;

typedef struct func_80011198_Struct {
    u8 pad0[0xC];
    u16 unkC;
    u8 pad1[0x76 - 0xE];
    u8 unk76;
} func_80011198_Struct;

void func_80011198(func_80011198_Struct_Obj **arg0, func_80011198_Struct *arg1)
{
  s32 var_v0;
  func_80011198_Struct_Obj **var_v1;
  func_80011198_Struct_Obj *temp_t7;
  var_v0 = 0;
  if (arg1->unkC > 0)
  {
    var_v1 = arg0;
    do
    {
      var_v0 += 1;
      var_v1 += 1;
      ;
      var_v1[-1]->unk2C->unk50 = 0.0f;
    }
    while (var_v0 < arg1->unkC);
  }
  arg1->unk76 = 1;
}
