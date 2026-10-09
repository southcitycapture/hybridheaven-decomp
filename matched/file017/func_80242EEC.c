#include "context.h"

struct func_80242EEC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
extern void func_80243CC0(void *, s32);
extern void func_80242F50(void);

void func_80242EEC(struct func_80242EEC_Struct *arg0, s32 arg1)
{
  s32 temp_v0;
  s32 temp_v1;
  struct func_80242EEC_Struct *temp_a2;
  temp_a2 = arg0;
  temp_v0 = arg0->unk3C;
  arg0->unk3C = temp_v0 + 1;
  temp_v1 = (temp_v0 < 0x1E) ^ 1;
  if (temp_v1 != (temp_v1 * 0))
  {
    func_80020718(0x197);
    func_800058DC(temp_a2, func_80242F50);
  }
  func_80243CC0(temp_a2, arg1);
}
