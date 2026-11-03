#include "common.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

#define M(o) (((f32 *)arg0)[(o) / 4])

void func_8000AFE0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    f32 sx, cx, sy, cy, sz, cz;
    f32 t2;

    sx = func_8001EAD0(*((s16 *)&arg4 + 1));
    cx = func_8001EB64(*((s16 *)&arg4 + 1));
    sy = func_8001EAD0(*((s16 *)&arg5 + 1));
    cy = func_8001EB64(*((s16 *)&arg5 + 1));
    sz = func_8001EAD0(*((s16 *)&arg6 + 1));
    cz = func_8001EB64(*((s16 *)&arg6 + 1));
    M(0x0) = cy * cz;
    M(0x4) = cy * sz;
    M(0x8) = -sy;
    M(0x10) = sx * sy * cz - cx * sz;
    M(0x14) = sx * sy * sz + cx * cz;
    t2 = cx * sy;
    M(0x18) = sx * cy;
    M(0x20) = t2 * cz + sx * sz;
    M(0x24) = t2 * sz - sx * cz;
    M(0x28) = cx * cy;
    M(0x30) = *(f32 *)&arg1;
    M(0x34) = *(f32 *)&arg2;
    M(0x38) = *(f32 *)&arg3;
    M(0xC) = M(0x1C) = M(0x2C) = 0.0f;
    M(0x3C) = 1.0f;
    if (arg7 != 1.0f) {
        M(0x0) *= arg7;
        M(0x4) *= arg7;
        M(0x8) *= arg7;
    }
    if (arg8 != 1.0f) {
        M(0x10) *= arg8;
        M(0x14) *= arg8;
        M(0x18) *= arg8;
    }
    if (arg9 != 1.0f) {
        M(0x20) *= arg9;
        M(0x24) *= arg9;
        M(0x28) *= arg9;
    }
}
