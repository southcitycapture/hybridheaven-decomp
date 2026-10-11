#include "context.h"

typedef struct func_801E5AAC_Vals {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
} func_801E5AAC_Vals;

typedef struct func_801E5AAC_Node {
    u8 pad0[8];
    struct func_801E5AAC_Node *unk8;
    u8 pad1[0x18];
    struct func_801E5AAC_Node *unk24;
    u8 pad2[4];
    func_801E5AAC_Vals *unk2C;
} func_801E5AAC_Node;

s32 func_801E5AAC(s32 arg0, s32 arg1) {
    func_801E5AAC_Node *temp_v0;

    temp_v0 = (*(func_801E5AAC_Node **)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        (*(func_801E5AAC_Node **)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 4.0f;
        (*(func_801E5AAC_Node **)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = 95.0f;
        (*(func_801E5AAC_Node **)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(2, 0x0320005B, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
