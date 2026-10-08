#include "context.h"

extern f32 D_801EC720;

s32 func_801E5E3C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = -3.5f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801EC720;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x1B8000B, 0, 0, 3.0f);
        return 0x1C;
    }
    return 0x1B;
}
