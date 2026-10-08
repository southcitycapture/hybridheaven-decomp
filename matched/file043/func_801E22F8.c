#include "context.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801EA0A8;
extern f32 D_801EA0AC;
extern f32 D_801EA0B0;
extern f32 D_801EA0B4;
extern f32 D_801EA0B8;
extern f32 D_801EA0BC;
extern f32 D_801EA0C0;
extern f32 D_801EA0C4;

s32 func_801E22F8(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, -81.7f, 8.5f, D_801EA0A8, D_801EA0AC, D_801EA0B0, D_801EA0B4, D_801EA0B8, D_801EA0BC, 121.5f, -87.0f, D_801EA0C0, D_801EA0C4, 41.5f, 41.5f) != 0) {
        return 0xE;
    }
    return 0xD;
}
