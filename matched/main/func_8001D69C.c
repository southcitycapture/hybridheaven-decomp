#include "context.h"

extern u8 func_8001D588(u8);

void func_8001D69C(s32 arg0, u8 arg1, s8 *arg2) {
    s32 value;
    s32 remaining;
    s32 divisor;
    s32 digit;

    if (arg0 < 0) {
        *arg2 = '-';
        value = -arg0;
        arg2++;
    } else {
        value = arg0;
    }
    remaining = value;
    divisor = 1000000000;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    }
    divisor = 100000000;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 9) {
        *arg2++ = ' ';
    }
    divisor = 10000000;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 8) {
        *arg2++ = ' ';
    }
    divisor = 1000000;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 7) {
        *arg2++ = ' ';
    }
    divisor = 100000;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 6) {
        *arg2++ = ' ';
    }
    divisor = 10000;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 5) {
        *arg2++ = ' ';
    }
    divisor = 1000;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 4) {
        *arg2++ = ' ';
    }
    divisor = 100;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 3) {
        *arg2++ = ' ';
    }
    divisor = 10;
    if (value >= divisor) {
        digit = remaining / divisor;
        remaining -= digit * divisor;
        *arg2++ = func_8001D588(digit);
    } else if (arg1 >= 2) {
        *arg2++ = ' ';
    }
    *arg2++ = func_8001D588(remaining);
    *arg2 = 0;
}
