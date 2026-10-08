#include "common.h"

struct func_801E5908_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E5908_StructC {
    u8 pad0[0x2C];
    struct func_801E5908_StructD *unk2C;
};

struct func_801E5908_StructB {
    u8 pad0[0x24];
    struct func_801E5908_StructC *unk24;
};

struct func_801E5908_StructA {
    u8 pad0[8];
    struct func_801E5908_StructB *unk8;
};

extern void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern void func_8038D28C(s32 arg0);
extern struct func_801E5908_StructA *D_801DAB14;

s32 func_801E5908(s32 arg0, s32 arg1) {
    struct func_801E5908_StructC *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = -300.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x03480028, 0, 0x100, 10.0f);
        func_8038D28C(0x1FB);
        return 3;
    }
    return 2;
}
