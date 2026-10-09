#include "context.h"

extern f32 D_80208C28;
extern f32 D_80208C2C;

struct func_801F8CA0_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801F8CA0_Mid {
    u8 pad0[0x2C];
    struct func_801F8CA0_Leaf *unk2C;
};

struct func_801F8CA0_Node {
    u8 pad0[8];
    struct func_801F8CA0_Node *unk8;
    u8 pad1[0x18];
    struct func_801F8CA0_Mid *unk24;
};

s32 func_801F8CA0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x39FBBF) != 0) {
        ((struct func_801F8CA0_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_80208C28;
        ((struct func_801F8CA0_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801F8CA0_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_80208C2C;
        ((struct func_801F8CA0_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1266;
        return 5;
    }
    return 4;
}
