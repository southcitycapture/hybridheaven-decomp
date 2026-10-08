#include "common.h"

extern s32 func_8001B204(s32, s32, s32, void *);
extern u8 D_8018F9A0[];

void func_80147D60(u8 arg0) {
    s32 temp_s1;
    s32 var_s0;

    temp_s1 = arg0;
    var_s0 = 0;
    if (temp_s1 > 0) {
        do {
            func_8001B204(var_s0 & 0xFF, 0, 0, D_8018F9A0);
            var_s0 = (var_s0 + 1) & 0xFF;
        } while (var_s0 < temp_s1);
    }
}
