#include "context.h"

typedef struct func_801E55B0_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E55B0_StructD;

typedef struct func_801E55B0_StructB {
    u8 pad0[0x2C];
    func_801E55B0_StructD *unk2C;
} func_801E55B0_StructB;

typedef struct func_801E55B0_StructA {
    u8 pad0[8];
    struct func_801E55B0_StructA *unk8;
    u8 pad1[0x18];
    func_801E55B0_StructB *unk24;
} func_801E55B0_StructA;

s32 func_801E55B0(s32 arg0, s32 arg1) {
    ((func_801E55B0_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk4 = -79.0f;
    ((func_801E55B0_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    ((func_801E55B0_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = -29.0f;
    ((func_801E55B0_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
    func_801CC470(2, 0x03200031, 0, 0x1001, 1.0f);
    return 5;
}
