#include "context.h"

typedef struct func_80148074_Struct {
    u8 pad0[0x10];
    struct func_80148074_Struct *unk10;
} func_80148074_Struct;

extern void func_80145310(void *, s32, s32);
extern void func_801451C0(void *, s32);
extern func_80148074_Struct *D_801BED18;
extern func_80148074_Struct *D_801BED1C;

void func_80148074(u8 *arg0)
{
  s8 var_s0;
  func_80148074_Struct *var_s2;
  func_80148074_Struct *var_s1;
 var_s0 = 0; var_s1 = D_801BED18; var_s2 = D_801BED1C; do {
    if (var_s0 == arg0[0xA2])
    {
      func_80145310(var_s1, 6, 7);
      func_801451C0(var_s2, 1);
    }
    else
    {
      func_80145310(var_s1, 8, 9);
      func_801451C0(var_s2, 2);
    }
    var_s1 = var_s1->unk10;
    var_s0 += 1;
    var_s2 = var_s2->unk10;
  }
  while (var_s0 < 4);
}
