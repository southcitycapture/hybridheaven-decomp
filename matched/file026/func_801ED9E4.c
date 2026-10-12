#include "common.h"

extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801ED9E4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}
