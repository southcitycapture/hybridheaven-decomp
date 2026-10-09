#include "context.h"

extern f32 D_801FC8B8;
extern f32 D_801FC8BC;

struct func_801ED6B4_Struct5 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};
struct func_801ED6B4_Struct4 {
    u8 pad0[0x2C];
    struct func_801ED6B4_Struct5 *unk2C;
};
struct func_801ED6B4_Struct3 {
    u8 pad0[0x24];
    struct func_801ED6B4_Struct4 *unk24;
};
struct func_801ED6B4_Struct2 {
    u8 pad0[8];
    struct func_801ED6B4_Struct3 *unk8;
};
struct func_801ED6B4_Struct1 {
    u8 pad0[8];
    struct func_801ED6B4_Struct2 *unk8;
};

s32 func_801ED6B4(s32 arg0, s32 arg1)
{
    if (func_801C0B8C(0x054CC2BA) != 0) {
        ((struct func_801ED6B4_Struct1 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = D_801FC8B8;
        ((struct func_801ED6B4_Struct1 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801ED6B4_Struct1 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801FC8BC;
        ((struct func_801ED6B4_Struct1 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        return 0x16;
    }
    return 0x15;
}
