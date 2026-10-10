#include "context.h"

extern void (*D_803897C0)(void *);

typedef struct func_80381230_StructA {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x92 - 0x34];
    s16 unk92;
} func_80381230_StructA;

typedef struct func_80381230_StructB {
    u8 pad0[0x4B];
    u8 unk4B;
} func_80381230_StructB;

typedef struct func_80381230_StructC {
    u8 pad0[0x30];
    func_80381230_StructB *unk30;
} func_80381230_StructC;

void func_80381230(func_80381230_StructA *arg0, func_80381230_StructC **arg1)
{
  s32 var_v0;
  func_80381230_StructB *temp_v1;
  temp_v1 = (*arg1)->unk30;
  var_v0 = temp_v1->unk4B;
  var_v0 += arg0->unk92;
  if (var_v0 < 0)
  {
    var_v0 = 0;
  }
  if (var_v0 >= 0x100)
  {
    var_v0 = 0xFF;
  }
  temp_v1->unk4B = var_v0;
  if (D_803897C0 != 0)
  {
    if (((!arg1) && (!arg1)) && (!arg1))
    {
    }
    D_803897C0(arg0);
  }
  if ((arg0->unk30 & 0x20) || (var_v0 == 0))
  {
    func_80005700();
  }
}
