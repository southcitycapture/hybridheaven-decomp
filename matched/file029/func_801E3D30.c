#include "context.h"

struct func_801E3D30_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801E3D30_Struct {
    u8 pad0[8];
    struct func_801E3D30_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E3D30_Struct *unk24;
    u8 pad2[4];
    struct func_801E3D30_Vec *unk2C;
};

extern f32 D_801E6B04;

s32 func_801C0DE4(s32, s32, s32);
void func_801C0EB0(s32, s32);
s32 func_801CE2D0(s32, s32);
void func_8038D33C(f32, f32, s32, s32, f32, f32);

s32 func_801E3D30(s32 arg0, s32 arg1) {
    struct func_801E3D30_Vec *v0;

    if (func_801C0DE4(4, 0, 0x40800002) != 0) {
        func_801C0EB0(4, 0);
        return 0x12;
    }
    if ((func_801CE2D0(0x0168001F, 0) != 0) || (func_801CE2D0(0x0168001F, 0x10) != 0)) {
        v0 = (*(struct func_801E3D30_Struct **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(v0->unk4, v0->unk8, v0->unkC, 0x6A7, D_801E6B04, 1.0f);
    }
    return 0x11;
}
