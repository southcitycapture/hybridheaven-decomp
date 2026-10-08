#include "common.h"

typedef struct func_80361B7C_StructA {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 pad1[2];
    u8 unk2DB;
} func_80361B7C_StructA;

typedef struct func_80361B7C_StructB {
    u8 pad0[0x7C];
    s32 unk7C;
    s16 unk80;
    u8 pad1[2];
    u8 unk84;
} func_80361B7C_StructB;

typedef struct func_80361B7C_StructC {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad1[4];
    s32 unk1C;
} func_80361B7C_StructC;

void func_80361B7C(func_80361B7C_StructA *arg0, func_80361B7C_StructB *arg1, func_80361B7C_StructC *arg2) {
    arg1->unk80 = 2;
    if (arg0->unk2D8 == 0xD && arg0->unk2DB != 0) {
        arg1->unk7C = arg2->unk1C;
        arg1->unk84 = 4;
        return;
    }
    arg1->unk7C = arg2->unk14;
    arg1->unk84 = 1;
}
