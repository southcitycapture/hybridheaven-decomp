#include "context.h"

typedef struct func_8024F3D8_Glob {
    u8 pad[0x1E8];
    s32 unk1E8;
    s32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_8024F3D8_Glob;

typedef struct func_8024F3D8_Sub {
    u8 pad[0xC];
    f32 unkC;
} func_8024F3D8_Sub;

typedef struct func_8024F3D8_Obj {
    u8 pad[0x2C];
    func_8024F3D8_Sub *unk2C;
} func_8024F3D8_Obj;

typedef struct func_8024F3D8_Arg0 {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024F3D8_Arg0;

extern void func_801C3DC8(void *, s32, s32, f32, f32, f32, f32, f32, f32);
extern f32 D_8025A0A8;
extern f64 D_8025A0B0;
extern void func_8024F4D4();

void func_8024F3D8(func_8024F3D8_Arg0 *arg0, func_8024F3D8_Obj **arg1)
{
  s32 new_var;
  func_8024F3D8_Glob *g;
  func_8024F3D8_Sub *temp_v0;
  extern s32 func_80010550();
  new_var = arg0->unk5C;
  func_80010550(arg1, new_var);
  g = (func_8024F3D8_Glob *) (&D_801BBBF0);
  g->unk1F0 = (f32) (((f64) (*arg1)->unk2C->unkC) - 3.5);
  g->unk1FC = (*arg1)->unk2C->unkC;
  func_801C3DC8(arg0, g->unk1E8, g->unk1EC, g->unk1F0, g->unk1F4, g->unk1F8, g->unk1FC, D_8025A0A8, 35.0f);
  temp_v0 = (*arg1)->unk2C;
  if (D_8025A0B0 <= ((f64) temp_v0->unkC))
  {
    temp_v0->unkC = 454.0f;
    func_800058DC(arg0, &func_8024F4D4);
  }
}
