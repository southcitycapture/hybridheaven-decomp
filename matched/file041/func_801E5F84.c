#include "context.h"

struct func_801E5F84_Float {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
};

struct func_801E5F84_Obj {
    u8 pad0[0x2C];
    struct func_801E5F84_Float *unk2C;
};

struct func_801E5F84_Node {
    u8 pad0[8];
    struct func_801E5F84_Node *unk8;
    u8 pad1[0x18];
    struct func_801E5F84_Obj *unk24;
};

s32 func_801E5F84(s32 arg0, s32 arg1) {
    struct func_801E5F84_Obj *temp_v0;

    temp_v0 = ((struct func_801E5F84_Node *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -55.0f;
        ((struct func_801E5F84_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E5F84_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = 52.0f;
        ((struct func_801E5F84_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0xABC;
        func_801CC470(1, 0x02A8003A, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}
