#include "common.h"
f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);


void func_80014CCC(f32 arg0[4][4], s16 arg1, s16 arg2, s16 arg3) {
    f32 sx;
    f32 cx;
    f32 sy;
    f32 cy;
    f32 sz;
    f32 cz;
    f32 (*m)[4];

    sx = func_8001EAD0(arg1);
    cx = func_8001EB64(arg1);
    sy = func_8001EAD0(arg2);
    cz = sx * sz;
    cy = func_8001EB64(arg2);
    sz = func_8001EAD0(arg3);
    cz = func_8001EB64(arg3);
    m = arg0;
    m[0][0] = cy * cz;
    m[0][1] = sx * cz * sy + cx * sz;
    m[0][2] = -(cx * cz) * sy + sx * sz;
    m[1][0] = -cy * sz;
    m[1][1] = -(sx * sz) * sy + cx * cz;
    m[1][2] = cx * sz * sy + sx * cz;
    m[2][0] = sy;
    m[2][1] = -sx * cy;
    m[2][2] = cx * cy;
    m[0][3] = 0.0f;
    m[1][3] = 0.0f;
    m[2][3] = 0.0f;
    m[3][0] = 0.0f;
    m[3][1] = 0.0f;
    m[3][2] = 0.0f;
    m[3][3] = 1.0f;
}
