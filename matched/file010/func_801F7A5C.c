#include "context.h"

struct func_801F7A5C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void *D_8021AFE4;
extern void func_801F5F5C();
extern void func_801F82D4();

void func_801F7A5C(struct func_801F7A5C_Struct *arg0, s32 arg1)
{
  s32 temp_v1;
  s32 temp_v0;
  temp_v0 = arg0->unk3C;
  temp_v1 = (temp_v0 >= 0x51) != ((temp_v0 >= 0x51) * 0);
  arg0->unk3C = temp_v0 + 1;
  if (temp_v1)
  {
 if (D_8021AFE4 != 0) { func_800058DC(D_8021AFE4, (s32) func_801F82D4);
    }
    func_800058DC(arg0, (s32) func_801F5F5C);
  }
}
