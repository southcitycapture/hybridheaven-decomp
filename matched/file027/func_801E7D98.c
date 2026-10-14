#include "context.h"

struct func_801E7D98_Floats {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E7D98_Struct {
    u8 pad0[8];
    struct func_801E7D98_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E7D98_Struct *unk24;
    u8 pad2[4];
    struct func_801E7D98_Floats *unk2C;
};

s32 func_801E7D98(s32 arg0, s32 arg1) {
    struct func_801E7D98_Struct *temp_v1;

    temp_v1 = ((struct func_801E7D98_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24;
    if (temp_v1 != NULL) {
        temp_v1->unk2C->unk4 = 5120.0f;
        ((struct func_801E7D98_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E7D98_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 0.0f;
        ((struct func_801E7D98_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        return 2;
    }
    return 1;
}
