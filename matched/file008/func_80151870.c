#include "common.h"

s32 func_80002A94(u8);
s32 func_80002BAC(u8);
extern s16 D_801BF190[];

s32 func_80151870(u8 arg0) {
    u8 temp_a0;

    temp_a0 = arg0;
    if (temp_a0 < 2) {
        D_801BF190[temp_a0] = 0;
        if (func_80002A94(temp_a0) == 0 && func_80002BAC(temp_a0) == 0) {
            return 1;
        }
    }
    return 0;
}
