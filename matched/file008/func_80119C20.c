#include "context.h"

extern f32 func_8002FC20(f32, f32);

s8 func_80119C20(void *a0, void *a1, void *a2, s32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 temp_fv1;
    f32 temp_fa1;
    f32 temp_ft4;
    f32 temp_fv0;

    temp_fv1 = *(f32 *)&arg3 - *(f32 *)a0;
    temp_fa1 = arg4 - *(f32 *)a1;
    temp_ft4 = arg5 - *(f32 *)a2;
    temp_fv0 = func_8002FC20((temp_fv1 * temp_fv1) + (temp_fa1 * temp_fa1) + (temp_ft4 * temp_ft4), temp_fa1);
    if ((temp_fv0 * arg6) == 0.0f) {
        return 0;
    }
    if (arg6 < temp_fv0) {
        *(f32 *)a0 += (temp_fv1 / temp_fv0) * arg6;
        *(f32 *)a1 += (temp_fa1 / temp_fv0) * arg6;
        *(f32 *)a2 += (temp_ft4 / temp_fv0) * arg6;
        return 1;
    }
    *(f32 *)a0 = *(f32 *)&arg3;
    *(f32 *)a1 = arg4;
    *(f32 *)a2 = arg5;
    return 0;
}
