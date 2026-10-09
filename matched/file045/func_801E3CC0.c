#include "context.h"
extern s16 D_80089354;
extern s32 D_801D8D60;
extern s32 D_8038C97C(s32, s32, s32, s32, s32, s32, s32);

s32 func_801E3CC0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF4240) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        return 7;
    }
    return 6;
}
