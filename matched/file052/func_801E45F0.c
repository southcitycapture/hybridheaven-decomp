#include "context.h"

extern f32 D_801E5A70;
extern u8 *D_801DAB14[];

struct func_801E45F0_Node {
    u8 pad0[8];
    struct func_801E45F0_Node *unk8;
    u8 pad1[0x18];
    struct func_801E45F0_Mid *unk24;
};

struct func_801E45F0_Mid {
    u8 pad0[0x2C];
    struct func_801E45F0_Target *unk2C;
};

struct func_801E45F0_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

s32 func_801E45F0(s32 arg0, s32 arg1) {
    struct func_801E45F0_Mid *temp_v0;

    temp_v0 = ((struct func_801E45F0_Node *) D_801DAB14[0])->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801E45F0_Node *) D_801DAB14[0])->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E45F0_Node *) D_801DAB14[0])->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E5A70;
        ((struct func_801E45F0_Node *) D_801DAB14[0])->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(2, 0x03480066, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
