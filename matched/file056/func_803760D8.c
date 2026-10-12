#include "context.h"

struct func_803760D8_Sub {
    u8 pad[0x18];
    s32 unk18;
};

struct func_803760D8_Struct {
    u8 pad[0x38];
    struct func_803760D8_Sub *unk38;
};

extern s32 func_80005700(s32);
extern void func_800058DC(void *, void *);
extern void func_8001F74C(void *);
extern s32 func_80126CC0(void *, void *);
extern s32 func_80133A24(s32);
extern void func_80127014();
extern void func_80376160();

void func_803760D8(struct func_803760D8_Struct *arg0, s32 arg1)
{
  s32 temp_v0;
  temp_v0 = arg0->unk38->unk18 & 0xFFFF;
  if ((temp_v0 != 0) && (func_80133A24(temp_v0 ^ 0) != (0 & 0xFFFFFFFFu)))
  {
    func_80005700(arg0);
    return;
  }
  func_8001F74C(arg0);
  if (func_80126CC0(arg0, func_80127014) != 0)
  {
    func_800058DC(arg0, func_80376160);
  }
}
