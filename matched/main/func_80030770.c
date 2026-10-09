#include "context.h"

typedef struct func_80030770_Struct0 {
    u8 pad[0x1C];
    s32 unk1C;
} func_80030770_Struct0;

typedef struct func_80030770_Struct3 {
    u8 pad[0x8];
    void (*unk8)(void *, s32, void *, void *);
} func_80030770_Struct3;

typedef struct func_80030770_Struct2 {
    u8 pad[0xC];
    func_80030770_Struct3 *unkC;
    u8 pad2[0xD8 - 0x10];
    s32 unkD8;
} func_80030770_Struct2;

typedef struct func_80030770_Struct1 {
    u8 pad[0x8];
    func_80030770_Struct2 *unk8;
} func_80030770_Struct1;

typedef struct func_80030770_Struct4 {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    u8 pad[2];
    s32 unkC;
} func_80030770_Struct4;

extern void *func_8002C6A0();

void func_80030770(func_80030770_Struct0 *arg0, func_80030770_Struct1 *arg1, u8 arg2)
{
  func_80030770_Struct4 *temp_v0;
  unsigned int var_v1;
  s32 new_var;
  if (arg1->unk8 != 0)
  {
    temp_v0 = func_8002C6A0();
    if (temp_v0 != 0)
    {
      temp_v0->unk4 = arg0->unk1C + arg1->unk8->unkD8;
      temp_v0->unk8 = 0x10;
      var_v1 = arg2;
      if (((s32) arg2) >= 0x80)
      {
        var_v1 = 0x7F;
      }
      new_var = (s32) var_v1;
      temp_v0->unkC = new_var;
      temp_v0->unk0 = 0;
      arg1->unk8->unkC->unk8(arg1->unk8->unkC, 3, temp_v0, arg1);
    }
  }
}
