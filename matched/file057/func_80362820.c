#include "context.h"

extern u16 D_80385E64[];

u16 func_80362820(func_80362758_Struct *arg0, u8 arg1) {
    u8 mask;
    u8 i;

    mask = arg1 & 0xF0;
    if (func_80362758(arg0, mask) != 0) {
        i = 0;
        if (func_80362758(arg0, i) != 0) {
            do {
                i += 0x10;
                if (func_80362758(arg0, i) == 0) {
                    break;
                }
            } while (i < 0x30);
        }
    }
    return D_80385E64[mask >> 4];
}
