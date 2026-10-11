#include "context.h"

extern void func_802264D0(s32 a0, u16 a1);

void func_802266CC(s32 arg0, u16 arg1) {
    s32 var_a0;

    if (arg0 != D_801BBBF0.unkDC) {
        var_a0 = D_801BBBF0.unkDC;
    } else {
        var_a0 = ((struct func_80224B64_Globals *)&D_801BBBF0)->unkEC;
    }
    func_802264D0(var_a0, arg1);
}
