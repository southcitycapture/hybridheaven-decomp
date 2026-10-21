#include "context.h"

extern u8 D_802407C8[];

void func_80228298(void *arg0) {
    u8 i;
    s32 k;

    if (arg0 == D_801BBBF0 + 0x44C) {
        k = 0;
    } else {
        k = 1;
    }
    for (i = 0; i < 4; i++) {
        if (i * 100 + 100 < *(s16 *)((u8 *)arg0 + 6)) {
            (D_802407C8 + k * 4)[i] = 1;
        } else {
            (D_802407C8 + k * 4)[i] = 0;
        }
    }
}
