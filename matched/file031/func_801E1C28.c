#include "context.h"

extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E2DF0;
extern f32 D_801E2DF4;
extern f32 D_801E2DF8;
extern f32 D_801E2DFC;
extern f32 D_801E2E00;
extern f32 D_801E2E04;
extern f32 D_801E2E08;
extern f32 D_801E2E0C;
extern f32 D_801E2E10;

s32 func_801E1C28(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.5f, 78.7f, 113.2f, D_801E2DF0, D_801E2DF4, D_801E2DF8, 30.0f, D_801E2DFC, D_801E2E00, D_801E2E04, D_801E2E08, D_801E2E0C, D_801E2E10) != 0) {
        return 2;
    }
    return 1;
}
