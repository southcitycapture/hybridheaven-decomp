#include "context.h"

struct func_801FCD4C_Struct {
    u8 pad0[0x38];
    s32 unk38;
    u8 pad1[0x91 - 0x3C];
    u8 unk91;
    u8 pad2[0xB0 - 0x92];
    u8 unkB0;
};

extern s32 func_80005C70(void);
extern void func_80005700();
extern void func_800058DC();
extern void func_8001F74C(void *);
extern void func_801FCE0C();
extern u8 D_801BBC0D;
extern u8 D_80217434[];
extern u8 D_80217150[];

void func_801FCD4C(struct func_801FCD4C_Struct *arg0, s32 arg1)
{
  s32 temp_v0;
  u8 *temp_v1;
  void (*temp_v1_2)(void *, s32);
  if ((arg0->unk38 == 0) && (func_80005C70() < 0x19))
  {
    func_80005700(arg0);
    return;
  }
  func_8001F74C(arg0);
  temp_v0 = arg0->unk91 * 4;
  ;
  if ((*((u8 **) (D_80217434 + temp_v0))) != 0)
  {
    arg0->unkB0 = *((*((u8 **) (D_80217434 + temp_v0))) + D_801BBC0D);
  }
  temp_v1_2 = *((void (**)(void *, s32)) (D_80217150 + temp_v0));
  if (temp_v1_2 != 0)
  {
    temp_v1_2(arg0, arg1);
  }
  func_800058DC(arg0, func_801FCE0C);
}
