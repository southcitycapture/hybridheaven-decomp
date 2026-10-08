#include "context.h"

s32 func_801E8360(s32 arg0, s32 arg1) {
    func_801E5470_StructP3 *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -19.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = -14.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0xA38;
        func_801CC470(0, 0x0348001E, 0, 0x110, 5.0f);
        return 3;
    }
    return 2;
}
