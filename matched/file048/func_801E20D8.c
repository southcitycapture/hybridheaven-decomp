#include "context.h"

extern s32 func_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801EA4DC;
extern f32 D_801EA4E0;
extern f32 D_801EA4E4;
extern f32 D_801EA4E8;
extern f32 D_801EA4EC;

s32 func_801E20D8(s32 arg0, s32 arg1) {
    f32 x;
    f32 y;

    do {
        x = D_801EA4DC;
        y = D_801EA4E0;
    } while (0);
    if (func_8038C17C(0.0f, D_801EA4E4, 0.0f, x,
                      y, 0.0f, x, y,
                      0.0f, 13.0f, 43.5f, 0.0f, 13.0f, 43.5f,
                      D_801EA4E8, D_801EA4EC) != 0) {
        return 10;
    }
    return 9;
}
