#include "context.h"
extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801F5910;
extern f32 D_801F5914;
extern f32 D_801F5918;
extern f32 D_801F591C;
extern f32 D_801F5920;
extern f32 D_801F5924;
extern f32 D_801F5928;

s32 func_801EA97C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, D_801F5910, -9.7f, -41.6f, D_801F5914, 12.0f, D_801F5918, D_801F591C, 1.0f, D_801F5920, D_801F5924, D_801F5928, 43.0f, -28.0f) != 0) {
        return 2;
    }
    return 1;
}
