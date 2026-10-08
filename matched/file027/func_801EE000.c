#include "common.h"

extern s32 D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801EE000(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF4240) != 0) {
        if (D_801BBD54 != 0) {
            return 0;
        }
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 2);
        return 1;
    }
    return 0;
}
