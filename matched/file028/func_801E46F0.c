#include "common.h"

extern s32 func_801CC550(s32);
extern u8 func_801DAAF0[];

typedef struct func_801E46F0_StructE {
    u8 pad0[0x12];
    s16 unk12;
} func_801E46F0_StructE;

typedef struct func_801E46F0_StructD {
    u8 pad0[0x2C];
    func_801E46F0_StructE *unk2C;
} func_801E46F0_StructD;

typedef struct func_801E46F0_StructC {
    u8 pad0[0x24];
    func_801E46F0_StructD *unk24;
} func_801E46F0_StructC;

typedef struct func_801E46F0_StructB {
    u8 pad0[8];
    func_801E46F0_StructC *unk8;
} func_801E46F0_StructB;

typedef struct func_801E46F0_StructA {
    u8 pad0[8];
    func_801E46F0_StructB *unk8;
} func_801E46F0_StructA;

s32 func_801E46F0(s32 arg0, s32 arg1)
{
  func_801E46F0_StructE *temp_t0;
  ;
  (*((func_801E46F0_StructA **) (func_801DAAF0 + 0x24)))->unk8->unk8->unk24->unk2C->unk12 = 0;
  func_801CC550(1);
  return 0x16;
}
