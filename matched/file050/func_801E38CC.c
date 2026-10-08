#include "context.h"

extern void D_8038C97C();
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E38CC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 3;
    }
    if (func_801C0B8C(0xCDFE60) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 1);
        return 4;
    }
    return 3;
}
