#include "common.h"
s32 func_801087C0(s32 arg0);
extern s32 func_80108868(f32, f32, s32, s32, f32, f32);
extern void (*D_801BBAD4)(void);


void func_80108590(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    D_801BBAD4 = func_801087C0;
    func_80108868(arg0, arg1, *(s32 *)&arg2, *(s32 *)&arg3, arg4, arg5);
}
