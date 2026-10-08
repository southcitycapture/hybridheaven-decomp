#include "common.h"

extern u8 D_801BD960[];

void func_80139528(s32 arg0) {
    s32 *unused = &arg0;
    arg0 &= 0xFF;
    D_801BD960[arg0] = 1;
}
