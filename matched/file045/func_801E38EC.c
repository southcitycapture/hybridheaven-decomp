#include "context.h"

struct func_801E38EC_Inner {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    u16 unk12;
};

struct func_801E38EC_Sub {
    u8 pad0[0x2C];
    struct func_801E38EC_Inner *unk2C;
};

struct func_801E38EC_Node {
    u8 pad0[0x8];
    struct func_801E38EC_Node *unk8;
    u8 pad1[0x18];
    struct func_801E38EC_Sub *unk24;
};

s32 func_801E38EC(s32 arg0, s32 arg1) {
    struct func_801E38EC_Sub *temp_v0;

    temp_v0 = ((struct func_801E38EC_Node *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -120.5f;
        ((struct func_801E38EC_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = -22.0f;
        ((struct func_801E38EC_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = 32.5f;
        ((struct func_801E38EC_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(1, 0x02A80034, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}
