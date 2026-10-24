#define func_8001C670 func_8001C670_ctx
#define func_8001C6E8 func_8001C6E8_ctx
#define func_8001C734 func_8001C734_ctx
#define func_8001C7A4 func_8001C7A4_ctx
#define func_8001C824 func_8001C824_ctx
#include "context.h"
#undef func_8001C670
#undef func_8001C6E8
#undef func_8001C734
#undef func_8001C7A4
#undef func_8001C824

extern u16 func_8001C670(u8);
extern u16 func_8001C6E8(u8);
extern u16 func_8001C734(u8);
extern u16 func_8001C7A4(u8);
extern u16 func_8001C824(u8);

u16 func_8001C88C(u16 arg0) {
    u8 lo;
    u8 high;
    u16 result;

    result = 0;
    high = arg0 >> 8;
    lo = arg0 & 0xFF;
    if (high == 0xA1) {
        result = func_8001C670(lo - 0xA1);
    }
    if (high == 0xA2) {
        result = func_8001C6E8(lo - 0xA1);
    }
    if (high == 0xA3) {
        result = func_8001C734(lo - 0xB0);
    }
    if (high == 0xA4) {
        result = func_8001C7A4(lo - 0xA1);
    }
    if (high == 0xA5) {
        result = func_8001C824(lo - 0xA1);
    }
    return result;
}
