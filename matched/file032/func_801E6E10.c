#include "common.h"

extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern void func_801C37F0(void);
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E6E10(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x989680) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0x1E, 0, 2);
        func_801C37F0();
        return 0xD;
    }
    return 0xC;
}
