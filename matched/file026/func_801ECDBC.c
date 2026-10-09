#include "context.h"

struct func_801ECDBC_E {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801ECDBC_D {
    u8 pad0[0x2C];
    struct func_801ECDBC_E *unk2C;
};

struct func_801ECDBC_C {
    u8 pad0[0x24];
    struct func_801ECDBC_D *unk24;
};

struct func_801ECDBC_B {
    u8 pad0[0x8];
    struct func_801ECDBC_C *unk8;
};

struct func_801ECDBC_A {
    u8 pad0[0x8];
    struct func_801ECDBC_B *unk8;
};

s32 func_801ECDBC(s32 arg0, s32 arg1) {
    struct func_801ECDBC_A **pp;

    pp = (struct func_801ECDBC_A **)&D_801DAB14;
    if ((*pp)->unk8->unk8->unk24 != NULL) {
        if (func_801C0B8C(0x01298BE0) != 0) {
            return 2;
        }
        pp = (struct func_801ECDBC_A **)&D_801DAB14;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = 71.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = -12.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(1, 0x02A80001, 0, 0x1001, 6.0f);
    }
    return 1;
}
