#include "context.h"
void func_802467FC(void *arg0, s32 arg1);
extern void func_80020718(s32);
extern s32 func_80010550(s32, s32);

struct func_80246760_Obj {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    u16 unk90;
};
struct func_80246760_Vec {
    s32 x;
    s32 y;
    s32 z;
};
extern struct func_80246760_Vec D_80252958;

void func_80246760(struct func_80246760_Obj *arg0, s32 arg1)
{
  u16 temp_v0;
  unsigned int new_var;
  s32 temp;
  s32 flag;
  temp = arg0->unk5C;
  if (func_80010550(arg1, temp) != 0)
  {
    temp_v0 = arg0->unk90;
    new_var = temp_v0;
    flag = ((s32) new_var) >= 2;
    arg0->unk90 = (u16) (new_var + 1);
    temp_v0 = 0x667;
    if (flag == 0)
    {
      func_8013A1B4(arg1, D_80252958, 0xFFFFFF);
      func_80020718(temp_v0);
      func_800058DC(arg0, &func_802467FC);
    }
  }
}
