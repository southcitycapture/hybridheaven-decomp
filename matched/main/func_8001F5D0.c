#include "context.h"

extern s32 func_8001703C(s32 arg0);

s32 func_8001F5D0(s32 arg0) {
    s32 i;

    for (i = 0; i != 0x100; i++) {
        if (func_8001703C(i) == arg0) {
            return i;
        }
    }
    return -1;
}
