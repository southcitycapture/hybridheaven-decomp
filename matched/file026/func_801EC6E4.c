#include "context.h"

struct func_801EC6E4_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801EC6E4_Struct2 {
    u8 pad0[0x2C];
    struct func_801EC6E4_Struct3 *unk2C;
};

struct func_801EC6E4_Struct1 {
    u8 pad0[0x24];
    struct func_801EC6E4_Struct2 *unk24;
};

struct func_801EC6E4_Struct0 {
    u8 pad0[8];
    struct func_801EC6E4_Struct1 *unk8;
};

extern f32 D_801FC870;

s32 func_801EC6E4(s32 arg0, s32 arg1) {
    struct func_801EC6E4_Struct0 **pp;

    if (func_801C0B8C(0x02A57D80) != 0) {
        pp = (struct func_801EC6E4_Struct0 **)&func_801DAAF0;
        pp += 9;
        (*pp)->unk8->unk24->unk2C->unk4 = 87.0f;
        (*pp)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk24->unk2C->unkC = D_801FC870;
        (*pp)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(0, 0x01680003, 0, 0x100, 1.0f);
        return 6;
    }
    return 5;
}
