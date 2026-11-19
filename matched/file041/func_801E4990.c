#include "common.h"
extern u8 D_801E8960[];
extern u8 D_801E89D0[];
extern s32 func_801C0B8C(u64);

extern void func_801C7B3C();
extern void func_801C7BE4();
extern f32 D_801E8898;
#define A(o) (*(f32 *)(D_801E8960 + (o)))
#define B(o) (*(f32 *)(D_801E89D0 + (o)))

s32 func_801E4990(s32 arg0, s32 arg1)
{
  f32 v;
  if (func_801C0B8C(0) != 0)
  {
    func_801C7B3C();
    func_801C7BE4();
    v = D_801E8898;
    A(0x10) = v;
    A(0x30) = v;
    A(0x34) = v;
    A(0x38) = v;
    B(0x54) = v;
    B(0x58) = v;
    B(0x5C) = v;
    A(0x48) = 11.0f;
    A(0x4C) = 11.0f;
    A(0x50) = 11.0f;
    B(0x48) = 11.0f;
    B(0x4C) = 11.0f;
    B(0x50) = 11.0f;
    A(0x0) = 20.0f;
    A(0x8) = 20.0f;
    B(0x0) = 20.0f;
    B(0x8) = 20.0f;
    A(0x24) = 22.0f;
    A(0x2C) = 22.0f;
    B(0x24) = 22.0f;
    B(0x2C) = 22.0f;
    B(0x30) = 180.0f;
    B(0x34) = 180.0f;
    B(0x38) = 180.0f;
    A(0x18) = 0.0f;
    A(0x20) = 0.0f;
    A(0xC) = 0.0f;
    A(0x14) = 0.0f;
    A(0x3C) = 0.0f;
    A(0x44) = 0.0f;
    A(0x60) = 0.0f;
    A(0x68) = 0.0f;
    A(0x54) = 0.0f;
    A(0x58) = 0.0f;
    A(0x5C) = 0.0f;
    B(0x18) = 0.0f;
    B(0x20) = 0.0f;
    B(0xC) = 0.0f;
    B(0x10) = 0.0f;
    B(0x14) = 0.0f;
    B(0x3C) = 0.0f;
    B(0x44) = 0.0f;
    B(0x60) = 0.0f;
    B(0x68) = 0.0f;
    A(0x1C) = -117.0f;
    A(0x4) = 18.0f;
    A(0x40) = -175.0f;
    A(0x28) = 19.0f;
    A(0x64) = -114.0f;
    B(0x1C) = -117.0f;
    B(0x4) = 18.0f;
    B(0x40) = -96.0f;
    B(0x28) = 19.0f;
    B(0x64) = -91.0f;
    return 6;
  }
  return 5;
}
