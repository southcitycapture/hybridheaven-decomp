#include "common.h"

extern void func_8002FC20(f32);

void func_8012FFDC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 x = arg0 - arg3;
    f32 y = arg1 - arg4;
    func_8002FC20(x * x + y * y + (arg2 - arg5) * (arg2 - arg5));
}
