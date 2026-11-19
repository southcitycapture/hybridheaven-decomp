#include "common.h"
extern s16 D_8017DD8C;


extern s16 D_8017DD8E;

void func_80152CC8(u8 arg0, u16 arg1) {
    *(arg0 == 0 ? &D_8017DD8C : &D_8017DD8E) = arg1;
}
