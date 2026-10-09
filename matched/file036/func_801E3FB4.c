#include "context.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern f32 D_801E51FC;

struct func_801E3FB4_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E3FB4_Node2 {
    u8 pad0[0x2C];
    struct func_801E3FB4_Inner *unk2C;
};

struct func_801E3FB4_Node {
    u8 pad0[8];
    struct func_801E3FB4_Node *unk8;
    u8 pad1[0x18];
    struct func_801E3FB4_Node2 *unk24;
};

struct func_801E3FB4_Sub {
    struct func_801E3FB4_Node *unk0;
};

extern struct func_801E3FB4_Sub D_801DAB14;

s32 func_801E3FB4(s32 arg0, s32 arg1) {
    struct func_801E3FB4_Node2 *temp_v0;

    temp_v0 = D_801DAB14.unk0->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 46.0f;
        D_801DAB14.unk0->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14.unk0->unk8->unk8->unk24->unk2C->unkC = D_801E51FC;
        D_801DAB14.unk0->unk8->unk8->unk24->unk2C->unk12 = 0x5BE;
        func_801CC470(1, 0x01B8003D, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}
