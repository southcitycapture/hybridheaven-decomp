#include "context.h"

struct func_801E5D08_Sub {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E5D08_Obj {
    u8 pad0[0x2C];
    struct func_801E5D08_Sub *unk2C;
};

struct func_801E5D08_Node {
    u8 pad0[8];
    struct func_801E5D08_Node *unk8;
    u8 pad1[0x18];
    struct func_801E5D08_Obj *unk24;
};

#define FUNC_801E5D08_BASE (((struct func_801E5D08_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8)

s32 func_801E5D08(s32 arg0, s32 arg1) {
    struct func_801E5D08_Obj *temp_v0;

    temp_v0 = FUNC_801E5D08_BASE->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        FUNC_801E5D08_BASE->unk24->unk2C->unk8 = 0.0f;
        FUNC_801E5D08_BASE->unk24->unk2C->unkC = 0.0f;
        FUNC_801E5D08_BASE->unk24->unk2C->unk12 = 0;
        func_801CC470(5, 0x03480000, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}
