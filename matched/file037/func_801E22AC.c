#include "common.h"

extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
s32 func_801E22AC(s32 arg0, s32 arg1) {
    f32 a = 3.4000001f;
    f32 b = (-10.8999996f);
    f32 c = 21.2999992f;
    f32 d = 61.4000015f;
    if (D_8038C17C(0.0f, 2.0f, -68.0f, 27.9f, 64.9000015f, (-56.7000008f), 37.2000008f, 56.2999992f, a, b, c, a, b, c, d, d) != 0) {
        D_8038C158();
        return 9;
    }
    return 8;
}
