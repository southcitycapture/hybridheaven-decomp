#include "common.h"


extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E1C44(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 8.3f, -25.6f, 11.0f, -66.0f, -25.6f, 6.6f, -66.0f, 1.2f, 9.6f, -17.1f, 1.2f, 10.9f, -17.1f, 33.3f, 33.3f) != 0) {
        return 2;
    }
    return 1;
}
