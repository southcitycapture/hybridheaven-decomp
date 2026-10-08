#include "common.h"

extern s32 func_801CEDD4(void);
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 a4);
extern s32 D_801E8220;

s32 func_801E6E44(s32 arg0, s32 arg1) {
    if (D_801E8220 != 0) {
        if (D_801E8220 == 1) {
            goto case1;
        }
        return 0x21;
    }
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8003D, 0, 0, 10.0f);
        D_801E8220 = 1;
    }
    goto ret21;
case1:
    return 0x22;
ret21:
    return 0x21;
}
