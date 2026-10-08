#include "common.h"

extern s32 func_801C1000(s32 a0, s32 a1);
extern s32 func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_801E2554(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD29240) != 0) {
        func_801C1000(1, 0);
        return 4;
    }
    if (func_801C0B8C(0xC35000) != 0) {
        func_801CCEC8(0, 0, -0xA, 0x40);
        func_801CCEC8(1, 0, 0x40, -0xA);
    }
    return 3;
}
