#include "context.h"

struct func_801E5E30_Float {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
};

struct func_801E5E30_Obj {
    u8 pad0[0x2C];
    struct func_801E5E30_Float *unk2C;
};

struct func_801E5E30_Node {
    u8 pad0[8];
    struct func_801E5E30_Node *unk8;
    u8 pad1[0x18];
    struct func_801E5E30_Obj *unk24;
};

s32 func_801E5E30(s32 arg0, s32 arg1) {
    struct func_801E5E30_Obj *temp_v0;

    temp_v0 = ((struct func_801E5E30_Node *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801E5E30_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E5E30_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = -45.0f;
        ((struct func_801E5E30_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x0348001C, 0, 0, 1.0f);
        return 2;
    }
    return 1;
}
