#include "common.h"
extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);


s32 func_801E1D18(s32 arg0, s32 arg1) {
    f32 a;
    a = 8.9f;
    if (D_8038C17C(0.0f, 2.0f, 14.5f, -7.7f,
        26.2f, 23.7f, -2.0f, 27.3f,
        a, 15.5f, -0.4f, a, 15.5f, -0.4f, 43.6f, 43.6f) != 0) {
        D_8038C158();
        return 3;
    }
    return 2;
}
