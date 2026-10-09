#include "context.h"

struct func_801F0480_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801F0480_StructC {
    u8 pad0[0x2C];
    struct func_801F0480_StructD *unk2C;
};

struct func_801F0480_StructB {
    u8 pad0[0x24];
    struct func_801F0480_StructC *unk24;
};

struct func_801F0480_StructA {
    u8 pad0[8];
    struct func_801F0480_StructB *unk8;
};

struct func_801F0480_Root {
    u8 pad0[0x24];
    struct func_801F0480_StructA *unk24;
};

extern s32 func_801CFE28(s32 a0, s32 a1);
extern s32 func_801CFD50(void);
extern void func_8038D33C(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5);
extern f32 D_801F5A34;

s32 func_801F0480(s32 arg0, s32 arg1) {
    struct func_801F0480_StructD *temp_v0;

    if (func_801CFE28(0x03480012, 0xDE) != 0) {
        temp_v0 = ((struct func_801F0480_Root *)func_801DAAF0)->unk24->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x164, D_801F5A34, 1.0f);
    }
    if (func_801CFD50() != 0) {
        return 6;
    }
    return 5;
}
