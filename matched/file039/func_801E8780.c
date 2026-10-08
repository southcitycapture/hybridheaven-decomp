#include "common.h"

extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern void func_8038D28C(s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E8780(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x3D0900) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        func_8038D28C(0xA);
        return 0xB;
    }
    return 0xA;
}
