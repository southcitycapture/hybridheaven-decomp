#include "context.h"

extern f32 D_801E96E4;
extern f32 D_801E96E8;

struct func_801E6800_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E6800_StructB {
    u8 pad0[0x2C];
    struct func_801E6800_StructC *unk2C;
};

struct func_801E6800_StructA {
    u8 pad0[8];
    struct func_801E6800_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E6800_StructB *unk24;
};

s32 func_801E6800(s32 arg0, s32 arg1) {
    struct func_801E6800_StructB *temp_v0;

    temp_v0 = ((struct func_801E6800_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E96E4;
        ((struct func_801E6800_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = -470.0f;
        ((struct func_801E6800_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E96E8;
        ((struct func_801E6800_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x160F;
        func_801CC470(2, 0x02A8000C, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
