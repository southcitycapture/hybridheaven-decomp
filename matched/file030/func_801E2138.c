#include "common.h"

s32 func_8038BEF8(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);
extern f32 D_801EC4E4;
extern f32 D_801EC4E8;
extern f32 D_801EC4EC;
extern f32 D_801EC4F0;
extern f32 D_801EC4F4;
extern f32 D_801EC4F8;
extern f32 D_801EC4FC;

s32 func_801E2138(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 3.0f, -28.3f, 3.5f, 10.5f, D_801EC4E4, D_801EC4E8, D_801EC4EC, 0.0f, D_801EC4F0, D_801EC4F4, D_801EC4F8, 35.5f, D_801EC4FC) != 0) {
        return 0xE;
    }
    return 0xD;
}
