#include "context.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E3E10;
extern f32 D_801E3E14;
extern f32 D_801E3E18;
extern f32 D_801E3E1C;

s32 func_801E1C78(s32 arg0, s32 arg1)
{
  f32 temp0 = D_801E3E10;
  f32 temp1 = D_801E3E14;
  float new_var;
  new_var = 33.0f;
 do { if (D_8038C17C(0.0f, 5.0f, 13.9f, temp0, D_801E3E18, 9.5f, temp0, D_801E3E1C, 0.0f, temp1, 100.0f, 0.0f, temp1, 100.0f, new_var, 33.0f) != 0) { return 2; } } while (0);
  return 1;
}
