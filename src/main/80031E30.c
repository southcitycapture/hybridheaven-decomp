#include "common.h"

#define func_80029E30 func_80029E30__func_80031E30
extern void func_80029E30();

void func_80031E30(f32 mf[4][4], f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale) {
    int i, j;

    func_80029E30(mf);
    mf[0][0] = 2 / (r - l);
    mf[1][1] = 2 / (t - b);
    mf[2][2] = -2 / (f - n);
    mf[3][0] = -(r + l) / (r - l);
    mf[3][1] = -(t + b) / (t - b);
    mf[3][2] = -(f + n) / (f - n);
    mf[3][3] = 1;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            mf[i][j] *= scale;
        }
    }
}
#undef func_80029E30

#pragma GLOBAL_ASM("asm/nonmatchings/main/80031E30/func_80031F84.s")

