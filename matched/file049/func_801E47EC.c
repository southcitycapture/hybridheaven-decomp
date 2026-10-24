#include "context.h"
extern f32 D_801E7768;
extern f32 D_801E771C;
extern f32 D_801E7720;

#define CHAIN (*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 8) + 0x24) + 0x2C))

s32 func_801E47EC(s32 arg0, s32 arg1) {
    s32 v;
    f32 t;
    f32 s;
    u8 *p;

    v = D_801E7144;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v != 2) goto after;
    goto after;
c0:
    if (func_801CE274() == 0) {
        func_801C1000(4, 0);
        func_801CC470(0, 0x01680040, 0, 0x1100, 1.5f);
        s = *(f32 *)(CHAIN + 0xC);
        D_801E7144 = 1;
        D_801E7768 = s;
    }
    goto after;
c1:
    if (func_801C1088(4, 0, 0x168) != 0) {
        func_801C10D8(4, 0);
        D_801E7144 = 2;
    }
after:
    if (D_801E7144 == 1) {
        t = (f32)(u32)func_801C1134(4, 0);
        s = D_801E7768;
        *(f32 *)(CHAIN + 0xC) = ((300.0f - s) / 360.0f) * D_801E771C * t * t + s;
        if (func_801CE2D0(0x01680040, 0xD) != 0 || func_801CE2D0(0x01680040, 0x1B) != 0) {
            p = CHAIN;
            func_8038D33C(*(f32 *)(p + 4), *(f32 *)(p + 8), *(s32 *)(p + 0xC), 0x67D, D_801E7720, 1.0f);
        }
    }
    return 0x16;
}
