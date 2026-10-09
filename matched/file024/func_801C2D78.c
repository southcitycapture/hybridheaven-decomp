#include "context.h"

struct func_801C2D78_Struct_Inner {
    u8 pad[0x4D];
    u8 unk4D;
};

struct func_801C2D78_Struct_Mid {
    u8 pad[0x30];
    struct func_801C2D78_Struct_Inner *unk30;
};

struct func_801C2D78_Struct_Arg1 {
    u8 pad[0x8];
    struct func_801C2D78_Struct_Mid *unk8;
};

struct func_801C2D78_Struct_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_801C2D78(struct func_801C2D78_Struct_Arg0 *arg0, struct func_801C2D78_Struct_Arg1 *arg1)
{
  s32 temp_t7;
  ;
  if (((++arg0->unk3C) % 3) == 0)
  {
    struct func_801C2D78_Struct_Inner *temp_v0 = arg1->unk8->unk30;
    temp_v0->unk4D = (u8) (temp_v0->unk4D + 1);
  }
 ;
}
