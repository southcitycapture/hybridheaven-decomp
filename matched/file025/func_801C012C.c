#include "context.h"

extern u8 D_801BBD4D;
extern u8 D_80089474[];

s32 func_801C012C(void) {
    s32 v;

    v = (D_801BBD4D & 0x80) == 0;
    if (v != 0) {
        v = D_80089354 == 0;
    }
    if (D_801D8D00 != 0 && v != 0 && (*(u16 *)(D_80089474 + 4) & 0x1000)) {
        return 1;
    }
    D_801D8D04[-1] = v;
    return 0;
}
