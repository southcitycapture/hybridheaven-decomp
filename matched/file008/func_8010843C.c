#include "common.h"
s32 func_80108664(s32 arg0);
extern s32 func_80108868(f32, f32, s32, s32, f32, f32);
extern void (*D_801BBAD4)(void);


struct func_8010843C_StructArg {
    s32 value;
};

void func_8010843C(f32 arg0, f32 arg1, struct func_8010843C_StructArg arg2, struct func_8010843C_StructArg arg3, f32 arg4, f32 arg5) {
    D_801BBAD4 = func_80108664;
    func_80108868(arg0, arg1, arg2.value, arg3.value, arg4, arg5);
}
