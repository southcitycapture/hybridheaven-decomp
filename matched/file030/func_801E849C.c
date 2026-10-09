#include "context.h"

struct func_801E849C_Node {
    u8 pad0[8];
    struct func_801E849C_Node *unk8;
    u8 pad1[0x18];
    func_801E5470_StructP3 *unk24;
};

s32 func_801E849C(s32 arg0, s32 arg1) {
    func_801E5470_StructP3 *temp_v0;

    temp_v0 = ((struct func_801E849C_Node *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -16.0f;
        ((struct func_801E849C_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E849C_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = -9.0f;
        ((struct func_801E849C_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1A38;
        func_801CC470(1, 0x02A8005B, 0, 0x100, 5.0f);
        return 2;
    }
    return 1;
}
