#include "context.h"

extern void func_801DFCAC(s32, u8 *, u8 *);

u8 func_801DFE00(s32 arg0) {
    u8 sp1F;
    u8 sp1E;

    func_801DFCAC(arg0, &sp1F, &sp1E);
    return sp1F;
}
