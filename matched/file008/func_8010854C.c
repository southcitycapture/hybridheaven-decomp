#include "context.h"
s32 func_8010876C(s32 arg0);
s32 func_8010876C(s32 arg0);

void func_8010854C(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 *sp28;
    s32 *sp2C;

    sp28 = &arg2;
    sp2C = &arg3;
    D_801BBAD4 = func_8010876C;
    func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
}
