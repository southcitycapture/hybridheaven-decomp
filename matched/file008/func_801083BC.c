#include "context.h"
s32 func_80108664(s32 arg0);
extern void (*D_801BBAD4)(void);

extern void func_80108280();
extern s32 func_80108868(f32, f32, s32, s32, f32, f32);
extern s32 D_801BBAD0;
extern s32 D_801BBF7C;

s32 func_801083BC(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 var_v1;

    func_80108280();
    D_801BBAD4 = func_80108664;
    var_v1 = func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
    if (D_801BBF7C != D_801BBAD0) {
        var_v1 = 0;
    }
    return var_v1;
}
