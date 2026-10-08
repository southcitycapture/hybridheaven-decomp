#include "common.h"

extern s32 D_801EA7A0;
extern s32 D_801EA7A4;

s32 func_801E4CB0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xADF33F) != 0) {
        D_801EA7A0 = 1;
        D_801EA7A4 = 0;
        return 2;
    }
    return 1;
}
