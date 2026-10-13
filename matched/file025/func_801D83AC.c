#include "common.h"

extern void func_80006214();
extern s32 func_801C354C(s32);
extern s32 D_801DBAE0;

void func_801D83AC(s32 arg0) {
    func_80006214();
    D_801DBAE0 = func_801C354C(arg0) == 0;
}
