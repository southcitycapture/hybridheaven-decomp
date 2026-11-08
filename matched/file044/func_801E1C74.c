#include "common.h"
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


s32 func_801E1C74(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, 48.0f, 6.7, -106.0f, 48.0f, 2.1f, -106.0f, 48.0f,
                   14.9f, -48.0f, 48.0f, 14.9f, -48.0f, 33.3f, 33.3f) != 0) {
        return 2;
    }
    return 1;
}
