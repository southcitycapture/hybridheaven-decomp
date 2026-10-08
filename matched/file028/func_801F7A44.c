#include "context.h"

extern f32 D_80208C18;

struct func_801F7A44_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F7A44_StructD {
    u8 pad0[0x2C];
    struct func_801F7A44_StructE *unk2C;
};

struct func_801F7A44_StructC {
    u8 pad0[0x24];
    struct func_801F7A44_StructD *unk24;
};

struct func_801F7A44_StructA {
    u8 pad0[8];
    struct func_801F7A44_StructA *unk8;
};

#define FUNC_801F7A44_C() ((struct func_801F7A44_StructC *)((struct func_801F7A44_StructA *)D_801DAB14)->unk8->unk8->unk8)

s32 func_801F7A44(s32 arg0, s32 arg1) {
    struct func_801F7A44_StructD *temp_v0;

    temp_v0 = FUNC_801F7A44_C()->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        FUNC_801F7A44_C()->unk24->unk2C->unk8 = 0.0f;
        FUNC_801F7A44_C()->unk24->unk2C->unkC = D_80208C18;
        FUNC_801F7A44_C()->unk24->unk2C->unk12 = 0xCFA;
        func_801CC470(2, 0x0320001A, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
