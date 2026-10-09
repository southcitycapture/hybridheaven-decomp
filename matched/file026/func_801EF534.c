#include "context.h"

extern f32 D_801FC918;
extern f32 D_801FC91C;

struct func_801EF534_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};

struct func_801EF534_Node {
    u8 pad0[0x8];
    struct func_801EF534_Node *unk8;
    u8 pad1[0x18];
    struct func_801EF534_Node *unk24;
    u8 pad2[0x4];
    struct func_801EF534_Leaf *unk2C;
};

s32 func_801EF534(s32 arg0, s32 arg1) {
    u32 pp;

    if (func_801C0B8C(0x06D97D3A) != 0) {
        pp = (u32)&func_801DAAF0.unk24;
        (*(struct func_801EF534_Node **)pp)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801FC918;
        (*(struct func_801EF534_Node **)pp)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = -15.5f;
        (*(struct func_801EF534_Node **)pp)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FC91C;
        (*(struct func_801EF534_Node **)pp)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        return 0xA;
    }
    return 9;
}
