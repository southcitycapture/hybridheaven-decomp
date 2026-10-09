#include "context.h"

extern f32 D_801E8908;
extern f32 D_801E890C;
extern struct func_801E5D20_L1 *D_801DAB14;

struct func_801E5D20_Leaf {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};
struct func_801E5D20_L3 {
    u8 pad[0x2C];
    struct func_801E5D20_Leaf *unk2C;
};
struct func_801E5D20_L2 {
    u8 pad[0x24];
    struct func_801E5D20_L3 *unk24;
};
struct func_801E5D20_L1 {
    u8 pad[8];
    struct func_801E5D20_L2 *unk8;
};

s32 func_801E5D20(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xE4E1C0) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = D_801E8908;
        D_801DAB14->unk8->unk24->unk2C->unk8 = D_801E890C;
        D_801DAB14->unk8->unk24->unk2C->unkC = 544.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1B6E;
        return 0xC;
    }
    return 0xB;
}
