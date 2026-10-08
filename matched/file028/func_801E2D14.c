#include "context.h"

extern s32 func_801CD098(s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E2D14(s32 arg0, s32 arg1) {
    if (func_801CD098(0, 0, 0x40400000, 0.0f, 200.0f, 255.0f, 0.0f, 200.0f, 255.0f, 0.0f, 0.0f, -100.0f, 0.0f, 0.0f, 100.0f) != 0) {
        return 5;
    }
    return 4;
}
