#include "context.h"

extern f32 D_80208A50;

struct func_801F3640_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801F3640_StructD {
    u8 pad0[0x2C];
    struct func_801F3640_StructE *unk2C;
};

struct func_801F3640_StructC {
    u8 pad0[8];
    struct func_801F3640_StructC *unk8;
    u8 pad1[0x18];
    struct func_801F3640_StructD *unk24;
};

#define FUNC_801F3640_OBJ (((struct func_801F3640_StructC *)D_801DAB14)->unk8->unk8->unk8->unk24)

s32 func_801F3640(s32 arg0, s32 arg1) {
    struct func_801F3640_StructD *temp_v0;

    temp_v0 = FUNC_801F3640_OBJ;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 24.0f;
        FUNC_801F3640_OBJ->unk2C->unk8 = 0.0f;
        FUNC_801F3640_OBJ->unk2C->unkC = D_80208A50;
        FUNC_801F3640_OBJ->unk2C->unk12 = 0x1000;
        func_801CC470(2, 0x0320001A, 0, 0, 1.0f);
        return 2;
    }
    return 1;
}
