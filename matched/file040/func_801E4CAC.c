#include "context.h"
extern void func_801C7F74(void *, s32, f32, f32, f32, f32, f32, f32, f32, s32);
extern u8 D_801E8910[];
extern u8 D_801E8914[];
extern u8 D_801E8918[];
extern u8 D_801E891C[];

s32 func_801E4CAC(s32 arg0, s32 arg1)
{
  if (func_801C0B8C(0x022C6FEB) != 0)
  {
    func_8038D28C(0x246);
    func_801C7F74(D_801E8910, 0x3F800000, 15.0f, 27.0f, 33.0f, 169.0f, (char) 15.0f, 6.0f, 6.0f, 0);
    func_801C7F74(D_801E8914, 0xC1500000, 24.0f, 29.0f, 33.0f, 169.0f, 15.0f, 6.0f, 6.0f, 0);
    func_801C7F74(D_801E8918, 0xC2200000, 24.0f, 24.0f, 33.0f, 169.0f, 15.0f, 6.0f, 6.0f, 0);
    func_801C7F74(D_801E891C, 0xC2580000, 24.0f, 20.0f, 33.0f, 169.0f, 15.0f, 6.0f, 6.0f, 0);
    D_801E82F4 = 0;
    return 0xD;
  }
  return 0xC;
}
