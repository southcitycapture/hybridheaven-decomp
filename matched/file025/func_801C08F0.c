#include "common.h"

extern s16 D_801BBBF6;
extern s32 D_801D8CE4;
extern s32 D_801DCD54[];

void func_801C08F0(void) {
    D_801BBBF6 = (s16) D_801DCD54[D_801D8CE4];
}
