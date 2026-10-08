#include "context.h"

struct func_801E5A44_StructF {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E5A44_StructE {
    u8 pad0[0x2C];
    struct func_801E5A44_StructF *unk2C;
};

struct func_801E5A44_StructD {
    u8 pad0[8];
    struct func_801E5A44_StructD *unk8;
    u8 pad1[0x18];
    struct func_801E5A44_StructE *unk24;
};

s32 func_801E5A44(s32 arg0, s32 arg1) {
    struct func_801E5A44_StructE *temp_v0;

    temp_v0 = ((struct func_801E5A44_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801E5A44_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E5A44_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 0.0f;
        ((struct func_801E5A44_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(4, 0x03480000, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}
