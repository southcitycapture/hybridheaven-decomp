#include "context.h"

typedef struct func_801F1700_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801F1700_Leaf;

typedef struct func_801F1700_Node {
    u8 pad0[0x8];
    struct func_801F1700_Node *unk8;
    u8 pad1[0x18];
    struct func_801F1700_Node *unk24;
    u8 pad2[0x4];
    func_801F1700_Leaf *unk2C;
} func_801F1700_Node;

s32 func_801F1700(s32 arg0, s32 arg1) {
    func_801F1700_Node *temp_v0;

    temp_v0 = ((func_801F1700_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((func_801F1700_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801F1700_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -32.0f;
        ((func_801F1700_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xB8E;
        func_801CC470(3, 0x02A80004, 0, 0x1101, 1.0f);
        return 2;
    }
    return 1;
}
