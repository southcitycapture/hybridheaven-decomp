#include "context.h"

extern f32 D_801E96EC;
extern f32 D_801E96F0;

struct func_801E6A84_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

s32 func_801E6A84(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x16E360) != 0) {
        ((struct func_801E6A84_StructC *)D_801DAB14->unk8->unk8->unk8->unk24->unk2C)->unk4 = D_801E96EC;
        ((struct func_801E6A84_StructC *)D_801DAB14->unk8->unk8->unk8->unk24->unk2C)->unk8 = -470.0f;
        ((struct func_801E6A84_StructC *)D_801DAB14->unk8->unk8->unk8->unk24->unk2C)->unkC = D_801E96F0;
        ((struct func_801E6A84_StructC *)D_801DAB14->unk8->unk8->unk8->unk24->unk2C)->unk12 = 0x1C61;
        func_801CC470(2, 0x02A80024, 0, 0x1000, 5.0f);
        func_801C1000(4, 2);
        return 0x10;
    }
    return 0xF;
}
