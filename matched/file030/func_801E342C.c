#include "common.h"

extern void func_801CD5C8(s32, s32, s32, s32);

s32 func_801E342C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xCDFE60) != 0) {
        func_801CD5C8(0, 0, 2, 0);
        func_801CD5C8(1, 0, 2, 0);
        return 0xC;
    }
    return 0xB;
}
