#include "common.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E1E94(s32 arg0, s32 arg1) {
    f32 temp0 = 8.89999962f;
    f32 temp1 = 7.0999999f;
    f32 temp2;
    f32 temp3;

    goto l1;
l1:
    temp2 = 166.0f;
    temp3 = 41.5f;
    if (D_8038C17C(0.0f, 2.0f, 29.3f, 6.3f,
                   178.600006f, 30.5f, 6.0999999f, 176.300003f,
                   temp0, temp1, temp2,
                   temp0, temp1, temp2, temp3, temp3) != 0) {
        return 6;
    }
    return 5;
}
