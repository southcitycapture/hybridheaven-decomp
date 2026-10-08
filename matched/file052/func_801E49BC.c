#include "common.h"

extern s32 D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s32 func_8038D28C(s32);
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E49BC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01406F40) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 1);
        func_8038D28C(0xA);
        return 7;
    }
    return 6;
}
