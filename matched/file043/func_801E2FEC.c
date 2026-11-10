#include "common.h"
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);


extern f32 D_801EA168;
extern f32 D_801EA16C;
extern f32 D_801EA170;
extern f32 D_801EA174;
extern f32 D_801EA178;

s32 func_801E2FEC(s32 arg0, s32 arg1) {
    f32 x = D_801EA168;
    f32 y = 17.0f;
    f32 z = D_801EA16C;
    f32 w = D_801EA170;
    if (D_8038C17C(0.0f, 3.0f, -75.9f, 14.3f,
                   D_801EA174, D_801EA178, 16.0f, 100.5f,
                   x, y, z, x, y, z, w, w) != 0) {
        return 0x31;
    }
    return 0x30;
}
