#include "context.h"
struct func_8013BF54_Struct {
    u8 pad[0x2C];
    u32 unk2C;
    u8 pad2[0xF];
    u8 unk3F;
    u8 pad3[0xF];
    u8 unk4F;
    u8 pad4[4];
    s32 unk54;
};
extern u8 D_801BBBF0[];
extern u8 func_8021D8D0[];
extern void func_801C4A5C(void *, s32);
extern void func_800058DC(void *, void *);

void func_8013BF54(struct func_8013BF54_Struct *arg0, volatile s32 arg1)
{
  u8 *g = D_801BBBF0;
  arg0->unk3F = 0;
  arg0->unk4F = 1;
  arg0->unk54 = (*((s32 *) (g + 0xEFC)) = 0xE7F);
  arg0->unk2C |= 0x3E0;
  func_801C4A5C(arg0, 0);
  func_800058DC(arg0, func_8021D8D0);
}
