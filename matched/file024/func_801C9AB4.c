#include "context.h"
extern f32 D_801CFDD0;
void func_801C9C44(s32 arg0, s32 arg1);

extern s32 func_80006214();
extern void func_80145348(void *, s32, s32);
extern void func_80146208(void *, u8 *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);

struct func_801C9AB4_StructChild {
    u8 pad[0xB];
    u8 unkB;
};
struct func_801C9AB4_Struct {
    u8 pad[0x28];
    s16 unk28;
    u8 pad2[6];
    struct func_801C9AB4_StructChild *unk30;
};

void func_801C9AB4(void *arg0, struct func_801C9AB4_Struct **arg1)
{
  u8 sp53[8];
  u8 i;
  u8 count;
  func_80006214(arg0);
  i = 0;
  do
  {
    func_80146208(arg0, &sp53[3], 0x66, (s16) ((i << 6) + 0x10), 0xC4, 0x40, 0x20, 0, 0, 0, 0x228, i + 0x15);
    if (1)
    {
      func_80145348(arg0, 1, 0);
    }
    i++;
  }
  while (i < 4);
  func_80146208(arg0, &sp53[3], 0x66, (s16) ((i << 6) + 0x10), 0xC4, 0x20, 0x20, 0, 0, 0, 0x228, i + 0x15);
  func_80145348(arg0, 1, 0);
  count = func_80006214(arg0);
  for (i = 0; i < count; i++)
  {
    arg1[i]->unk28 = 0x100;
    arg1[i]->unk30->unkB = 0;
  }

  D_801CFDD0 = 0.0f;
  func_800058DC(arg0, func_801C9C44);
}
