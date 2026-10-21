#include "context.h"

s32 func_801C16F4(void) {
    s32 i;
    s32 r;

    r = 1;
    for (i = 0; i < 32; i++) {
        if (D_801DEBF0[i].unk0 != -1 && D_801DEBF0[i].unk4 != -1) {
            r &= D_801DEBF0[i].unk8;
        }
    }
    {
        extern void func_801C1834();
        func_801C1834(r);
    }
    return r;
}
