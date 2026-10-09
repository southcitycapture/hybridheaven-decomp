#include "context.h"

s32 func_801F4A38(s32 arg0, s32 arg1) {
    func_801E3D90_StructD *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 200.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CE308(1, 1, 0x3F000000, 0, 0, 0);
        return 2;
    }
    return 1;
}
