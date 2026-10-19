#include "context.h"

void func_8037D5B4(arg0, arg1)
    u8 *arg0;
    u8 arg1;
{
    u8 *a;
    u8 *b;
    u8 *c;
    u8 *d;
    u8 t;

    a = !arg1 ? arg0 + 0x98 : arg0 + 0x99;
    b = !arg1 ? arg0 + 0x9A : arg0 + 0x9B;
    c = arg1 ? arg0 + 0x98 : arg0 + 0x99;
    d = arg1 ? arg0 + 0x9A : arg0 + 0x9B;
    if (arg0[0x93] == 0x13) {
        *a = 4;
        *b = 0;
    } else {
        *a = 4;
        *b = 0;
    }
    if (arg0[0x95] != 0 || (t = arg0[0x91]) == 0 || t == 1 || t == 2 || t == 0xA || t == 9) {
        if (arg0[0x91] != 0x13) {
            *c = 4;
            *d = 0;
            return;
        }
    }
    *c = 4;
    *d = 0;
}
