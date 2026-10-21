#include "context.h"

extern s32 D_80016EAC(u16, s32);

s32 func_80016F34(u16 arg0, s32 arg1, s32 arg2) {
    if (D_80016EAC(arg0, arg1) != 0) {
        return 1;
    }
    func_800173B8(func_80016F90(), arg1 + arg2);
    return 0;
}
