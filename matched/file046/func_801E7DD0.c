#include "context.h"

extern u8 D_801BBD54;
extern s16 D_80089354;
extern s32 D_801D8D60;
extern void D_8038C97C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

s32 func_801E7DD0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x30D400) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        func_8038D28C(0xA);
        return 0xB;
    }
    return 0xA;
}
