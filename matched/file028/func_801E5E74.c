#include "common.h"

struct func_801E5E74_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
};

struct func_801E5E74_P {
    u8 pad0[0x2C];
    struct func_801E5E74_Obj *unk2C;
};

struct func_801E5E74_N {
    u8 pad0[8];
    struct func_801E5E74_N *unk8;
    u8 pad1[0x18];
    struct func_801E5E74_P *unk24;
};

extern s32 func_801CF514(s32, s32, s32, s32, s32, s32);
extern u8 func_801DAAF0[];

s32 func_801E5E74(s32 arg0, s32 arg1)
{
  short new_var;
  struct func_801E5E74_N **head;
  new_var = 9;
  head = (struct func_801E5E74_N **) func_801DAAF0;
  ;
  (*(head + new_var))->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = -9.0f;
  (*(head + new_var))->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
  (*(head + new_var))->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -25.5f;
  (*(head + new_var))->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
  func_801CF514(1, 5, 0x3FC00000, 0, 0x7F, 1);
  return 5;
}
