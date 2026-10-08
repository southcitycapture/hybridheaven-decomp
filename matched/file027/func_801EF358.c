#include "common.h"

extern s32 func_801C0B8C(u64);
extern void func_8038BED4(void);

s32 func_801EF358(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x39FBBF) != 0) {
        func_8038BED4();
        return 0xA;
    }
    return 9;
}
