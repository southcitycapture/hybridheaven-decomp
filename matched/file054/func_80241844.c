#include "context.h"
extern s32 func_80151790(s32);
extern u8 D_802468E8[];
extern u8 D_80246D10[];
extern u8 D_80247640[];
extern f32 D_802481B4;
extern f32 D_802481B8;
extern f32 D_802481BC;
extern f32 D_802481C0;
extern f32 D_802481C4;
extern void func_80241974(void);

void func_80241844(struct func_802410C8_Struct *arg0, s32 arg1)
{
  int new_var2;
  f32 new_var;
  int new_var3;
  if (func_80151790(D_80248804) == 0)
  {
    func_8015115C(D_80248804, D_802468C4);
    arg0->unk90 = 1;
  }
  new_var2 = 0x376;
  if ((func_800178E8() != (new_var3 = 0)) && (arg0->unk90 != new_var3))
  {
    new_var = D_802481B4;
    if (1)
    {
      func_8011AAF4(D_80247640, new_var2, arg0, new_var3, 1, 0.0f, D_802481B8, D_802481BC, D_802481C0, 0.0f, new_var, D_802481C4, new_var, 0.0f, 35.0f, -1, -1);
      func_800179B0(D_80246D10);
    }
    func_8015122C(D_80248804, D_802468E8, 5);
    (*arg0).unk90 = new_var3;
    func_800058DC(arg0, func_80241974);
  }
}
