#include "context.h"

struct func_801E6DE8_StructB {
    u8 pad0[0x8];
    struct func_801E6DE8_StructC *unk8;
};

struct func_801E6DE8_StructC {
    u8 pad0[0x24];
    struct func_801E6DE8_StructD *unk24;
};

struct func_801E6DE8_StructD {
    u8 pad0[0x2C];
    struct func_801E6DE8_StructE *unk2C;
};

struct func_801E6DE8_StructE {
    u8 pad0[0x12];
    s16 unk12;
};

struct func_801E6DE8_StructA {
    u8 pad0[0x24];
    struct func_801E6DE8_StructB *unk24;
};

extern s32 func_801CE284(void);
extern void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E6DE8(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        ((struct func_801E6DE8_StructA *)func_801DAAF0)->unk24->unk8->unk24->unk2C->unk12 = 0x1C00;
        func_801CC470(0, 0x04100026, 0, 0x100, 3.0f);
        return 0xD;
    }
    return 0xC;
}
