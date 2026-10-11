#include "context.h"

extern void func_80005700(s32 arg0);
extern s32 D_801DA614;

void func_801C904C(s32 arg0, s32 arg1) {
    if (D_801DA614 == 0) {
        func_80005700(arg0);
    }
}
