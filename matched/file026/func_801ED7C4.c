#include "context.h"

extern f32 D_801FC8C0;
extern f32 D_801FC8C4;

struct func_801ED7C4_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801ED7C4_Sub {
    u8 pad0[0x2C];
    struct func_801ED7C4_Data *unk2C;
};

struct func_801ED7C4_Node {
    u8 pad0[8];
    struct func_801ED7C4_Node *unk8;
    u8 pad1[0x18];
    struct func_801ED7C4_Sub *unk24;
};

s32 func_801ED7C4(s32 arg0, s32 arg1) {
    struct func_801ED7C4_Node **slot;

    if (func_801C0B8C(0x05BF339A) != 0) {
        slot = (struct func_801ED7C4_Node **)(u32)&func_801DAAF0.unk24;
        (*slot)->unk8->unk8->unk24->unk2C->unk4 = D_801FC8C0;
        (*slot)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*slot)->unk8->unk8->unk24->unk2C->unkC = D_801FC8C4;
        (*slot)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x02A80002, 0, 0x1001, 1.0f);
        return 0x18;
    }
    return 0x17;
}
