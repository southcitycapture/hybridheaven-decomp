#include "context.h"

typedef struct func_8024DD24_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_8024DD24_Struct;

extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern void func_8024DDA0(void);

void func_8024DD24(func_8024DD24_Struct *arg0, s32 arg1)
{
  s32 temp_v0;
  s32 cond;
  func_8024DD24_Struct *new_var;
  new_var = arg0;
  temp_v0 = new_var->unk90;
  cond = (0, temp_v0 >= 0x17);
  arg0->unk90 = temp_v0 - -1;
  temp_v0 = 0xFF;
  if (cond != 0)
  {
    D_80089354 = 0;
    func_8001E978(arg0, temp_v0, temp_v0, temp_v0, 0x14, 0, 1, 0);
    arg0->unk90 = 0;
    func_800058DC(new_var, func_8024DDA0);
  }
}
