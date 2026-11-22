#include "common.h"

extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
s32 func_801E2698(s32 arg0, s32 arg1) {
    f32 v0;
    f32 v1;
    f32 v2;
    f32 v3;

    v0 = (-27.1000004f);
    v1 = 79.5999985f;
    v2 = 17.7000008f;
    v3 = 74.5999985f;
    if (D_8038C17C(0.0f, 1.0f, v0, v1, v2, v0, v1, v2, (-45.7999992f), 17.7999992f,
                   52.9000015f, -53.5f, 20.7999992f, 52.0999985f, v3, v3) != 0) {
        D_8038C158();
        return 0xD;
    }
    return 0xC;
}
