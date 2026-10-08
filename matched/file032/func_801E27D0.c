#include "common.h"

s32 func_8038BEF8(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);
extern f32 D_801EB8EC;
extern f32 D_801EB8F0;
extern f32 D_801EB8F4;
extern f32 D_801EB8F8;
extern f32 D_801EB8FC;
extern f32 D_801EB900;
extern f32 D_801EB904;

s32 func_801E27D0(s32 arg0, s32 arg1) {
    f32 v0;
    f32 v1;
    f32 v2;

    v0 = D_801EB8EC;
    v1 = D_801EB8F0;
    v2 = D_801EB8F4;
    if (func_8038BEF8(0.0f, 2.0f, 0xC0C33333, 0x4221999A, D_801EB8F8, D_801EB8FC, D_801EB900, D_801EB904, v0, v1, v2, v0, v1, v2) != 0) {
        return 0x26;
    }
    return 0x25;
}
