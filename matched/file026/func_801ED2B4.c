#include "context.h"

struct func_801ED2B4_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801ED2B4_Struct2 {
    u8 pad0[0x2C];
    struct func_801ED2B4_Struct3 *unk2C;
};
struct func_801ED2B4_Struct1 {
    u8 pad0[8];
    struct func_801ED2B4_Struct1 *unk8;
    u8 pad1[0x18];
    struct func_801ED2B4_Struct2 *unk24;
};

extern f32 D_801FC89C;

s32 func_801ED2B4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03920060) != 0) {
        ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = 50.0f;
        ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = -11.0f;
        ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x01B8000E, 0, 0x100, 2.0f);
        return 0xE;
    }
    ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = ((struct func_801ED2B4_Struct1 *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 - D_801FC89C;
    return 0xD;
}
