#include "context.h"

struct func_801E5320_Struct1 {
    u8 pad0[0x8];
    struct func_801E5320_Struct2 *unk8;
};

struct func_801E5320_Struct2 {
    u8 pad0[0x24];
    struct func_801E5320_Struct3 *unk24;
};

struct func_801E5320_Struct3 {
    u8 pad0[0x2C];
    struct func_801E5320_Struct4 *unk2C;
};

struct func_801E5320_Struct4 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};

extern f32 D_801E8CE8;
extern f32 D_801E8CEC;
extern struct func_801E5320_Struct1 *D_801DAB14;
extern void func_801CC470(s32, s32, s32, s32, f32);

s32 func_801E5320(s32 arg0, s32 arg1) {
    struct func_801E5320_Struct3 *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E8CE8;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801E8CEC;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(0, 0x01B80025, 0, 0x100, 9.0f);
        return 3;
    }
    return 2;
}
