#include "context.h"

extern f32 D_801F598C;

struct func_801ECBC4_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801ECBC4_StructC {
    u8 pad0[0x2C];
    struct func_801ECBC4_StructD *unk2C;
};

struct func_801ECBC4_StructB {
    u8 pad0[0x24];
    struct func_801ECBC4_StructC *unk24;
};

struct func_801ECBC4_StructA {
    u8 pad0[8];
    struct func_801ECBC4_StructB *unk8;
};

s32 func_801ECBC4(s32 arg0, s32 arg1) {
    struct func_801ECBC4_StructC *temp_v0;

    temp_v0 = ((struct func_801ECBC4_StructA *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801ECBC4_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801ECBC4_StructA *) D_801DAB14)->unk8->unk24->unk2C->unkC = D_801F598C;
        ((struct func_801ECBC4_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x03480010, 0, 0x1000, 6.0f);
        return 3;
    }
    return 2;
}
