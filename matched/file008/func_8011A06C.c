#include "common.h"
s16 func_8001EF38(f32, f32);                        /* extern */
void func_80130C40(s16, f32 *, f32 *);              /* extern */


void func_8011A06C(s16 arg0, s16 arg1, f32 arg2, f32 arg3, f32 arg4, s16 *arg5) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    sp1C = arg4;
    sp24 = arg2;
    sp20 = arg3;
    func_80130C40(-arg0, &sp24, &sp1C);
    func_80130C40(-arg1, &sp24, &sp20);
    *arg5 = func_8001EF38(sp1C, sp20);
}
