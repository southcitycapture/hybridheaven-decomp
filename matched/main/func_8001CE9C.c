#include "context.h"

u16 func_8001CE9C(u16 arg0) {
    u8 high;
    u16 result;

    high = (arg0 >> 8) & 0xFF;
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
    return result;
}
