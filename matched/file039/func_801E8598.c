#include "context.h"

extern s32 func_801D5194();

s32 func_801E8598(s32 arg0, s32 arg1) {
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480073, 0, 0, 4.0f);
        func_801D51F0(1);
        return 0x41;
    }
    return 0x40;
}
