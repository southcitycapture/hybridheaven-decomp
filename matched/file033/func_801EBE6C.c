#include "context.h"

extern s32 D_801F34E0;
extern s32 B_801F34E0;
extern f32 D_801F4A7C;

s32 func_801EBE6C(s32 arg0, s32 arg1) {
    u8 *p;

    if (D_801F34DC == 0) goto l0;
    if (D_801F34DC == 1) goto l1;
    if (D_801F34DC == 2) goto l2;
    return 0x14;
l0:
    func_801CC4D8(1, 0x03480037, 0, 0, 15.0f);
    D_801F34E0 = 0;
    D_801F34DC = 1;
    goto done;
l1:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480037, 0, 0, 3.0f);
        D_801F34DC = 2;
    }
    if (D_801F34E0 == 4) {
        p = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 8) + 8) + 0x24) + 0x2C);
        func_8038D33C(*(f32 *)(p + 4), *(f32 *)(p + 8), *(f32 *)(p + 0xC), 0x678, D_801F4A7C, 1.0f);
    }
    D_801F34E0 = B_801F34E0 + 1;
    goto done;
l2:
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 0x15;
    }
done:
    return 0x14;
}
