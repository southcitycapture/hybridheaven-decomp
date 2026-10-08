#include "context.h"

extern f64 D_80252620;

f32 func_80242A20(f32 arg0) {
    f32 var_fv1;

    var_fv1 = (f32) ((f64) arg0 + D_80252620);
    if ((f64) var_fv1 < -10.0) {
        var_fv1 = -10.0f;
    }
    return var_fv1;
}
