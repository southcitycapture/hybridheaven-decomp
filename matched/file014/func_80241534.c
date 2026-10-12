#include "context.h"

struct func_80241534_Struct1 {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_80241534_Struct3 {
    u8 pad[0x4C];
    u8 unk4C;
};

struct func_80241534_Struct2 {
    u8 pad[0x30];
    struct func_80241534_Struct3 *unk30;
};

void func_80241534(struct func_80241534_Struct1 *arg0, struct func_80241534_Struct2 **arg1)
{
  u16 temp_v1;
  s32 temp_a;
  struct func_80241534_Struct3 *temp_v0;
  temp_a = arg0->unk3C;
  temp_v1 = temp_a;
  arg0->unk3C = (u16) (temp_v1 + 1);
  temp_a = temp_v1;
  if (!(temp_a % 2))
  {
    temp_v0 = (*arg1)->unk30;
 temp_v0->unk4C = (u8) (temp_v0->unk4C - 1); }
}
