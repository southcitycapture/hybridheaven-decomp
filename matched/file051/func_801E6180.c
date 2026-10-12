#include "context.h"

extern s32 func_801D7530();

s32 func_801E6180(s32 arg0, s32 arg1) {
    if (func_801D7530() == 0) {
        func_801CC470(3, 0x01B80047, 0, 0x1100, 6.0f);
        func_801C1000(4, 3);
        return 0xF;
    }
    return 0xE;
}
