#define func_8000EB80 func_8000EB80_ctx
#include "context.h"
#undef func_8000EB80

void func_8000EB80(s16 *arg0, s16 *arg1, s16 *arg2, u16 arg3) {
    switch (arg3 + 1) {
    default:
        *arg0 *= -1;
        *arg0 += 0x2000;
        *arg1 *= -1;
        *arg1 += 0x2000;
        break;
    case 1:
        *arg0 *= -1;
        *arg0 += 0x3000;
        *arg2 *= -1;
        *arg2 += 0x3000;
        break;
    case 6:
        *arg0 *= -1;
        *arg0 += 0x200A;
        *arg1 *= -1;
        *arg1 += 0x2000;
        break;
    }
}

extern void D_8000EB80(s32, s32, s32, s32);
#define func_8000EB80 D_8000EB80
