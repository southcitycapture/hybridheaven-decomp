#include "context.h"

extern f32 D_801E9608;

struct func_801E481C_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E481C_StructB {
    u8 pad0[0x2C];
    struct func_801E481C_StructC *unk2C;
};

struct func_801E481C_StructA {
    u8 pad0[8];
    struct func_801E481C_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E481C_StructB *unk24;
};

s32 func_801E481C(s32 arg0, s32 arg1) {
    struct func_801E481C_StructA **pp;
    s32 addr;

    if (func_801C0B8C(0x16E360) != 0) {
        addr = (s32) (func_801DAAF0 + 0x24);
        pp = (struct func_801E481C_StructA **) addr;
        ((*pp)->unk8->unk24->unk2C)->unk4 = -51.5f;
        ((*pp)->unk8->unk24->unk2C)->unk8 = -470.0f;
        ((*pp)->unk8->unk24->unk2C)->unkC = D_801E9608;
        ((*pp)->unk8->unk24->unk2C)->unk12 = 0x1C61;
        func_801CC470(0, 0x02A80023, 0, 0x1000, 5.0f);
        func_801C1000(4, 0);
        return 0x13;
    }
    return 0x12;
}
