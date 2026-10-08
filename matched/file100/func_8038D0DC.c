#include "common.h"

extern void func_8038CD6C(s32);
extern s32 D_8038DBE0;
extern s32 D_8038DBE4;

s32 func_8038D0DC(void) {
    func_8038CD6C(D_8038DBE4);
    D_8038DBE0 = 1;
    return 0;
}
