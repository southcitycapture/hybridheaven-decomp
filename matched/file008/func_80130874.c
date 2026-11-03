#include "common.h"
extern f32 D_801763A0[];


/* GGA: mathSinCos (D_801763A0 = GGA gMathSinTable: (sin, cos) pairs over a quarter turn) */
f32 func_80130874(u16 angle, f32 *c) {
    angle = (angle & 0x3FF) * 2;
    if (angle < 0x200) { angle++; *c = D_801763A0[angle]; angle--; return D_801763A0[angle]; }
    if (angle < 0x400) { angle = 0x401 - angle; *c = -D_801763A0[angle]; angle--; return D_801763A0[angle]; }
    if (angle < 0x600) { angle = angle - 0x3FF; *c = -D_801763A0[angle]; angle--; return -D_801763A0[angle]; }
    angle = 0x801 - angle;
    *c = D_801763A0[angle];
    angle--;
    return -D_801763A0[angle];
}
