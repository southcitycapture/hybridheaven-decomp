#include "context.h"

s32 func_801E78F8(s32 arg0, s32 arg1) {
    struct func_801E77A0_B **pp;

    if (func_801C0B8C(0x11D56E0) != 0) {
        pp = (struct func_801E77A0_B **)&D_801DAB14;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = 14.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = -424.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0;
        return 0x22;
    }
    return 0x21;
}
