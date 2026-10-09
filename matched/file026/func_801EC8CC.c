#include "context.h"

extern f32 D_801FC878;
extern f32 D_801FC87C;

s32 func_801EC8CC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x044AA200) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = D_801FC878;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FC87C;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(0, 0x01B8000B, 0, 1, 3.0f);
        return 0xC;
    }
    return 0xB;
}
