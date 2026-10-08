#include "context.h"

extern f32 D_802089D8;
extern f32 D_802089DC;
extern s32 D_80208E28;

s32 func_801EC594(s32 arg0, s32 arg1) {
    func_801E3D90_StructD *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_802089D8;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = D_802089DC;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0x238;
        func_801CC470(1, 0x0320001A, 0, 1, 1.0f);
        D_80208E28 = 0;
        return 2;
    }
    return 1;
}
