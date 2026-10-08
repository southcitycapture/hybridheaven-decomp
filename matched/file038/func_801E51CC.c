#include "context.h"

struct func_801E51CC_E {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E51CC_D {
    u8 pad0[0x2C];
    struct func_801E51CC_E *unk2C;
};

struct func_801E51CC_C {
    u8 pad0[0x24];
    struct func_801E51CC_D *unk24;
};

struct func_801E51CC_B {
    u8 pad0[8];
    struct func_801E51CC_C *unk8;
};

struct func_801E51CC_A {
    u8 pad0[8];
    struct func_801E51CC_B *unk8;
};

extern struct func_801E51CC_A *D_801DAB14;

s32 func_801E51CC(s32 arg0, s32 arg1) {
    struct func_801E51CC_D *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -62.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = 61.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0xB0E;
        func_801CC470(1, 0x02A80059, 0, 0x100, 6.0f);
        return 2;
    }
    return 1;
}
