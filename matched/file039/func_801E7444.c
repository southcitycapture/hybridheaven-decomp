#include "context.h"

extern s32 func_801D5194();

s32 func_801E7444(s32 arg0, s32 arg1) {
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480069, 0, 0, 4.0f);
        return 0x14;
    }
    return 0x13;
}
