#include "common.h"

extern s16 D_801BBBF4;
extern s32 D_801D8CE4;
extern s32 D_801DC930[];

void func_801C088C(void) {
    D_801BBBF4 = (s16) D_801DC930[D_801D8CE4];
}
