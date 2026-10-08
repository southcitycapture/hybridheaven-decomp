#include "context.h"

extern s32 func_801CE308(s32, s32, s32, s32, s32, s32);

s32 func_801F4B84(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB71B00) != 0) {
        func_801CE308(1, 1, 0x40800000, 0, 0x7F, 0);
        return 5;
    }
    return 4;
}
