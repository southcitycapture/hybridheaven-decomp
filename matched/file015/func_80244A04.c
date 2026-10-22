#include "context.h"

extern s32 func_801270C0(s32);
extern unsigned short func_801268CC(s32);
extern void func_80020744(s32);
extern void func_80126968();
extern void func_80244AC0();
extern f32 D_80258778;

void func_80244A04(void *arg0, void *arg1)
{
  extern void func_800058DC();
  if (func_801270C0(D_8025A290) != 0)
  {
    *((s16 *) (D_801BBBF0 + 0x3A4)) = 0;
    func_801268CC(0);
    func_80020744(7);
    *((f32 *) ((*((u8 **) ((*((u8 **) (D_801BBBF0 + 0xE0))) + 0x2C))) + 0x4)) = -95.0f;
    *((f32 *) ((*((u8 **) ((*((u8 **) (D_801BBBF0 + 0xE0))) + 0x2C))) + 0x8)) = -470.0f;
    *((f32 *) ((*((u8 **) ((*((u8 **) (D_801BBBF0 + 0xE0))) + 0x2C))) + 0xC)) = D_80258778;
    *((s16 *) ((*((u8 **) ((*((u8 **) (D_801BBBF0 + ((0, 0xE0))))) + 0x2C))) + 0x12)) = 0x1400;
    *((s16 *) (((u8 *) arg0) + 0x3C)) = 0;
    func_80126968();
    func_800058DC(arg0, &func_80244AC0);
  }
}
