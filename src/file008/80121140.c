#include "common.h"


f32 func_8002FC20(f32, f32);                        /* extern */
extern f64 D_8018B2B8;

void func_80121140(f32 arg0, f32 *arg1) {
    f32 var_fv1;
    f64 temp_fv0;

    temp_fv0 = (f64) arg0;
    if (temp_fv0 > 0.75) {
        var_fv1 = (f32) (((f64) func_8002FC20((f32) ((temp_fv0 - 0.75) * 4.0), arg0) + 1.0) * 0.5);
    } else {
        var_fv1 = (f32) -(((f64) func_8002FC20((f32) (((f64) -arg0 + 0.75) * D_8018B2B8), arg0) - 1.0) * 0.5);
    }
    *arg1 = var_fv1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80121140/func_80121220.s")

