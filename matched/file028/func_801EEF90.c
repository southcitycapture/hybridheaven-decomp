#include "context.h"

struct func_801EEF90_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801EEF90_Sub {
    u8 pad0[0x2C];
    struct func_801EEF90_Data *unk2C;
};

struct func_801EEF90_Node {
    u8 pad0[8];
    struct func_801EEF90_Node *unk8;
    u8 pad1[0x18];
    struct func_801EEF90_Sub *unk24;
};

s32 func_801EEF90(s32 arg0, s32 arg1) {
    struct func_801EEF90_Sub *sub;

    sub = ((struct func_801EEF90_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24;
    if (sub != NULL) {
        sub->unk2C->unk4 = 5120.0f;
        ((struct func_801EEF90_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801EEF90_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 0.0f;
        ((struct func_801EEF90_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(5, 0x03480023, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
