#include "context.h"

extern f32 D_801FD3AC;

s32 func_801F7C80(s32 arg0, s32 arg1) {
    if (((s32 *) func_801BF6B0(0))[3] >= 3) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = -3.5f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FD3AC;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(0, 0x02A80019, 0, 0, 2.0f);
        return 5;
    }
    return 4;
}
