#include "common.h"
typedef struct func_801E2E4C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[4];
    f32 unk14;
    f32 unk18;
} func_801E2E4C_Struct;
extern func_801E2E4C_Struct D_801E5200;
extern void D_8038C158(void);
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_801C7A74(void *arg0);


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
  f32 a = 46.4f;
  f32 b = 16.7f;
  f32 c = -59.6f;
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
