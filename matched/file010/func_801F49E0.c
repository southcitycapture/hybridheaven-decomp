#include "context.h"

struct func_801F49E0_Inner {
    u8 pad0[0x4];
    s32 unk4;
    u8 pad1[0x4];
    f32 unkC;
};

s32 func_801F46DC(s32 a0, s16 *a1, s16 *a2, s32 a3, f32 a4);

s32 func_801F49E0(s32 a0) {
    s16 sp26;
    s16 sp24;
    s32 var_v0;

    func_801F46DC(a0, &sp26, &sp24, ((struct func_801F49E0_Inner *)D_801BBCD0->unk2C)->unk4, ((struct func_801F49E0_Inner *)D_801BBCD0->unk2C)->unkC);
    if (sp24 & 0x1000) {
        var_v0 = (sp24 & 0x1FFF) - 0x2000;
    } else {
        var_v0 = sp24 & 0x1FFF;
    }
    if (var_v0 < 0) {
        return 1;
    }
    return 0;
}
