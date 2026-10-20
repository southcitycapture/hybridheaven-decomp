#include "context.h"

extern f32 func_8001EAD0(s16 arg0);

f32 func_80242A68(f32 arg0, u16 arg1, f32 arg2, u16 arg3) {
    f32 temp;

    temp = func_8001EAD0((s16)(arg1 * arg3));
    arg0 += arg2 * temp;
    return arg0;
}
