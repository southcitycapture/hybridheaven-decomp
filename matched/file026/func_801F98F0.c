#include "common.h"

extern void D_8038C97C();
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801F98F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x04976F75) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0xF, 0, 1);
        return 3;
    }
    return 2;
}
