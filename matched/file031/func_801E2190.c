#include "common.h"

struct func_801E2190_Struct2C {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E2190_StructC {
    u8 pad0[0x2C];
    struct func_801E2190_Struct2C *unk2C;
};

struct func_801E2190_StructB {
    u8 pad0[0x24];
    struct func_801E2190_StructC *unk24;
};

struct func_801E2190_StructA {
    u8 pad0[8];
    struct func_801E2190_StructB *unk8;
};

extern struct func_801E2190_StructA *D_801DAB14;
void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E2190(s32 arg0, s32 arg1) {
    struct func_801E2190_StructC *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 11.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = -30.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1333;
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 3;
    }
    return 2;
}
