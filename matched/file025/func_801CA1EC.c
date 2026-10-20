#include "context.h"

struct func_801CA1EC_Inner {
    u8 pad0[0x30];
    u8 *unk30;
};

extern void func_80005700(s32 arg0);
extern void func_8012CF8C(void *, u8 *, s32, s32);
extern s32 D_801DA850[];
extern s32 D_801E05D0[];

void func_801CA1EC(u8 *arg0, struct func_801CA1EC_Inner **arg1)
{
  s32 temp_v0;
  u8 idx;
  u32 slot;
  temp_v0 = arg0[0xB3];
  arg0[0xB3] = temp_v0 + 1;
  slot = temp_v0 % 40U;
  temp_v0 = 0x2DD;
  func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, temp_v0, D_801DA850[slot]);
  idx = arg0[0xB0];
  if (D_801E05D0[idx] == 0)
  {
    func_80005700(arg0);
  }
}
