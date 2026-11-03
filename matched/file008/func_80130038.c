#include "common.h"

extern void func_8002FC20(f32);
void func_80130038(f32 arg0, f32 arg1, f32 arg2) {
    f32 a = arg0 * arg0;
    f32 b = arg1 * arg1;
    func_8002FC20(a + b + arg2 * arg2);
}
