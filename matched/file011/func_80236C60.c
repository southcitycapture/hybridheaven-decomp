#include "context.h"

extern void func_80237880();

s32 func_80236C60(void) {
    if (D_8023E3C0 != 0) {
        func_800058DC(D_8023E3C0, func_80237880);
        return 1;
    }
    return 0;
}
