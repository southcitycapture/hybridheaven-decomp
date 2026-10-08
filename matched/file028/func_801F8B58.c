#include "context.h"

struct func_801F8B58_Node {
    u8 pad0[8];
    struct func_801F8B58_Node *unk8;
    u8 pad10[0x18];
    func_801E3D90_StructD *unk24;
};

s32 func_801F8B58(s32 arg0, s32 arg1) {
    func_801E3D90_StructD *temp_v0;

    temp_v0 = ((struct func_801F8B58_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801F8B58_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 2.0f;
        ((struct func_801F8B58_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -29.0f;
        ((struct func_801F8B58_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1DDD;
        func_801CC470(4, 0x03480000, 0, 0x1000, 1.0f);
        return 2;
    }
    return 1;
}
