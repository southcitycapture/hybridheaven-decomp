#include "context.h"

extern s32 func_801CFD9C(s32, s32, s32, s32, s32, s32);

s32 func_801F48A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB71B00) != 0) {
        func_801CFD9C(1, 0, 0x40800000, 0xFF, 0x7F, 0);
        return 5;
    }
    return 4;
}
