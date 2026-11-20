#include "common.h"
f32 func_8001EAD0(s16);                             /* extern */
f32 func_8001EB64(s16);                             /* extern */


void func_8011B474(s16 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4) {
    f32 sp1C;

    sp1C = func_8001EB64(arg0);
    *arg3 = (func_8001EAD0(arg0) * arg2) + (arg1 * sp1C);
    sp1C = func_8001EAD0(arg0);
    *arg4 = (func_8001EB64(arg0) * arg2) + (arg1 * -sp1C);
}
