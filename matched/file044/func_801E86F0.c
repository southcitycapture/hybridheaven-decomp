#include "context.h"

struct func_801E86F0_StructA;
struct func_801E86F0_StructB;
struct func_801E86F0_StructC;

extern f32 D_801EDDFC;
extern f32 D_801EDE00;

struct func_801E86F0_StructD {
    u8 pad0[0x24];
    struct func_801E86F0_StructA *unk24;
};

struct func_801E86F0_StructA {
    u8 pad0[8];
    struct func_801E86F0_StructA *unk8;
    u8 pad10[0x18];
    struct func_801E86F0_StructB *unk24;
};

struct func_801E86F0_StructB {
    u8 pad0[0x2C];
    struct func_801E86F0_StructC *unk2C;
};

struct func_801E86F0_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

s32 func_801E86F0(s32 arg0, s32 arg1)
{
    struct func_801E86F0_StructA **p;

    if (func_801C0B8C((u64) 0x20CE70) != 0) {
        p = (struct func_801E86F0_StructA **) (func_801DAAF0 + 0x24);
        p += 0;
        (*p)->unk8->unk8->unk24->unk2C->unk4 = D_801EDDFC;
        (*p)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*p)->unk8->unk8->unk24->unk2C->unkC = D_801EDE00;
        (*p)->unk8->unk8->unk24->unk2C->unk12 = 0xAC8;
        func_801CC470(1, 0x02A80052, 0, 0x100, 7.0f);
        return 0x15;
    }
    return 0x14;
}
