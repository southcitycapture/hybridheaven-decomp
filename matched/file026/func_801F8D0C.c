#include "context.h"

extern f32 D_801FD3F4;

struct func_801F8D0C_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801F8D0C_Struct2 {
    u8 pad0[0x2C];
    struct func_801F8D0C_Struct3 *unk2C;
};

struct func_801F8D0C_Struct1 {
    u8 pad0[8];
    struct func_801F8D0C_Struct1 *unk8;
    u8 pad1[0x18];
    struct func_801F8D0C_Struct2 *unk24;
};

s32 func_801F8D0C(s32 arg0, s32 arg1) {
    struct func_801F8D0C_Struct1 **pp;

    if (func_801C0B8C(0x017EFEDF) != 0) {
        pp = (struct func_801F8D0C_Struct1 **) &func_801DAAF0.unk24;
        pp += 0;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = D_801FD3F4;
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x01B80023, 0, 0x1100, 3.0f);
        return 4;
    }
    return 3;
}
