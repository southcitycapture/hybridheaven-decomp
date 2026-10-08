#include "context.h"

extern f32 D_80208854;

s32 func_801E49E4(s32 arg0, s32 arg1) {
    func_801E3D90_StructA **p;

    p = &D_801DAB14;
    (*p)->unk8->unk8->unk24->unk2C->unk4 = 0.0f;
    (*p)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*p)->unk8->unk8->unk24->unk2C->unkC = D_80208854;
    (*p)->unk8->unk8->unk24->unk2C->unk12 = 0;
    func_801CC470(1, 0x0320001A, 0, 1, 1.0f);
    return 0x1E;
}
