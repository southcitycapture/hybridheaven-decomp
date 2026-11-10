#include "context.h"

extern s32 D_80208E10[];

s32 func_801F4F48(s32 arg0, s32 arg1) {
    register s32 timer;

    switch (timer = D_80207058) {
        case 0:
            timer &= 0;
            timer += 10;
            D_80207058 = 1;
            D_80208E10[0] = timer;
            break;
        case 1:
            timer = D_80208E10[0];
            if (timer == 0) {
                D_80089354 = 0;
                D_80207058 = 2;
            } else {
                timer--;
                *(s32 *)((u8 *)&D_80205988 + 0x3488) = timer;
            }
            break;
        case 2:
            if (func_801C37FC() == 0) {
                return 2;
            }
            break;
    }
    timer = 1;
    return timer;
}
