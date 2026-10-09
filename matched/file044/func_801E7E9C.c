#include "context.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern f32 D_801EDDDC;
extern f32 D_801EDDE0;

typedef struct func_801E7E9C_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801E7E9C_StructE;

typedef struct func_801E7E9C_StructD {
    u8 pad0[0x2C];
    func_801E7E9C_StructE *unk2C;
} func_801E7E9C_StructD;

typedef struct func_801E7E9C_StructB {
    u8 pad0[0x24];
    func_801E7E9C_StructD *unk24;
} func_801E7E9C_StructB;

typedef struct func_801E7E9C_StructA {
    u8 pad0[8];
    func_801E7E9C_StructB *unk8;
} func_801E7E9C_StructA;

s32 func_801E7E9C(s32 arg0, s32 arg1) {
    (*(func_801E7E9C_StructA **)D_801DAB14)->unk8->unk24->unk2C->unk4 = D_801EDDDC;
    (*(func_801E7E9C_StructA **)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
    (*(func_801E7E9C_StructA **)D_801DAB14)->unk8->unk24->unk2C->unkC = D_801EDDE0;
    (*(func_801E7E9C_StructA **)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1AE1;
    func_801CC470(0, 0x01B80039, 0, 1, 1.0f);
    return 0x35;
}
