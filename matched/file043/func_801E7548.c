#include "common.h"

extern void D_8038C97C(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6);
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E7548(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8ADAE0) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0xF, 0, 2);
        return 5;
    }
    return 4;
}
