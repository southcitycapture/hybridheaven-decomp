#include "context.h"

extern f32 D_801E5174;
extern f32 D_801E5178;
extern f32 D_801E517C;
extern f32 D_801E5180;
extern f32 D_801E5184;
extern f32 D_801E5188;
extern f32 D_801E518C;
extern f32 D_801E5190;

s32 func_801E2C20(s32 arg0, s32 arg1)
{
  f32 a;
  f32 b;
  f32 c;
  a = D_801E5174;
  b = D_801E5178;
  c = D_801E517C;
 if (0) { }
  if (D_8038C17C(0.0f, 3.0f, a, b, c, a, 16.5f, c, a, D_801E5180, -97.5f, a, b, -97.5f, D_801E5184, D_801E5188) != 0)
  {
    D_801E5200.unk4 = 50.0f;
    D_801E5200.unk8 = 50.0f;
    D_801E5200.unk0 = 40.0f;
    D_801E5200.unkC = 0.5f;
    D_801E5200.unk14 = D_801E518C;
    D_801E5200.unk18 = D_801E5190;
    func_801C7A74(&D_801E5200);
    D_8038C158();
    return 0x12;
  }
  return 0x11;
}
