#include "context.h"

extern void func_8038D33C(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5);
extern s32 func_801CE2D0(s32 arg0, s32 arg1);
extern f32 D_801E9664;

struct func_801E5568_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_801E5568_StructB {
    u8 pad0[0x2C];
    struct func_801E5568_StructC *unk2C;
};
struct func_801E5568_StructA {
    u8 pad0[8];
    struct func_801E5568_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E5568_StructB *unk24;
};

s32 func_801E5568(s32 arg0, s32 arg1) {
    struct func_801E5568_StructC *temp_v0;

    if (func_801CE284() != 0) {
        return 0x26;
    }
    if ((func_801CE2D0(0x01900027, 4) != 0) || (func_801CE2D0(0x01900027, 9) != 0)) {
        temp_v0 = (*(struct func_801E5568_StructA **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x680, D_801E9664, 1.0f);
    }
    return 0x25;
}
