#include "common.h"

void func_801D0498(s32 arg0);
void func_801D0B04(s32 arg0);
extern s32 D_801FB6E4;
extern s32 D_801FB6E8;

s32 func_801EFB44(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0575F59A) != 0) {
        D_801FB6E4 = 0;
        D_801FB6E8 = 0;
        func_801D0498(1);
        func_801D0B04(0);
        return 0xA;
    }
    return 9;
}
