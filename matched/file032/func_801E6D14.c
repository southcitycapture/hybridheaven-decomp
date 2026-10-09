#include "context.h"

extern s32 func_801C3808(s32, s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_801E6D14(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0x1E, 0, 1);
        func_801C3808(0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0, 0x1E);
        return 0xB;
    }
    return 0xA;
}
