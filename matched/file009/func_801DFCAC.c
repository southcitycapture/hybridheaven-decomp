#include "context.h"

extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);

void func_801DFCAC(s32 arg0, u8 *arg1, u8 *arg2) {
    f32 *p;
    u16 v;

    p = *(f32 **)(*(s32 *)(arg0 + 0x24) + 0x2C);
    *arg1 = 0;
    *arg2 = 0;
    if (func_801C5A1C(p[1], p[2] + 2.0, p[3], p[1], p[2] - 5.0, p[3]) != 0) {
        v = *(u16 *)(D_801E15E0 + D_801E16A0[D_801BBBF0.unk4] * 16 + D_801BBBF0.unk35B * 2);
        if (v == 0x677 || v == 0x67B || v == 0x676 || v == 0x67A || v == 0x66E || v == 0x672 || v == 0x66F || v == 0x673 || v == 0x661 || v == 0x67F) {
            *arg1 = 1;
        }
        if (v == 0x67B || v == 0x67A || v == 0x67D || v == 0x67C || v == 0x67F || v == 0x67E) {
            *arg2 = 1;
        }
    }
}
