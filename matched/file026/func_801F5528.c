#include "context.h"

extern f64 D_801FD2E8;
extern f64 D_801FD2F0;
extern f64 D_801FD2F8;
extern f64 D_801FD300;

s32 func_801F5528(s32 arg0, s32 arg1) {
    f32 t;
    u64 r;

    if (func_801C0B8C(0x05392DB5) != 0) {
        return 0xB;
    }
    if (func_801C0B8C(0x04ECE275) != 0) {
        r = func_801C0B2C();
        t = (f32) ((((f64) (f32) ((func_80034C24(r) / D_801FD2E8) - D_801FD2F0) / 5.0) * D_801FD2F8) + D_801FD300);
        D_801FD448 = t;
        D_801FD44C = t;
        D_801FD450 = t;
        func_801CCE88(1, (u32) D_801FD448 & 0xFF, (u32) D_801FD44C & 0xFF, (u32) D_801FD450 & 0xFF);
        func_801CCEC8(1, 0, -0x50, 0);
    }
    return 0xA;
}
