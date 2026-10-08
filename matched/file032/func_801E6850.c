#include "common.h"

extern f32 D_801EB9B0;
extern f32 D_801EB9B4;
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);

struct func_801E6850_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E6850_StructB {
    u8 pad0[0x2C];
    struct func_801E6850_StructC *unk2C;
};

struct func_801E6850_StructA {
    u8 pad0[8];
    struct func_801E6850_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E6850_StructB *unk24;
};

struct func_801E6850_StructRoot {
    u8 pad0[0x24];
    struct func_801E6850_StructA *unk24;
};

extern struct func_801E6850_StructRoot func_801DAAF0;

s32 func_801E6850(s32 arg0, s32 arg1) {
    struct func_801E6850_StructA **pp;

    if (func_801C0B8C(0) != 0) {
        pp = (struct func_801E6850_StructA **)&func_801DAAF0;
        pp += 9;
        (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801EB9B0;
        (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801EB9B4;
        (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(3, 0x02A80002, 0, 1, 1.0f);
        return 7;
    }
    return 6;
}
