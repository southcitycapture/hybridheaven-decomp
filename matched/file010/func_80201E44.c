#include "context.h"
typedef struct func_802026C4_StructD {
    u8 pad0[0xF32];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
} func_802026C4_StructD;
extern func_802026C4_StructD D_801BBBF0;

typedef struct func_80201E44_Struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x90 - 0x4C];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u8 pad9C[0xA8 - 0x9C];
    u16 unkA8;
} func_80201E44_Struct;

extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern s32 func_801FD5BC(f32, f32, f32);
extern f64 D_802195F8;
extern f64 D_80219600;

void func_80201E44(func_80201E44_Struct *arg0, s32 arg1)
{
  f32 a;
  f32 b;
  f32 c;
  if (func_801FD5BC(arg0->unk90, arg0->unk94, arg0->unk98) != 0)
  {
    arg0->unk40 = 0.0f;
    arg0->unk44 = 0.0f;
    arg0->unk48 = 0.0f;
    return;
  }
  if (arg0->unkA8 & 8)
  {
    ;
    arg0->unk94 = arg0->unk94 + arg0->unk44;
    arg0->unk44 = ((f64) arg0->unk44) - D_802195F8;
    if ((func_8010843C(arg0->unk90, arg0->unk94 - (2.0 * arg0->unk44), arg0->unk98, arg0->unk90, arg0->unk94 - D_80219600, arg0->unk98) != 0) && ((*(((u8 *) (&D_801BBBF0)) + 0x35A)) != 0x16))
    {
      arg0->unk94 = *((f32 *) (((u8 *) (&D_801BBBF0)) + 0x384));
      arg0->unk44 = 0.0f;
    }
  }
  if (func_801FD5BC(arg0->unk90, arg0->unk94, arg0->unk98) != 0)
  {
    arg0->unkA8 = arg0->unkA8 & 0xFFF7;
    arg0->unk44 = 0.0f;
  }
}
