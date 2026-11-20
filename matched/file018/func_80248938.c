#include "common.h"
extern void func_800058DC(void *, void *);
void func_80248998(void *arg0, struct func_80248998_StructOuter **arg1);


extern void *D_8025C6E8;
extern u8 *D_8025C6F0;
extern void func_80126EAC();
extern void func_8001F74C();
extern s32 func_80126B14(void *, void *, u16, s32);

void func_80248938(void *arg0, s32 arg1)
{
  D_8025C6E8 = arg0;
  func_8001F74C(arg0);
  if (func_80126B14(arg0, func_80126EAC, *((u16 *) (D_8025C6F0 + 0x72)), 0x3D0) != 0)
  {
    func_800058DC(arg0, func_80248998);
  }
}
