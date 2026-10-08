#include "common.h"

extern u8 D_801BBBF0[];

struct func_8038BD50_StructB {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};

struct func_8038BD50_StructA {
    u8 pad[0x2C];
    struct func_8038BD50_StructB *unk2C;
};

struct func_8038BD50_StructG {
    u8 pad[0xE8];
    struct func_8038BD50_StructA *unkE8;
};

void func_8038BD50(f32 arg0, f32 arg1, f32 arg2) {
    ((struct func_8038BD50_StructG *) D_801BBBF0)->unkE8->unk2C->unk30 = arg0;
    ((struct func_8038BD50_StructG *) D_801BBBF0)->unkE8->unk2C->unk34 = arg1;
    ((struct func_8038BD50_StructG *) D_801BBBF0)->unkE8->unk2C->unk38 = arg2;
}
