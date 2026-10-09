#include "context.h"

struct func_801F7DE4_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801F7DE4_Mid {
    u8 pad0[0x2C];
    struct func_801F7DE4_Obj *unk2C;
};

struct func_801F7DE4_Struct {
    u8 pad0[8];
    struct func_801F7DE4_Struct *unk8;
    u8 pad1[0x18];
    struct func_801F7DE4_Mid *unk24;
};

s32 func_801F7DE4(s32 arg0, s32 arg1) {
    struct func_801F7DE4_Mid *temp_v0;

    temp_v0 = ((struct func_801F7DE4_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801F7DE4_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 2.0f;
        ((struct func_801F7DE4_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -29.0f;
        ((struct func_801F7DE4_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1DDD;
        func_801CC470(3, 0x03200000, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
