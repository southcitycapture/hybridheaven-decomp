#include "context.h"

extern u8 D_801D58B8(f32);
extern f64 D_801E36A8;
extern f64 D_801E36B0;

u8 func_801D58B8(f32 arg0) {
    u8 var_v1;
    f64 temp_fv0;

    temp_fv0 = (f64) arg0;
    var_v1 = (u32) (temp_fv0 / D_801E36A8) & 0xFF;
    arg0 = (f32) (temp_fv0 - D_801E36B0);
    if (arg0 > 0.0f) {
        var_v1 += D_801D58B8(arg0);
    }
    return var_v1;
}
