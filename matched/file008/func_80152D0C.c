#include "common.h"

extern s16 D_8017DD8C;

void func_80152D0C(s32 arg0) {
    s32 *p = &arg0;

    arg0 &= 0xFF;
    if (arg0) {
        D_8017DD8C = 0x29;
        return;
    }
    D_8017DD8C = 0x11C;
}
