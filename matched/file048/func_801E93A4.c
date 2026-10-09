#include "context.h"

extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;
extern void D_8038C97C(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6);

s32 func_801E93A4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 6;
    }
    if (func_801C0B8C(0x2DC6C0) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        func_8038D28C(0xA);
        return 7;
    }
    return 6;
}
