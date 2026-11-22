#include "common.h"

extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
s32 func_801E276C(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.0f, -54.9f, 61.5f, 59.5999985f, (-55.5999985f), 81.6999969f, 60.4000015f, -40.0f, 5.4000001f, 35.2999992f, (-35.9000015f), 9.10000038f, 29.2999992f, 50.5f, 50.5f)) {
        D_8038C158();
        return 0xE;
    }
    return 0xD;
}
