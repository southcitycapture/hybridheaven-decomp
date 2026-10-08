#include "context.h"

extern void D_8038C97C(s32 a0, s32 a1, s32 a2, s32 a3, s32 s4, s32 s5, s32 s6);
extern void func_8038D28C(s32 arg0);
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E6B7C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x325A9F) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        func_8038D28C(0xA);
        return 7;
    }
    return 6;
}
