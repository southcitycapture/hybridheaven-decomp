#include "context.h"

struct func_8035BCCC_Struct {
    u8 pad0[0x3E];
    u16 unk3E;
    u8 pad1[0xC];
    u16 unk4C;
};

extern void func_8035B9AC(void);

void func_8035BCCC(struct func_8035BCCC_Struct *arg0, s32 arg1)
{
  s32 temp_v0;
  if (((u8 *) D_8038CC14)[0x31] == 1)
  {
    func_80020718(0x108);
    ((u8 *) D_8038CC14)[0x31] = 2;
    arg0->unk3E = 0;
    func_800058DC(arg0, (void *) func_8035B9AC);
    return;
  }
  temp_v0 = arg0->unk3E;
  arg0->unk3E = (u16) (temp_v0 + 1);
  if ((temp_v0 >= 0x29) != (((temp_v0 >= 0x29) != 0) * 0))
  {
    arg0->unk4C = (u16) (arg0->unk4C + 1);
    func_800058DC(arg0, (void *) func_8035B234);
  }
}
