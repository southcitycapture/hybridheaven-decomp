#include "common.h"

extern void func_80006214();
extern s32 func_801C354C(s32);
extern s32 D_801DAE0C;

void func_801CF860(s32 arg0) {
    func_80006214();
    D_801DAE0C = func_801C354C(arg0) == 0;
}
