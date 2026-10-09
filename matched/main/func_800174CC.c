#include "context.h"

s32 func_8001703C(s32);

s32 func_800174CC(s32 arg0) {
    s32 i;

    for (i = 0; i != 0x100; i++) {
        if (func_8001703C(i) == arg0) {
            return i;
        }
    }
    return -1;
}
