#include "common.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E2FEC(s32 arg0, s32 arg1) {
    f32 x = (-87.8000031f);
    f32 y = 17.0f;
    f32 z = 118.900002f;
    f32 w = 16.3999996f;
    if (D_8038C17C(0.0f, 3.0f, -75.9f, 14.3f,
                   100.599998f, (-75.8000031f), 16.0f, 100.5f,
                   x, y, z, x, y, z, w, w) != 0) {
        return 0x31;
    }
    return 0x30;
}
