#include "context.h"

extern f32 func_80014798(f32, f32);
extern f32 func_8002FC20(f32);
extern f32 D_8018D698;

f32 func_80130A18(f32 arg0) {
    f64 temp_fv1;

    temp_fv1 = (f64) func_8002FC20(1.0f - (arg0 * arg0));
    if (temp_fv1 != 0.0) {
        return func_80014798(arg0, (f32) temp_fv1);
    }
    if (arg0 > 0.0f) {
        return D_8018D698;
    }
    return 0.0f;
}
