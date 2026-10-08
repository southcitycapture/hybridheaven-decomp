#include "context.h"

struct func_801E22EC_Struct2C {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E22EC_Struct24 {
    u8 pad0[0x2C];
    struct func_801E22EC_Struct2C *unk2C;
};

struct func_801E22EC_Struct8 {
    u8 pad0[0x24];
    struct func_801E22EC_Struct24 *unk24;
};

struct func_801E22EC_StructA {
    u8 pad0[8];
    struct func_801E22EC_Struct8 *unk8;
};

struct func_801E22EC_StructB {
    u8 pad0[8];
    struct func_801E22EC_StructA *unk8;
};

s32 func_801E22EC(s32 arg0, s32 arg1) {
    struct func_801E22EC_Struct24 *temp_v0;

    temp_v0 = ((struct func_801E22EC_StructB *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        ((struct func_801E22EC_StructB *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E22EC_StructB *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = -45.0f;
        ((struct func_801E22EC_StructB *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x02A8005C, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}
