#include "context.h"

s32 func_80016EAC(arg0, arg1)
u16 arg0;
s32 arg1;
{
    s32 v;

    v = func_80016F90();
    if (v >= 0xFF) {
        return 1;
    }
    func_80017384(v + 1, func_80017014(v));
    func_800173B8(v + 1, func_8001703C(v));
    func_80017384(v, arg0);
    func_800173B8(v, arg1);
    return 0;
}
