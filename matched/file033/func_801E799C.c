#include "context.h"

extern u8 D_801BBD54;
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E799C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0xE66860) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        return 0xB;
    }
    return 0xA;
}
