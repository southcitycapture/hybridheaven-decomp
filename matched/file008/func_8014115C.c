#include "context.h"

extern u8 D_801BEBAC[];

s32 func_8014115C(void) {
    if (*(u8 *)&D_801BEC02 == 1 && D_801BEB84[*(u8 *)&D_801BEC05 * 8] == 1) {
        return 0;
    }
    if (*(u8 *)&D_801BEC02 == 2 && D_801BEBAC[*(u8 *)&D_801BEC05 * 8] == 1) {
        return 0;
    }
    return 1;
}
