#include "context.h"
struct func_80224B64_Inner {
    u8 pad0[0x9C];
    u8 unk9C;
};
struct func_80224B64_Outer {
    u8 pad0[0x5C];
    struct func_80224B64_Inner *unk5C;
};

extern s32 func_8022474C(s32, s16);

s32 func_80224AC4(s32 arg0, u8 arg1)
{
  s32 var_a0;
  s32 var_v0;
  s16 angle;
  struct func_80224B64_Inner *var_v1;
  if (arg0 != D_801BBBF0.unkDC)
  {
    var_v1 = ((struct func_80224B64_Outer *) D_801BBBF0.unkDC)->unk5C;
  }
  else
  {
    var_v1 = ((struct func_80224B64_Outer *) ((struct func_80224B64_Globals *) (&D_801BBBF0))->unkEC)->unk5C;
  }
  var_a0 = (arg0 == D_801BBBF0.unkDC) ? (0) : (0x1000);
  var_v0 = (arg1) ? (0x1000) : (0);
  angle = ((s16) ((var_v0 + (((struct func_80224B64_Globals *) (&D_801BBBF0))->unkB98 & 0xFFFFFFFFu)) + var_a0)) & 0x1FFF;
  if (var_v1->unk9C == 2)
  {
    return 0;
  }
  return func_8022474C(arg0, angle);
}
