#include "common.h"

void func_8001F160(s32 arg0, s32 arg1) {
    s32 count;

    count = arg0 & 7;
    while (count > 0 && arg1 > 0) {
        count--;
        arg1--;
        *(u8 *)arg0 = 0;
        arg0++;
    }
    while (arg1 >= 8) {
        arg1 -= 8;
        *(s64 *)arg0 = 0;
        arg0 += 8;
    }
    while (arg1 > 0) {
        arg1--;
        *(u8 *)arg0 = 0;
        arg0++;
    }
}
