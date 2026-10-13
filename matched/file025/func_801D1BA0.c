#include "common.h"

extern void func_80006214();
extern s32 func_801C354C(s32);
extern s32 D_801DB174;

void func_801D1BA0(s32 arg0) {
    func_80006214();
    D_801DB174 = func_801C354C(arg0) == 0;
}
