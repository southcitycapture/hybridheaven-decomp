#include "context.h"

extern void D_801CD924(u8 arg0, u8 arg1, u8 arg2, f32 arg3);

void func_801CD994(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    D_801CD924(arg0, arg1, arg2, (f32)((f64)(f32)arg3 * 0.00390625));
}
