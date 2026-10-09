#include "context.h"

extern f32 D_801FD3A8;

s32 func_801F7B54(s32 arg0, s32 arg1) {
    struct func_801EC5B4_Struct2 *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -3.5f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FD3A8;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(0, 0x01B80017, 0, 1, 1.0f);
        return 3;
    }
    return 2;
}
