#include "common.h"

extern f32 D_801FC868;
extern f32 D_801FC86C;

struct func_801EC5B4_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801EC5B4_Struct2 {
    u8 pad0[0x2C];
    struct func_801EC5B4_Struct3 *unk2C;
};

struct func_801EC5B4_Struct1 {
    u8 pad0[0x24];
    struct func_801EC5B4_Struct2 *unk24;
};

struct func_801EC5B4_Struct0 {
    u8 pad0[8];
    struct func_801EC5B4_Struct1 *unk8;
};

extern struct func_801EC5B4_Struct0 *D_801DAB14;

s32 func_801EC5B4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2424EE0) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = D_801FC868;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 15.5f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801FC86C;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1800;
        return 4;
    }
    return 3;
}
