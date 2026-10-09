#include "context.h"

extern s32 D_801E82F4;

s32 func_801E42A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x50DF20) != 0) {
        func_801C4028(1, 0xC25C0000, 0x42AA0000, 0x3F800000, 0, 0x54, 0, 3.0f, 3.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        func_801C4028(1, 0xC2540000, 0x42880000, 0xC0400000, 0, 0x54, 0, 4.0f, 4.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        func_801C7F40();
        D_801E82F4 = 0;
        return 3;
    }
    return 2;
}
