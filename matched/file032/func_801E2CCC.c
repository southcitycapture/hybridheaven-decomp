#include "context.h"

extern f32 D_801EB954;
extern f32 D_801EB958;
extern f32 D_801EB95C;
extern f32 D_801EB960;
extern f32 D_801EB964;
extern f32 D_801EB968;
extern f32 D_801EB96C;

s32 func_801E2CCC(s32 arg0, s32 arg1) {
    f32 temp_a;
    f32 temp_b;
    f32 temp_c;

    temp_a = D_801EB954;
    temp_b = D_801EB958;
    temp_c = D_801EB95C;
    if (func_8038BEF8(0.0f, 2.0f, 0x41000000, 0x41033333, D_801EB960, D_801EB964, D_801EB968, D_801EB96C, temp_a, temp_b, temp_c, temp_a, temp_b, temp_c) != 0) {
        return 0x34;
    }
    return 0x33;
}
