#include "context.h"

extern void func_80001FE8(s32, u8 *, s32);
extern s32 D_8005D030;
extern s32 D_8005D038;
extern s32 D_8005D040;
extern u8 D_8008B518[];

void func_80003EB8(void) {
    D_8005D040 = 0x2000;
    D_8005D038 -= D_8005D040;
    if (D_8005D038 < 0) {
        D_8005D040 += (D_8005D038 + 1) & ~1;
        D_8005D038 = 0;
    }
    if (D_8005D040 > 0) {
        func_80001FE8(D_8005D030, D_8008B518, D_8005D040);
    }
    D_8005D030 += D_8005D040;
}
