#include "context.h"

struct func_801E66F8_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E66F8_StructB {
    u8 pad0[0x2C];
    struct func_801E66F8_StructC *unk2C;
};

struct func_801E66F8_StructA {
    u8 pad0[8];
    struct func_801E66F8_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E66F8_StructB *unk24;
};

extern u8 D_801DAB14[];

s32 func_801E66F8(s32 arg0, s32 arg1) {
    struct func_801E66F8_StructA *volatile *temp_v1;
    struct func_801E66F8_StructB *temp_v0;

    temp_v1 = (struct func_801E66F8_StructA *volatile *)D_801DAB14;
    temp_v0 = (*temp_v1)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        (*temp_v1)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*temp_v1)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -39.0f;
        (*temp_v1)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xC71;
        func_801CC470(3, 0x02A80002, 0, 0, 12.0f);
        return 2;
    }
    return 1;
}
