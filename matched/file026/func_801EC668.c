#include "common.h"

struct func_801EC668_StructE {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_801EC668_StructD {
    u8 pad0[0x2C];
    struct func_801EC668_StructE *unk2C;
};

struct func_801EC668_StructC {
    u8 pad0[0x24];
    struct func_801EC668_StructD *unk24;
};

struct func_801EC668_StructB {
    u8 pad0[0x8];
    struct func_801EC668_StructC *unk8;
};

struct func_801EC668_StructA {
    u8 pad0[0x24];
    struct func_801EC668_StructB *unk24;
};

extern void func_801CC470(s32, s32, s32, s32, f32);
extern struct func_801EC668_StructA func_801DAAF0;

s32 func_801EC668(s32 arg0, s32 arg1) {
    if (func_801DAAF0.unk24->unk8->unk24->unk2C->unk8 <= 0.0f) {
        func_801CC470(0, 0x01B80014, 0, 0x100, 1.0f);
        return 5;
    }
    return 4;
}
