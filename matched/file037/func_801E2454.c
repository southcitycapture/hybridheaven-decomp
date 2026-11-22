#include "common.h"

extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
s32 func_801E2454(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.0f, -32.6f, 16.4f, 41.7000008f, -34.0f, 15.8999996f, 51.5999985f, (-50.0999985f), 22.8999996f, 58.9000015f, (-50.2000008f), 22.3999996f, 61.5f, 32.5f, 29.5f) != 0) {
        D_8038C158();
        return 0xB;
    }
    return 0xA;
}
