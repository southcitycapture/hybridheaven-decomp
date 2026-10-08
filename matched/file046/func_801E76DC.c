#include "context.h"

s32 func_801D20AC();

s32 func_801E76DC(s32 arg0, s32 arg1) {
    if (func_801D20AC() == 0) {
        func_801CC470(3, 0x03480006, 0, 0, 3.0f);
        return 0x15;
    }
    return 0x14;
}
