#include "context.h"

struct func_801F92F8_Node {
    u8 pad0[8];
    struct func_801F92F8_Node *unk8;
    u8 pad1[0x18];
    struct func_801F92F8_Mid *unk24;
};

struct func_801F92F8_Mid {
    u8 pad0[0x2C];
    struct func_801F92F8_Obj *unk2C;
};

struct func_801F92F8_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

#define FUNC_801F92F8_NODE ((struct func_801F92F8_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8

s32 func_801F92F8(s32 arg0, s32 arg1) {
    struct func_801F92F8_Mid *temp_v0;

    temp_v0 = FUNC_801F92F8_NODE->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        FUNC_801F92F8_NODE->unk24->unk2C->unk8 = 2.0f;
        FUNC_801F92F8_NODE->unk24->unk2C->unkC = -29.0f;
        FUNC_801F92F8_NODE->unk24->unk2C->unk12 = 0x1DDD;
        func_801CC470(5, 0x03480000, 0, 0x1000, 1.0f);
        return 2;
    }
    return 1;
}
