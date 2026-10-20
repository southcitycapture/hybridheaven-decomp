#include "context.h"






extern struct func_801E51CC_A *D_801DAB14;

s32 func_801E51CC(s32 arg0, s32 arg1) {
    struct func_801E51CC_D *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -62.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = 61.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0xB0E;
        func_801CC470(1, 0x02A80059, 0, 0x100, 6.0f);
        return 2;
    }
    return 1;
}
