#include "common.h"
extern s32 func_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


s32 func_801E1EAC(s32 arg0, s32 arg1) {
    if (func_8038C17C(0.0f, 2.0f, -6.7f, 16.5f,
                   61.6f, 0.0f, 16.5f, 61.6f,
                   14.5f, 19.6f, -1.8f, 0.0f,
                   19.6f, -1.8f, 33.3f, 33.3f)) {
        return 6;
    }
    return 5;
}
