#include "context.h"

s32 func_80242B3C(u16 arg0) {
    s32 result;

    arg0 %= 60;
    if (arg0 < 3) {
        result = 1;
    } else if (arg0 < 5) {
        result = 0;
    } else if (arg0 < 0xA) {
        result = 1;
    } else if (arg0 < 0x12) {
        result = 0;
    } else if (arg0 < 0x15) {
        result = 1;
    } else if (arg0 < 0x17) {
        result = 0;
    } else if (arg0 < 0x1A) {
        result = 1;
    } else if (arg0 < 0x24) {
        result = 0;
    } else if (arg0 < 0x28) {
        result = 1;
    } else if (arg0 < 0x2C) {
        result = 0;
    } else if (arg0 < 0x32) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}
