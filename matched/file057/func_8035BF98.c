#include "common.h"
extern s32 D_8038CC14;
void func_800058DC(void *arg0, void *arg1);
void func_80020718(s32 arg0);
struct func_8035B234_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};
void func_8035B234(struct func_8035B234_Struct *arg0, s32 arg1);
struct func_8035BF98_Struct0 {
    u8 pad[0x3E];
    u16 unk3E;
};


struct func_8035BF98_Struct1 {
    u8 pad[0x31];
    u8 unk31;
};
extern s32 func_8012C6B4();
extern void func_8035BD6C();

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
    if ((arg0->unk3E++ < 0x1F) ^ 1)
    {
      func_800058DC(arg0, func_8035B234);
    }
  }
}
