#include "context.h"
extern void func_800058DC(void *arg0, void *arg1);
extern void func_80020718(s32 arg0);
extern void func_801C4058(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_8024F0B0();
struct func_8024DDE4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
void func_8024DDE4(struct func_8024DDE4_Struct *arg0);

extern void func_80380F94(f32, f32, s32, f32, f32, f32, s32);

void func_8024DD20(struct func_8024DDE4_Struct *arg0)
{
  u16 temp_s1;
  temp_s1 = arg0->unk3C;
  arg0->unk3C = (u16) (temp_s1 + 1);
  func_8024F0B0();
  if (((s32) temp_s1) >= 0x3C)
  {
    if (temp_s1 == 0x3C)
    {
      if (!arg0)
      {
      }
      func_80020718(0x184);
    }
    func_801C4058(arg0, 0xBE4CCCCD, 0xBECCCCCD, 0);
    if ((temp_s1 % 10) == 0)
    {
      func_80380F94(-143.0f, 0.0f, 0xC3020000, 0.0f, 0.0f, 0.0f, 10);
    }
  }
  if (((s32) temp_s1) >= 0x5A)
  {
    arg0->unk3C = 0;
    func_800058DC(arg0, func_8024DDE4);
  }
}
