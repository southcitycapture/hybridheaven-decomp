#include "context.h"

extern f64 D_802089E8;

s32 func_801EE890(s32 arg0, s32 arg1) {
    u8 *p;
    if (D_80206474 == 0) goto c0;
    if (D_80206474 == 1) goto c1;
    if (D_80206474 == 2) goto c2;
    return 3;
c0:
    if (func_801C0DE4(4, 3, 0x3F000000) != 0) {
        func_801C0EB0(4, 3);
        func_801CC470(3, 0x03480011, 0, 0, 3.0f);
        func_8038D28C(0x168);
        D_80206474 = 1;
    } else {
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 8) + 8) + 8) + 8) + 0x24) + 0x2C) + 8) = (f32)(((f64)((f32)(func_80034C24(func_801C0F18(4, 3)) / D_802089E8) / 0.5f) * -21.0) + 21.0);
    }
    goto done;
c1:
    if (func_801CFD50() != 0 && func_801C0B8C(0x632EA0) != 0) {
        func_801CC470(3, 0x03480010, 0, 0, 6.0f);
        D_80206474 = 2;
    }
    goto done;
c2:
    if (func_801CFD50() != 0) {
        return 4;
    }
done:
    return 3;
}
