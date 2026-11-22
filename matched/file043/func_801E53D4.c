#include "common.h"

extern s32 D_801E9800;
extern s32 func_801C0B8C(u64 time);
extern void func_801CC470(s32, s32, s32, s32, f32);
typedef struct func_801E4428_StructFl {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E4428_StructFl;
typedef struct func_801E4428_StructLow {
    u8 pad0[0x2C];
    struct func_801E4428_StructFl *unk2C;
} func_801E4428_StructLow;
typedef struct func_801E4428_StructMid {
    u8 pad0[0x24];
    struct func_801E4428_StructLow *unk24;
} func_801E4428_StructMid;
typedef struct func_801E4428_StructTop {
    u8 pad0[0x8];
    struct func_801E4428_StructMid *unk8;
} func_801E4428_StructTop;
typedef struct func_801E53D4_StructA {
    u8 pad0[0x8];
    struct func_801E4428_StructTop *unk8;
} func_801E53D4_StructA;
typedef struct func_801E53D4_StructG {
    func_801E53D4_StructA *unk0;
    u8 pad0[0x20];
} func_801E53D4_StructG;
extern func_801E53D4_StructG func_801DAAF0[];
s32 func_801E53D4(s32 arg0, s32 arg1)
{
  char new_var;
  if (0 != func_801C0B8C(0x870A50))
  {
    new_var = 1;
    func_801DAAF0[new_var].unk0->unk8->unk8->unk24->unk2C->unk4 = (-92.1999969f);
    func_801DAAF0[new_var].unk0->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    func_801DAAF0[new_var].unk0->unk8->unk8->unk24->unk2C->unkC = 122.800003f;
    func_801DAAF0[new_var].unk0->unk8->unk8->unk24->unk2C->unk12 = 0xE38;
    func_801CC470(new_var, 0x03480066, 0, new_var, 1.0f);
    D_801E9800 = 0;
    return 6;
  }
  return 5;
}
