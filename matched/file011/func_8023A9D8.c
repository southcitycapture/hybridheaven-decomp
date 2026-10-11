#include "context.h"

extern void func_8001B204(s32, s32, s16, void *, s32, s32, s32);
extern void func_80147D60(s32);
extern u8 D_802405E0[];
extern u8 D_802405E8[];
#define B ((u8 *)&D_80240880)

void func_8023A9D8(u8 arg0) {
    u8 idx = B[0x20] * 4;
    u8 *p;
    s32 i;
    s32 j;

    func_80147D60(8);
    p = B + idx;
    for (i = 0, j = 0; i < 4; j = i) {
        u8 *e = p + j;
        u8 q = e[0x51] / 10;
        if (q >= 4 && e[0x38] != 0) {
            func_8001B204((u8)(j + 4), 0xD1, j * 0x14 + 0x50, D_802405E0, arg0, 4, (s32)D_802405E8);
        }
        i = (i + 1) & 0xFF;
        if (B[0x22] == B[0x20] && j >= B[0x23] - B[0x20] * 4 - 1) {
            break;
        }
    }
}
