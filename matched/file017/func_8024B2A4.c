#include "context.h"
extern void func_800058DC(s32, void (*)());

typedef struct func_8024B2A4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024B2A4_Struct;

extern void func_8024CCC4(void);
extern void func_80020718(s32);
extern void func_801C4058(void *, u32, f32, s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern void func_8024B368(void);

void func_8024B2A4(void *arg0)
{
  func_8024B2A4_Struct *s = (func_8024B2A4_Struct *) arg0;
  u16 temp_s1 = s->unk3C;
  s->unk3C = temp_s1 + 1;
  func_8024CCC4();
  if ((!s->unk3C) && (!s->unk3C))
  {
  }
  if (((s32) temp_s1) >= 0x3C)
  {
    if (temp_s1 != 0x3C)
    {
    }
    else
    {
      func_80020718(0x184);
    }
    func_801C4058(arg0, 0x3F19999A, 0.0f, 0x16);
    if ((((s32) temp_s1) % 10) == 0)
    {
      func_80380F94(-128.0f, 0.0f, 150.0f, 0.0f, 0.0f, 0.0f, 0xA);
    }
  }
  if (((s32) temp_s1) >= 0x5A)
  {
    s->unk3C = 0;
    func_800058DC((s32) arg0, func_8024B368);
  }
}
