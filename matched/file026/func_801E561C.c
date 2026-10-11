#include "context.h"

typedef struct func_801E561C_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E561C_Leaf;

typedef struct func_801E561C_Node {
    u8 pad0[0x8];
    struct func_801E561C_Node *unk8;
    u8 pad1[0x18];
    struct func_801E561C_Node *unk24;
    u8 pad2[0x4];
    func_801E561C_Leaf *unk2C;
} func_801E561C_Node;

s32 func_801E561C(s32 arg0, s32 arg1) {
    func_801E561C_Node *temp_v0;

    temp_v0 = ((func_801E561C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -10.0f;
        ((func_801E561C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E561C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 77.0f;
        ((func_801E561C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(3, 0x01B80013, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}
