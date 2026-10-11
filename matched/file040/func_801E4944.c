#include "context.h"

extern s32 D_801E82F4;

s32 func_801E4944(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0119C76B) != 0) {
        func_801C4028(1, 0xC24C0000, 0x41700000, 0x41D80000, 0, 0x7D, 0, 3.0f, 3.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x28);
        func_801C4028(1, 0xC2080000, 0x41700000, 0x42380000, 0, 0x73, 0, 3.0f, 3.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x28);
        D_801E82F4 = 0;
        return 8;
    }
    return 7;
}
