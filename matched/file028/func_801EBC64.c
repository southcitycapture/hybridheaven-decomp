#include "context.h"

typedef struct func_801EBC64_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801EBC64_StructE;

typedef struct func_801EBC64_StructD {
    u8 pad0[0x2C];
    func_801EBC64_StructE *unk2C;
} func_801EBC64_StructD;

typedef struct func_801EBC64_StructA {
    u8 pad0[8];
    struct func_801EBC64_StructA *unk8;
    u8 pad1[0x18];
    func_801EBC64_StructD *unk24;
} func_801EBC64_StructA;

s32 func_801EBC64(s32 arg0, s32 arg1) {
    func_801EBC64_StructD *temp_v0;

    temp_v0 = ((func_801EBC64_StructA *)D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((func_801EBC64_StructA *)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801EBC64_StructA *)D_801DAB14)->unk8->unk24->unk2C->unkC = 90.0f;
        ((func_801EBC64_StructA *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x03480010, 0, 0x1001, 6.0f);
        return 3;
    }
    return 2;
}
