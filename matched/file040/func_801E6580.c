#include "context.h"

s32 func_801E6580(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDCBE6B) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = -28.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 31.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1C00;
        func_801CC470(0, 0x3480066, 0, 1, 1.0f);
        return 0x16;
    }
    if (D_801E83B8 == 0 && func_801CE284() != 0) {
        func_8038D28C(0x586);
        D_801E83B8 = 1;
    }
    return 0x15;
}
