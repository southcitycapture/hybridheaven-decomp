#include "context.h"
struct func_801F9A8C_Struct { u8 pad0[4]; f32 u4; f32 u8; f32 uC; };
struct func_801F9A8C_Arg { u8 pad0[0x24]; func_801F4170_Mid *u24; u8 pad1[0x1C]; f32 u44; u8 pad2[0x14]; s32 u5C; };
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80218B74[];
extern u8 func_801F9BC8[];
void func_801F9A8C(struct func_801F9A8C_Arg *arg0, s32 arg1)
{
  s32 a2;
  f32 v[3];
  f32 *t;
  a2 = arg0->u5C;
  func_80010550(arg1, a2);
  if (((!t) && (!t)) && (!t))
  {
  }
  func_8013A334(v, arg1, (void *) a2, 1);
  if (0)
  {
  }
  if (func_8011AAF4(D_80218B74, 0x952, arg0, 0, 2, 3.0f, (t = (f32 *) D_801BBCD0->unk2C)[1], t[2] + 20.0f, t[3], 4294967296.0f, v[0], arg0->u24->unk2C->unk8 + 5.0f, v[2], 3.0f, 35.0f, -1, -1) == 0)
  {
    if (func_801F53C4((void *) arg0) == 0)
    {
      func_801F536C();
    }
    arg0->u44 = 0.0f;
    func_800058DC(arg0, (s32) func_801F9BC8);
  }
}
