#include "common.h"

s32 func_8023A51C(s32, u8);
extern u8 D_8024089E;

s32 func_8023A5A4(s32 a) {
    if (func_8023A51C(a, D_8024089E) != 0) {
        return 1;
    }
    return 0;
}
