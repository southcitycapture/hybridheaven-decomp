#include "context.h"

extern s32 D_80388BD0[];
extern u8 D_8038A950[];

void func_8037F3B4(void) {
    u8 i;
    s8 (*fn)();

    for (i = 0; i < 6; i++) {
        fn = (s8 (*)())D_80388BD0[i];
        if (fn != NULL) {
            D_8038A950[i] = fn();
        }
    }
}
