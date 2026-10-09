#include "context.h"
extern s32 D_801E9800;
s32 func_801C0B8C(u64 time);
extern void func_801CC470(s32, s32, s32, s32, f32);

typedef struct func_801E53D4_StructA {
    u8 pad0[0x8];
    struct func_801E4428_StructTop *unk8;
} func_801E53D4_StructA;

typedef struct func_801E53D4_StructG {
    func_801E53D4_StructA *unk0;
    u8 pad0[0x20];
} func_801E53D4_StructG;

extern func_801E53D4_StructG func_801DAAF0[];
extern f32 D_801EA204;
extern f32 D_801EA208;

s32 func_801E53D4(s32 arg0, s32 arg1)
{
  char new_var;
  if (0 != func_801C0B8C(0x870A50))
  {
    new_var = 1;
    func_801DAAF0[new_var].unk0->unk8->unk8->unk24->unk2C->unk4 = D_801EA204;
    func_801DAAF0[new_var].unk0->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    func_801DAAF0[new_var].unk0->unk8->unk8->unk24->unk2C->unkC = D_801EA208;
    func_801DAAF0[new_var].unk0->unk8->unk8->unk24->unk2C->unk12 = 0xE38;
    func_801CC470(new_var, 0x03480066, 0, new_var, 1.0f);
    D_801E9800 = 0;
    return 6;
  }
  return 5;
}
