#include "context.h"
extern s16 D_80089354;
extern s32 D_801D8D60;
extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);

s32 func_801E6988(s32 arg0, s32 arg1) {
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
    return 9;
}
