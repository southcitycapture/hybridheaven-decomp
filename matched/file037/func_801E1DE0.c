#include "common.h"

extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
s32 func_801E1DE0(s32 arg0, s32 arg1) {
    f32 temp = 45.7999992f;

    if (D_8038C17C(0.0f, 2.0f, 7.2f, 8.2f,
        12.8000002f, 7.69999981f, 7.0f, 12.1000004f,
        8.30000019f, 16.2999992f, (-0.699999988f), 8.80000019f,
        15.1000004f, (-1.39999998f), temp, temp) != 0) {
        D_8038C158();
        return 4;
    }
    return 3;
}
