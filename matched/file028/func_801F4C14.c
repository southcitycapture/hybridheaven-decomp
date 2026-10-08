#include "context.h"

extern s32 func_801CE308(s32, s32, s32, s32, s32, s32);

s32 func_801F4C14(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01312D00) != 0) {
        func_801CE308(1, 1, 0x40800000, 0x7F, 0xFF, 0);
        return 7;
    }
    return 6;
}
