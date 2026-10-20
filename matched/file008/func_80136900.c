#include "context.h"

typedef struct func_80136900_StructInner {
    u8 pad0[0x10];
    u32 unk10;
} func_80136900_StructInner;

typedef struct func_80136900_Struct {
    u8 pad0[0x38];
    func_80136900_StructInner *unk38;
} func_80136900_Struct;

extern s16 D_801BBD84;

void func_80136900(func_80136900_Struct *arg0, s32 arg1)
{
  f32 var_ft0;
  u32 temp_t1;
  D_801BBD84 = 2;
  ;
  var_ft0 = (f32) temp_t1;
  if (func_8012A630(arg0, (f32) (((((u32) arg0->unk38->unk10) >> 0x10) & 0xFF) + 0x1E)) == 0)
  {
    func_800058DC(arg0, &func_801364F4);
  }
}
