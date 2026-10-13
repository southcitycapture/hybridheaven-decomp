#include "context.h"


extern f32 D_8024AB20;
extern void func_80133980(s32);
extern s32 func_801268F4(s32);
extern void func_801FBB30();
extern void func_80245BF8();

void func_80245B2C(struct func_80245B2C_Obj *arg0, s32 arg1)
{
  struct func_80245B2C_Child *sp24;
  u16 temp_t7;
  s32 temp_v0;
  sp24 = arg0->unk5C;
  temp_v0 = arg0->unkA2;
  temp_t7 = temp_v0 - 1;
 if (0 != 0) { }
  arg0->unkA2 = temp_t7;
  if (temp_v0 == 0)
  {
    arg0->unkA2 = temp_t7;
    arg0->unkA2 = arg0->unkA2 + 1;
    func_80133980(0x4D);
    arg0->unk24->unk2C->unk4 = 204.0f;
    arg0->unk24->unk2C->unk8 = 50.0f;
    arg0->unk24->unk2C->unkC = D_8024AB20;
    arg0->unk24->unk2C->unk12 = 0xDA3;
    arg0->unk3E = 0xA;
    func_801268F4(0);
    sp24->unk78 = 1;
    func_801FBB30();
    func_800058DC(arg0, func_80245BF8);
  }
}
