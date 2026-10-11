#include "common.h"
extern s32 func_801C0B8C(u64);
s32 func_801C0B8C(u64 time);

extern void func_8038BED4();

s32 func_801EA5DC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BED4();
        return 0x4F;
    }
    return 0x4E;
}
