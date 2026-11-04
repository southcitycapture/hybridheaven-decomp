#include "common.h"


extern u8 D_8038638C[];

u8 func_8035FF38(arg0)
u8 arg0;
{
    u8 *p;

    p = D_8038638C;
    while (p[0] != 0x57) {
        if (arg0 == p[0]) {
            arg0 = p[1];
            break;
        }
        if (arg0 == p[1]) {
            arg0 = p[0];
            break;
        }
        p += 2;
    }
    return arg0;
}
