#include "context.h"

extern f64 D_801FD318;
extern f64 D_801FD320;
extern f64 D_801FD328;
extern f64 D_801FD330;

#define PX (*(u8 **)(*(u8 **)(*(u8 **)&D_8038D8D0 + 0xC) + 0x30))

s32 func_801F64DC(s32 arg0, s32 arg1) {
    f64 z;
    f64 v;
    u32 t;
    u64 r;

    if (func_801C0B8C(0xF5AA9F) != 0) {
        return 2;
    }
    if (func_801C0B8C(0x5D1420) != 0) {
        r =func_801C0B2C();
        v = (f64)(f32)(func_80034C24(r) / D_801FD318 - D_801FD320) / D_801FD328;
        z = 1.0 - 1.0;
        t = (u32)(f32)(v * z);
        PX[0x48] = t;
        PX[0x49] = t;
        PX[0x4A] = (u32)(f32)(v * D_801FD330);
        PX[0x4B] = 0xFF;
    }
    return 1;
}
