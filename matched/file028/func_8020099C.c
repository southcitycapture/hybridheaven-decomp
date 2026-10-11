#include "context.h"

struct func_8020099C_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_8020099C_Mid {
    u8 pad0[0x2C];
    struct func_8020099C_Target *unk2C;
};

struct func_8020099C_Node {
    u8 pad0[8];
    struct func_8020099C_Node *unk8;
    u8 pad1[0x18];
    struct func_8020099C_Mid *unk24;
};

s32 func_8020099C(s32 arg0, s32 arg1) {
    struct func_8020099C_Mid *temp_v0;

    temp_v0 = ((struct func_8020099C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 6.5f;
        ((struct func_8020099C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_8020099C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 56.5f;
        ((struct func_8020099C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(4, 0x03480013, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
