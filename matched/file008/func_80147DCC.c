#include "context.h"

extern u8 D_8018F9A4[];

void func_80147DCC(u8 arg0) {
    s32 i;

    arg0 &= 0xFF;
    i = arg0 & 0xFF;
    if (arg0 < 0x1C) {
        do {
            func_8001B204(i & 0xFF, 0, 0, D_8018F9A4);
            i = (i + 1) & 0xFF;
        } while (i < 0x1C);
    }
}
