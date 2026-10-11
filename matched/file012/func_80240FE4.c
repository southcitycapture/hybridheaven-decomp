#include "common.h"

extern void func_80005700(s32 arg0, s32 arg1);

void func_80240FE4(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}
