#include "context.h"

typedef struct func_8024315C_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_8024315C_Struct;

extern struct func_80243290_StructTriple D_80252110;
extern u8 D_80252378[];

void func_8024315C(func_8024315C_Struct *arg0, volatile s32 arg1)
{
  s32 temp_a2;
  u16 temp_v0;
  s32 ready;
  temp_a2 = arg0->unk5C;
  ready = (arg0->unk90++) >= 0x1E;
  if (ready && func_80010550(arg1, temp_a2 & 0xFFFFFFFF, temp_a2))
  {
    if (1)
    {
    }
    func_8013A1B4(arg1, D_80252110, 0xFFFFFF);
    func_800179B0(D_80252378);
    func_800058DC(arg0, func_80243200);
  }
}
