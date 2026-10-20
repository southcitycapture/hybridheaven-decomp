#include "context.h"
typedef struct func_802428F8_Struct {
    u8 pad0[0x90];
    u16 unk90;
} func_802428F8_Struct;
void func_802428F8(func_802428F8_Struct *arg0, void *arg1);

struct func_802428B8_Struct {
    u8 pad[0x90];
    u16 unk90;
};

void func_802428B8(struct func_802428B8_Struct *arg0, s32 arg1)
{
  u16 temp_v0;
  void (*new_var)(func_802428F8_Struct *arg0, void *arg1);
  new_var = &func_802428F8;
  temp_v0 = arg0->unk90;
  arg0->unk90 = (temp_v0 + -1) ^ 0;
 do { } while (0);
  if (temp_v0 == 0)
  {
    arg0->unk90 = 3;
    func_800058DC((s32) arg0, new_var);
  }
}
