#include "common.h"

extern s32 func_801C0B8C(u64 time);
extern void func_8038C97C();
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E3B28(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8DE820) != 0) {
        D_80089354 = 0;
        func_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0x3C, 0, 1);
        return 4;
    }
    return 3;
}
