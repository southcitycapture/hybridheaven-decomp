#include "common.h"

extern s32 func_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E2C88(s32 arg0, s32 arg1) {
    if (func_8038C17C(0.0f, 0.7333336f, -30.7f, 0.0f, 51.1f, -27.7f, 3.2f, 39.8f, -57.1f, 11.0f, 57.1f, -57.1f, 11.0f, 57.1f, 41.5f, 23.1f) != 0) {
        return 0x1E;
    }
    return 0x1D;
}
