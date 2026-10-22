#include "context.h"

extern u8 D_801FD460[];
extern s32 D_801FB6E0;
extern s32 D_8001B204(s32, s32, s32, void *);
extern void func_8038CAF4(u8 *, s32, s32);

s32 func_801EF8A4(s32 arg0, s32 arg1) {
    s32 sp24;
    s32 sp20;

    if (D_801FD45C >= 5) {
        sp20 = 0;
        sp24 = D_801FD458 % 23;
        if (func_801302CC() != 0) {
            sp20 = -0x14;
        }
        func_8038CAF4(D_801FD460, D_801FB6E0, sp24 + 1);
        D_801FD460[sp24 + 1] = 0;
        D_8001B204(0, 0x50, (s16)(sp20 + 0xBA), D_801FD460);
        if (++D_801FD458 >= 0x18) {
            return 2;
        }
        if (D_801FD460[sp24] != 0x20 && D_801FD460[sp24] != 0) {
            func_8038D28C(0x1C9);
        }
        D_801FD45C = 0;
    }
    D_801FD45C++;
    return 1;
}
