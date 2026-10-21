#include "context.h"
extern f32 D_801FB87C;
extern f32 D_801FD2DC;
extern f32 D_801FD2E0;
extern f32 D_801FD2E4;

s32 func_801F4F00(s32 arg0, s32 arg1) {
    s8 p1;
    s8 p2;
    s8 p3;
    s8 sp1C;
    s8 sp1B;
    f32 t;
    f32 *p = &D_801FB87C;

    if (func_801C0B8C(0x049F1095) != 0) {
        return 9;
    }
    if (func_801C0B8C(0x047149D5) != 0) {
        func_801CCE0C(1);
        func_801CCE88(0, 0x64, 0x64, 0x64);
        func_801CCEC8(0, 0, 0x50, 0);
        func_801CCE50(0x32, 0x32, 0x32);
    } else {
        if (func_801C0B8C(0x043440D5) != 0) {
            D_801FB870 *= 2.5f;
        }
        if (func_801C0B8C(0x0208531F) != 0) {
            t = D_801FB87C;
            t += D_801FB870;
            *p = t;
            if (D_801FD2DC < t) {
                *p = 0.0f;
            }
            func_801CCE0C(2);
            func_801CCE50(0x32, 0x32, 0x32);
            sp1C = (s8)(s32)(func_80032720(D_801FB87C) * 80.0f);
            sp1B = (s8)(s32)(func_80029280(D_801FB87C) * 80.0f);
            func_801CCE88(0, 0, 0, 0xFE);
            func_801CCEC8(0, 0x14, sp1C, sp1B);
            func_801CCE88(1, 0, 0, 0xFE);
            sp1C = (s8)(s32)(func_80032720(D_801FB87C + D_801FD2E0) * 80.0f);
            func_801CCEC8(1, 0x14, sp1C, (s8)(s32)(func_80029280(D_801FB87C + D_801FD2E4) * 80.0f));
        }
    }
    return 8;
}
