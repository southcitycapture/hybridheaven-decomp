#include "common.h"

f32 func_8001EAD0(s16);                             /* extern */
f32 func_8001EB64(s16);                             /* extern */
void func_80130C40(s16, f32 *, f32 *);              /* extern */

void func_8011A148(s16 arg0, s16 arg1, s16 arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
    *arg3 = 0.0f;
    *arg4 = func_8001EB64(arg2);
    *arg5 = func_8001EAD0(arg2);
    func_80130C40(arg1, arg3, arg4);
    func_80130C40(arg0, arg3, arg5);
}
