#include "context.h"

f32 func_8037D3A0(u8 *arg0) {
    f32 var_fv1;
    u8 *var_v0;

    var_fv1 = 0.0f;
    var_v0 = arg0;
    while (*var_v0 != 0) {
        if (*var_v0 >= 0x20 && *var_v0 < 0x81) {
            var_fv1 = (f32) ((f64) var_fv1 + 1.0);
        } else {
            var_v0 += 1;
            var_fv1 = (f32) ((f64) var_fv1 + 0.5);
        }
        var_v0 += 1;
    }
    return var_fv1;
}
