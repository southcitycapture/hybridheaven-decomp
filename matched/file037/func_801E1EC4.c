#include "common.h"

extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
s32 func_801E1EC4(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 0.800000191f, 7.1f, 35.7f, -32.0f, 5.5f, 44.2000008f, (-31.3999996f), 19.5f, 41.4000015f, (-16.2999992f), 15.1999998f, 51.2000008f, (-21.2000008f), 71.0f, 71.0f)) {
        D_8038C158();
        return 5;
    }
    return 4;
}
