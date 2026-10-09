#include "context.h"

extern f32 D_801FC880;
extern f32 D_801FC884;

s32 func_801ECACC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0545219A) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = D_801FC880;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FC884;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1BED;
        func_801CC470(0, 0x02A80011, 0, 0x1000, 1.0f);
        return 0x10;
    }
    return 0xF;
}
