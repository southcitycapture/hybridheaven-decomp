#include "context.h"

extern void func_8038BED4(void);
extern f32 D_801F4654;
extern f32 D_801F4658;
extern f32 D_801F465C;
extern f32 D_801F4660;
extern f32 D_801F4664;
extern f32 D_801F4668;
extern f32 D_801F466C;

s32 func_801E2CE4(s32 arg0, s32 arg1)
{
  f32 c18;
  f32 c4654;
  f32 half;
 do { half = 18.5f; } while (0);
  c18 = half;
  half = 0.5f;
  c4654 = D_801F4654;
 if (func_8038BEF8(0.0f, half, -10.7f, 33.8f, D_801F4658, D_801F465C, D_801F4660, D_801F4664, D_801F4668, c18, c4654, D_801F466C, c18, c4654) != 0) { func_8038BED4();
    return 0x2E;
  }
  return 0x2D;
}
