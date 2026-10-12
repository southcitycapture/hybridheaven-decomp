#include "context.h"
extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
typedef struct func_802525FC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802525FC_Struct;
extern void func_802538A4();
extern void func_801C4058(void *, s32, s32, s32);
void func_802525FC(func_802525FC_Struct *arg0);

extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);

void func_80252538(func_802525FC_Struct *arg0)
{
  u16 temp_s1;
  temp_s1 = arg0->unk3C;
  arg0->unk3C = temp_s1 + 1;
  func_802538A4();
  if (((s32) temp_s1) >= 0x3C)
  {
    if (temp_s1 == 0x3C)
    {
      func_80020718(0x184);
    }
    func_801C4058(arg0, 0xBCA3D70A, 0xBE19999A, 0);
    if ((((s32) temp_s1) % 10) == 0)
    {
      func_80380F94(150.0f, 0.0f, 125.0f, 0.0f, 0.0f, 0.0f, 10);
      if (!arg0)
      {
      }
    }
  }
  if (((s32) temp_s1) >= 0x5A)
  {
    arg0->unk3C = 0;
    func_800058DC(arg0, func_802525FC);
  }
}
