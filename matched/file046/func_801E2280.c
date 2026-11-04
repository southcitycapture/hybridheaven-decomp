#include "common.h"
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


s32 func_801E2280(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, 26.3f, 10.8f,
                   186.0f, 26.3f, 18.8f, 186.0f,
                   35.9f, 15.9f, 207.0f, 35.9f,
                   24.0f, 207.0f, 33.3f, 33.3f) != 0) {
        return 0x12;
    }
    return 0x11;
}
