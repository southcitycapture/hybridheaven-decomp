#include "context.h"

extern s32 D_801E82F4;

s32 func_801E4A5C(s32 arg0, s32 arg1) {
    s32 v;

    v = D_801E82F4;
    if (v == 0) {
        goto case0;
    }
    if (v == 1) {
        goto case1;
    }
    return 8;
case0:
    func_801C4028(1, 0xC23C0000, 0x42080000, 0x42180000, 0, 0x71, 0, 3.0f, 3.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x28);
    D_801E82F4 = 1;
    goto ret8;
case1:
    func_801C4028(1, 0xC20C0000, 0x42240000, 0x422C0000, 0, 0x74, 0, 3.0f, 3.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x28);
    return 9;
ret8:
    return 8;
}
