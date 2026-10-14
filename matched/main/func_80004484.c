#include "context.h"

s32 func_80004484(s32 arg0, s32 arg1) {
    s32 sp18[2];

    arg1 = (D_801BBC10 + 7) & ~7;
    sp18[0] = arg1;
    func_8000469C(arg0, arg1);
    return sp18[0];
}
