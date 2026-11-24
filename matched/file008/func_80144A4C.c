#include "common.h"

extern void D_8001A804(u8, void *, s32, s32, s32);
extern void func_8001B194(u8, s16, s16, u8);
extern u8 D_8018F7D4[];

void func_80144A4C(a0, a1, a2, a3, a4)
u8 a0; s16 a1; s16 a2; s16 a3; s16 a4;
{
    s32 n = 0x23;
    s32 v;
    s32 y = a2;
    if (a2 < a3) {
        n = (a2 - a3) + 0x23;
        y = a3;
    }
    if (a4 < y + n) {
        n = a4 - y;
    }
    if (n <= 0) {
        n = 0;
        y = 0;
    }
    D_8001A804(a0, D_8018F7D4, a1, y, n);
    do {} while (0);
    v = 0;
    if (a2 < a3 + 2) v = a2 - a3 - 2;
    n = a4 - 1;
    y = a0 << 2;
    do {} while (0);
    y = (s16)(4 + a1);
    if (n < a2 + 10) v = (u32)(a2 + 10) - a4 + 1;
    func_8001B194(a0 << 2, 4 + a1, a2 - 2, v);
    v = 0;
    y = a2 + 12;
    if (y < a3 + 2) v = y - a3 - 2;
    n = y + 10;
    if (a4 - 1 < n) v = n - a4 + 1;
    func_8001B194((a0 << 2) + 1, 4 + a1, a2 + 10, v);
    v = 0;
    y = a2 + 24;
    if (y < a3 + 2) v = y - a3 - 2;
    n = y + 10;
    if (a4 - 1 < n) v = n - a4 + 1;
    func_8001B194((a0 << 2) + 2, 4 + a1, a2 + 22, v);
}
