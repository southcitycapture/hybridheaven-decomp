#include "common.h"


void func_80029D30(void *arg0, s32 arg1) {
    u32 *hi;
    u32 *lo;
    f32 (*row)[4];
    s32 i;
    s32 b;
    u32 a;
    s32 j;

    hi = (u32 *)arg1;
    lo = (u32 *)(arg1 + 0x20);
    i = 0;
    row = arg0;
    do {
        for (j = 0; j < 2; j++) {
            a = (s32)((*row)[j * 2] * 65536.0f);
            b = (s32)((*row)[j * 2 + 1] * 65536.0f);
            *hi++ = (a & 0xFFFF0000) | ((b >> 16) & 0xFFFF);
            *lo++ = ((a << 16) & 0xFFFF0000) | (b & 0xFFFF);
        }
        i++;
        row++;
    } while (i != 4);
}
