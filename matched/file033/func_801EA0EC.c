#include "context.h"

extern f32 D_801F49A4;
extern f32 D_801F49A8;
extern f32 D_801F49AC;
extern f32 D_801F49B0;
extern f32 D_801F49B4;
extern f32 D_801F49B8;
extern f32 D_801F49BC;
extern f32 D_801F49C0;
extern f32 D_801F49C4;
extern f32 D_801F49C8;

s32 func_801EA0EC(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, D_801F49A4, 4.4f, 38.8f,
        D_801F49A8, D_801F49AC, D_801F49B0, D_801F49B4,
        D_801F49B8, D_801F49BC, -45.5f, D_801F49C0,
        D_801F49C4, D_801F49C8) != 0) {
        return 0x3F;
    }
    return 0x3E;
}
