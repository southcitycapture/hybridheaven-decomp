#include "common.h"
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


s32 func_801E2A04(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 0.15999997f, 93.7f, 8.6f, -4.8f, 63.0f, 11.1f, -1.0f,
                   46.0f, 12.6f, 1.1f, 46.0f, 12.6f, 1.1f, 33.3f, 33.3f) != 0) {
        return 0x2D;
    }
    return 0x2C;
}
