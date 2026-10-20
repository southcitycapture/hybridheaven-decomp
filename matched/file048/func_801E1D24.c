#include "context.h"
extern f32 D_801EA480;
extern f32 D_801EA484;
extern f32 D_801EA488;
extern f32 D_801EA48C;
extern f32 D_801EA490;
extern f32 D_801EA494;
extern f32 D_801EA498;
extern f32 D_801EA49C;

s32 func_801E1D24(s32 arg0, s32 arg1) {
    f32 a = D_801EA480;
    f32 b = D_801EA484;
    if (D_8038C17C(0.0f, 2.0f, 0.0f, 0x41180000, D_801EA488, D_801EA48C, D_801EA490, D_801EA494, 0.0f, D_801EA498, a, 1.5f, D_801EA49C, a, b, b) != 0) {
        return 3;
    }
    return 2;
}
