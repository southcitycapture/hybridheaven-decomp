#include "context.h"
void *func_80251E44(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);

extern s32 func_80133A24(s32);
extern s32 func_8015105C(s32);
extern void func_80250914();
extern s32 D_8025A2FC;
extern f32 D_8025A160;
extern f32 D_8025A164;

void func_80250814(s32 arg0, s32 arg1)
{
  s8 *base;
  int new_var;
  if (func_80133A24(0x7B) != 0)
  {
    D_8025A2FC = func_8015105C(0x149);
    func_80251E44(-160.0f, -123.0f, 460.0f, 0.0f, 0.0f, D_8025A160);
    func_80251E44(-162.0f, -123.0f, 440.0f, 0.0f, 0.0f, D_8025A164);
    base = (s8 *) (&D_801BBBF0);
    base[0xF20] = 0x20;
    new_var = 0xFF;
    base[0xF21] = 0x20;
    base[0xF22] = 0x20;
    base[0xF23] = new_var;
    base[0xF24] = new_var;
    base[0xF25] = new_var;
    base[0xF26] = -0x40;
    base[0xF27] = 0;
    base[0xF28] = 0;
    base[0xF29] = 0;
    base[0xF2A] = 0;
    base[0xF2B] = 0;
    base[0xF2C] = -0x40;
    base[0xF2D] = 0;
    base[0xF2E] = 0;
    func_800058DC((void *) arg0, (void *) func_80250914);
  }
}
