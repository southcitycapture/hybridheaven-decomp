#include "context.h"

extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801CF4B0(s32);
extern f64 D_801E96D8;
extern f32 D_801E96E0;

typedef struct func_801E65C4_S4 { u8 pad[0x12]; s16 unk12; } func_801E65C4_S4;
typedef struct func_801E65C4_S3 { u8 pad[0x2C]; func_801E65C4_S4 *unk2C; } func_801E65C4_S3;
typedef struct func_801E65C4_S2 { u8 pad[0x24]; func_801E65C4_S3 *unk24; } func_801E65C4_S2;
typedef struct func_801E65C4_S1 { u8 pad[8]; func_801E65C4_S2 *unk8; } func_801E65C4_S1;
typedef struct func_801E65C4_S0 { u8 pad[8]; func_801E65C4_S1 *unk8; } func_801E65C4_S0;

s32 func_801E65C4(s32 arg0, s32 arg1)
{
  u64 t;
  if (D_801E8DF8 == 0)
  {
    if (func_801C0DE4(4, 1, 0x40000000) != 0)
    {
      func_801CF450(0);
      func_801C0EB0(4, 1);
      func_801CC470(1, 0x04100004, 0, 0x1100, 5.0f);
      func_801CF4B0(1);
      return 0x20;
    }
    t = func_801C0F18(4, 1);
    (*((func_801E65C4_S0 **) (func_801DAAF0 + 0x24)))->unk8->unk8->unk24->unk2C->unk12 = (s16) ((s32) ((((180.0f * ((f32) ((func_80034C24(t) / D_801E96D8) / 2))) + D_801E96E0) * 2048.0f) / ((0, 90.0f))));
  }
  return 0x1F;
}
