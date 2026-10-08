#include "context.h"

extern s32 func_801D20AC();

s32 func_801E7830(s32 arg0, s32 arg1) {
    if (func_801D20AC() == 0) {
        func_801CC470(3, 0x0348000C, 0, 0, 3.0f);
        return 0x1B;
    }
    return 0x1A;
}
