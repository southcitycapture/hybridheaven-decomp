#include "context.h"

extern void func_8010A1AC(u8, f32, f32, f32, f32, f32, f32);
extern void func_80108814(void);
extern void (*D_801BBAD4)(void);

void func_801085D4(u8 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    D_801BBAD4 = func_80108814;
    func_8010A1AC(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}
