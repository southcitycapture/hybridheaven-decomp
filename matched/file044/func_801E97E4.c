#include "context.h"

struct func_801E97E4_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E97E4_StructD {
    u8 pad0[0x2C];
    struct func_801E97E4_StructE *unk2C;
};

struct func_801E97E4_StructA {
    u8 pad0[8];
    struct func_801E97E4_StructA *unk8;
    u8 pad1[0x24 - 0xC];
    struct func_801E97E4_StructD *unk24;
};

s32 func_801E97E4(s32 arg0, s32 arg1) {
    struct func_801E97E4_StructD *temp_v0;

    temp_v0 = (*(struct func_801E97E4_StructA **)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        (*(struct func_801E97E4_StructA **)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(struct func_801E97E4_StructA **)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = 5120.0f;
        (*(struct func_801E97E4_StructA **)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xC2D;
        func_801CC470(2, 0x03200053, 0, 0x100, 15.0f);
        return 2;
    }
    return 1;
}
