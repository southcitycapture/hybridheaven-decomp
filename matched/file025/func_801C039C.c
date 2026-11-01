#include "common.h"
extern void (*D_801D8D28[])(void);


void func_801C039C(s32 *arg0)
{
loop:
    switch (*arg0) {
    case 4:
        *arg0 = 5;
        goto loop;
    case 11:
        *arg0 = 12;
        goto loop;
    case 12:
        *arg0 = 13;
        goto loop;
    case 14:
        *arg0 = 15;
        goto loop;
    case 15:
        *arg0 = 16;
        goto loop;
    case 16:
        *arg0 = 17;
        goto loop;
    case 9:
        *arg0 = 10;
        goto loop;
    case 21:
        *arg0 = 18;
        goto loop;
    case 22:
        *arg0 = 23;
        goto loop;
    }
}
