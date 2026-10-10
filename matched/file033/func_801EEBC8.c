#include "context.h"

extern s32 D_8038C97C();

s32 func_801EEBC8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x50DF20) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        return 0xB;
    }
    return 0xA;
}
