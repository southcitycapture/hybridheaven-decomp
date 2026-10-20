#define func_8038BEF8 func_8038BEF8__proto
#include "context.h"
#undef func_8038BEF8

extern f32 D_801F5668;
extern f32 D_801F566C;
extern f32 D_801F5670;
extern f32 D_801F5674;
extern f32 D_801F5678;
extern f32 D_801F567C;
extern f32 D_801F5680;
extern f32 D_801F5684;

s32 func_801E1DE0(s32 arg0, s32 arg1) {
    extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
    if (func_8038BEF8(0.0f, 4.0f, -1.6f, 16.6f,
                      D_801F5668, -3.0f, D_801F566C, D_801F5670, D_801F5674, 11.5f,
                      D_801F5678, D_801F567C, D_801F5680, D_801F5684) != 0) {
        return 6;
    }
    return 5;
}
