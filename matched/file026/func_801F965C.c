#include "context.h"

extern f32 D_801FD418;

struct func_801F965C_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801F965C_Struct2 {
    u8 pad0[0x2C];
    struct func_801F965C_Struct3 *unk2C;
};

struct func_801F965C_Struct1 {
    u8 pad0[8];
    struct func_801F965C_Struct1 *unk8;
    u8 pad1[0x18];
    struct func_801F965C_Struct2 *unk24;
};

s32 func_801F965C(s32 arg0, s32 arg1) {
    u8 *root;

    if (func_801C0B8C(0xC7E3DF) != 0) {
        root = (u8 *)&func_801DAAF0;
        root += 0x24;
        (*(struct func_801F965C_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unk4 = -5.5f;
        (*(struct func_801F965C_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(struct func_801F965C_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801FD418;
        (*(struct func_801F965C_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x800;
        func_801CC470(2, 0x2A8001A, 0, 0, 2.0f);
        return 4;
    }
    return 3;
}
