#include "context.h"

extern u8 func_801CE330[];

s32 func_801E345C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB40DC1) != 0) {
        func_801C4DD4(1, func_801CE330 + 0x64, func_801CE330 + 0x70, func_801CE330 + 0x7C, func_801CE330 + 0x88, 0.0f, 1.0f, 0.0f, 0.0f);
        return 5;
    }
    return 4;
}
