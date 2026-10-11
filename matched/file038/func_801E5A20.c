#include "context.h"

extern f32 D_801E72B8;

struct func_801E5A20_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E5A20_Struct2 {
    u8 pad0[0x2C];
    struct func_801E5A20_Struct3 *unk2C;
};

struct func_801E5A20_Struct1 {
    u8 pad0[8];
    struct func_801E5A20_Struct1 *unk8;
    u8 pad1[0x18];
    struct func_801E5A20_Struct2 *unk24;
};

s32 func_801E5A20(s32 arg0, s32 arg1) {
    u8 *root;

    if (func_801C0B8C(0xB61695) != 0) {
        root = (u8 *)&func_801DAAF0;
        root += 0x24;
        (*(struct func_801E5A20_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unk4 = -38.0f;
        (*(struct func_801E5A20_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(struct func_801E5A20_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E72B8;
        (*(struct func_801E5A20_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1B8E;
        func_801CC470(2, 0x03480066, 0, 1, 1.0f);
        return 9;
    }
    return 8;
}
