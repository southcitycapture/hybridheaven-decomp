#include "context.h"

void func_80388444();

extern void func_80006088(s32);
extern void func_8001B204(s32, s32, s32, void *);
extern u8 D_801BCC25;
extern u8 D_80389E90[];
extern u8 D_80389E94[];

void func_80388388(void *arg0, s32 *arg1) {
    s32 temp_v0;
    s8 var_s0;

    temp_v0 = *(s32 *) ((u8 *) arg0 + 0xB0);
    *(s32 *) ((u8 *) arg0 + 0xB0) = temp_v0 - 1;
    if ((temp_v0 < 0) || (D_801BCC25 == 0)) {
        func_8001B204(3, 0, 0, D_80389E90);
        func_8001B204(4, 0, 0, D_80389E94);
        var_s0 = 0xD;
        do {
            func_80006088(arg1[var_s0]);
            var_s0 -= 1;
        } while (var_s0 >= 0);
        *(s32 *) ((u8 *) arg0 + 0xB0) = 5;
        func_800058DC((s32) arg0, (void *) func_80388444);
    }
}
