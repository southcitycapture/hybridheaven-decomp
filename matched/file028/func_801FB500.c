#include "context.h"

extern f32 D_80208CE0;
extern f32 D_80208CE4;
extern f32 D_80208CE8;
extern f32 D_80208CEC;

s32 func_801FB500(s32 arg0, s32 arg1)
{
  f32 a;
  f32 b;
  f32 c;
  a = D_80208CE0;
 goto dummy_label_630526; dummy_label_630526: ;
  b = 18.0f;
  c = -37.0f;
  if (func_8038BEF8(0.0f, 1.0f, -0.8f, 19.4f, D_80208CE4, -8.0f, D_80208CE8, D_80208CEC, a, b, c, a, b, c) != 0)
  {
    func_8038BED4();
    return 0xD;
  }
  return 0xC;
}
