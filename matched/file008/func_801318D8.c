#include "common.h"
extern s32 D_801309EC(f32, f32);


typedef struct func_801318D8_Struct { u16 f0; u16 f2; u16 f4; } func_801318D8_Struct;
typedef struct func_801318D8_Vec { f32 x, y, z; } func_801318D8_Vec;

extern f64 D_8018D6D0;
#define S ((func_801318D8_Struct *)arg0)
#define V ((func_801318D8_Vec *)arg11)

void func_801318D8(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, void *arg11, f32 arg12, f32 arg13) {
    f32 sp3C;
    f32 sp38;
    f32 fa0;
    f32 fa1;
    f32 ft4;
    f32 ft5;
    f32 p;
    s32 r;

    S->f2 = D_801309EC(arg1, arg2);
    if (arg2 < 0.0f) {
        p = -arg2;
    } else {
        p = arg2;
    }
    if ((f64) p < 1e-06) {
        fa1 = (arg5 * arg7 * arg9) + (arg6 * arg10);
        ft4 = (arg5 * arg7 * arg10) - (arg6 * arg9);
        sp3C = (V->x * fa1) + ((((ft4 * V->y) - (arg5 * arg8 * V->z * V->x)) / arg12) * arg13);
        sp38 = (V->y * fa1) + ((((-ft4 * V->x) - (arg5 * arg8 * V->z * V->y)) / arg12) * arg13);
        if ((arg2 > 0.0f) || ((arg2 == 0.0f) && (S->f0 & 0x200))) {
            S->f0 = 0;
            S->f4 = D_801309EC(sp3C, sp38);
        } else {
            S->f0 = 0x200;
            S->f4 = D_801309EC(-sp3C, -sp38);
        }
    } else {
        fa1 = (V->z * ((arg5 * arg7 * arg9) + (arg6 * arg10))) + (arg5 * arg8 * arg12 * arg13);
        ft4 = (V->z * ((arg6 * arg7 * arg9) - (arg5 * arg10))) + (arg6 * arg8 * arg12 * arg13);
        S->f0 = D_801309EC(fa1 / arg2, ft4 / arg2);
        S->f4 = D_801309EC(arg3 / arg2, arg4 / arg2);
    }
}
