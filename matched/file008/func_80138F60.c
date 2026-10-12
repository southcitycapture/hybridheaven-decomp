#include "context.h"

struct func_80138F60_Inner { u8 pad[0x10]; u32 unk10; };
struct func_80138F60_Struct { u8 pad[0x38]; struct func_80138F60_Inner *unk38; };

extern void func_80005700();
extern void func_800058DC();
extern s32 func_8012FF4C();
extern s16 D_801BBE1A;
extern u8 D_801BBF96;
extern void func_80139034();

void func_80138F60(struct func_80138F60_Struct *arg0, void *arg1)
{
  u32 temp_v0;
  char new_var;
  if ((((arg0->unk38->unk10 >> 16) & 0xFFFF) & 1) && ((func_8012FF4C(arg0) == 9) || (func_8012FF4C(arg0) == 0x18)))
  {
    func_80005700(arg0);
    return;
  }
  temp_v0 = arg0->unk38->unk10;
  new_var = temp_v0 >> 16;
  if ((new_var & 2) && ((temp_v0 & 0xFF) != D_801BBF96))
  {
    func_80005700(arg0);
    return;
  }
  if ((temp_v0 >> 24) >= 4)
  {
    func_80005700(arg0);
 if (0) { }
    return;
  }
  D_801BBE1A = 0;
  func_800058DC(arg0, func_80139034);
}
