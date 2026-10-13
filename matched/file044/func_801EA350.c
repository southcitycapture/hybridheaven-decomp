#include "context.h"

struct func_801EA350_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801EA350(s32 arg0, s32 arg1) {
    struct func_801EA350_Struct *p;

    p = (struct func_801EA350_Struct *) func_801BF6B0(7);
    if ((p->unkC < 0x24) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}
