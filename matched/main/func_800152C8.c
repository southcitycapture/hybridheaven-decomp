#include "context.h"

f64 func_800152C8(f64 arg0, f64 *arg2) {
    f64 var_fa1;
    f64 var_fv1;
    s32 temp_ft1;

    if (arg0 < 0.0f) {
        var_fv1 = -arg0;
    } else {
        var_fv1 = arg0;
    }
    if (arg0 < 0.0) {
        temp_ft1 = (s32) var_fv1;
        var_fa1 = (f64) temp_ft1;
        *arg2 = (f64) -temp_ft1;
    } else {
        var_fa1 = (f64) (s32) var_fv1;
        *arg2 = var_fa1;
    }
    if (arg0 < 0.0) {
        return -(var_fv1 - var_fa1);
    }
    return var_fv1 - var_fa1;
}
