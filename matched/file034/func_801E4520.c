#include "context.h"
extern struct func_801E58F0_StructA *D_801DAB14;
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

struct func_801E4520_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E4520_StructB {
    u8 pad0[0x2C];
    struct func_801E4520_StructC *unk2C;
};

struct func_801E4520_StructA {
    u8 pad0[8];
    struct func_801E4520_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E4520_StructB *unk24;
};

extern f32 D_801E9604;

s32 func_801E4520(s32 arg0, s32 arg1) {
    struct func_801E4520_StructB *temp_v0;

    temp_v0 = ((struct func_801E4520_StructA *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -40.5f;
        ((struct func_801E4520_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk8 = -470.0f;
        ((struct func_801E4520_StructA *) D_801DAB14)->unk8->unk24->unk2C->unkC = D_801E9604;
        ((struct func_801E4520_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x160F;
        func_801CC470(0, 0x02A80028, 0, 1, 1.0f);
        return 3;
    }
    return 2;
}
