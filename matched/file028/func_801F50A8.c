#include "common.h"

extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801F50A8(s32 arg0, s32 arg1) {
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 1, 0, 1);
    return 5;
}
