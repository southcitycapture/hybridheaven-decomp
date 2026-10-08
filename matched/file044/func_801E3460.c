#include "context.h"

extern s32 func_801CD098(s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E3460(s32 arg0, s32 arg1) {
    if (func_801CD098(2, 2, 3.0f, 127.0f, 255.0f, 255.0f, 0.0f, 0.0f, 0.0f, 32.0f, 64.0f, -32.0f, 32.0f, 64.0f, -32.0f) != 0) {
        return 3;
    }
    return 2;
}
