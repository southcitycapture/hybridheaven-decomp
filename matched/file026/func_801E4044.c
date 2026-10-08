#include "common.h"

extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E4044(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}
