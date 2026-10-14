#include "context.h"

f32 func_8001EAD0(s16);                             /* extern */
f32 func_8001EB64(s16);                             /* extern */

void func_80130C40(s16 arg0, f32 *arg1, f32 *arg2) {
    f32 sp1C;
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv1;

    sp1C = func_8001EAD0(arg0);
    temp_fv0 = func_8001EB64(arg0);
    temp_fv1 = *arg1;
    temp_fa0 = *arg2;
    *arg1 = (temp_fv1 * temp_fv0) + (temp_fa0 * -sp1C);
    *arg2 = (temp_fv1 * sp1C) + (temp_fa0 * temp_fv0);
}
