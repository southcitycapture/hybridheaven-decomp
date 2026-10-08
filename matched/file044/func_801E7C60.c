#include "context.h"

struct func_801E7C60_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E7C60_StructD {
    u8 pad0[0x2C];
    struct func_801E7C60_StructE *unk2C;
};

struct func_801E7C60_StructB {
    u8 pad0[0x24];
    struct func_801E7C60_StructD *unk24;
};

struct func_801E7C60_StructA {
    u8 pad0[8];
    struct func_801E7C60_StructB *unk8;
};

extern u8 D_801DAB14[];
extern f32 D_801EDDD4;
extern f32 D_801EDDD8;

s32 func_801E7C60(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x20CE70) != 0) {
        (*(struct func_801E7C60_StructA **) D_801DAB14)->unk8->unk24->unk2C->unk4 = D_801EDDD4;
        (*(struct func_801E7C60_StructA **) D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(struct func_801E7C60_StructA **) D_801DAB14)->unk8->unk24->unk2C->unkC = D_801EDDD8;
        (*(struct func_801E7C60_StructA **) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC4D8(0, 0x01B8003B, 0, 0, 3.0f);
        return 0x29;
    }
    return 0x28;
}
