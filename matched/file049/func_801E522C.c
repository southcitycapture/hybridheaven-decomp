#include "common.h"

extern void *func_801BF6B0(s32 arg0);
extern s32 func_801C1000(s32 arg0, s32 arg1);

s32 func_801E522C(s32 arg0, s32 arg1) {
    if (((s32 *) func_801BF6B0(0))[3] >= 0xD) {
        func_801C1000(4, 1);
        return 0x17;
    }
    return 0x16;
}
