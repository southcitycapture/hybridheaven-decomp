#include "common.h"

extern s32 D_801E68E0;
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
s32 func_801E284C(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, -30.3f, 39.9f, 40.0f, (-45.0999985f), 62.3000031f, 32.0999985f, -43.5f, 45.9000015f, 52.0f, -48.0f, 74.1999969f, 52.7000008f, 50.5f, 50.5f) != 0) {
        D_801E68E0 = 0;
        return 0xF;
    }
    return 0xE;
}
