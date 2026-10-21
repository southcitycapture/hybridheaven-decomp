#include "context.h"

s32 func_8001D2E0(u16 arg0) {
    u8 high;
    u16 result;

    high = arg0 >> 8;
    result = 0;
    if (high == 0xA1) {
        result = func_8001C670((arg0 & 0xFF) - 0xA1);
    }
    if (high == 0xA2) {
        result = func_8001C6E8((arg0 & 0xFF) - 0xA1);
    }
    if (high == 0xA3) {
        result = func_8001C734((arg0 & 0xFF) - 0xB0);
    }
    if (arg0 == 0xA2A7) {
        result = 0x55;
    }
    if (arg0 == 0xA1FC) {
        result = 0x56;
    }
    return result;
}
