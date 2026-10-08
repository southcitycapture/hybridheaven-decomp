#include "common.h"

struct func_801E9134_StructE {
    u8 pad[0x8];
    f32 unk8;
};

struct func_801E9134_StructD {
    u8 pad[0x2C];
    struct func_801E9134_StructE *unk2C;
};

struct func_801E9134_StructC {
    u8 pad[0x24];
    struct func_801E9134_StructD *unk24;
};

struct func_801E9134_StructB {
    u8 pad[0x8];
    struct func_801E9134_StructC *unk8;
};

struct func_801E9134_StructA {
    u8 pad[0x8];
    struct func_801E9134_StructB *unk8;
};

s32 func_801CEDD4();                                /* extern */
void func_801C1000(s32, s32);                       /* extern */
extern f32 D_801ECFF8;
extern u8 func_801DAAF0[];

s32 func_801E9134(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        D_801ECFF8 = (*(struct func_801E9134_StructA **)(func_801DAAF0 + 0x24))->unk8->unk8->unk24->unk2C->unk8;
        func_801C1000(4, 1);
        return 0x2F;
    }
    return 0x2E;
}
