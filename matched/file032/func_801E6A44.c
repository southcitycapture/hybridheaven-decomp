#include "common.h"

extern s32 D_8038C9D8();
extern s32 D_8038C97C();
extern void func_8038D28C();
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E6A44(s32 arg0, s32 arg1) {
    if (D_8038C9D8() != 0) {
        return 0;
    }
    if (func_801C0B8C(0xF4240) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        func_8038D28C(0x74);
        return 1;
    }
    return 0;
}
