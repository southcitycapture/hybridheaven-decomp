#include "common.h"

extern s32 func_8038CD6C(s32 arg);
extern s32 D_8038DBB8;

s32 func_8038CF10(void) {
    D_8038DBB8 = 0;
    func_8038CD6C(0);
    return 1;
}
