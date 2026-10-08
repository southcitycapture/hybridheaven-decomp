#include "common.h"

extern s32 D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s32 func_8038C9D8();
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E6B78(s32 arg0, s32 arg1) {
    if (func_8038C9D8() != 0) {
        return 6;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0x1E, 0, 1);
    return 7;
}
