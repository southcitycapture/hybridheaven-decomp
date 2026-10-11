#include "context.h"

extern f32 D_801EB390;
extern f32 D_801EB394;

s32 func_801E6180(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDBBA0) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = D_801EB390;
        D_801DAB14->unk8->unk24->unk2C->unk8 = D_801EB394;
        D_801DAB14->unk8->unk24->unk2C->unkC = 36.5f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1C00;
        return 5;
    }
    return 4;
}
