#include "context.h"

struct func_801EDD74_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801EDD74_Sub {
    u8 pad0[0x2C];
    struct func_801EDD74_Data *unk2C;
};

struct func_801EDD74_Node {
    u8 pad0[8];
    struct func_801EDD74_Node *unk8;
    u8 pad1[0x18];
    struct func_801EDD74_Sub *unk24;
};

extern f32 D_801F59B4;

s32 func_801EDD74(s32 arg0, s32 arg1) {
    struct func_801EDD74_Sub *temp_v0;

    temp_v0 = ((struct func_801EDD74_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801F59B4;
        ((struct func_801EDD74_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801EDD74_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -32.0f;
        ((struct func_801EDD74_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xB8E;
        func_801CC470(3, 0x02A80004, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}
