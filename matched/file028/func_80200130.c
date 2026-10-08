#include "context.h"

extern f32 D_80208DEC;

s32 func_80200130(s32 arg0, s32 arg1) {
    func_801E3D90_StructD *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = D_80208DEC;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x0320001A, 0, 0, 1.0f);
        return 2;
    }
    return 1;
}
