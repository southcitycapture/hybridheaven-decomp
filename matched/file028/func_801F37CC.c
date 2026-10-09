#include "context.h"

struct func_801F37CC_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801F37CC_Node {
    u8 pad0[8];
    struct func_801F37CC_Node *unk8;
    u8 pad1[0x18];
    struct func_801F37CC_Node *unk24;
    u8 pad2[4];
    struct func_801F37CC_Data *unk2C;
};

s32 func_801F37CC(s32 arg0, s32 arg1) {
    struct func_801F37CC_Node *temp_v0;

    temp_v0 = ((struct func_801F37CC_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 22.0f;
        ((struct func_801F37CC_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 2.0f;
        ((struct func_801F37CC_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -29.0f;
        ((struct func_801F37CC_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1DDD;
        func_801CC470(3, 0x0348007A, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
