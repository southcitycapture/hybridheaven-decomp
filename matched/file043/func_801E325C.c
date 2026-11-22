#include "common.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_801E325C(s32 arg0, s32 arg1) {
    f32 x;
    f32 y;

    do {
        x = (-85.3000031f);
        y = 13.6999998f;
    } while (0);
    if (D_8038C17C(0.0f, 8.0f, -84.0f, 8.9f,
            97.0f, (-98.8000031f), 8.10000038f, 102.699997f,
            x, y, 116.5f,
            x, y, 116.5f, 41.5f, 41.5f) != 0) {
        return 0x38;
    }
    return 0x37;
}
