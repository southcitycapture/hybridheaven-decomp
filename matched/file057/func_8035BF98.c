#include "context.h"

struct func_8035BF98_Struct0 {
    u8 pad[0x3E];
    u16 unk3E;
};

struct func_8035BF98_Struct1 {
    u8 pad[0x31];
    u8 unk31;
};

extern void func_8012C6B4(s32);
extern void func_8035BD6C(void);

void func_8035BF98(struct func_8035BF98_Struct0 *arg0, s32 arg1)
{
  func_8012C6B4(2);
  func_8012C6B4(0x14);
  if (((struct func_8035BF98_Struct1 *) D_8038CC14)->unk31 == 1)
  {
    func_80020718(0x109);
    arg0->unk3E = 0;
    ((struct func_8035BF98_Struct1 *) D_8038CC14)->unk31 = 2;
    func_800058DC(arg0, func_8035BD6C);
  }
  else
  {
    s32 temp_v1;
    s32 temp_v0;
    temp_v0 = arg0->unk3E;
    temp_v1 = (temp_v0 < 0x1F) ^ 1;
    arg0->unk3E = temp_v0 + 1;
    if (!temp_v1)
    {
    }
    if (temp_v1)
    {
      func_800058DC(arg0, func_8035B234);
    }
  }
}
