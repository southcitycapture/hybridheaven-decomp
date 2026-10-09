#include "context.h"

extern void func_80028FF0(void *out, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
extern void func_80029D30(void *out, s32 arg0);

void func_80029220(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    u8 sp28[0x40];

    func_80028FF0(sp28, arg1, arg2, arg3, arg4, arg5, arg6);
    func_80029D30(sp28, arg0);
}
