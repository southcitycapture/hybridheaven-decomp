#include "common.h"
#include "common.h"
extern f32 func_8002FC20(f32);
extern f64 D_8018D6B0;

s32 func_80131074(f32 *arg0, f32 *arg1, f32 *arg2) {
    f32 temp[3];
    f32 temp_fv0_2;

    temp_fv0_2 = func_8002FC20((arg2[0] * arg2[0]) + (arg2[2] * arg2[2]));
    if ((f64) (temp_fv0_2 < 0.0f ? -temp_fv0_2 : temp_fv0_2) < D_8018D6B0) {
        arg1[0] = arg0[0];
        if (arg2[1] > 0.0f) {
            arg1[1] = -arg0[2];
            arg1[2] = arg0[1];
        } else {
            arg1[1] = arg0[2];
            arg1[2] = -arg0[1];
        }
        return 0;
    }
    temp[0] = ((arg0[0] * arg2[2]) - (arg0[2] * arg2[0])) / temp_fv0_2;
    temp[1] = ((-((arg0[0] * arg2[0]) + (arg0[2] * arg2[2])) * arg2[1]) / temp_fv0_2) + (arg0[1] * temp_fv0_2);
    temp[2] = arg0[0] * arg2[0] + arg0[1] * arg2[1] + arg0[2] * arg2[2];
    arg1[0] = temp[0];
    arg1[1] = temp[1];
    arg1[2] = temp[2];
    return 1;
}
