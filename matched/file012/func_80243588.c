#include "context.h"

void func_80243588(u16 arg0, s8 *arg1, s8 *arg2) {
    s32 t;

    if ((arg0 == 0) || (arg0 >= 0x26)) {
        *arg1 = 0;
        *arg2 = 0;
        return;
    }
    if (arg0 < 0x10) {
        t = --arg0;
        *arg1 = t % 4;
        *arg2 = t / 4;
        return;
    }
    if (arg0 < 0x14) {
        *arg1 = arg0 - 0x10;
        *arg2 = 4;
        return;
    }
    if (arg0 < 0x1E) {
        arg0 = arg0 - 0x14;
        t = arg0;
        *arg1 = t % 4;
        *arg2 = t / 4;
        return;
    }
    if (arg0 < 0x21) {
        *arg1 = arg0 - 0x1E;
        *arg2 = 3;
        return;
    }
    if (arg0 < 0x23) {
        *arg1 = arg0 - 0x1F;
        *arg2 = 2;
        return;
    }
    *arg1 = arg0 - 0x23;
    *arg2 = 4;
}
