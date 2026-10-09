#include "context.h"

extern f32 D_801E72B0;
extern f32 D_801E72B4;

s32 func_801E5574(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x79D0E5) != 0) {
        D_801DAB14->unk8->unk8->unk24->unk2C->unk4 = D_801E72B0;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = D_801E72B4;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0xC66;
        func_801CC470(1, 0x02A80033, 0, 0x100, 6.0f);
        return 0x15;
    }
    return 0x14;
}
