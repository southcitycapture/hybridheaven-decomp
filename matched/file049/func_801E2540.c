#include "context.h"
void func_801E2044(void);
extern s32 D_801E703C;
struct func_801E4434_Struct {
    u8 pad[0xC];
    s32 unkC;
};
extern struct func_801E4434_Struct *func_801BF6B0(s32);

extern void func_8038BE98(f32);
extern f32 D_801E76BC;
extern f32 D_801E76C0;
extern f32 D_801E76C4;
extern f32 D_801E76C8;
extern f32 D_801E76CC;

s32 func_801E2540(s32 arg0, s32 arg1)
{
  int new_var;
  unsigned short new_var2;
  u8 **pp;
  func_801E2044();
  if (func_801BF6B0(4)->unkC >= 0x14)
  {
    func_8038BE98(D_801E76BC);
    func_8038BD50(D_801E76C0, 15.5f, 155.2f);
    new_var = 8;
    D_8038BD88(-2.0f, D_801E76C4, 167.0f);
    new_var2 = 0x24;
    pp = (u8 **) (func_801DAAF0 + new_var2);
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*pp) + new_var))) + new_var))) + 0x24))) + 0x2C))) + 4)) = D_801E76C8;
    *((f32 *) ((*((u8 **) (0x2C + (*((u8 **) ((*((u8 **) ((*((u8 **) ((*pp) + 8))) + new_var))) + 0x24)))))) + new_var)) = 0.0f;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*pp) + new_var))) + new_var))) + 0x24))) + 0x2C))) + 0xC)) = D_801E76CC;
    D_801E703C = 0;
    return 0xD;
  }
  return 0xC;
}
