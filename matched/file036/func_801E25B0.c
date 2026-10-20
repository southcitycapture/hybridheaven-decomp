#include "context.h"

extern f32 D_801E5094;
extern f32 D_801E5098;
extern f32 D_801E509C;
extern f32 D_801E50A0;
extern f32 D_801E50A4;
extern f32 D_801E50A8;
extern f32 D_801E50AC;
extern f32 D_801E50B0;

s32 func_801E25B0(s32 arg0, s32 arg1) {
    f32 k = D_801E5094;
    if (D_8038C17C(0.0f, 2.5f, 67.9f, 12.1f, -12.0f, D_801E5098, D_801E509C, D_801E50A0, D_801E50A4, D_801E50A8, D_801E50AC, 45.0f, 16.0f, D_801E50B0, k, k) != 0) {
        return 0xB;
    }
    return 0xA;
}
