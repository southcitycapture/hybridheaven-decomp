#include "context.h"

struct func_801F9510_Vals {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F9510_Node {
    u8 pad0[0x2C];
    struct func_801F9510_Vals *unk2C;
};

struct func_801F9510_Link {
    u8 pad0[0x8];
    struct func_801F9510_Link *unk8;
    u8 pad1[0x18];
    struct func_801F9510_Node *unk24;
};

extern f32 D_801FD414;

s32 func_801F9510(s32 arg0, s32 arg1) {
    struct func_801F9510_Node *temp_v0;

    temp_v0 = ((struct func_801F9510_Link *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -5.5f;
        ((struct func_801F9510_Link *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801F9510_Link *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FD414;
        ((struct func_801F9510_Link *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(2, 0x01B80018, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
