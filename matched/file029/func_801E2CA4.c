#include "context.h"

extern f32 D_801E6AB4;
extern f32 D_801E6AB8;
extern f32 D_801E6ABC;
extern f32 D_801E6AC0;
extern f32 D_801E6AC4;
extern f32 D_801E6AC8;

s32 func_801E2CA4(s32 arg0, s32 arg1) {
    f32 temp_ab4;
    f32 temp_ab8;
    f32 temp_abc;

    temp_ab4 = D_801E6AB4;
    temp_ab8 = D_801E6AB8;
    temp_abc = D_801E6ABC;
    if (func_8038BEF8(0.0f, D_801E6AC0, 0.6f, 14.9f, D_801E6AC4, 0.5f, 15.0f, D_801E6AC8, temp_ab4, temp_ab8, temp_abc, temp_ab4, temp_ab8, temp_abc) != 0) {
        func_8038BED4();
        return 0x23;
    }
    return 0x22;
}
