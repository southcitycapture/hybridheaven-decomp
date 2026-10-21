#include "common.h"

typedef struct func_80241708_Struct {
    u8 pad0[0x40];
    s32 unk40;
    u8 pad1[0x1088 - 0x44];
    s32 unk1088;
    u8 pad2[0x10A0 - 0x108C];
    s32 unk10A0;
    u8 pad3[0x1104 - 0x10A4];
    s32 unk1104;
} func_80241708_Struct;

extern void func_8001F74C();
extern void func_80203830(s32 arg0, u8 *arg1);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_80241764();
extern func_80241708_Struct D_801BBBF0;
extern u8 D_8024BCD8[];

void func_80241708(u32 arg0, u32 arg1)
{
  if (1)
  {
    func_8001F74C();
  }
  func_80203830(arg0, D_8024BCD8);
  D_801BBBF0.unk1088 = arg0;
  D_801BBBF0.unk1104 = arg0;
  D_801BBBF0.unk10A0 = D_801BBBF0.unk40;
  func_800058DC(arg0, func_80241764);
}
