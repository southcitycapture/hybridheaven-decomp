#include "common.h"
typedef struct func_801C0C7C_Struct {
    s32 a0, a4;
    u64 a8;
} func_801C0C7C_Struct;
extern func_801C0C7C_Struct D_801DE838[];
extern u64 func_80026E58(u64, u64);                        /* extern */
u64 func_80026F58(u64 a, u64 b);
u64 func_80031190();                                /* extern */

extern f64 D_801DCED8;
u64 func_80034AB8(f64);

s32 func_801C0DE4(s32 arg0, s32 arg1, f32 arg2) {
    s32 i;
    u64 now;
    u64 t;
    u64 d;
    for (i = 0; i < 32; i++) {
        if (arg0 == D_801DE838[i].a0 && arg1 == D_801DE838[i].a4) break;
    }
    now = func_80031190();
    d = func_80026F58(now - D_801DE838[i].a8, 0x40);
    t = func_80026E58(d, 0xBB8);
    return t >= func_80034AB8((f64)arg2 * D_801DCED8);
}
