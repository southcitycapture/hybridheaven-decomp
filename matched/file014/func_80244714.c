#include "context.h"

extern void func_8024476C();

struct func_80244714_StructChild {
    u8 pad[0x78];
    s16 unk78;
};

struct func_80244714_StructObj {
    u8 pad[0x2C];
    u32 unk2C;
    u8 pad30[0x2C];
    struct func_80244714_StructChild *unk5C;
};

void func_80244714(struct func_80244714_StructObj *arg0, s32 arg1)
{
  struct func_80244714_StructChild *temp_v1;
 do { temp_v1 = arg0->unk5C; } while (0);
  if (func_80242890() == 0)
  {
    arg0->unk2C |= 0x80;
    temp_v1->unk78 = 1;
    func_800058DC(arg0, func_8024476C);
  }
}
