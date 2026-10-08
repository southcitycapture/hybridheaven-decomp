#include "context.h"

extern s16 D_80089354;
extern s32 D_801D8D60;
extern s32 func_801C3718(s32, s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_801E6C10(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0x1E, 0, 2);
        func_801C3718(0xFF, 0xFF, 0xFF, 0, 0xFF, 0xFF, 0xFF, 0x7F, 0x1E);
        return 9;
    }
    return 8;
}
