#include "context.h"

extern f32 D_801E87BC;
extern f32 D_801E87C0;
extern f32 D_801E87C4;
extern f32 D_801E87C8;
extern f32 D_801E87CC;
extern f32 D_801E87D0;
extern f32 D_801E87D4;
extern f32 D_801E87D8;
extern f32 D_801E87DC;
extern f32 D_801E87E0;

s32 func_801E2820(s32 arg0, s32 arg1) {
    f32 x = 50.5f;
    if (D_8038C17C(0.0f, 4.0f, 0x43ED0CCD, 0x4406199A, D_801E87BC, D_801E87C0, D_801E87C4, D_801E87C8, D_801E87CC, D_801E87D0, D_801E87D4, D_801E87D8, D_801E87DC, D_801E87E0, x, x) != 0) {
        return 0x1E;
    }
    return 0x1D;
}
