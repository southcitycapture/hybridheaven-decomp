#include "context.h"

struct func_801EB8A4_Struct2C {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    u16 unk12;
};

struct func_801EB8A4_Struct2C_Owner {
    u8 pad0[0x2C];
    struct func_801EB8A4_Struct2C *unk2C;
};

struct func_801EB8A4_Struct24 {
    u8 pad0[0x24];
    struct func_801EB8A4_Struct2C_Owner *unk24;
};

struct func_801EB8A4_Struct8 {
    u8 pad0[0x8];
    struct func_801EB8A4_Struct24 *unk8;
};

struct func_801EB8A4_Struct8b {
    u8 pad0[0x8];
    struct func_801EB8A4_Struct8 *unk8;
};

s32 func_801EB8A4(s32 arg0, s32 arg1) {
    struct func_801EB8A4_Struct2C_Owner *temp_v0;

    temp_v0 = ((struct func_801EB8A4_Struct8b *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 12.5f;
        ((struct func_801EB8A4_Struct8b *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801EB8A4_Struct8b *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = -10.0f;
        ((struct func_801EB8A4_Struct8b *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(1, 0x03480036, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
