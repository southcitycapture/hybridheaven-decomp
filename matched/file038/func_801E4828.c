#include "context.h"
extern struct func_801E51CC_A *D_801DAB14;
extern s32 func_801CC470(s32, s32, s32, s32, f32);

struct func_801E4828_E {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E4828_D {
    u8 pad0[0x2C];
    struct func_801E4828_E *unk2C;
};

struct func_801E4828_C {
    u8 pad0[0x24];
    struct func_801E4828_D *unk24;
};

struct func_801E4828_B {
    u8 pad0[8];
    struct func_801E4828_C *unk8;
};

s32 func_801E4828(s32 arg0, s32 arg1) {
    struct func_801E4828_D *temp_v0;

    temp_v0 = ((struct func_801E4828_B *)D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -51.0f;
        ((struct func_801E4828_B *)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E4828_B *)D_801DAB14)->unk8->unk24->unk2C->unkC = 46.0f;
        ((struct func_801E4828_B *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1C12;
        func_801CC470(0, 0x0348007B, 0, 0, 10.0f);
        return 3;
    }
    return 2;
}
