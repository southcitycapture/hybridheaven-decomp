#include "context.h"
extern u32 D_8005D010;
extern s32 D_8005D018;
extern s32 D_8005D020;
extern u8 D_80089518[];
extern void func_80001FE8(s32, u8 *, s32);


void func_80003DB4(void) {
    D_8005D020 = 0x2000;
    D_8005D018 -= D_8005D020;
    if (D_8005D018 < 0) {
        D_8005D020 += (D_8005D018 + 1) & ~1;
        D_8005D018 = 0;
    }
    if (D_8005D020 > 0) {
        func_80001FE8(D_8005D010, D_80089518, D_8005D020);
    }
    D_8005D010 += D_8005D020;
}
