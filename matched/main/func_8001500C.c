#include "context.h"

struct func_8001500C_Struct {
    u8 pad[0x30];
    f32 f30;
    f32 f34;
    f32 f38;
};

void func_8001500C(struct func_8001500C_Struct *arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    func_80014B88(arg0, arg1, arg2, arg3);
    func_80014E14(arg0, arg0, arg4, arg5, arg6);
    arg0->f30 = arg7;
    arg0->f34 = arg8;
    arg0->f38 = arg9;
}
