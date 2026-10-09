#include "context.h"

extern f32 D_801E96AC;
extern f32 D_801E96B0;
extern f32 D_801E96B4;
extern f32 D_801E96B8;
extern f32 D_801E96BC;
extern void func_801CF450(s32 arg0);
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 D_801E8DF8;

s32 func_801E6270(s32 arg0, s32 arg1)
{
  unsigned char new_var;
  f32 scale;
  scale = D_801E96AC;
  new_var = 0x24;
  (*((struct func_801E58F0_StructA **) (func_801DAAF0 + new_var)))->unk8->unk8->unk24->unk2C->unk4 = (D_801E96B0 * scale) + D_801E96B4;
  *((f32 *) (&(*((struct func_801E58F0_StructA **) (func_801DAAF0 + new_var)))->unk8->unk8->unk24->unk2C->unkC)) = (D_801E96B8 * scale) + D_801E96BC;
  func_801CF450(1);
  func_801CC470(1, 0x04100016, 0, 0x100, 1.0f);
 if (0) { }
 D_801E8DF8 = 0; return 0x1B;
}
