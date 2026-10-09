#include "context.h"
extern func_8024090C_Struct D_801BBBF0;
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);

extern void func_80133980(s32);
extern void func_8001F74C(s32);
extern void func_80203830(s32, void *);
extern void func_80241AB8(void);
extern u8 D_8024F414[];
extern void *D_801BBCCC;

void func_80241A34(s32 arg0, s32 arg1)
{
  s32 t8;
  s32 *v3;
  if ((((u8 *) D_801BBCCC)[0x63] != 0) && (func_80133A24(0x242) == 0))
  {
    func_80133980(0x242);
    func_8001F74C(arg0);
    func_80203830(arg0, D_8024F414);
    v3 = (s32 *) (&D_801BBBF0);
    t8 = (v3[0x40 / 4] & 0xFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu;
    v3[0x10A0 / 4] = t8;
    func_800058DC((void *) arg0, func_80241AB8);
  }
}
