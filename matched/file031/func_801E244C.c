#include "context.h"

struct func_801E244C_Struct1 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E244C_Struct2 {
    u8 pad0[0x2C];
    struct func_801E244C_Struct1 *unk2C;
};

struct func_801E244C_Struct0 {
    u8 pad0[8];
    struct func_801E244C_Struct0 *unk8;
    u8 pad1[0x18];
    struct func_801E244C_Struct2 *unk24;
};

extern void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E244C(s32 arg0, s32 arg1) {
    struct func_801E244C_Struct2 *temp_v0;
    struct func_801E244C_Struct0 **ptr;

    ptr = (struct func_801E244C_Struct0 **)&D_801DAB14;
    temp_v0 = (*ptr)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -4.0f;
        ptr = (struct func_801E244C_Struct0 **)&D_801DAB14;
        (*ptr)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ptr = (struct func_801E244C_Struct0 **)&D_801DAB14;
        (*ptr)->unk8->unk8->unk8->unk24->unk2C->unkC = -39.0f;
        ptr = (struct func_801E244C_Struct0 **)&D_801DAB14;
        (*ptr)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xC71;
        func_801CC470(2, 0x0320001A, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}
