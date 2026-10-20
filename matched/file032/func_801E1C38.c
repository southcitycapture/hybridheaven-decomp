#include "context.h"
s32 func_8038BEF8(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);
extern s32 func_8038BED4();

extern f32 D_801EB83C;
extern f32 D_801EB840;
extern f32 D_801EB844;
extern f32 D_801EB848;
extern f32 D_801EB84C;
extern f32 D_801EB850;
extern f32 D_801EB854;
extern f32 D_801EB858;

s32 func_801E1C38(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 6.0f, 0xC1380000, 0x42D0999A, D_801EB83C, D_801EB840, D_801EB844, D_801EB848, D_801EB84C, 48.0f, D_801EB850, 0.5f, D_801EB854, D_801EB858) != 0) {
        func_8038BED4();
        return 2;
    }
    return 1;
}
