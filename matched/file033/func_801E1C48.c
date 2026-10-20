#include "context.h"
s32 func_8038BEF8(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);

extern f32 D_801F44F4;
extern f32 D_801F44F8;
extern f32 D_801F44FC;
extern f32 D_801F4500;
extern f32 D_801F4504;
extern f32 D_801F4508;
extern f32 D_801F450C;
extern f32 D_801F4510;

s32 func_801E1C48(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 6.0f, 6.3f, 21.6f, 63.0f, D_801F44F4, D_801F44F8, D_801F44FC, 0.0f, D_801F4500, D_801F4504, D_801F4508, D_801F450C, D_801F4510) != 0) {
        func_8038BED4();
        return 2;
    }
    return 1;
}
