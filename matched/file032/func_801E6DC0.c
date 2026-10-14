#include "context.h"

s32 func_801C37FC();
s32 func_8038C9D8();

s32 func_801E6DC0(s32 arg0, s32 arg1) {
    if (func_8038C9D8() != 0) {
        return 0xB;
    }
    if (func_801C37FC() != 0) {
        return 0xB;
    }
    return 0xC;
}
