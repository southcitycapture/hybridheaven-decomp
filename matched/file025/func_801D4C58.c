#include "common.h"

extern void func_80006214();
extern s32 func_801C354C(s32);
extern s32 D_801DB5B8;

void func_801D4C58(s32 arg0) {
    func_80006214();
    D_801DB5B8 = func_801C354C(arg0) == 0;
}
