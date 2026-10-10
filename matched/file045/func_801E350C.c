#include "context.h"

extern struct func_801E527C_Root func_801DAAF0;

struct func_801E350C_Vec {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801E350C_Holder {
    u8 pad0[0x2C];
    struct func_801E350C_Vec *unk2C;
};

struct func_801E350C_Mid {
    u8 pad0[0x24];
    struct func_801E350C_Holder *unk24;
};

struct func_801E350C_Head {
    u8 pad0[0x8];
    struct func_801E350C_Mid *unk8;
};

extern s32 func_801CE2D0(s32, s32);
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
extern f32 D_801E8C98;

s32 func_801E350C(s32 arg0, s32 arg1) {
    struct func_801E350C_Vec *temp_v0;

    if (func_801CE284() != 0) {
        return 7;
    }
    if ((func_801CE2D0(0x01B8003A, 0x2D) != 0) || (func_801CE2D0(0x01B8003A, 0x42) != 0)) {
        temp_v0 = (*(struct func_801E350C_Head **) ((u8 *) &func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x677, D_801E8C98, 1.0f);
    }
    return 6;
}
