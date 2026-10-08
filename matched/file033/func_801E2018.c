#include "common.h"

s32 func_8038BEF8(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);
extern f32 D_801F457C;
extern f32 D_801F4580;
extern f32 D_801F4584;
extern f32 D_801F4588;

s32 func_801E2018(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 1.0f, -2.1f, 11.6f, D_801F457C, D_801F4580, 14.0f, -50.0f, -4.5f, D_801F4584, -59.0f, -4.5f, 20.5f, D_801F4588) != 0) {
        return 7;
    }
    return 6;
}
