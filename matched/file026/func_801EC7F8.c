#include "context.h"

extern f32 D_801FC874;

s32 func_801EC7F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x040D9900) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = -76.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FC874;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(0, 0x01B8001B, 0, 0x100, 3.0f);
        return 0xB;
    }
    return 0xA;
}
