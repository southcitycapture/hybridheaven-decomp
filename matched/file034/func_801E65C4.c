#include "common.h"
extern s32 D_801E8DF8;
extern f64 func_80034C24();
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern void func_801CF450(s32 arg0);
extern u8 func_801DAAF0[];
typedef struct func_801E65C4_S4 { u8 pad[0x12]; s16 unk12; } func_801E65C4_S4;
typedef struct func_801E65C4_S3 { u8 pad[0x2C]; func_801E65C4_S4 *unk2C; } func_801E65C4_S3;
typedef struct func_801E65C4_S2 { u8 pad[0x24]; func_801E65C4_S3 *unk24; } func_801E65C4_S2;
typedef struct func_801E65C4_S1 { u8 pad[8]; func_801E65C4_S2 *unk8; } func_801E65C4_S1;
typedef struct func_801E65C4_S0 { u8 pad[8]; func_801E65C4_S1 *unk8; } func_801E65C4_S0;

extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801CF4B0(s32);

s32 func_801E65C4(s32 arg0, s32 arg1)
{
  f32 time;
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
    time = func_80034C24(func_801C0F18(4, 1)) / 1000000.0 / 2;
    (*((func_801E65C4_S0 **) (func_801DAAF0 + 0x24)))->unk8->unk8->unk24->unk2C->unk12 = ((180.0f * time) + 316.6f) * 2048.0f / 90.0f;
  }
  return 0x1F;
}
