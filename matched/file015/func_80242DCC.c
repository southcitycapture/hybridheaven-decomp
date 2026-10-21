#include "context.h"

typedef struct func_80242DCC_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad60[0x30];
    u16 unk90;
} func_80242DCC_Struct;

extern u8 D_802522C0[];
extern u8 D_80258510[];
extern f32 D_80258628;
extern f32 D_8025862C;
extern f32 D_80258630;
extern f32 D_80258634;

void func_80242DCC(func_80242DCC_Struct *arg0, unsigned int arg1)
{
  s32 a3;
  u16 v;
  func_80242DCC_Struct *p;
  v = arg0->unk90;
  a3 = arg0->unk5C;
  arg0->unk90 = 1 + v;
  p = arg0;
  if (((s32) v) < 0x5A)
  {
    func_80010550(arg1, a3, (s32) p);
    return;
  }
  if (v == 0x5A)
  {
    func_800179B0(D_802522C0);
    return;
  }
  if ((func_80010550(arg1, a3, (s32) p) != 0) && (func_800178E8() != 0))
  {
 if (1) { } if (1) { } if (1) { }
    ((func_80241F20_Struct *) (&D_801BBBF0))->f1E8 = -115.0f;
    ((func_80241F20_Struct *) (&D_801BBBF0))->f1EC = D_80258628;
    ((func_80241F20_Struct *) (&D_801BBBF0))->f1F0 = D_8025862C;
    ((func_80241F20_Struct *) (&D_801BBBF0))->f1F4 = D_80258630;
    ((func_80241F20_Struct *) (&D_801BBBF0))->f1F8 = 23.0f;
    ((func_80241F20_Struct *) (&D_801BBBF0))->f1FC = D_80258634;
    func_8011AAF4(D_80258510, 0x3F0, p, 0, 1, 0.0f, ((func_80241F20_Struct *) (&D_801BBBF0))->f1E8, ((func_80241F20_Struct *) (&D_801BBBF0))->f1EC, ((func_80241F20_Struct *) (&D_801BBBF0))->f1F0, 0.0f, ((func_80241F20_Struct *) (&D_801BBBF0))->f1F4, ((func_80241F20_Struct *) (&D_801BBBF0))->f1F8, ((func_80241F20_Struct *) (&D_801BBBF0))->f1FC, 0.0f, 35.0f, -1, -1);
    func_800058DC(p, (void *) func_80242F38);
  }
}
