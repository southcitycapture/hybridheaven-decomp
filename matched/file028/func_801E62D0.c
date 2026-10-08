#include "context.h"

typedef struct func_801E62D0_Node {
    u8 pad0[8];
    struct func_801E62D0_Node *unk8;
    u8 pad1[0x18];
    struct func_801E62D0_Mid *unk24;
} func_801E62D0_Node;

typedef struct func_801E62D0_Mid {
    u8 pad0[0x2C];
    struct func_801E62D0_Target *unk2C;
} func_801E62D0_Mid;

typedef struct func_801E62D0_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E62D0_Target;

extern s32 func_801D4A6C(s32, s32, s32, s32, s32, s32);

s32 func_801E62D0(s32 arg0, s32 arg1) {
    func_801E62D0_Node **pp;

    pp = (func_801E62D0_Node **)&D_801DAB14;
    (*pp)->unk8->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = -9.0f;
    (*pp)->unk8->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*pp)->unk8->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -25.5f;
    (*pp)->unk8->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
    func_801CC470(6, 0x03480000, 0, 0x1001, 1.0f);
    func_801D4A6C(1, 6, 0x3FC00000, 0, 0x7F, 1);
    return 5;
}
