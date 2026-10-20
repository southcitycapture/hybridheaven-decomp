#include "context.h"
extern f32 D_801EB2BC;
extern f32 D_801EB2C0;
extern f32 D_801EB2C4;
extern f32 D_801EB2C8;
extern f32 D_801EB2CC;
extern f32 D_801EB2D0;

s32 func_801E1CBC(s32 arg0, s32 arg1)
{
  f32 a = D_801EB2BC;
  f32 b = D_801EB2C0;
  f32 c = D_801EB2C4;
 do { *((f32 *) ((*((s32 *) ((*((s32 *) ((*((s32 *) ((*((s32 *) (func_801DAAF0 + 0x24))) + 8))) + 0x24))) + 0x2C))) + 0xC)) = 0.0f; } while (0);
  if (D_8038C17C(0.0f, 4.0f, 0.0f, -1.9f, a, 0.0f, D_801EB2C8, a, 0.0f, D_801EB2CC, b, 0.0f, D_801EB2D0, b, c, c) != 0)
  {
    func_8038D28C(0x1FC);
    return 2;
  }
  return 1;
}
