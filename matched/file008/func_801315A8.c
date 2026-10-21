#include "context.h"

extern f64 D_8018D6C0;
extern s32 D_801309EC(f32, f32);
typedef struct func_801315A8_Struct {
    u16 f0;
    u16 f2;
    u16 f4;
} func_801315A8_Struct;

void func_801315A8(func_801315A8_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10) {
    f32 v;

    arg0->f2 = D_801309EC(arg1, arg2);
    if (arg2 < 0.0f) {
        v = -arg2;
    } else {
        v = arg2;
    }
    if ((f64) v < D_8018D6C0) {
        if ((arg2 > 0.0f) || ((arg2 == 0.0f) && (arg0->f0 & 0x200))) {
            arg0->f0 = 0;
            arg0->f4 = D_801309EC((arg5 * arg7 * arg10) - (arg6 * arg9), -arg5 * arg8);
        } else {
            arg0->f0 = 0x200;
            arg0->f4 = D_801309EC(-((arg5 * arg7 * arg10) - (arg6 * arg9)), -(-arg5 * arg8));
        }
    } else {
        arg0->f0 = D_801309EC(((arg5 * arg7 * arg9) + (arg6 * arg10)) / arg2, ((arg6 * arg7 * arg9) - (arg5 * arg10)) / arg2);
        arg0->f4 = D_801309EC(arg3 / arg2, arg4 / arg2);
    }
}
