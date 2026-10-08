#include "common.h"

extern void func_800058DC();
extern void func_80152238();
extern u16 *D_801CFCF0;
extern void func_801BF288();

void func_801BF248(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_801BF288);
    *D_801CFCF0 += 1;
    func_80152238();
}
