#include "context.h"

typedef struct func_8024443C_StructArg {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_8024443C_StructArg;

typedef struct func_8024443C_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_8024443C_StructInner;

typedef struct func_8024443C_StructNode {
    u8 pad[0x2C];
    func_8024443C_StructInner *unk2C;
} func_8024443C_StructNode;

extern struct func_80243290_StructTriple D_8025240C;
extern u8 D_80252618[];

void func_8024443C(func_8024443C_StructArg *arg0, func_8024443C_StructNode ** volatile arg1)
{
  s32 temp;
  u16 count;
  s32 ready;
  func_8024443C_StructInner *inner;
  temp = arg0->unk5C;
  if ((arg0->unk90++) >= 30)
  {
    inner = (*arg1)->unk2C;
    inner->unk12 += 0x3A;
    if (func_80010550((s32) arg1, temp ^ 0, temp))
    {
      func_8013A1B4(arg1, D_8025240C, (0, 0xFFFFFF));
      func_800179B0(D_80252618);
      func_800058DC(arg0, func_802444F8);
    }
  }
}
