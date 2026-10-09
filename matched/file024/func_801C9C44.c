#include "common.h"

typedef struct func_801C9C44_Struct {
    void (*fn)(struct func_801C9C44_Struct *, s32);
    u8 pad[0x28];
} func_801C9C44_Struct;

extern void func_800058DC(s32, void (*)(void));
extern void func_801C9D0C(void);
extern func_801C9C44_Struct D_801CD238;
extern func_801C9C44_Struct *D_801CFDD4;
extern f32 D_801CF614;
extern f32 D_801CFDD0;

void func_801C9C44(s32 arg0, s32 arg1)
{
  s32 var_s0;
  s32 *var_s2;
  var_s2 = (s32 *) (&D_801CFDD0);
 D_801CFDD4 = &D_801CD238; var_s0 = 0; do { D_801CFDD4->fn(D_801CFDD4, *var_s2);
    var_s0 += 1;
    D_801CFDD4 = (func_801C9C44_Struct *) (((u8 *) D_801CFDD4) + 0x2C);
  }
  while (var_s0 != 0x64);
  D_801CFDD0 += 1.0f;
  if (D_801CF614 <= D_801CFDD0)
  {
    func_800058DC(arg0, func_801C9D0C);
  }
}
